#include "qjspp.hpp"
#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_spec_gloss.hpp>
#include <godot_cpp/classes/image.hpp>

using namespace godot;

void register_classes_GLTFSpecGloss() {
	qjs::Context::Module &_module = _General;
	_module.class_<GLTFSpecGloss>("GLTFSpecGloss")
			.constructor<>()
			.property<&GLTFSpecGloss::get_diffuse_img, &GLTFSpecGloss::set_diffuse_img>("diffuse_img")
			.property<&GLTFSpecGloss::get_diffuse_factor, &GLTFSpecGloss::set_diffuse_factor>("diffuse_factor")
			.property<&GLTFSpecGloss::get_gloss_factor, &GLTFSpecGloss::set_gloss_factor>("gloss_factor")
			.property<&GLTFSpecGloss::get_specular_factor, &GLTFSpecGloss::set_specular_factor>("specular_factor")
			.property<&GLTFSpecGloss::get_spec_gloss_img, &GLTFSpecGloss::set_spec_gloss_img>("spec_gloss_img");
}