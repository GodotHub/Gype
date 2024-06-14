#include <godot_cpp/classes/marshalls.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_Marshalls() {
	qjs::Value js_singleton = context->newObject();
	Marshalls *singleton = Marshalls::get_singleton();
	js_singleton.add((new std::string("variant_to_base64"))->c_str(), [singleton](const Variant &variant, bool full_objects) -> String { return singleton->variant_to_base64(variant, full_objects); });
	js_singleton.add((new std::string("base64_to_variant"))->c_str(), [singleton](const String &base64_str, bool allow_objects) -> Variant { return singleton->base64_to_variant(base64_str, allow_objects); });
	js_singleton.add((new std::string("raw_to_base64"))->c_str(), [singleton](const PackedByteArray &array) -> String { return singleton->raw_to_base64(array); });
	js_singleton.add((new std::string("base64_to_raw"))->c_str(), [singleton](const String &base64_str) -> PackedByteArray { return singleton->base64_to_raw(base64_str); });
	js_singleton.add((new std::string("utf8_to_base64"))->c_str(), [singleton](const String &utf8_str) -> String { return singleton->utf8_to_base64(utf8_str); });
	js_singleton.add((new std::string("base64_to_utf8"))->c_str(), [singleton](const String &base64_str) -> String { return singleton->base64_to_utf8(base64_str); });
	context->global()[(new std::string("Marshalls"))->c_str()] = js_singleton;
}