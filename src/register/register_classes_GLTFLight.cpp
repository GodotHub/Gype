#include <godot_cpp/classes/gltf_light.hpp>
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/variant/dictionary.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_GLTFLight() {
	qjs::Context::Module &_module = _General;
	_module.class_<GLTFLight>("GLTFLight")
			.constructor<>()
			.property<&GLTFLight::get_color, &GLTFLight::set_color>("color")
			.property<&GLTFLight::get_intensity, &GLTFLight::set_intensity>("intensity")
			.property<&GLTFLight::get_light_type, &GLTFLight::set_light_type>("light_type")
			.property<&GLTFLight::get_range, &GLTFLight::set_range>("range")
			.property<&GLTFLight::get_inner_cone_angle, &GLTFLight::set_inner_cone_angle>("inner_cone_angle")
			.property<&GLTFLight::get_outer_cone_angle, &GLTFLight::set_outer_cone_angle>("outer_cone_angle")
			.static_fun<&GLTFLight::from_node>("from_node")
			.fun<static_cast<Light3D *(GLTFLight::*)() const>(&GLTFLight::to_node)>("to_node")
			.static_fun<&GLTFLight::from_dictionary>("from_dictionary")
			.fun<static_cast<Dictionary (GLTFLight::*)() const>(&GLTFLight::to_dictionary)>("to_dictionary");
}