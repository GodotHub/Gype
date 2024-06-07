#ifndef TS_SUPPORT
#define TS_SUPPORT

#include "qjspp/utils.h"
#include "quickjs-parser.h"
#include <support/typescript_instance.h>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/script_extension.hpp>
#include <godot_cpp/templates/hash_map.hpp>
#include <godot_cpp/templates/hash_set.hpp>
#include <godot_cpp/templates/list.hpp>

using namespace godot;

class Typescript : public ScriptExtension {
	GDCLASS(Typescript, ScriptExtension)

	const TypescriptLanguage *language = TypescriptLanguage::get_singleton();

	String _script_path;
	String _source_code;
	JSParseState *s;
	HashSet<StringName> _members;
	mutable HashMap<uint64_t, TypescriptInstance *> _instances = HashMap<uint64_t, TypescriptInstance *>();

public:
	Typescript();

	bool _editor_can_reload_from_file() override;
	void _placeholder_erased(void *placeholder) override;
	bool _can_instantiate() const override;
	Ref<Script> _get_base_script() const override;
	StringName _get_global_name() const override;
	bool _inherits_script(const Ref<Script> &script) const override;
	StringName _get_instance_base_type() const override;
	void *_instance_create(Object *for_object) const override;
	void *_placeholder_instance_create(Object *for_object) const override;
	bool _instance_has(Object *object) const override;
	bool _has_source_code() const override;
	String _get_source_code() const override;
	void _set_source_code(const String &code) override;
	Error _reload(bool keep_state) override;
	TypedArray<Dictionary> _get_documentation() const override;
	String _get_class_icon_path() const override;
	bool _has_method(const StringName &method) const override;
	bool _has_static_method(const StringName &method) const override;
	Dictionary _get_method_info(const StringName &method) const override;
	bool _is_tool() const override;
	bool _is_valid() const override;
	bool _is_abstract() const override;
	ScriptLanguage *_get_language() const override;
	bool _has_script_signal(const StringName &signal) const override;
	TypedArray<Dictionary> _get_script_signal_list() const override;
	bool _has_property_default_value(const StringName &property) const override;
	Variant _get_property_default_value(const StringName &property) const override;
	void _update_exports() override;
	TypedArray<Dictionary> _get_script_method_list() const override;
	TypedArray<Dictionary> _get_script_property_list() const override;
	int32_t _get_member_line(const StringName &member) const override;
	Dictionary _get_constants() const override;
	TypedArray<StringName> _get_members() const override;
	bool _is_placeholder_fallback_enabled() const override;
	Variant _get_rpc_config() const override;

	friend class TypescriptLoader;

protected:
	static void _bind_methods() {
	}

private:
	JSParseState *parse_source_code(const String &source_code);
};

struct TSFunction {
	String method;
	StringName body;
	List<Variant::Type> args_type;
	Variant::Type return_type;
	bool is_async;
};

struct TSMember {
	String member;
	uint32_t line;
};

#endif