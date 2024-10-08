#ifndef __CONVERT_HELPER_H__
#define __CONVERT_HELPER_H__

#include "quickjs/quickjs.h"
#include "quickjs/wrapper/object_wrapper.h"
#include "quickjs/wrapper/variant_wrapper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <type_traits>
#include <utility>

using namespace godot;

static _exception _excep = _exception{ 0, "convert_arg error" };

static inline Variant get_variant(JSContext *ctx, JSValue arg) {
	return *static_cast<Variant *>(gd_Variant_get_opaque((VariantWrapper *)gd_get_vwrapper(ctx, arg)));
}

template <typename T>
struct FunctionTraits;

template <typename C, typename R, typename... A>
struct FunctionTraits<R (C::*)(A...)> {
	using ReturnType = R;
	using ArgTypes = std::tuple<A...>;
};

template <typename C, typename R, typename... A>
struct FunctionTraits<R (C::*)(A...) const> {
	using ReturnType = R;
	using ArgTypes = std::tuple<A...>;
};

template <typename T>
struct is_bitfield : std::false_type {};

template <template <typename> class Template, typename T>
struct is_bitfield<Template<T>> : std::is_same<Template<T>, godot::BitField<T>> {};

template <typename T>
constexpr bool is_bitfield_v = is_bitfield<T>::value;

template <typename T>
struct is_ref : std::false_type {};

template <template <typename> class Template, typename T>
struct is_ref<Template<T>> : std::is_same<Template<T>, godot::Ref<T>> {};

template <typename T>
constexpr bool is_ref_v = is_ref<T>::value;

template <typename T>
struct ref_extract_type;

// 特化版本，提取 Wrapper<T> 的 T
template <typename T>
struct ref_extract_type<Ref<T>> {
	using type = T;
};

// 辅助别名模板，方便使用
template <typename T>
using ref_extract_type_t = typename ref_extract_type<T>::type;

template <typename T>
std::enable_if_t<std::is_same_v<T, const void *>, T>
convert_to_gd(JSContext *ctx, JSValue arg) { return JS_VALUE_GET_PTR(arg); }
template <typename T>
std::enable_if_t<std::is_same_v<T, Variant>, T>
convert_to_gd(JSContext *ctx, JSValue arg) { return Variant(arg.var); }
template <typename T>
std::enable_if_t<std::is_fundamental_v<T>, T>
convert_to_gd(JSContext *ctx, JSValue arg) { return Variant(arg.var).operator T(); }
template <typename T>
std::enable_if_t<is_ref_v<T>, ref_extract_type<T> *>
convert_to_gd(JSContext *ctx, JSValue arg) { return get_variant(ctx, arg); }
template <typename T>
std::enable_if_t<!std::is_fundamental_v<T> && !std::is_same_v<Variant **, T> && std::is_pointer_v<T> && std::is_base_of_v<Object, std::remove_pointer_t<T>>, T>
convert_to_gd(JSContext *ctx, JSValue arg) { return Object::cast_to<std::remove_pointer_t<T>>(get_variant(ctx, arg)); }
template <typename T>
std::enable_if_t<!std::is_pointer_v<T> && !std::is_reference_v<T> && std::is_const_v<T>, std::remove_const_t<T>>
convert_to_gd(JSContext *ctx, JSValue arg) { return Variant(arg.var); }
template <typename T>
std::enable_if_t<std::is_reference_v<T> && !is_ref_v<T> && !std::is_pointer_v<T> && !std::is_enum_v<T> && !is_bitfield_v<T> && !std::is_same_v<T, Variant> && !std::is_fundamental_v<T>, std::remove_reference_t<std::remove_const_t<T>>>
convert_to_gd(JSContext *ctx, JSValue arg) { return get_variant(ctx, arg); }
template <typename T>
std::enable_if_t<is_bitfield_v<T>, T>
convert_to_gd(JSContext *ctx, JSValue arg) { return Variant(arg.var).operator int64_t(); }
template <typename T>
std::enable_if_t<std::is_enum_v<T>, T>
convert_to_gd(JSContext *ctx, JSValue arg) { return static_cast<T>(Variant(arg.var).operator int64_t()); }

template <typename T>
std::enable_if_t<std::is_fundamental_v<T> &&
				!std::is_pointer_v<T>,
		JSValue>
convert_to_js(JSContext *ctx, T arg) {
	if constexpr (std::is_integral_v<T>) {
		return JS_NewInt64(ctx, arg);
	} else if constexpr (std::is_floating_point_v<T>) {
		return JS_NewFloat64(ctx, arg);
	} else if constexpr (std::is_same_v<bool, T>) {
		return JS_NewBool(ctx, arg);
	} else {
		UtilityFunctions::printerr("Error convert to js value");
		throw _excep;
	}
}

template <typename T>
std::enable_if_t<std::is_convertible_v<T, Variant> &&
				!is_ref_v<T> &&
				!std::is_pointer_v<T> &&
				!std::is_fundamental_v<T>,
		JSValue>
convert_to_js(JSContext *ctx, T arg) {
	if constexpr (std::is_same_v<T, StringName> || std::is_same_v<T, String>) {
		return JS_NewString(ctx, std::string(String(arg).utf8().get_data()).c_str());
	} else if constexpr (std::is_same_v<T, Array>) {
		JSValue js_arr = JS_NewArray(ctx);
		for (int i = 0; i < arg.size(); i++)
			JS_SetPropertyUint32(ctx, js_arr, i, convert_to_js(ctx, arg));
	} else {
		throw _excep;
	}
}

template <typename T>
std::enable_if_t<is_ref_v<T>, JSValue>
convert_to_js(JSContext *ctx, T arg) {
	using NonPointerT = ref_extract_type_t<T>;
	JSValue obj = JS_NewObjectClass(ctx, NonPointerT::__class_id);
	gd_set_wrapper(ctx, obj, gd_new_JSObject_wrapper(ctx, obj));
	return obj;
}

template <typename T>
std::enable_if_t<std::is_pointer_v<T> && std::is_base_of_v<Object, std::remove_pointer_t<T>>, JSValue>
convert_to_js(JSContext *ctx, T arg) {
	using NonPointerT = std::remove_pointer_t<T>;
	JSValue obj = JS_NewObjectClass(ctx, NonPointerT::__class_id);
	gd_set_wrapper(ctx, obj, gd_new_JSObject_wrapper(ctx, obj));
	return obj;
}

template <typename Tuple, std::size_t... I>
JSValue call_js_function_with_tuple_impl(JSContext *ctx, JSValue func_obj, JSValue this_obj, const Tuple &tuple, std::index_sequence<I...>) {
	return JS_Call(ctx, func_obj, this_obj, sizeof...(I), { convert_to_js(ctx, std::get<I>(tuple))... });
}

template <typename Tuple>
JSValue call_js_function_with_tuple(JSContext *ctx, JSValue func_obj, JSValue this_obj, const Tuple &tuple) {
	return call_js_function_with_tuple_impl(ctx, func_obj, this_obj, tuple, std::make_index_sequence<std::tuple_size<Tuple>::value>{});
}

template <typename T, typename... P, std::size_t... Is>
void call_builtin_method_no_ret_impl(void (T::*Func)(P...), JSClassID class_id, JSContext *ctx, JSValueConst this_obj, JSValueConst *args, std::index_sequence<Is...>) {
	T *gd_val = static_cast<T *>(JS_GetOpaque(this_obj, class_id));
	(gd_val->*Func)(convert_to_gd<P>(ctx, std::forward<JSValue>(args[Is]))...);
};

template <typename T, typename... P>
void call_builtin_method_no_ret(void (T::*Func)(P...), JSClassID class_id, JSContext *ctx, JSValueConst this_obj, JSValueConst *args) {
	call_builtin_method_no_ret_impl(Func, class_id, ctx, this_obj, args, std::make_index_sequence<sizeof...(P)>{});
}

template <typename... P, std::size_t... Is>
void call_builtin_static_method_no_ret_impl(void (*Func)(P...), JSClassID class_id, JSContext *ctx, JSValueConst this_obj, JSValueConst *args, std::index_sequence<Is...>) {
	(*Func)(convert_to_gd<P>(ctx, std::forward<JSValue>(args[Is]))...);
};

template <typename... P>
void call_builtin_static_method_no_ret(void (*Func)(P...), JSClassID class_id, JSContext *ctx, JSValueConst this_obj, JSValueConst *args) {
	call_builtin_static_method_no_ret_impl(Func, class_id, ctx, this_obj, args, std::make_index_sequence<sizeof...(P)>{});
}

template <typename T, typename... P, std::size_t... Is>
void call_builtin_const_method_no_ret_impl(void (T::*Func)(P...) const, JSClassID class_id, JSContext *ctx, JSValueConst this_obj, JSValueConst *args, std::index_sequence<Is...>) {
	T *gd_val = static_cast<T *>(JS_GetOpaque(this_obj, class_id));
	(gd_val->*Func)(convert_to_gd<P>(ctx, std::forward<JSValue>(args[Is]))...);
};

template <typename T, typename... P>
void call_builtin_const_method_no_ret(void (T::*Func)(P...) const, JSClassID class_id, JSContext *ctx, JSValueConst this_obj, JSValueConst *args) {
	call_builtin_const_method_no_ret_impl(Func, class_id, ctx, this_obj, args, std::make_index_sequence<sizeof...(P)>{});
}

template <typename R, typename T, typename... P, std::size_t... Is>
JSValue call_builtin_method_ret_impl(R (T::*Func)(P...), JSClassID class_id, JSContext *ctx, JSValueConst this_obj, JSValueConst *args, std::index_sequence<Is...>) {
	T *gd_val = static_cast<T *>(JS_GetOpaque(this_obj, class_id));
	return convert_to_js(std::forward<JSContext *>(ctx), (gd_val->*Func)(convert_to_gd<P>(ctx, std::forward<JSValue>(args[Is]))...));
};

template <typename R, typename T, typename... P>
JSValue call_builtin_method_ret(R (T::*Func)(P...), JSClassID class_id, JSContext *ctx, JSValueConst this_obj, JSValueConst *args) {
	return call_builtin_method_ret_impl(Func, class_id, ctx, this_obj, args, std::make_index_sequence<sizeof...(P)>{});
}

template <typename R, typename... P, std::size_t... Is>
JSValue call_builtin_static_method_ret_impl(R (*Func)(P...), JSClassID class_id, JSContext *ctx, JSValueConst this_obj, JSValueConst *args, std::index_sequence<Is...>) {
	return convert_to_js(std::forward<JSContext *>(ctx), (*Func)(convert_to_gd<P>(ctx, std::forward<JSValue>(args[Is]))...));
};

template <typename R, typename... P>
JSValue call_builtin_static_method_ret(R (*Func)(P...), JSClassID class_id, JSContext *ctx, JSValueConst this_obj, JSValueConst *args) {
	return call_builtin_static_method_ret_impl(Func, class_id, ctx, this_obj, args, std::make_index_sequence<sizeof...(P)>{});
}

template <typename R, typename T, typename... P, std::size_t... Is>
JSValue call_builtin_const_method_ret_impl(R (T::*Func)(P...) const, JSClassID class_id, JSContext *ctx, JSValueConst this_obj, JSValueConst *args, std::index_sequence<Is...>) {
	T *gd_val = static_cast<T *>(JS_GetOpaque(this_obj, class_id));
	return convert_to_js(std::forward<JSContext *>(ctx), (gd_val->*Func)(convert_to_gd<P>(ctx, std::forward<JSValue>(args[Is]))...));
};

template <typename R, typename T, typename... P>
JSValue call_builtin_const_method_ret(R (T::*Func)(P...) const, JSClassID class_id, JSContext *ctx, JSValueConst this_obj, JSValueConst *args) {
	return call_builtin_const_method_ret_impl(Func, class_id, ctx, this_obj, args, std::make_index_sequence<sizeof...(P)>{});
}

template <typename... P, std::size_t... Is>
std::vector<Variant> convert_to_gds(JSContext *ctx, JSValue *args, std::index_sequence<Is...>) {
	std::vector<Variant> variant_args;
	(variant_args.push_back(convert_to_gd<P>((ctx), std::forward<P>(args[Is]))), ...);
	return variant_args;
}

template <typename... P, std::size_t I>
Variant convert_single_to_gd(JSContext *ctx, JSValueConst arg) {
	using TargetType = std::tuple_element_t<I, std::tuple<P...>>;
	return convert_to_gd<TargetType>(ctx, arg);
}

template <typename T, typename... P, std::size_t... Is>
JSValue call_builtin_vararg_method_impl(void (T::*Func)(P...), JSClassID class_id, JSContext *ctx, JSValueConst this_obj, int argc, JSValueConst *args, std::index_sequence<Is...>) {
	T *gd_val = static_cast<T *>(JS_GetOpaque(this_obj, class_id));
	constexpr int fixed_argc = sizeof...(P) - 1;
	int mutable_argc = argc - fixed_argc;
	std::vector<Variant> variant_args;
	for (int i = fixed_argc; i < argc; ++i) {
		variant_args.push_back(convert_to_gd<Variant>(ctx, args[i]));
	}
	(gd_val->*Func)(convert_to_gd<typename std::tuple_element<Is, std::tuple<P...>>::type>(ctx, args[Is])..., variant_args);
	return JS_UNDEFINED;
}

template <typename T, typename... P>
JSValue call_builtin_vararg_method(void (T::*Func)(P...), JSClassID class_id, JSContext *ctx, JSValueConst this_obj, int argc, JSValueConst *args) {
	return call_builtin_vararg_method_impl(Func, class_id, ctx, this_obj, argc, args, std::make_index_sequence<sizeof...(P) - 1>());
}

template <typename T, typename R, typename... P, std::size_t... Is>
JSValue call_builtin_vararg_method_impl(R (T::*Func)(P...), JSClassID class_id, JSContext *ctx, JSValueConst this_obj, int argc, JSValueConst *args, std::index_sequence<Is...>) {
	T *gd_val = static_cast<T *>(JS_GetOpaque(this_obj, class_id));
	constexpr int fixed_argc = sizeof...(P) - 1;
	int mutable_argc = argc - fixed_argc;
	std::vector<Variant> variant_args;
	for (int i = fixed_argc; i < argc; ++i) {
		variant_args.push_back(convert_to_gd<Variant>(ctx, args[i]));
	}
	return convert_to_js(ctx, (gd_val->*Func)(convert_to_gd<typename std::tuple_element<Is, std::tuple<P...>>::type>(ctx, args[Is])..., variant_args));
}

template <typename T, typename R, typename... P>
JSValue call_builtin_vararg_method(R (T::*Func)(P...), JSClassID class_id, JSContext *ctx, JSValueConst this_obj, int argc, JSValueConst *args) {
	return call_builtin_vararg_method_impl(Func, class_id, std::forward<JSContext *>(ctx), this_obj, argc, std::forward<JSValue *>(args), std::make_index_sequence<sizeof...(P) - 1>());
}

template <typename Tuple, std::size_t... I>
auto convert_args_to_tuple_impl(const GDExtensionConstTypePtr *p_args, std::index_sequence<I...>) {
	return std::make_tuple(reinterpret_cast<std::tuple_element_t<I, Tuple>>(p_args[I])...);
}

template <typename Tuple>
auto convert_args_to_tuple(const GDExtensionConstTypePtr *p_args) {
	return convert_args_to_tuple_impl<Tuple>(p_args, std::make_index_sequence<std::tuple_size<Tuple>::value>{});
}

#endif // __CONVERT_HELPER_H__