#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/texture2d_array.hpp>

using namespace godot;

void register_classes_Texture2DArray() {
    qjs::Context::Module &_module = _General;
    _module.class_<Texture2DArray>("Texture2DArray")
           .constructor<>()
		    .fun<static_cast<Ref<Resource>(Texture2DArray::*)()const>(&Texture2DArray::create_placeholder)>("create_placeholder")
;}