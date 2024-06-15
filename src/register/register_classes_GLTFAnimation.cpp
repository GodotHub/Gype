#include <godot_cpp/classes/gltf_animation.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFAnimation() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFAnimation>("GLTFAnimation")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<String(GLTFAnimation::*)()>(&GLTFAnimation::get_original_name),static_cast<void(GLTFAnimation::*)(const String &)>(&GLTFAnimation::set_original_name)>("original_name")
            .property<static_cast<bool(GLTFAnimation::*)()const>(&GLTFAnimation::get_loop),static_cast<void(GLTFAnimation::*)(bool)>(&GLTFAnimation::set_loop)>("loop")
            .fun<static_cast<Variant(GLTFAnimation::*)(const StringName &)>(&GLTFAnimation::get_additional_data)>("get_additional_data")
            .fun<static_cast<void(GLTFAnimation::*)(const StringName &,const Variant &)>(&GLTFAnimation::set_additional_data)>("set_additional_data")
;}