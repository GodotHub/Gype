#include "support/typescript_language.h"
#include "support/typescript.h"
#include <godot_cpp/core/error_macros.hpp>
#include <godot_cpp/core/memory.hpp>

const char *TypescriptLanguage::EXTENSION = "js";
const char *TypescriptLanguage::TYPE = "JavaScript";
TypescriptLanguage *TypescriptLanguage::singleton = nullptr;

TypescriptLanguage::TypescriptLanguage() {
	singleton = this;
}

TypescriptLanguage::~TypescriptLanguage() {
	singleton = nullptr;
	delete TYPE;
	delete EXTENSION;
}

TypescriptLanguage *TypescriptLanguage::get_singleton() {
	ERR_FAIL_NULL_V(singleton, nullptr);
	return singleton;
}

void TypescriptLanguage::_thread_enter() {
}

void TypescriptLanguage::_thread_exit() {
}

void TypescriptLanguage::_frame() {
}

String TypescriptLanguage::_get_name() const {
	return TYPE;
}

void TypescriptLanguage::_init() {
}

String TypescriptLanguage::_get_type() const {
	return TYPE;
}

String TypescriptLanguage::_get_extension() const {
	return EXTENSION;
}

void TypescriptLanguage::_finish() {
}

PackedStringArray TypescriptLanguage::_get_reserved_words() const {
	return PackedStringArray();
}

bool TypescriptLanguage::_is_control_flow_keyword(const String &keyword) const {
	return false;
}

PackedStringArray TypescriptLanguage::_get_comment_delimiters() const {
	return { "//" };
}

PackedStringArray TypescriptLanguage::_get_string_delimiters() const {
	return { "\" \"", "\' \'" };
}

TypedArray<Dictionary> TypescriptLanguage::_get_built_in_templates(const StringName &object) const {
	return TypedArray<Dictionary>();
}

bool TypescriptLanguage::_is_using_templates() {
	return false;
}

Dictionary TypescriptLanguage::_validate(const String &script, const String &path, bool validate_functions, bool validate_errors, bool validate_warnings, bool validate_safe_lines) const {
	Dictionary validation;
	validation["valid"] = true;
	return validation;
}

String TypescriptLanguage::_validate_path(const String &path) const {
	return "";
}

Object *TypescriptLanguage::_create_script() const {
	return memnew(Typescript);
}

bool TypescriptLanguage::_has_named_classes() const {
	return false;
}

bool TypescriptLanguage::_supports_builtin_mode() const {
	return false;
}

bool TypescriptLanguage::_supports_documentation() const {
	return false;
}

bool TypescriptLanguage::_can_inherit_from_file() const {
	return true;
}

int32_t TypescriptLanguage::_find_function(const String &class_name, const String &function_name) const {
	return 0;
}

String TypescriptLanguage::_make_function(const String &class_name, const String &function_name,
		const PackedStringArray &function_args) const {
	return "";
}

bool TypescriptLanguage::_overrides_external_editor() {
	return false;
}

Dictionary TypescriptLanguage::_complete_code(const String &code, const String &path, Object *owner) const {
	return Dictionary();
}

Dictionary TypescriptLanguage::_lookup_code(const String &code, const String &symbol, const String &path,
		Object *owner) const {
	return Dictionary();
}

String TypescriptLanguage::_auto_indent_code(const String &code, int32_t from_line, int32_t to_line) const {
	return "";
}

void TypescriptLanguage::_add_global_constant(const StringName &name, const Variant &value) {
}

void TypescriptLanguage::_add_named_global_constant(const StringName &name, const Variant &value) {
}

void TypescriptLanguage::_remove_named_global_constant(const StringName &name) {
}

Dictionary TypescriptLanguage::_debug_get_globals(int32_t max_subitems, int32_t max_depth) {
	return Dictionary();
}

void TypescriptLanguage::_reload_all_scripts() {
}

void TypescriptLanguage::_reload_tool_script(const Ref<Script> &script, bool soft_reload) {
}

PackedStringArray TypescriptLanguage::_get_recognized_extensions() const {
	PackedStringArray extensions;
	return { TypescriptLanguage::EXTENSION };
}

TypedArray<Dictionary> TypescriptLanguage::_get_public_functions() const {
	return TypedArray<Dictionary>();
}

Dictionary TypescriptLanguage::_get_public_constants() const {
	return Dictionary();
}

TypedArray<Dictionary> TypescriptLanguage::_get_public_annotations() const {
	return TypedArray<Dictionary>();
}

void TypescriptLanguage::_profiling_start() {
}

void TypescriptLanguage::_profiling_stop() {
}

bool TypescriptLanguage::_handles_global_class_type(const String &type) const {
	return false;
}

Dictionary TypescriptLanguage::_get_global_class_name(const String &path) const {
	return Dictionary();
}

Ref<Script> TypescriptLanguage::_make_template(const String &_template, const String &class_name,
		const String &base_class_name) const {
	Ref<Typescript> script;
	script.instantiate();
	Array values;
	values.append(class_name);
	values.append(base_class_name);
	String code = String(
			R"xxx(import {Node} from 'Node';

class {0} {

	_ready() {}

	_process(delta) {}

})xxx")
						  .format(values);
	script->set_source_code(code);
	return script;
}