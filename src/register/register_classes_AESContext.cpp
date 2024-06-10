#include <godot_cpp/classes/aes_context.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AESContext() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AESContext>("AESContext")
			.base<RefCounted>()
			.constructor<>()
			.fun<static_cast<Error (AESContext::*)(AESContext::Mode, const PackedByteArray &, const PackedByteArray &)>(&AESContext::start)>("start")
			.fun<static_cast<PackedByteArray (AESContext::*)(const PackedByteArray &)>(&AESContext::update)>("update")
			.fun<static_cast<PackedByteArray (AESContext::*)()>(&AESContext::get_iv_state)>("get_iv_state")
			.fun<static_cast<void (AESContext::*)()>(&AESContext::finish)>("finish");
}