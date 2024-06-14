#include <godot_cpp/classes/config_file.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ConfigFile() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ConfigFile>("ConfigFile")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (ConfigFile::*)(const String &, const String &, const Variant &)>(&ConfigFile::set_value)>((new std::string("set_value"))->c_str())
			.fun<static_cast<Variant (ConfigFile::*)(const String &, const String &, const Variant &) const>(&ConfigFile::get_value)>((new std::string("get_value"))->c_str())
			.fun<static_cast<bool (ConfigFile::*)(const String &) const>(&ConfigFile::has_section)>((new std::string("has_section"))->c_str())
			.fun<static_cast<bool (ConfigFile::*)(const String &, const String &) const>(&ConfigFile::has_section_key)>((new std::string("has_section_key"))->c_str())
			.fun<static_cast<PackedStringArray (ConfigFile::*)() const>(&ConfigFile::get_sections)>((new std::string("get_sections"))->c_str())
			.fun<static_cast<PackedStringArray (ConfigFile::*)(const String &) const>(&ConfigFile::get_section_keys)>((new std::string("get_section_keys"))->c_str())
			.fun<static_cast<void (ConfigFile::*)(const String &)>(&ConfigFile::erase_section)>((new std::string("erase_section"))->c_str())
			.fun<static_cast<void (ConfigFile::*)(const String &, const String &)>(&ConfigFile::erase_section_key)>((new std::string("erase_section_key"))->c_str())
			.fun<static_cast<Error (ConfigFile::*)(const String &)>(&ConfigFile::load)>((new std::string("load"))->c_str())
			.fun<static_cast<Error (ConfigFile::*)(const String &)>(&ConfigFile::parse)>((new std::string("parse"))->c_str())
			.fun<static_cast<Error (ConfigFile::*)(const String &)>(&ConfigFile::save)>((new std::string("save"))->c_str())
			.fun<static_cast<String (ConfigFile::*)() const>(&ConfigFile::encode_to_text)>((new std::string("encode_to_text"))->c_str())
			.fun<static_cast<Error (ConfigFile::*)(const String &, const PackedByteArray &)>(&ConfigFile::load_encrypted)>((new std::string("load_encrypted"))->c_str())
			.fun<static_cast<Error (ConfigFile::*)(const String &, const String &)>(&ConfigFile::load_encrypted_pass)>((new std::string("load_encrypted_pass"))->c_str())
			.fun<static_cast<Error (ConfigFile::*)(const String &, const PackedByteArray &)>(&ConfigFile::save_encrypted)>((new std::string("save_encrypted"))->c_str())
			.fun<static_cast<Error (ConfigFile::*)(const String &, const String &)>(&ConfigFile::save_encrypted_pass)>((new std::string("save_encrypted_pass"))->c_str())
			.fun<static_cast<void (ConfigFile::*)()>(&ConfigFile::clear)>((new std::string("clear"))->c_str());
}