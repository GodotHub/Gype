#include <godot_cpp/classes/gltf_light.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFLight() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFLight>("GLTFLight")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<Color(GLTFLight::*)()>(&GLTFLight::get_color),static_cast<void(GLTFLight::*)(const Color &)>(&GLTFLight::set_color)>("color")
            .property<static_cast<double(GLTFLight::*)()>(&GLTFLight::get_intensity),static_cast<void(GLTFLight::*)(double)>(&GLTFLight::set_intensity)>("intensity")
            .property<static_cast<String(GLTFLight::*)()>(&GLTFLight::get_light_type),static_cast<void(GLTFLight::*)(const String &)>(&GLTFLight::set_light_type)>("light_type")
            .property<static_cast<double(GLTFLight::*)()>(&GLTFLight::get_range),static_cast<void(GLTFLight::*)(double)>(&GLTFLight::set_range)>("range")
            .property<static_cast<double(GLTFLight::*)()>(&GLTFLight::get_inner_cone_angle),static_cast<void(GLTFLight::*)(double)>(&GLTFLight::set_inner_cone_angle)>("inner_cone_angle")
            .property<static_cast<double(GLTFLight::*)()>(&GLTFLight::get_outer_cone_angle),static_cast<void(GLTFLight::*)(double)>(&GLTFLight::set_outer_cone_angle)>("outer_cone_angle")
            .static_fun<static_cast<Ref<GLTFLight>(*)(Light3D *)>(&GLTFLight::from_node)>("from_node")
            .fun<static_cast<Light3D *(GLTFLight::*)()const>(&GLTFLight::to_node)>("to_node")
            .static_fun<static_cast<Ref<GLTFLight>(*)(const Dictionary &)>(&GLTFLight::from_dictionary)>("from_dictionary")
            .fun<static_cast<Dictionary(GLTFLight::*)()const>(&GLTFLight::to_dictionary)>("to_dictionary")
            .fun<static_cast<Variant(GLTFLight::*)(const StringName &)>(&GLTFLight::get_additional_data)>("get_additional_data")
            .fun<static_cast<void(GLTFLight::*)(const StringName &,const Variant &)>(&GLTFLight::set_additional_data)>("set_additional_data")
;}