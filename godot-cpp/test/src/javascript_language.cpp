#include "javascript_language.h"
#include "javascript.h"
#include <godot_cpp/classes/editor_interface.hpp>
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/classes/script_editor.hpp>
#include <godot_cpp/variant/callable_method_pointer.hpp>

using namespace godot;

JavaScriptLanguage *JavaScriptLanguage::singleton;

JavaScriptLanguage *JavaScriptLanguage::get_singleton() {
	if (singleton) {
		return singleton;
	}
	singleton = memnew(JavaScriptLanguage);
	return singleton;
}

String JavaScriptLanguage::_get_name() const {
	return "JavaScript";
}

void JavaScriptLanguage::_init() {
}

String JavaScriptLanguage::_get_type() const {
	return "JavaScript";
}

String JavaScriptLanguage::_get_extension() const {
	return "js";
}

void JavaScriptLanguage::_finish() {
}

PackedStringArray JavaScriptLanguage::_get_reserved_words() const {
	return PackedStringArray();
}

bool JavaScriptLanguage::_is_control_flow_keyword(const String &p_keyword) const {
	return false;
}

PackedStringArray JavaScriptLanguage::_get_comment_delimiters() const {
	return PackedStringArray();
}

PackedStringArray JavaScriptLanguage::_get_doc_comment_delimiters() const {
	return PackedStringArray();
}

PackedStringArray JavaScriptLanguage::_get_string_delimiters() const {
	return PackedStringArray();
}

Ref<Script> JavaScriptLanguage::_make_template(const String &p_template, const String &p_class_name, const String &p_base_class_name) const {
	Ref<JavaScript> script;
	script.instantiate();
	return script;
}

TypedArray<Dictionary> JavaScriptLanguage::_get_built_in_templates(const StringName &p_object) const {
	return TypedArray<Dictionary>();
}

bool JavaScriptLanguage::_is_using_templates() {
	return true;
}

Dictionary JavaScriptLanguage::_validate(const String &p_script, const String &p_path, bool p_validate_functions, bool p_validate_errors, bool p_validate_warnings, bool p_validate_safe_lines) const {
	Dictionary validation;
	validation["valid"] = true;
	return validation;
}

String JavaScriptLanguage::_validate_path(const String &p_path) const {
	return "";
}

Object *JavaScriptLanguage::_create_script() const {
	JavaScript *script = memnew(JavaScript);
	return script;
}

bool JavaScriptLanguage::_has_named_classes() const {
	return true;
}

bool JavaScriptLanguage::_supports_builtin_mode() const {
	return true;
}

bool JavaScriptLanguage::_supports_documentation() const {
	return false;
}

bool JavaScriptLanguage::_can_inherit_from_file() const {
	return true;
}

int32_t JavaScriptLanguage::_find_function(const String &p_function, const String &p_code) const {
	return 0;
}

String JavaScriptLanguage::_make_function(const String &p_class_name, const String &p_function_name, const PackedStringArray &p_function_args) const {
	return String();
}

bool JavaScriptLanguage::_can_make_function() const {
	return false;
}

Error JavaScriptLanguage::_open_in_external_editor(const Ref<Script> &p_script, int32_t p_line, int32_t p_column) {
	return Error();
}

bool JavaScriptLanguage::_overrides_external_editor() {
	return false;
}

ScriptLanguage::ScriptNameCasing JavaScriptLanguage::_preferred_file_name_casing() const {
	return ScriptLanguage::SCRIPT_NAME_CASING_SNAKE_CASE;
}

Dictionary JavaScriptLanguage::_complete_code(const String &p_code, const String &p_path, Object *p_owner) const {
	return Dictionary();
}

Dictionary JavaScriptLanguage::_lookup_code(const String &p_code, const String &p_symbol, const String &p_path, Object *p_owner) const {
	return Dictionary();
}

String JavaScriptLanguage::_auto_indent_code(const String &p_code, int32_t p_from_line, int32_t p_to_line) const {
	return String();
}

void JavaScriptLanguage::_add_global_constant(const StringName &p_name, const Variant &p_value) {
}

void JavaScriptLanguage::_add_named_global_constant(const StringName &p_name, const Variant &p_value) {
}

void JavaScriptLanguage::_remove_named_global_constant(const StringName &p_name) {
}

void JavaScriptLanguage::_thread_enter() {
}

void JavaScriptLanguage::_thread_exit() {
}

String JavaScriptLanguage::_debug_get_error() const {
	return "";
}

int32_t JavaScriptLanguage::_debug_get_stack_level_count() const {
	return 0;
}

int32_t JavaScriptLanguage::_debug_get_stack_level_line(int32_t p_level) const {
	return 0;
}

String JavaScriptLanguage::_debug_get_stack_level_function(int32_t p_level) const {
	return "";
}

String JavaScriptLanguage::_debug_get_stack_level_source(int32_t p_level) const {
	return "";
}

Dictionary JavaScriptLanguage::_debug_get_stack_level_locals(int32_t p_level, int32_t p_max_subitems, int32_t p_max_depth) {
	return {};
}

Dictionary JavaScriptLanguage::_debug_get_stack_level_members(int32_t p_level, int32_t p_max_subitems, int32_t p_max_depth) {
	return {};
}

void *JavaScriptLanguage::_debug_get_stack_level_instance(int32_t p_level) {
	return nullptr;
}

Dictionary JavaScriptLanguage::_debug_get_globals(int32_t p_max_subitems, int32_t p_max_depth) {
	return {};
}

String JavaScriptLanguage::_debug_parse_stack_level_expression(int32_t p_level, const String &p_expression, int32_t p_max_subitems, int32_t p_max_depth) {
	return "";
}

TypedArray<Dictionary> JavaScriptLanguage::_debug_get_current_stack_info() {
	return TypedArray<Dictionary>();
}

void JavaScriptLanguage::_reload_all_scripts() {
}

void JavaScriptLanguage::_reload_tool_script(const Ref<Script> &p_script, bool p_soft_reload) {
}

PackedStringArray JavaScriptLanguage::_get_recognized_extensions() const {
	PackedStringArray ret = PackedStringArray();
	ret.append("js");
	return ret;
}

TypedArray<Dictionary> JavaScriptLanguage::_get_public_functions() const {
	return TypedArray<Dictionary>();
}

Dictionary JavaScriptLanguage::_get_public_constants() const {
	return {};
}

TypedArray<Dictionary> JavaScriptLanguage::_get_public_annotations() const {
	return TypedArray<Dictionary>();
}

void JavaScriptLanguage::_profiling_start() {
}

void JavaScriptLanguage::_profiling_stop() {
}

void JavaScriptLanguage::_profiling_set_save_native_calls(bool p_enable) {
}

int32_t JavaScriptLanguage::_profiling_get_accumulated_data(ScriptLanguageExtensionProfilingInfo *p_info_array, int32_t p_info_max) {
	return 0;
}

int32_t JavaScriptLanguage::_profiling_get_frame_data(ScriptLanguageExtensionProfilingInfo *p_info_array, int32_t p_info_max) {
	return 0;
}

void JavaScriptLanguage::_frame() {
}

bool JavaScriptLanguage::_handles_global_class_type(const String &p_type) const {
	return p_type == "JavaScript";
}

Dictionary JavaScriptLanguage::_get_global_class_name(const String &p_path) const {
	return {};
}

JavaScriptLanguage::~JavaScriptLanguage() {
	memdelete(singleton);
}
