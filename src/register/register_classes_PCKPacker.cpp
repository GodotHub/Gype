#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/pck_packer.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PCKPacker() {
	qjs::Context::Module &_module = _General;
	_module.class_<PCKPacker>("PCKPacker")
			.constructor<>()
			.fun<static_cast<Error (PCKPacker::*)(const String &, int32_t, const String &, bool)>(&PCKPacker::pck_start)>("pck_start")
			.fun<static_cast<Error (PCKPacker::*)(const String &, const String &, bool)>(&PCKPacker::add_file)>("add_file")
			.fun<static_cast<Error (PCKPacker::*)(bool)>(&PCKPacker::flush)>("flush");
}