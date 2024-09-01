#pragma once

#include "support/javascript_language.hpp"
#include "support/javascript_saver.hpp"
#include <godot_cpp/classes/script_extension.hpp>

using namespace godot;

class JavaScript : public ScriptExtension {
	GDCLASS(JavaScript, ScriptExtension)

	friend class JavaScriptLanguage;
	friend class JavaScriptSaver;

	String source_code;
	String origin_path;

public:
	bool _editor_can_reload_from_file();
	void _placeholder_erased(void *p_placeholder);
	bool _can_instantiate() const;
	Ref<Script> _get_base_script() const;
	StringName _get_global_name() const;
	bool _inherits_script(const Ref<Script> &p_script) const;
	StringName _get_instance_base_type() const;
	void *_instance_create(Object *p_for_object) const;
	void *_placeholder_instance_create(Object *p_for_object) const;
	bool _instance_has(Object *p_object) const;
	bool _has_source_code() const;
	String _get_source_code() const;
	void _set_source_code(const String &p_code);
	Error _reload(bool p_keep_state);
	TypedArray<Dictionary> _get_documentation() const;
	String _get_class_icon_path() const;
	bool _has_method(const StringName &p_method) const;
	bool _has_static_method(const StringName &p_method) const;
	Variant _get_script_method_argument_count(const StringName &p_method) const;
	Dictionary _get_method_info(const StringName &p_method) const;
	bool _is_tool() const;
	bool _is_valid() const;
	bool _is_abstract() const;
	ScriptLanguage *_get_language() const;
	bool _has_script_signal(const StringName &p_signal) const;
	TypedArray<Dictionary> _get_script_signal_list() const;
	bool _has_property_default_value(const StringName &p_property) const;
	Variant _get_property_default_value(const StringName &p_property) const;
	void _update_exports();
	TypedArray<Dictionary> _get_script_method_list() const;
	TypedArray<Dictionary> _get_script_property_list() const;
	int32_t _get_member_line(const StringName &p_member) const;
	Dictionary _get_constants() const;
	TypedArray<StringName> _get_members() const;
	bool _is_placeholder_fallback_enabled() const;
	Variant _get_rpc_config() const;

	JavaScript();
	JavaScript(const String &origin_path) :
			origin_path(origin_path) {};

protected:
	static void _bind_methods() {}
};