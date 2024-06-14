#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Script() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Script>("Script")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (Script::*)() const>(&Script::get_source_code), static_cast<void (Script::*)(const String &)>(&Script::set_source_code)>((new std::string("source_code"))->c_str())
			.fun<static_cast<bool (Script::*)() const>(&Script::can_instantiate)>((new std::string("can_instantiate"))->c_str())
			.fun<static_cast<bool (Script::*)(Object *) const>(&Script::instance_has)>((new std::string("instance_has"))->c_str())
			.fun<static_cast<bool (Script::*)() const>(&Script::has_source_code)>((new std::string("has_source_code"))->c_str())
			.fun<static_cast<Error (Script::*)(bool)>(&Script::reload)>((new std::string("reload"))->c_str())
			.fun<static_cast<Ref<Script> (Script::*)() const>(&Script::get_base_script)>((new std::string("get_base_script"))->c_str())
			.fun<static_cast<StringName (Script::*)() const>(&Script::get_instance_base_type)>((new std::string("get_instance_base_type"))->c_str())
			.fun<static_cast<StringName (Script::*)() const>(&Script::get_global_name)>((new std::string("get_global_name"))->c_str())
			.fun<static_cast<bool (Script::*)(const StringName &) const>(&Script::has_script_signal)>((new std::string("has_script_signal"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (Script::*)()>(&Script::get_script_property_list)>((new std::string("get_script_property_list"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (Script::*)()>(&Script::get_script_method_list)>((new std::string("get_script_method_list"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (Script::*)()>(&Script::get_script_signal_list)>((new std::string("get_script_signal_list"))->c_str())
			.fun<static_cast<Dictionary (Script::*)()>(&Script::get_script_constant_map)>((new std::string("get_script_constant_map"))->c_str())
			.fun<static_cast<Variant (Script::*)(const StringName &)>(&Script::get_property_default_value)>((new std::string("get_property_default_value"))->c_str())
			.fun<static_cast<bool (Script::*)() const>(&Script::is_tool)>((new std::string("is_tool"))->c_str())
			.fun<static_cast<bool (Script::*)() const>(&Script::is_abstract)>((new std::string("is_abstract"))->c_str());
}