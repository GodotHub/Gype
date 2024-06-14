
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/pck_packer.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PCKPacker() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PCKPacker>("PCKPacker")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Error (PCKPacker::*)(const String &, int32_t, const String &, bool)>(&PCKPacker::pck_start)>((new std::string("pck_start"))->c_str())
			.fun<static_cast<Error (PCKPacker::*)(const String &, const String &, bool)>(&PCKPacker::add_file)>((new std::string("add_file"))->c_str())
			.fun<static_cast<Error (PCKPacker::*)(bool)>(&PCKPacker::flush)>((new std::string("flush"))->c_str());
}