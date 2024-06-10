#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/hashing_context.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_HashingContext() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<HashingContext>("HashingContext")
			.constructor<>()
			.fun<static_cast<Error (HashingContext::*)(HashingContext::HashType)>(&HashingContext::start)>("start")
			.fun<static_cast<Error (HashingContext::*)(const PackedByteArray &)>(&HashingContext::update)>("update")
			.fun<static_cast<PackedByteArray (HashingContext::*)()>(&HashingContext::finish)>("finish");
}