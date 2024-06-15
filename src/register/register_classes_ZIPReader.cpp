#include <godot_cpp/classes/zip_reader.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ZIPReader() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ZIPReader>("ZIPReader")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<Error(ZIPReader::*)(const String &)>(&ZIPReader::open)>("open")
            .fun<static_cast<Error(ZIPReader::*)()>(&ZIPReader::close)>("close")
            .fun<static_cast<PackedStringArray(ZIPReader::*)()>(&ZIPReader::get_files)>("get_files")
            .fun<static_cast<PackedByteArray(ZIPReader::*)(const String &,bool)>(&ZIPReader::read_file)>("read_file")
            .fun<static_cast<bool(ZIPReader::*)(const String &,bool)>(&ZIPReader::file_exists)>("file_exists")
;}