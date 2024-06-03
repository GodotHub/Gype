#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/cubemap_array.hpp>

using namespace godot;

void register_classes_CubemapArray() {
    qjs::Context::Module &_module = _General;
    _module.class_<CubemapArray>("CubemapArray")
           .constructor<>()
		    .fun<static_cast<Ref<Resource>(CubemapArray::*)()const>(&CubemapArray::create_placeholder)>("create_placeholder")
;}