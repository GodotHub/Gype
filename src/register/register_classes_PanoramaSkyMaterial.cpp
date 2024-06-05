#include <godot_cpp/classes/panorama_sky_material.hpp>
#include <godot_cpp/classes/texture2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PanoramaSkyMaterial() {
	qjs::Context::Module &_module = _General;
	_module.class_<PanoramaSkyMaterial>("PanoramaSkyMaterial")
			.constructor<>()
			.property<&PanoramaSkyMaterial::get_panorama, &PanoramaSkyMaterial::set_panorama>("panorama")
			.property<&PanoramaSkyMaterial::is_filtering_enabled, &PanoramaSkyMaterial::set_filtering_enabled>("filter");
}