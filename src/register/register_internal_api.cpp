#include "register/register_internal_api.h"
#include "quickjs/env.h"
#include "quickjs/js_pointer.h"
#include "support/class_info.hpp"
#include "support/instance_binding.hpp"
#include "support/instance_info.hpp"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/memory.hpp>
#include <godot_cpp/godot.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <memory>

using namespace godot;

HashMap<String, GDExtensionClassCreationInfo3> class_infos;

void register_internal_api() {
	auto &_module = context.addModule("__internal__");
	_module.class_<GDExtensionGodotVersion>("GodotVersion")
			.fun<&GDExtensionGodotVersion::major>("major")
			.fun<&GDExtensionGodotVersion::minor>("minor")
			.fun<&GDExtensionGodotVersion::patch>("patch")
			.fun<&GDExtensionGodotVersion::string>("string");
	_module.class_<JSPointer>("JSPointer")
			.constructor<intptr_t>()
			.constructor<JSValue *>("fromJSValue")
			.property<&JSPointer::get_pointer, &JSPointer::set_pointer>("pointer");
	_module.class_<GDExtensionClassCreationInfo3>("ClassInfo")
			.constructor()
			.fun<&GDExtensionClassCreationInfo3::class_userdata>("class_userdata")
			.fun<&GDExtensionClassCreationInfo3::is_virtual>("is_virtual")
			.fun<&GDExtensionClassCreationInfo3::is_abstract>("is_abstract")
			.fun<&GDExtensionClassCreationInfo3::is_exposed>("is_exposed")
			.fun<&GDExtensionClassCreationInfo3::is_runtime>("is_runtime");
	_module.function("get_godot_version", [](GDExtensionGodotVersion *r_godot_version) {
			   internal::gdextension_interface_get_godot_version(r_godot_version);
		   })
			.function("print_error", [](const char *p_description, const char *p_function, const char *p_file, int32_t p_line, GDExtensionBool p_editor_notify) {
				internal::gdextension_interface_print_error(p_description, p_function, p_file, p_line, p_editor_notify);
			})
			.function("variant_get_ptr_constructor", [](GDExtensionVariantType p_type, int32_t p_constructor) -> GDExtensionPtrConstructor {
				return internal::gdextension_interface_variant_get_ptr_constructor(p_type, p_constructor);
			})
			.function("variant_get_ptr_destructor", [](GDExtensionVariantType p_type) -> GDExtensionPtrDestructor {
				return internal::gdextension_interface_variant_get_ptr_destructor(p_type);
			})
			.function("string_name_new_with_latin1_chars", [](Buff r_dest, const char *p_contents, GDExtensionBool p_is_static = false) {
				internal::gdextension_interface_string_name_new_with_latin1_chars(
						reinterpret_cast<GDExtensionUninitializedStringNamePtr>(qjs::get_typed_array_buf(context.ctx, r_dest)),
						p_contents, p_is_static);
			})
			.function("string_new_with_latin1_chars", [](Buff r_dest, const char *p_contents) {
				internal::gdextension_interface_string_new_with_latin1_chars(
						reinterpret_cast<GDExtensionUninitializedStringNamePtr>(qjs::get_typed_array_buf(context.ctx, r_dest)),
						p_contents);
			})
			.function("variant_get_ptr_builtin_method", [](GDExtensionVariantType p_type, Buff p_method, GDExtensionInt p_hash) -> GDExtensionPtrBuiltInMethod {
				return internal::gdextension_interface_variant_get_ptr_builtin_method(p_type, qjs::get_typed_array_buf(context.ctx, p_method), p_hash);
			})
			.function("variant_get_ptr_utility_function", [](Buff p_function, GDExtensionInt p_hash) -> GDExtensionPtrUtilityFunction {
				return internal::gdextension_interface_variant_get_ptr_utility_function(
						reinterpret_cast<GDExtensionConstStringNamePtr>(qjs::get_typed_array_buf(context.ctx, p_function)),
						p_hash);
			})
			.function("variant_new_nil", [](Buff r_dest) {
				internal::gdextension_interface_variant_new_nil(qjs::get_typed_array_buf(context.ctx, r_dest));
			})
			.function("get_variant_from_type_constructor", [](GDExtensionVariantType p_type) -> GDExtensionVariantFromTypeConstructorFunc {
				return internal::gdextension_interface_get_variant_from_type_constructor(p_type);
			})
			.function("get_variant_to_type_constructor", [](GDExtensionVariantType p_type) -> GDExtensionTypeFromVariantConstructorFunc {
				return internal::gdextension_interface_get_variant_to_type_constructor(p_type);
			})
			.function("variant_new_copy", [](Buff r_dest, Buff p_src) {
				internal::gdextension_interface_variant_new_copy(
						reinterpret_cast<GDExtensionUninitializedVariantPtr>(qjs::get_typed_array_buf(context.ctx, r_dest)),
						reinterpret_cast<GDExtensionConstVariantPtr>(qjs::get_typed_array_buf(context.ctx, p_src)));
			})
			.function("variant_destroy", [](GDExtensionVariantPtr p_self) { internal::gdextension_interface_variant_destroy(p_self); })
			.function("classdb_get_method_bind", [](GDString p_classname, GDString p_methodname, GDExtensionInt p_hash) -> GDExtensionMethodBindPtr {
				GDExtensionConstStringNamePtr arg1 = qjs::get_typed_array_buf(context.ctx, p_classname);
				GDExtensionConstStringNamePtr arg2 = qjs::get_typed_array_buf(context.ctx, p_methodname);
				return internal::gdextension_interface_classdb_get_method_bind(arg1, arg2, p_hash);
			})
			.function("object_method_bind_ptrcall", [](Pointer p_method_bind, Pointer p_instance, GDExtensionVariantType type, std::vector<JSValue> args) -> JSValue {
				const GDExtensionConstVariantPtr *p_args = nullptr;
				std::vector<void *> void_ptr = qjs::get_args(context.ctx, args);
				p_args = void_ptr.data();
				GDExtensionMethodBindPtr method_bind = qjs::to_c_pointer(context.ctx, p_method_bind);
				Object *p_godot_object = reinterpret_cast<Object *>(qjs::to_c_pointer(context.ctx, p_instance));
				GDExtensionCallError err;
				Variant r_ret = Variant();
				JSValue undefined = JS_UNDEFINED;
				if (type == GDExtensionVariantType::GDEXTENSION_VARIANT_TYPE_NIL) {
					if (args.size() == 0) {
						internal::gdextension_interface_object_method_bind_call(method_bind, p_godot_object->_owner, nullptr, 0, nullptr, &err);
					} else {
						internal::gdextension_interface_object_method_bind_call(method_bind, p_godot_object->_owner, p_args, args.size(), &r_ret, &err);
					}
				} else {
					if (args.size() == 0) {
						internal::gdextension_interface_object_method_bind_call(method_bind, p_godot_object->_owner, nullptr, 0, &r_ret, &err);
					} else {
						internal::gdextension_interface_object_method_bind_call(method_bind, p_godot_object->_owner, p_args, args.size(), &r_ret, &err);
					}
				}
				void *r_ret_cp_buf = memalloc(GODOT_CPP_VARIANT_SIZE);
				memcpy(r_ret_cp_buf, r_ret._native_ptr(), GODOT_CPP_VARIANT_SIZE);
				ERR_FAIL_COND_V_EDMSG(err.error != GDExtensionCallErrorType::GDEXTENSION_CALL_OK, undefined, "Error calling object_method_bind_ptrcall");
				return qjs::to_js_u8arr(context.ctx, GDExtensionVariantType::GDEXTENSION_VARIANT_TYPE_VARIANT_MAX, r_ret_cp_buf);
			})
			.function("classdb_construct_object", [](Buff p_classname) -> GDExtensionObjectPtr {
				return internal::gdextension_interface_classdb_construct_object(qjs::get_typed_array_buf(context.ctx, p_classname));
			})
			.function("object_set_instance", [](GDExtensionObjectPtr p_o, GDString p_classname, GDExtensionClassInstancePtr p_instance) {
				internal::gdextension_interface_object_set_instance(p_o, qjs::get_typed_array_buf(context.ctx, p_classname), p_instance);
			})
			.function("variant_get_type", [](JSValue p_self) -> GDExtensionVariantType {
				return internal::gdextension_interface_variant_get_type(qjs::get_typed_array_buf(context.ctx, p_self));
			})
			.function("classdb_register_extension_class3", [](std::string class_name, std::string parent_class_name, JSValue js_class_info) {
				JSValue p_userdata = JS_GetPropertyStr(context.ctx, js_class_info, "p_userdata");
				GDExtensionClassCreationInfo3 class_info;
				JS_DupValue(context.ctx, p_userdata);
				JSValue *userdata = (JSValue *)js_mallocz(context.ctx, sizeof(JSValue));
				memcpy(userdata, &p_userdata, sizeof(JSValue));
				class_info.class_userdata = userdata;
				class_info.create_instance_func = &_create_instance_func;
				class_info.free_instance_func = &_free_instance_func;
				class_info.get_func = &get_func;
				class_info.set_func = &set_func;
				class_infos[class_name.c_str()] = class_info;
				StringName gd_class_name = StringName(class_name.c_str());
				StringName gd_parent_class_name = StringName(parent_class_name.c_str());
				internal::gdextension_interface_classdb_register_extension_class3(internal::library, &gd_class_name, &gd_parent_class_name, &(class_infos[class_name.c_str()]));
			})
			.function("classdb_register_extension_class_virtual_method", [](std::string class_name, JSValue method_info) {
				StringName p_class = class_name.c_str();

				JSValue js_name = JS_GetPropertyStr(context.ctx, method_info, "name");
				JSValue js_method_flags = JS_GetPropertyStr(context.ctx, method_info, "method_flags");
				JSValue js_return_value = JS_GetPropertyStr(context.ctx, method_info, "return_value");
				JSValue js_return_value_metadata = JS_GetPropertyStr(context.ctx, method_info, "return_value_metadata");
				JSValue js_argument_count = JS_GetPropertyStr(context.ctx, method_info, "argument_count");
				JSValue js_arguments = JS_GetPropertyStr(context.ctx, method_info, "arguments");
				JSValue js_argument_metadata = JS_GetPropertyStr(context.ctx, method_info, "argument_metadata");

				GDExtensionPropertyInfo return_value = js_to_property_info(js_return_value);
				int argument_count = qjs::js_traits<int>::unwrap(context.ctx, js_argument_count);
				std::vector<GDExtensionPropertyInfo> arguments;
				std::vector<GDExtensionClassMethodArgumentMetadata> argument_metadata;
				for (int i = 0; i < argument_count; i++) {
					arguments.push_back(js_to_property_info(JS_GetPropertyUint32(context.ctx, js_arguments, i)));
				}
				for (int i = 0; i < argument_count; i++) {
					argument_metadata.push_back((GDExtensionClassMethodArgumentMetadata)js_to_int(JS_GetPropertyUint32(context.ctx, js_argument_metadata, i)));
				}

				StringName name = js_to_string_name(js_name);
				uint32_t method_flags = qjs::js_traits<uint32_t>::unwrap(context.ctx, js_method_flags);
				uint32_t argument_count = qjs::js_traits<uint32_t>::unwrap(context.ctx, js_argument_count);
				GDExtensionClassMethodArgumentMetadata metadata = qjs::js_traits<GDExtensionClassMethodArgumentMetadata>::unwrap(context.ctx, js_return_value_metadata);
				GDExtensionClassVirtualMethodInfo info{
					name._native_ptr(),
					method_flags,
					return_value,
					metadata,
					argument_count,
					arguments.data(),
					argument_metadata.data()
				};
				internal::gdextension_interface_classdb_register_extension_class_virtual_method(internal::library, p_class._native_ptr(), &info);
			});
}

static StringName js_to_string_name(JSValue js_string) {
	std::string string = qjs::js_traits<std::string>::unwrap(context.ctx, js_string);
	return StringName(string.c_str());
}

static String js_to_string(JSValue js_string) {
	std::string string = qjs::js_traits<std::string>::unwrap(context.ctx, js_string);
	return String(string.c_str());
}

static int js_to_int(JSValue js_int) {
	return qjs::js_traits<int>::unwrap(context.ctx, js_int);
}

static GDExtensionPropertyInfo js_to_property_info(JSValue js_info) {
	JSValue js_prop_type = JS_GetPropertyStr(context.ctx, js_info, "type");
	JSValue js_prop_name = JS_GetPropertyStr(context.ctx, js_info, "name");
	JSValue js_prop_class_name = JS_GetPropertyStr(context.ctx, js_info, "class_name");
	JSValue js_prop_hint = JS_GetPropertyStr(context.ctx, js_info, "hint");
	JSValue js_prop_hint_string = JS_GetPropertyStr(context.ctx, js_info, "hint_string");
	JSValue js_usage = JS_GetPropertyStr(context.ctx, js_info, "usage");
	GDExtensionVariantType prop_type = qjs::js_traits<GDExtensionVariantType>::unwrap(context.ctx, js_prop_type);
	StringName prop_name = js_to_string_name(js_prop_name);
	StringName prop_class_name = js_to_string(js_prop_class_name);
	uint32_t prop_hint = qjs::js_traits<uint32_t>::unwrap(context.ctx, js_prop_hint);
	String prop_hint_string = js_to_string(js_prop_hint_string);
	uint32_t prop_usage = qjs::js_traits<uint32_t>::unwrap(context.ctx, js_usage);
	GDExtensionPropertyInfo info{ prop_type, prop_name._native_ptr(), prop_class_name._native_ptr(), prop_hint, prop_hint_string._native_ptr(), prop_usage };
	return info;
}