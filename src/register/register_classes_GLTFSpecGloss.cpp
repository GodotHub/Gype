#include <godot_cpp/classes/gltf_spec_gloss.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/resource.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFSpecGloss() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFSpecGloss>("GLTFSpecGloss")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<Ref<Image>(GLTFSpecGloss::*)()>(&GLTFSpecGloss::get_diffuse_img),static_cast<void(GLTFSpecGloss::*)(const Ref<Image> &)>(&GLTFSpecGloss::set_diffuse_img)>("diffuse_img")
            .property<static_cast<Color(GLTFSpecGloss::*)()>(&GLTFSpecGloss::get_diffuse_factor),static_cast<void(GLTFSpecGloss::*)(const Color &)>(&GLTFSpecGloss::set_diffuse_factor)>("diffuse_factor")
            .property<static_cast<double(GLTFSpecGloss::*)()>(&GLTFSpecGloss::get_gloss_factor),static_cast<void(GLTFSpecGloss::*)(double)>(&GLTFSpecGloss::set_gloss_factor)>("gloss_factor")
            .property<static_cast<Color(GLTFSpecGloss::*)()>(&GLTFSpecGloss::get_specular_factor),static_cast<void(GLTFSpecGloss::*)(const Color &)>(&GLTFSpecGloss::set_specular_factor)>("specular_factor")
            .property<static_cast<Ref<Image>(GLTFSpecGloss::*)()>(&GLTFSpecGloss::get_spec_gloss_img),static_cast<void(GLTFSpecGloss::*)(const Ref<Image> &)>(&GLTFSpecGloss::set_spec_gloss_img)>("spec_gloss_img")
;}