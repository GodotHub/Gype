#include <godot_cpp/classes/config_file.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ConfigFile() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ConfigFile>("ConfigFile")
			.constructor<>()
			.fun<static_cast<void (ConfigFile::*)(const String &, const String &, const Variant &)>(&ConfigFile::set_value)>("set_value")
			.fun<static_cast<Variant (ConfigFile::*)(const String &, const String &, const Variant &) const>(&ConfigFile::get_value)>("get_value")
			.fun<static_cast<bool (ConfigFile::*)(const String &) const>(&ConfigFile::has_section)>("has_section")
			.fun<static_cast<bool (ConfigFile::*)(const String &, const String &) const>(&ConfigFile::has_section_key)>("has_section_key")
			.fun<static_cast<PackedStringArray (ConfigFile::*)() const>(&ConfigFile::get_sections)>("get_sections")
			.fun<static_cast<PackedStringArray (ConfigFile::*)(const String &) const>(&ConfigFile::get_section_keys)>("get_section_keys")
			.fun<static_cast<void (ConfigFile::*)(const String &)>(&ConfigFile::erase_section)>("erase_section")
			.fun<static_cast<void (ConfigFile::*)(const String &, const String &)>(&ConfigFile::erase_section_key)>("erase_section_key")
			.fun<static_cast<Error (ConfigFile::*)(const String &)>(&ConfigFile::load)>("load")
			.fun<static_cast<Error (ConfigFile::*)(const String &)>(&ConfigFile::parse)>("parse")
			.fun<static_cast<Error (ConfigFile::*)(const String &)>(&ConfigFile::save)>("save")
			.fun<static_cast<String (ConfigFile::*)() const>(&ConfigFile::encode_to_text)>("encode_to_text")
			.fun<static_cast<Error (ConfigFile::*)(const String &, const PackedByteArray &)>(&ConfigFile::load_encrypted)>("load_encrypted")
			.fun<static_cast<Error (ConfigFile::*)(const String &, const String &)>(&ConfigFile::load_encrypted_pass)>("load_encrypted_pass")
			.fun<static_cast<Error (ConfigFile::*)(const String &, const PackedByteArray &)>(&ConfigFile::save_encrypted)>("save_encrypted")
			.fun<static_cast<Error (ConfigFile::*)(const String &, const String &)>(&ConfigFile::save_encrypted_pass)>("save_encrypted_pass")
			.fun<static_cast<void (ConfigFile::*)()>(&ConfigFile::clear)>("clear");
}