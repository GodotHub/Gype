#include <godot_cpp/classes/marshalls.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_Marshalls() {
	qjs::Value js_singleton = context->newObject();
    Marshalls *singleton = Marshalls::get_singleton();
    js_singleton.add("variant_to_base64", [singleton](const Variant & variant,bool full_objects)->String{return singleton->variant_to_base64(variant,full_objects);});
    js_singleton.add("base64_to_variant", [singleton](const String & base64_str,bool allow_objects)->Variant{return singleton->base64_to_variant(base64_str,allow_objects);});
    js_singleton.add("raw_to_base64", [singleton](const PackedByteArray & array)->String{return singleton->raw_to_base64(array);});
    js_singleton.add("base64_to_raw", [singleton](const String & base64_str)->PackedByteArray{return singleton->base64_to_raw(base64_str);});
    js_singleton.add("utf8_to_base64", [singleton](const String & utf8_str)->String{return singleton->utf8_to_base64(utf8_str);});
    js_singleton.add("base64_to_utf8", [singleton](const String & base64_str)->String{return singleton->base64_to_utf8(base64_str);});
    context->global()["Marshalls"] = js_singleton;

}