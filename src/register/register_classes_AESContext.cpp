#include <godot_cpp/classes/aes_context.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AESContext() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AESContext>("AESContext")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<Error(AESContext::*)(AESContext::Mode,const PackedByteArray &,const PackedByteArray &)>(&AESContext::start)>("start")
            .fun<static_cast<PackedByteArray(AESContext::*)(const PackedByteArray &)>(&AESContext::update)>("update")
            .fun<static_cast<PackedByteArray(AESContext::*)()>(&AESContext::get_iv_state)>("get_iv_state")
            .fun<static_cast<void(AESContext::*)()>(&AESContext::finish)>("finish")
;    qjs::Value _Mode = context->newObject();
    _Mode["MODE_ECB_ENCRYPT"] = AESContext::Mode::MODE_ECB_ENCRYPT;
    _Mode["MODE_ECB_DECRYPT"] = AESContext::Mode::MODE_ECB_DECRYPT;
    _Mode["MODE_CBC_ENCRYPT"] = AESContext::Mode::MODE_CBC_ENCRYPT;
    _Mode["MODE_CBC_DECRYPT"] = AESContext::Mode::MODE_CBC_DECRYPT;
    _Mode["MODE_MAX"] = AESContext::Mode::MODE_MAX;
    _module.add("Mode", std::move(_Mode));
}