#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/cubemap.hpp>

using namespace godot;

void register_classes_Cubemap() {
    qjs::Context::Module &_module = _General;
    _module.class_<Cubemap>("Cubemap")
           .constructor<>()
		    .fun<static_cast<Ref<Resource>(Cubemap::*)()const>(&Cubemap::create_placeholder)>("create_placeholder")
;}