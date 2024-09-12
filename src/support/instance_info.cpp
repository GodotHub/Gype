#include "support/instance_info.hpp"
#include "core/variant_size.hpp"
#include "quickjs/env.h"
#include "support/javascript_instance.hpp"
#include <quickjs/js_pointer.h>
#include <godot_cpp/core/memory.hpp>
#include <godot_cpp/godot.hpp>

using namespace godot;

// GDExtensionBool set_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_value) {
// 	JavaScriptInstance *instance = reinterpret_cast<JavaScriptInstance *>(p_instance);
// 	return instance->set(p_name, p_value);
// }

// GDExtensionBool get_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
// 	JavaScriptInstance *instance = reinterpret_cast<JavaScriptInstance *>(p_instance);
// 	return instance->get(p_name, r_ret);
// }

// const GDExtensionPropertyInfo *get_property_list_func(GDExtensionScriptInstanceDataPtr p_instance, uint32_t *r_count) {
// 	JavaScriptInstance *instance = reinterpret_cast<JavaScriptInstance *>(p_instance);
// 	return instance->get_property_list(r_count);
// }

// void free_property_list_func(GDExtensionScriptInstanceDataPtr p_instance, const GDExtensionPropertyInfo *p_list, uint32_t p_count) {
// 	JavaScriptInstance *instance = reinterpret_cast<JavaScriptInstance *>(p_instance);
// }

// GDExtensionBool property_can_revert_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name) {
// 	JavaScriptInstance *instance = reinterpret_cast<JavaScriptInstance *>(p_instance);
// 	return instance->property_can_revert(p_name);
// }

// GDExtensionBool property_get_revert_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
// 	JavaScriptInstance *instance = reinterpret_cast<JavaScriptInstance *>(p_instance);
// 	return instance->property_get_revert(p_name, r_ret);
// }

// GDExtensionObjectPtr get_owner_func(GDExtensionScriptInstanceDataPtr p_instance) {
// 	JavaScriptInstance *instance = reinterpret_cast<JavaScriptInstance *>(p_instance);
// 	return instance->get_godot_obj()->_owner;
// }

// GDExtensionObjectPtr get_script_func(GDExtensionScriptInstanceDataPtr p_instance) {
// 	JavaScriptInstance *instance = reinterpret_cast<JavaScriptInstance *>(p_instance);
// 	return instance->get_script();
// }

// GDExtensionScriptLanguagePtr get_language_func(GDExtensionScriptInstanceDataPtr p_instance) {
// 	JavaScriptInstance *instance = reinterpret_cast<JavaScriptInstance *>(p_instance);
// 	return instance->get_language();
// }
