#include "support/typescript.h"

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "support/typescript_instance.h"
#include "support/typescript_language.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/error_macros.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

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
	return TypescriptLanguage::get_singleton();
}

bool Typescript::_has_script_signal(const StringName &signal) const {
	return false;
}

TypedArray<Dictionary> Typescript::_get_script_signal_list() const {
	return TypedArray<Dictionary>();
}

TypedArray<Dictionary> Typescript::_get_script_method_list() const {
	return TypedArray<Dictionary>();
}

TypedArray<Dictionary> Typescript::_get_script_property_list() const {
	return TypedArray<Dictionary>();
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

void Typescript::_parse_source_code(const String &filename, const String &source_code) {
	int _source_code_len;
	char *_source_code = _parse_ustring(source_code, &_source_code_len);
	std::string stdcode = std::string(_source_code);
	TSTree *tree = js_parse(_source_code);

	const char *query_src =
			R"XXX(
	(class_declaration
		name: (identifier) @class
		body: (class_body
			(method_definition
				name: (property_identifier) @method
				parameters: (formal_parameters (identifier) @parameter)*
			)*
		)
	)
	)XXX";
	uint32_t error_offset;
	TSQueryError error_type;
	TSQuery *query = ts_query_new(language, query_src, strlen(query_src), &error_offset, &error_type);
	ERR_FAIL_COND(error_type != 0);
	TSQueryCursor *query_cursor = ts_query_cursor_new();
	ts_query_cursor_exec(query_cursor, query, ts_tree_root_node(tree));

	uint32_t i;
	TSQueryMatch match;
	while (ts_query_cursor_next_match(query_cursor, &match)) {
		for (uint32_t i = 0; i < match.capture_count; i++) {
			TSQueryCapture capture = match.captures[i];
			uint32_t length;
			const char *capture_name = ts_query_capture_name_for_id(query, capture.index, &length);
			TSNode capture_node = capture.node;
			const char *text = js_node_text(capture_node, _source_code);
			const char *method;
			if (strcmp("class", capture_name) == 0) {
				_class_name = text;
			} else if (strcmp("method", capture_name) == 0) {
				method = text;
				if (!_methods.has(method)) {
					JSMethod js_method = { text, 0, false };
					_methods[method] = js_method;
				}
			} else if (strcmp("parameter", capture_name) == 0) {
				_methods[method].paramters++;
			}

			if (strcmp("class", capture_name) == 0 || strcmp("method", capture_name) == 0 || strcmp("parameter", capture_name) == 0) {
				UtilityFunctions::print(stdcode.substr(ts_node_start_byte(capture_node), ts_node_end_byte(capture_node) - ts_node_start_byte(capture_node)).c_str(), rest<Variant>());
			}
		}
	}

	// while (ts_query_cursor_next_capture(query_cursor, &match, &i)) {
	// 	TSQueryCapture capture = match.captures[i];
	// 	uint32_t length;
	// 	const char *capture_name = ts_query_capture_name_for_id(query, capture.index, &length);
	// 	TSNode capture_node = capture.node;
	// 	const char *text = js_node_text(capture_node, _source_code);
	// 	const char *method;

	// 	if (strcmp("class", capture_name) == 0) {
	// 		_class_name = text;
	// 	} else if (strcmp("method", capture_name) == 0) {
	// 		method = text;
	// 		if (!_methods.has(text)) {
	// 			JSMethod js_method = { text, 0, false };
	// 			_methods[text] = js_method;
	// 		}
	// 	} else if (strcmp("parameter", capture_name) == 0) {
	// 	}

	// 	if (strcmp("class", capture_name) == 0 || strcmp("method", capture_name) == 0 || strcmp("parameter", capture_name) == 0) {
	// 		UtilityFunctions::print(stdcode.substr(ts_node_start_byte(capture_node), ts_node_end_byte(capture_node) - ts_node_start_byte(capture_node)).c_str(), rest<Variant>());
	// 	}
	// }
}

void Typescript::_parse_program(TSNode node) {
}

char *Typescript::_parse_ustring(const String &str, int *len) {
	PackedByteArray bytes = str.to_utf8_buffer();
	char *c_str = new char[bytes.size() + 1];
	strncpy(c_str, (const char *)bytes.ptr(), bytes.size());
	c_str[bytes.size()] = '\0';
	*len = bytes.size();
	return c_str;
}

Ref<Script> Typescript::_get_base_script() const {
	return Ref<Script>();
}

StringName Typescript::_get_global_name() const {
	return StringName();
}

bool Typescript::_inherits_script(const Ref<Script> &script) const {
	return true;
}

StringName Typescript::_get_instance_base_type() const {
	// return _instances->_host_object->get_class();
	return "Object";
}

String Typescript::_get_source_code() const {
	return _source_code;
}

void Typescript::_set_source_code(const String &code) {
	_source_code = code;
	_parse_source_code(_filename, _source_code);
	// _parse_program(_ts_root);
}

Error Typescript::_reload(bool keep_state) {
	return OK;
}

void Typescript::_update_exports() {
	// nothing to do
}

void *Typescript::_instance_create(Object *for_object) const {
	return static_cast<TypescriptInstance *>(TypescriptInstance::create_instance(Ref<Typescript>(this), for_object));
}

void *Typescript::_placeholder_instance_create(Object *for_object) const {
	return nullptr;
}

bool Typescript::_instance_has(Object *object) const {
	return _instances.has(object);
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
