#ifndef __REGISTER_HELPER_H__
#define __REGISTER_HELPER_H__

#include "quickjs/quickjs.h"
#include "utils/env.h"
#include "utils/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/templates/hash_map.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <type_traits>

using namespace godot;

static HashMap<StringName, JSClassID> classes;
static _exception _excep = _exception{ 0, "convert_arg error" };

static inline Variant get_variant(JSValue arg) {
	return *static_cast<Variant *>(gd_Variant_get_opaque((VariantWrapper *)gd_get_vwrapper(ctx, arg)));
}

template <typename T>
struct is_bitfield : std::false_type {};

template <template <typename> class Template, typename T>
struct is_bitfield<Template<T>> : std::is_same<Template<T>, godot::BitField<T>> {};

template <typename T>
constexpr bool is_bitfield_v = is_bitfield<T>::value;

template <typename T>
std::enable_if_t<std::is_fundamental_v<T>, T>
convert_to_gd(JSValue arg) { return Variant(arg.var).operator T(); }
template <typename T>
std::enable_if_t<!std::is_fundamental_v<T> && std::is_pointer_v<T> && std::is_base_of_v<Object, std::remove_pointer_t<T>>, T>
convert_to_gd(JSValue arg) { return Object::cast_to<std::remove_pointer_t<T>>(get_variant(arg)); }
template <typename T>
std::enable_if_t<!std::is_pointer_v<T> && !std::is_reference_v<T> && std::is_const_v<T>, std::remove_const_t<T>>
convert_to_gd(JSValue arg) { return Variant(arg.var); }
template <typename T>
std::enable_if_t<std::is_reference_v<T>, std::remove_reference_t<std::remove_const_t<T>>>
convert_to_gd(JSValue arg) { return Variant(arg.var); }
template <typename T>
std::enable_if_t<is_bitfield_v<T>, T>
convert_to_gd(JSValue arg) { return Variant(arg.var).operator int64_t(); }
template <typename T>
std::enable_if_t<std::is_enum_v<T>, T>
convert_to_gd(JSValue arg) { return static_cast<T>(Variant(arg.var).operator int64_t()); }

JSValue convert_to_js(Variant arg);

template <typename T, typename... P, std::size_t... Is>
void call_builtin_method_no_ret_impl(void (T::*Func)(P...), JSClassID class_id, JSValueConst this_obj, JSValueConst *args, std::index_sequence<Is...>) {
	T *gd_val = static_cast<T *>(JS_GetOpaque(this_obj, class_id));
	(gd_val->*Func)(convert_to_gd<P>(std::forward<JSValue>(args[Is]))...);
};

template <typename T, typename... P>
void call_builtin_method_no_ret(void (T::*Func)(P...), JSClassID class_id, JSValueConst this_obj, JSValueConst *args) {
	call_builtin_method_no_ret_impl(Func, class_id, this_obj, args, std::make_index_sequence<sizeof...(P)>{});
}

template <typename T, typename... P, std::size_t... Is>
void call_builtin_method_no_ret_impl(void (T::*Func)(P...) const, JSClassID class_id, JSValueConst this_obj, JSValueConst *args, std::index_sequence<Is...>) {
	T *gd_val = static_cast<T *>(JS_GetOpaque(this_obj, class_id));
	(gd_val->*Func)(convert_to_gd<P>(std::forward<JSValue>(args[Is]))...);
};

template <typename T, typename... P>
void call_builtin_method_no_ret(void (T::*Func)(P...) const, JSClassID class_id, JSValueConst this_obj, JSValueConst *args) {
	call_builtin_method_no_ret_impl(Func, class_id, this_obj, args, std::make_index_sequence<sizeof...(P)>{});
}

template <typename R, typename T, typename... P, std::size_t... Is>
JSValue call_builtin_method_ret_impl(R (T::*Func)(P...), JSClassID class_id, JSValueConst this_obj, JSValueConst *args, std::index_sequence<Is...>) {
	T *gd_val = static_cast<T *>(JS_GetOpaque(this_obj, class_id));
	return convert_to_js((gd_val->*Func)(convert_to_gd<P>(std::forward<JSValue>(args[Is]))...));
};

template <typename R, typename T, typename... P>
JSValue call_builtin_method_ret(R (T::*Func)(P...), JSClassID class_id, JSValueConst this_obj, JSValueConst *args) {
	return call_builtin_method_ret_impl(Func, class_id, this_obj, args, std::make_index_sequence<sizeof...(P)>{});
}

template <typename R, typename T, typename... P, std::size_t... Is>
JSValue call_builtin_method_ret_impl(R (T::*Func)(P...) const, JSClassID class_id, JSValueConst this_obj, JSValueConst *args, std::index_sequence<Is...>) {
	T *gd_val = static_cast<T *>(JS_GetOpaque(this_obj, class_id));
	return convert_to_js((gd_val->*Func)(convert_to_gd<P>(std::forward<JSValue>(args[Is]))...));
};

template <typename R, typename T, typename... P>
JSValue call_builtin_method_ret(R (T::*Func)(P...) const, JSClassID class_id, JSValueConst this_obj, JSValueConst *args) {
	return call_builtin_method_ret_impl(Func, class_id, this_obj, args, std::make_index_sequence<sizeof...(P)>{});
}

#endif // __REGISTER_HELPER_H__