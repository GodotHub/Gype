#include <godot_cpp/classes/hashing_context.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_HashingContext() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<HashingContext>("HashingContext")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<Error(HashingContext::*)(HashingContext::HashType)>(&HashingContext::start)>("start")
            .fun<static_cast<Error(HashingContext::*)(const PackedByteArray &)>(&HashingContext::update)>("update")
            .fun<static_cast<PackedByteArray(HashingContext::*)()>(&HashingContext::finish)>("finish")
;    qjs::Value _HashType = context->newObject();
    _HashType["HASH_MD5"] = HashingContext::HashType::HASH_MD5;
    _HashType["HASH_SHA1"] = HashingContext::HashType::HASH_SHA1;
    _HashType["HASH_SHA256"] = HashingContext::HashType::HASH_SHA256;
    _module.add("HashType", std::move(_HashType));
}