
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/reg_ex_match.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RegExMatch() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RegExMatch>("RegExMatch")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<String (RegExMatch::*)() const>(&RegExMatch::get_subject)>((new std::string("subject"))->c_str())
			.property<static_cast<Dictionary (RegExMatch::*)() const>(&RegExMatch::get_names)>((new std::string("names"))->c_str())
			.property<static_cast<PackedStringArray (RegExMatch::*)() const>(&RegExMatch::get_strings)>((new std::string("strings"))->c_str())
			.fun<static_cast<int32_t (RegExMatch::*)() const>(&RegExMatch::get_group_count)>((new std::string("get_group_count"))->c_str())
			.fun<static_cast<String (RegExMatch::*)(const Variant &) const>(&RegExMatch::get_string)>((new std::string("get_string"))->c_str())
			.fun<static_cast<int32_t (RegExMatch::*)(const Variant &) const>(&RegExMatch::get_start)>((new std::string("get_start"))->c_str())
			.fun<static_cast<int32_t (RegExMatch::*)(const Variant &) const>(&RegExMatch::get_end)>((new std::string("get_end"))->c_str());
}