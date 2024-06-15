#include <godot_cpp/classes/gltf_camera.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/dictionary.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFCamera() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFCamera>("GLTFCamera")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<bool(GLTFCamera::*)()const>(&GLTFCamera::get_perspective),static_cast<void(GLTFCamera::*)(bool)>(&GLTFCamera::set_perspective)>("perspective")
            .property<static_cast<double(GLTFCamera::*)()const>(&GLTFCamera::get_fov),static_cast<void(GLTFCamera::*)(double)>(&GLTFCamera::set_fov)>("fov")
            .property<static_cast<double(GLTFCamera::*)()const>(&GLTFCamera::get_size_mag),static_cast<void(GLTFCamera::*)(double)>(&GLTFCamera::set_size_mag)>("size_mag")
            .property<static_cast<double(GLTFCamera::*)()const>(&GLTFCamera::get_depth_far),static_cast<void(GLTFCamera::*)(double)>(&GLTFCamera::set_depth_far)>("depth_far")
            .property<static_cast<double(GLTFCamera::*)()const>(&GLTFCamera::get_depth_near),static_cast<void(GLTFCamera::*)(double)>(&GLTFCamera::set_depth_near)>("depth_near")
            .static_fun<static_cast<Ref<GLTFCamera>(*)(Camera3D *)>(&GLTFCamera::from_node)>("from_node")
            .fun<static_cast<Camera3D *(GLTFCamera::*)()const>(&GLTFCamera::to_node)>("to_node")
            .static_fun<static_cast<Ref<GLTFCamera>(*)(const Dictionary &)>(&GLTFCamera::from_dictionary)>("from_dictionary")
            .fun<static_cast<Dictionary(GLTFCamera::*)()const>(&GLTFCamera::to_dictionary)>("to_dictionary")
;}