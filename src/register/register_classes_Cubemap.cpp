#include <godot_cpp/classes/cubemap.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_Cubemap() {
	qjs::Context::Module &_module = _General;
	_module.class_<Cubemap>("Cubemap")
			.constructor<>()
			.fun<static_cast<Ref<Resource> (Cubemap::*)() const>(&Cubemap::create_placeholder)>("create_placeholder");
}