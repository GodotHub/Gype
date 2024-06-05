#include <godot_cpp/classes/marshalls.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>


#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_Marshalls() {
	qjs::Context::Module &_module = _General;
	_module.class_<Marshalls>("Marshalls")
			.constructor<>()
			.fun<static_cast<String (Marshalls::*)(const Variant &, bool)>(&Marshalls::variant_to_base64)>("variant_to_base64")
			.fun<static_cast<Variant (Marshalls::*)(const String &, bool)>(&Marshalls::base64_to_variant)>("base64_to_variant")
			.fun<static_cast<String (Marshalls::*)(const PackedByteArray &)>(&Marshalls::raw_to_base64)>("raw_to_base64")
			.fun<static_cast<PackedByteArray (Marshalls::*)(const String &)>(&Marshalls::base64_to_raw)>("base64_to_raw")
			.fun<static_cast<String (Marshalls::*)(const String &)>(&Marshalls::utf8_to_base64)>("utf8_to_base64")
			.fun<static_cast<String (Marshalls::*)(const String &)>(&Marshalls::base64_to_utf8)>("base64_to_utf8");
}