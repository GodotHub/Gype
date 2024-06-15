#include <godot_cpp/classes/hmac_context.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/hashing_context.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_HMACContext() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<HMACContext>("HMACContext")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<Error(HMACContext::*)(HashingContext::HashType,const PackedByteArray &)>(&HMACContext::start)>("start")
            .fun<static_cast<Error(HMACContext::*)(const PackedByteArray &)>(&HMACContext::update)>("update")
            .fun<static_cast<PackedByteArray(HMACContext::*)()>(&HMACContext::finish)>("finish")
;}