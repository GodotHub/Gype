
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/reg_ex.hpp>
#include <godot_cpp/classes/reg_ex_match.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RegEx() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RegEx>("RegEx")
			.constructor<>()
			.base<RefCounted>()
			.static_fun<static_cast<Ref<RegEx> (*)(const String &)>(&RegEx::create_from_string)>((new std::string("create_from_string"))->c_str())
			.fun<static_cast<void (RegEx::*)()>(&RegEx::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<Error (RegEx::*)(const String &)>(&RegEx::compile)>((new std::string("compile"))->c_str())
			.fun<static_cast<Ref<RegExMatch> (RegEx::*)(const String &, int32_t, int32_t) const>(&RegEx::search)>((new std::string("search"))->c_str())
			.fun<static_cast<TypedArray<RegExMatch> (RegEx::*)(const String &, int32_t, int32_t) const>(&RegEx::search_all)>((new std::string("search_all"))->c_str())
			.fun<static_cast<String (RegEx::*)(const String &, const String &, bool, int32_t, int32_t) const>(&RegEx::sub)>((new std::string("sub"))->c_str())
			.fun<static_cast<bool (RegEx::*)() const>(&RegEx::is_valid)>((new std::string("is_valid"))->c_str())
			.fun<static_cast<String (RegEx::*)() const>(&RegEx::get_pattern)>((new std::string("get_pattern"))->c_str())
			.fun<static_cast<int32_t (RegEx::*)() const>(&RegEx::get_group_count)>((new std::string("get_group_count"))->c_str())
			.fun<static_cast<PackedStringArray (RegEx::*)() const>(&RegEx::get_names)>((new std::string("get_names"))->c_str());
}