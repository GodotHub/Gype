#include "support/javascript.hpp"
#include "support/instance_info.hpp"
#include "support/javascript_instance.hpp"
#include "support/javascript_language.hpp"

bool JavaScript::_editor_can_reload_from_file() {
	return false;
}

void JavaScript::_placeholder_erased(void *p_placeholder) {
}

bool JavaScript::_can_instantiate() const {
	return true;
}

Ref<Script> JavaScript::_get_base_script() const {
	return nullptr;
}

StringName JavaScript::_get_global_name() const {
	return "";
}

bool JavaScript::_inherits_script(const Ref<Script> &p_script) const {
	return true;
}

StringName JavaScript::_get_instance_base_type() const {
	return "";
}

void *JavaScript::_instance_create(Object *p_for_object) const {
	return internal::gdextension_interface_script_instance_create3(&InstanceInfo, new JavaScriptInstance(p_for_object, this));
}

void *JavaScript::_placeholder_instance_create(Object *p_for_object) const {
	return internal::gdextension_interface_script_instance_create3(&InstanceInfo, new JavaScriptInstance(p_for_object, this));
}

bool JavaScript::_instance_has(Object *p_object) const {
	return false;
}

bool JavaScript::_has_source_code() const {
	return !source_code.is_empty();
}

String JavaScript::_get_source_code() const {
	return source_code;
}

void JavaScript::_set_source_code(const String &p_code) {
	source_code = p_code;
}

Error JavaScript::_reload(bool p_keep_state) {
	return OK;
}

TypedArray<Dictionary> JavaScript::_get_documentation() const {
	return {};
}

String JavaScript::_get_class_icon_path() const {
	return "";
}

bool JavaScript::_has_method(const StringName &p_method) const {
	return false;
}

bool JavaScript::_has_static_method(const StringName &p_method) const {
	return false;
}

Variant JavaScript::_get_script_method_argument_count(const StringName &p_method) const {
	return Variant();
}

Dictionary JavaScript::_get_method_info(const StringName &p_method) const {
	return {};
}

bool JavaScript::_is_tool() const {
	return false;
}

bool JavaScript::_is_valid() const {
	return true;
}

bool JavaScript::_is_abstract() const {
	return false;
}

ScriptLanguage *JavaScript::_get_language() const {
	return JavaScriptLanguage::get_singleton();
}

bool JavaScript::_has_script_signal(const StringName &p_signal) const {
	return false;
}

TypedArray<Dictionary> JavaScript::_get_script_signal_list() const {
	return {};
}

bool JavaScript::_has_property_default_value(const StringName &p_property) const {
	return false;
}

Variant JavaScript::_get_property_default_value(const StringName &p_property) const {
	return Variant();
}

void JavaScript::_update_exports() {
}

TypedArray<Dictionary> JavaScript::_get_script_method_list() const {
	return {};
}

TypedArray<Dictionary> JavaScript::_get_script_property_list() const {
	return {};
}

int32_t JavaScript::_get_member_line(const StringName &p_member) const {
	return 0;
}

Dictionary JavaScript::_get_constants() const {
	return {};
}

TypedArray<StringName> JavaScript::_get_members() const {
	return {};
}

bool JavaScript::_is_placeholder_fallback_enabled() const {
	return false;
}

Variant JavaScript::_get_rpc_config() const {
	return Variant();
}

JavaScript::JavaScript() {
}
