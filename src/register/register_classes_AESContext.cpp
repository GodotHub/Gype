#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/aes_context.hpp>

using namespace godot;

void register_classes_AESContext() {
    qjs::Context::Module &_module = _General;
    _module.class_<AESContext>("AESContext")
           .constructor<>()
		    .fun<static_cast<Error(AESContext::*)(AESContext::Mode,const PackedByteArray &,const PackedByteArray &)>(&AESContext::start)>("start")
		    .fun<static_cast<PackedByteArray(AESContext::*)(const PackedByteArray &)>(&AESContext::update)>("update")
		    .fun<static_cast<PackedByteArray(AESContext::*)()>(&AESContext::get_iv_state)>("get_iv_state")
		    .fun<static_cast<void(AESContext::*)()>(&AESContext::finish)>("finish")
;}