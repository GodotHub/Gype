#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/sky.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Sky() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Sky>("Sky")
			.constructor<>()
			.property<&Sky::get_material, &Sky::set_material>("sky_material")
			.property<&Sky::get_process_mode, &Sky::set_process_mode>("process_mode")
			.property<&Sky::get_radiance_size, &Sky::set_radiance_size>("radiance_size");
}