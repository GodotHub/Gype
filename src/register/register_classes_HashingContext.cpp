#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/hashing_context.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_HashingContext() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<HashingContext>("HashingContext")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Error (HashingContext::*)(HashingContext::HashType)>(&HashingContext::start)>((new std::string("start"))->c_str())
			.fun<static_cast<Error (HashingContext::*)(const PackedByteArray &)>(&HashingContext::update)>((new std::string("update"))->c_str())
			.fun<static_cast<PackedByteArray (HashingContext::*)()>(&HashingContext::finish)>((new std::string("finish"))->c_str());
	qjs::Value _HashType = context->newObject();
	_HashType[(new std::string("HASH_MD5"))->c_str()] = HashingContext::HashType::HASH_MD5;
	_HashType[(new std::string("HASH_SHA1"))->c_str()] = HashingContext::HashType::HASH_SHA1;
	_HashType[(new std::string("HASH_SHA256"))->c_str()] = HashingContext::HashType::HASH_SHA256;
	_module.add("HashType", std::move(_HashType));
}