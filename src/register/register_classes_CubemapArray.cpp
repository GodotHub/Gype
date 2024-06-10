#include <godot_cpp/classes/cubemap_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CubemapArray() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CubemapArray>("CubemapArray")
			.constructor<>()
			.fun<static_cast<Ref<Resource> (CubemapArray::*)() const>(&CubemapArray::create_placeholder)>("create_placeholder");
}