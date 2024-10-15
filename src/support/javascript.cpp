#include "support/javascript.hpp"
#include "support/instance_info.hpp"
#include "support/javascript_instance.hpp"
#include "support/javascript_language.hpp"
#include <godot_cpp/classes/dir_access.hpp>
#include <godot_cpp/classes/editor_interface.hpp>
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/os.hpp>
#include <godot_cpp/classes/project_settings.hpp>
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/classes/script_editor.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

const char *JavaScript::symbol_mask = "GodotClass";

bool JavaScript::_editor_can_reload_from_file() {
	return true;
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
	return global_class_name;
}

bool JavaScript::_inherits_script(const Ref<Script> &p_script) const {
	String base1 = static_cast<Ref<JavaScript>>(p_script)->global_class_name;
	String base2 = this->base_class_name;
	return base1 == base2;
}

StringName JavaScript::_get_instance_base_type() const {
	return base_class_name;
}

void *JavaScript::_instance_create(Object *p_for_object) const {
	Ref<JavaScript> script = ResourceLoader::get_singleton()->load(this->path.replace("res://", "res://.dist/"));
	return internal::gdextension_interface_script_instance_create3(&InstanceInfo, memnew(JavaScriptInstance(p_for_object, script.ptr(), false)));
}

void *JavaScript::_placeholder_instance_create(Object *p_for_object) const {
	// return internal::gdextension_interface_placeholder_script_instance_create(_get_language(), const_cast<JavaScript *>(this), p_for_object);
	return nullptr;
}

bool JavaScript::_instance_has(Object *p_object) const {
	return instances.has(p_object->get_instance_id());
}

bool JavaScript::_has_source_code() const {
	return !source_code.is_empty();
}

String JavaScript::_get_source_code() const {
	return source_code;
}

String JavaScript::get_dist_source_code() const {
	return dist_source_code;
}

void JavaScript::_set_source_code(const String &p_code) {
	source_code = p_code;
	is_tool = false;
	if (!path.begins_with("res://.dist/") && !path.begins_with("res://addons/")) {
		String tsconfig_path = ProjectSettings::get_singleton()->globalize_path("res://tsconfig.json");
		int exit_code = OS::get_singleton()->execute("cmd.exe", { "/c", "tsc", "--build", tsconfig_path, "--force" });
		ERR_FAIL_COND_EDMSG(exit_code == -1, "Error executing tsc.");

		Ref<JavaScript> dist_script = ResourceLoader::get_singleton()->load(path.replace("res://", "res://.dist/"));
		dist_source_code = dist_script->_get_source_code();

		String code = _get_source_code();
		std::string origin_string = code.ascii().get_data();
		const char *c_code = origin_string.c_str();
		TSTree *tree = ts_parser_parse_string(parser, NULL, c_code, strlen(c_code));
		uint32_t error_offset;
		TSQueryError error;
		const char *query_string = R"xxx(
			(class_declaration
				(decorator)* @decorator.name
				name: (identifier) @class.name
				(class_heritage (identifier) @base.name)?
			)
			(#eq? @decorator.name "GodotClass")
		)xxx";
		TSQuery *query = ts_query_new(lang, query_string, strlen(query_string), &error_offset, &error);
		if (!query)
			return;
		TSQueryCursor *cursor = ts_query_cursor_new();
		ts_query_cursor_exec(cursor, query, ts_tree_root_node(tree));
		TSQueryMatch match;
		while (ts_query_cursor_next_match(cursor, &match)) {
			uint32_t i = -1;
			while (ts_query_cursor_next_capture(cursor, &match, &i)) {
				TSQueryCapture capture = match.captures[i];
				TSNode node = capture.node;
				char content[64] = {};
				memcpy(content, c_code + ts_node_start_byte(node), ts_node_end_byte(node) - ts_node_start_byte(node));
				uint32_t name_len;
				const char *name = ts_query_capture_name_for_id(query, capture.index, &name_len);
				if (strcmp(name, "@base.name") == 0) {
					base_class_name = content;
				} else if (strcmp(name, "@class.name") == 0) {
					global_class_name = content;
				} else if (strcmp(name, "@decorator.name") == 0 && strcmp(content, "Tool") == 0) {
					is_tool = true;
				}
			}
		}
	}
}

void JavaScript::remove_dist() {
	Ref<DirAccess> dir = DirAccess::open("res://.dist");
	Error err = dir->get_open_error();
	ERR_FAIL_COND(err != OK);
	remove_dist_internal(dir->get_current_dir());
}

void JavaScript::remove_dist_internal(const String &path) {
	Ref<DirAccess> dir = DirAccess::open(path);
	Error err = dir->list_dir_begin();
	ERR_FAIL_COND(err != OK);
	String file_path;
	while ((file_path = dir->get_next()) != "") {
		if (dir->current_is_dir()) {
			remove_dist_internal(dir->get_current_dir() + "/" + file_path);
		}
		dir->remove(file_path);
	}
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
	if (!path.begins_with("res://dist") && !path.begins_with("res://addons")) {
	}
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
	return is_tool;
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

godot::JavaScript::~JavaScript() {
}
