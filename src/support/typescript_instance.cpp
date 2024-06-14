#include "support/typescript_instance.h"

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/godot.hpp>


#include "support/typescript.h"

using namespace godot;

TypescriptInstanceInfo *TypescriptInstance::instance_info = new TypescriptInstanceInfo();

TypescriptInstance::TypescriptInstance(const Ref<Typescript> &parent, Object *host_object) {
	_parent = parent.ptr();
	_host_object = host_object;
}

GDExtensionScriptInstancePtr TypescriptInstance::create_instance(const Ref<Typescript> &parent, Object *host_object) {
	return internal::gdextension_interface_script_instance_create3(TypescriptInstance::instance_info, new TypescriptInstance(parent, host_object));
}

TypescriptInstanceInfo::TypescriptInstanceInfo() {
	set_func = &_set_func;
	get_func = &_get_func;
	get_property_list_func = &_get_property_list_func;
	has_method_func = &_has_method_func;
}

GDExtensionBool _set_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_value) {
	TypescriptInstance *instance = from_ptr(p_instance);
	HashMap<StringName, Variant> values = instance->get_values();
	values[*static_cast<const StringName *>(p_name)] = *static_cast<const Variant *>(p_value);
	return true;
}

GDExtensionBool _get_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
	TypescriptInstance *instance = from_ptr(p_instance);
	HashMap<StringName, Variant> values = instance->get_values();
	r_ret = &values[*static_cast<const StringName *>(p_name)];
	return true;
}

const GDExtensionPropertyInfo *_get_property_list_func(GDExtensionScriptInstanceDataPtr p_instance, uint32_t *r_count) {
	TypescriptInstance *instance = from_ptr(p_instance);
	*r_count = instance->get_properties().size();
	GDExtensionPropertyInfo *arr = new GDExtensionPropertyInfo[*r_count];
	for (uint32_t i = 0; i < *r_count; i++) {
		arr[i] = instance->get_properties()[i];
	}
	return arr;
}

GDExtensionBool _has_method_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name) {
	return from_ptr(p_instance)->get_script()->_has_method(*static_cast<const StringName *>(p_name));
}

void _call_func(GDExtensionScriptInstanceDataPtr p_self, GDExtensionConstStringNamePtr p_method, const GDExtensionConstVariantPtr *p_args, GDExtensionInt p_argument_count, GDExtensionVariantPtr r_return, GDExtensionCallError *r_error) {
	TypescriptInstance *instance = from_ptr(p_self);
}

TypescriptInstance *from_ptr(GDExtensionScriptInstanceDataPtr p_instance) {
	return static_cast<TypescriptInstance *>(p_instance);
}