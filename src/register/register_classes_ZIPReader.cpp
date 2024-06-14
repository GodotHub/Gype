#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/zip_reader.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ZIPReader() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ZIPReader>("ZIPReader")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Error (ZIPReader::*)(const String &)>(&ZIPReader::open)>((new std::string("open"))->c_str())
			.fun<static_cast<Error (ZIPReader::*)()>(&ZIPReader::close)>((new std::string("close"))->c_str())
			.fun<static_cast<PackedStringArray (ZIPReader::*)()>(&ZIPReader::get_files)>((new std::string("get_files"))->c_str())
			.fun<static_cast<PackedByteArray (ZIPReader::*)(const String &, bool)>(&ZIPReader::read_file)>((new std::string("read_file"))->c_str())
			.fun<static_cast<bool (ZIPReader::*)(const String &, bool)>(&ZIPReader::file_exists)>((new std::string("file_exists"))->c_str());
}