#include <godot_cpp/classes/aes_context.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AESContext() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AESContext>("AESContext")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Error (AESContext::*)(AESContext::Mode, const PackedByteArray &, const PackedByteArray &)>(&AESContext::start)>((new std::string("start"))->c_str())
			.fun<static_cast<PackedByteArray (AESContext::*)(const PackedByteArray &)>(&AESContext::update)>((new std::string("update"))->c_str())
			.fun<static_cast<PackedByteArray (AESContext::*)()>(&AESContext::get_iv_state)>((new std::string("get_iv_state"))->c_str())
			.fun<static_cast<void (AESContext::*)()>(&AESContext::finish)>((new std::string("finish"))->c_str());
	qjs::Value _Mode = context->newObject();
	_Mode[(new std::string("MODE_ECB_ENCRYPT"))->c_str()] = AESContext::Mode::MODE_ECB_ENCRYPT;
	_Mode[(new std::string("MODE_ECB_DECRYPT"))->c_str()] = AESContext::Mode::MODE_ECB_DECRYPT;
	_Mode[(new std::string("MODE_CBC_ENCRYPT"))->c_str()] = AESContext::Mode::MODE_CBC_ENCRYPT;
	_Mode[(new std::string("MODE_CBC_DECRYPT"))->c_str()] = AESContext::Mode::MODE_CBC_DECRYPT;
	_Mode[(new std::string("MODE_MAX"))->c_str()] = AESContext::Mode::MODE_MAX;
	_module.add("Mode", std::move(_Mode));
}