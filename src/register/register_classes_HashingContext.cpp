#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/hashing_context.hpp>

using namespace godot;

void register_classes_HashingContext() {
    qjs::Context::Module &_module = _General;
    _module.class_<HashingContext>("HashingContext")
           .constructor<>()
		    .fun<static_cast<Error(HashingContext::*)(HashingContext::HashType)>(&HashingContext::start)>("start")
		    .fun<static_cast<Error(HashingContext::*)(const PackedByteArray &)>(&HashingContext::update)>("update")
		    .fun<static_cast<PackedByteArray(HashingContext::*)()>(&HashingContext::finish)>("finish")
;}