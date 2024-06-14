#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/hashing_context.hpp>
#include <godot_cpp/classes/hmac_context.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_HMACContext() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<HMACContext>("HMACContext")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Error (HMACContext::*)(HashingContext::HashType, const PackedByteArray &)>(&HMACContext::start)>((new std::string("start"))->c_str())
			.fun<static_cast<Error (HMACContext::*)(const PackedByteArray &)>(&HMACContext::update)>((new std::string("update"))->c_str())
			.fun<static_cast<PackedByteArray (HMACContext::*)()>(&HMACContext::finish)>((new std::string("finish"))->c_str());
}