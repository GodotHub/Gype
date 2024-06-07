#include "support/typescript.h"
#include "support/typescript_instance.h"

using namespace godot;

Typescript::Typescript() {
}

bool Typescript::_editor_can_reload_from_file() {
	return false;
}

void Typescript::_placeholder_erased(void *placeholder) {
}

bool Typescript::_can_instantiate() const {
	return _is_valid();
}

bool Typescript::_has_source_code() const {
	return _source_code.is_empty() ? 0 : 1;
}

bool Typescript::_has_method(const StringName &method) const {
	return false;
}

bool Typescript::_has_static_method(const StringName &method) const {
	return false;
}

Dictionary Typescript::_get_method_info(const StringName &method) const {
	return Dictionary();
}

bool Typescript::_is_tool() const {
	return false;
}

bool Typescript::_is_valid() const {
	return true;
}

bool Typescript::_is_abstract() const {
	return false;
}

ScriptLanguage *Typescript::_get_language() const {
	return const_cast<TypescriptLanguage *>(language);
}

bool Typescript::_has_script_signal(const StringName &signal) const {
	return false;
}

TypedArray<Dictionary> Typescript::_get_script_signal_list() const {
	return Array();
}

TypedArray<Dictionary> Typescript::_get_script_method_list() const {
	return Array();
}

TypedArray<Dictionary> Typescript::_get_script_property_list() const {
	return Array();
}

int32_t Typescript::_get_member_line(const StringName &member) const {
	return 0;
}

Dictionary Typescript::_get_constants() const {
	return Dictionary();
}

TypedArray<StringName> Typescript::_get_members() const {
	TypedArray<StringName> members = TypedArray<StringName>();
	for (StringName member : _members) {
		members.append(member);
	}
	return members;
}

bool Typescript::_is_placeholder_fallback_enabled() const {
	return false;
}

Variant Typescript::_get_rpc_config() const {
	return Variant();
}

JSParseState *Typescript::parse_source_code(const String &source_code) {
	PackedByteArray source_code_bytes = source_code.to_utf8_buffer();
	PackedByteArray script_path_bytes = _script_path.to_utf8_buffer();
	JSParseState *s = new JSParseState();
	js_parse_init(context.ctx, s, (const char *)source_code_bytes.ptr(), source_code_bytes.size(), (const char *)script_path_bytes.ptr());
	ERR_FAIL_COND_V_EDMSG(js_parse_source_element_func(&s), nullptr, "Syntax error.");
	return s;
}

Ref<Script> Typescript::_get_base_script() const {
	return Ref<Script>();
}

StringName Typescript::_get_instance_base_type() const {
	return StringName("Object");
}

String Typescript::_get_source_code() const {
	return _source_code;
}

void Typescript::_set_source_code(const String &code) {
	_source_code = code;
	s = parse_source_code(code);
}

Error Typescript::_reload(bool keep_state) {
	return Error();
}

void Typescript::_update_exports() {
	// nothing to do
}

void *Typescript::_instance_create(Object *for_object) const {
	TypescriptInstance *instance = static_cast<TypescriptInstance *>(TypescriptInstance::create_instance(Ref(this), for_object));
	_instances.insert(for_object->get_instance_id(), instance, false);
	return instance;
}

void *Typescript::_placeholder_instance_create(Object *for_object) const {
	return nullptr;
}

bool Typescript::_instance_has(Object *object) const {
	return _instances.has(object->get_instance_id()) && _instances[object->get_instance_id()] != nullptr;
}

TypedArray<Dictionary> Typescript::_get_documentation() const {
	return TypedArray<Dictionary>();
}

String Typescript::_get_class_icon_path() const {
	return String();
}

bool Typescript::_has_property_default_value(const StringName &) const {
	return false;
}

Variant Typescript::_get_property_default_value(const StringName &property) const {
	return Variant();
}
