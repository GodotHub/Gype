#include <godot_cpp/classes/reg_ex_match.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RegExMatch() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RegExMatch>("RegExMatch")
			.constructor<>()
			.property<&RegExMatch::get_subject>("subject")
			.property<&RegExMatch::get_names>("names")
			.property<&RegExMatch::get_strings>("strings")
			.fun<static_cast<int32_t (RegExMatch::*)() const>(&RegExMatch::get_group_count)>("get_group_count")
			.fun<static_cast<String (RegExMatch::*)(const Variant &) const>(&RegExMatch::get_string)>("get_string")
			.fun<static_cast<int32_t (RegExMatch::*)(const Variant &) const>(&RegExMatch::get_start)>("get_start")
			.fun<static_cast<int32_t (RegExMatch::*)(const Variant &) const>(&RegExMatch::get_end)>("get_end");
}