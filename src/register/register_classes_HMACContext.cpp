#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/hmac_context.hpp>

using namespace godot;

void register_classes_HMACContext() {
    qjs::Context::Module &_module = _General;
    _module.class_<HMACContext>("HMACContext")
           .constructor<>()
		    .fun<static_cast<Error(HMACContext::*)(HashingContext::HashType,const PackedByteArray &)>(&HMACContext::start)>("start")
		    .fun<static_cast<Error(HMACContext::*)(const PackedByteArray &)>(&HMACContext::update)>("update")
		    .fun<static_cast<PackedByteArray(HMACContext::*)()>(&HMACContext::finish)>("finish")
;}