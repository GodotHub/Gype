
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/translation.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Translation() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Translation>("Translation")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (Translation::*)() const>(&Translation::get_locale), static_cast<void (Translation::*)(const String &)>(&Translation::set_locale)>((new std::string("locale"))->c_str())
			.fun<static_cast<StringName (Translation::*)(const StringName &, const StringName &, int32_t, const StringName &) const>(&Translation::_get_plural_message)>((new std::string("_get_plural_message"))->c_str())
			.fun<static_cast<StringName (Translation::*)(const StringName &, const StringName &) const>(&Translation::_get_message)>((new std::string("_get_message"))->c_str())
			.fun<static_cast<void (Translation::*)(const StringName &, const StringName &, const StringName &)>(&Translation::add_message)>((new std::string("add_message"))->c_str())
			.fun<static_cast<void (Translation::*)(const StringName &, const PackedStringArray &, const StringName &)>(&Translation::add_plural_message)>((new std::string("add_plural_message"))->c_str())
			.fun<static_cast<StringName (Translation::*)(const StringName &, const StringName &) const>(&Translation::get_message)>((new std::string("get_message"))->c_str())
			.fun<static_cast<StringName (Translation::*)(const StringName &, const StringName &, int32_t, const StringName &) const>(&Translation::get_plural_message)>((new std::string("get_plural_message"))->c_str())
			.fun<static_cast<void (Translation::*)(const StringName &, const StringName &)>(&Translation::erase_message)>((new std::string("erase_message"))->c_str())
			.fun<static_cast<PackedStringArray (Translation::*)() const>(&Translation::get_message_list)>((new std::string("get_message_list"))->c_str())
			.fun<static_cast<PackedStringArray (Translation::*)() const>(&Translation::get_translated_message_list)>((new std::string("get_translated_message_list"))->c_str())
			.fun<static_cast<int32_t (Translation::*)() const>(&Translation::get_message_count)>((new std::string("get_message_count"))->c_str());
}