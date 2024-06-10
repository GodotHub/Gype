#include "qjspp.hpp"
#include "register/register_classes.h"
#include <godot_cpp/classes/fog_volume.hpp>
#include <godot_cpp/classes/material.hpp>

using namespace godot;

void register_classes_FogVolume() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<FogVolume>("FogVolume")
			.constructor<>()
			.property<&FogVolume::get_size, &FogVolume::set_size>("size")
			.property<&FogVolume::get_shape, &FogVolume::set_shape>("shape")
			.property<&FogVolume::get_material, &FogVolume::set_material>("material");
}