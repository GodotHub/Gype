#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Script() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Script>("Script")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<String(Script::*)()const>(&Script::get_source_code),static_cast<void(Script::*)(const String &)>(&Script::set_source_code)>("source_code")
            .fun<static_cast<bool(Script::*)()const>(&Script::can_instantiate)>("can_instantiate")
            .fun<static_cast<bool(Script::*)(Object *)const>(&Script::instance_has)>("instance_has")
            .fun<static_cast<bool(Script::*)()const>(&Script::has_source_code)>("has_source_code")
            .fun<static_cast<Error(Script::*)(bool)>(&Script::reload)>("reload")
            .fun<static_cast<Ref<Script>(Script::*)()const>(&Script::get_base_script)>("get_base_script")
            .fun<static_cast<StringName(Script::*)()const>(&Script::get_instance_base_type)>("get_instance_base_type")
            .fun<static_cast<StringName(Script::*)()const>(&Script::get_global_name)>("get_global_name")
            .fun<static_cast<bool(Script::*)(const StringName &)const>(&Script::has_script_signal)>("has_script_signal")
            .fun<static_cast<TypedArray<Dictionary>(Script::*)()>(&Script::get_script_property_list)>("get_script_property_list")
            .fun<static_cast<TypedArray<Dictionary>(Script::*)()>(&Script::get_script_method_list)>("get_script_method_list")
            .fun<static_cast<TypedArray<Dictionary>(Script::*)()>(&Script::get_script_signal_list)>("get_script_signal_list")
            .fun<static_cast<Dictionary(Script::*)()>(&Script::get_script_constant_map)>("get_script_constant_map")
            .fun<static_cast<Variant(Script::*)(const StringName &)>(&Script::get_property_default_value)>("get_property_default_value")
            .fun<static_cast<bool(Script::*)()const>(&Script::is_tool)>("is_tool")
            .fun<static_cast<bool(Script::*)()const>(&Script::is_abstract)>("is_abstract")
;}