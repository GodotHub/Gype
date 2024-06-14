#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/zip_packer.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ZIPPacker() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ZIPPacker>("ZIPPacker")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Error (ZIPPacker::*)(const String &, ZIPPacker::ZipAppend)>(&ZIPPacker::open)>((new std::string("open"))->c_str())
			.fun<static_cast<Error (ZIPPacker::*)(const String &)>(&ZIPPacker::start_file)>((new std::string("start_file"))->c_str())
			.fun<static_cast<Error (ZIPPacker::*)(const PackedByteArray &)>(&ZIPPacker::write_file)>((new std::string("write_file"))->c_str())
			.fun<static_cast<Error (ZIPPacker::*)()>(&ZIPPacker::close_file)>((new std::string("close_file"))->c_str())
			.fun<static_cast<Error (ZIPPacker::*)()>(&ZIPPacker::close)>((new std::string("close"))->c_str());
	qjs::Value _ZipAppend = context->newObject();
	_ZipAppend[(new std::string("APPEND_CREATE"))->c_str()] = ZIPPacker::ZipAppend::APPEND_CREATE;
	_ZipAppend[(new std::string("APPEND_CREATEAFTER"))->c_str()] = ZIPPacker::ZipAppend::APPEND_CREATEAFTER;
	_ZipAppend[(new std::string("APPEND_ADDINZIP"))->c_str()] = ZIPPacker::ZipAppend::APPEND_ADDINZIP;
	_module.add("ZipAppend", std::move(_ZipAppend));
}