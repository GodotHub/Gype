#include <godot_cpp/classes/reg_ex_match.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RegExMatch() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RegExMatch>("RegExMatch")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<String(RegExMatch::*)()const>(&RegExMatch::get_subject)>("subject")
            .property<static_cast<Dictionary(RegExMatch::*)()const>(&RegExMatch::get_names)>("names")
            .property<static_cast<PackedStringArray(RegExMatch::*)()const>(&RegExMatch::get_strings)>("strings")
            .fun<static_cast<int32_t(RegExMatch::*)()const>(&RegExMatch::get_group_count)>("get_group_count")
            .fun<static_cast<String(RegExMatch::*)(const Variant &)const>(&RegExMatch::get_string)>("get_string")
            .fun<static_cast<int32_t(RegExMatch::*)(const Variant &)const>(&RegExMatch::get_start)>("get_start")
            .fun<static_cast<int32_t(RegExMatch::*)(const Variant &)const>(&RegExMatch::get_end)>("get_end")
;}