
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/project_settings.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_ProjectSettings() {
	qjs::Value js_singleton = context->newObject();
	ProjectSettings *singleton = ProjectSettings::get_singleton();
	js_singleton.add((new std::string("has_setting"))->c_str(), [singleton](const String &name) -> bool { return singleton->has_setting(name); });
	js_singleton.add((new std::string("set_setting"))->c_str(), [singleton](const String &name, const Variant &value) -> void { singleton->set_setting(name, value); });
	js_singleton.add((new std::string("get_setting"))->c_str(), [singleton](const String &name, const Variant &default_value) -> Variant { return singleton->get_setting(name, default_value); });
	js_singleton.add((new std::string("get_setting_with_override"))->c_str(), [singleton](const StringName &name) -> Variant { return singleton->get_setting_with_override(name); });
	js_singleton.add((new std::string("get_global_class_list"))->c_str(), [singleton]() -> TypedArray<Dictionary> { return singleton->get_global_class_list(); });
	js_singleton.add((new std::string("set_order"))->c_str(), [singleton](const String &name, int32_t position) -> void { singleton->set_order(name, position); });
	js_singleton.add((new std::string("get_order"))->c_str(), [singleton](const String &name) -> int64_t { return singleton->get_order(name); });
	js_singleton.add((new std::string("set_initial_value"))->c_str(), [singleton](const String &name, const Variant &value) -> void { singleton->set_initial_value(name, value); });
	js_singleton.add((new std::string("set_as_basic"))->c_str(), [singleton](const String &name, bool basic) -> void { singleton->set_as_basic(name, basic); });
	js_singleton.add((new std::string("set_as_internal"))->c_str(), [singleton](const String &name, bool internal) -> void { singleton->set_as_internal(name, internal); });
	js_singleton.add((new std::string("add_property_info"))->c_str(), [singleton](const Dictionary &hint) -> void { singleton->add_property_info(hint); });
	js_singleton.add((new std::string("set_restart_if_changed"))->c_str(), [singleton](const String &name, bool restart) -> void { singleton->set_restart_if_changed(name, restart); });
	js_singleton.add((new std::string("clear"))->c_str(), [singleton](const String &name) -> void { singleton->clear(name); });
	js_singleton.add((new std::string("localize_path"))->c_str(), [singleton](const String &path) -> String { return singleton->localize_path(path); });
	js_singleton.add((new std::string("globalize_path"))->c_str(), [singleton](const String &path) -> String { return singleton->globalize_path(path); });
	js_singleton.add((new std::string("save"))->c_str(), [singleton]() -> Error { return singleton->save(); });
	js_singleton.add((new std::string("load_resource_pack"))->c_str(), [singleton](const String &pack, bool replace_files, int32_t offset) -> bool { return singleton->load_resource_pack(pack, replace_files, offset); });
	js_singleton.add((new std::string("save_custom"))->c_str(), [singleton](const String &file) -> Error { return singleton->save_custom(file); });
	context->global()[(new std::string("ProjectSettings"))->c_str()] = js_singleton;
}