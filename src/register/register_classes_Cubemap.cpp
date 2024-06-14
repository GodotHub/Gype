#include <godot_cpp/classes/cubemap.hpp>
#include <godot_cpp/classes/image_texture_layered.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Cubemap() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Cubemap>("Cubemap")
			.constructor<>()
			.base<ImageTextureLayered>()
			.fun<static_cast<Ref<Resource> (Cubemap::*)() const>(&Cubemap::create_placeholder)>((new std::string("create_placeholder"))->c_str());
}