#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/gltf_camera.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFCamera() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFCamera>("GLTFCamera")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<bool (GLTFCamera::*)() const>(&GLTFCamera::get_perspective), static_cast<void (GLTFCamera::*)(bool)>(&GLTFCamera::set_perspective)>((new std::string("perspective"))->c_str())
			.property<static_cast<double (GLTFCamera::*)() const>(&GLTFCamera::get_fov), static_cast<void (GLTFCamera::*)(double)>(&GLTFCamera::set_fov)>((new std::string("fov"))->c_str())
			.property<static_cast<double (GLTFCamera::*)() const>(&GLTFCamera::get_size_mag), static_cast<void (GLTFCamera::*)(double)>(&GLTFCamera::set_size_mag)>((new std::string("size_mag"))->c_str())
			.property<static_cast<double (GLTFCamera::*)() const>(&GLTFCamera::get_depth_far), static_cast<void (GLTFCamera::*)(double)>(&GLTFCamera::set_depth_far)>((new std::string("depth_far"))->c_str())
			.property<static_cast<double (GLTFCamera::*)() const>(&GLTFCamera::get_depth_near), static_cast<void (GLTFCamera::*)(double)>(&GLTFCamera::set_depth_near)>((new std::string("depth_near"))->c_str())
			.static_fun<static_cast<Ref<GLTFCamera> (*)(Camera3D *)>(&GLTFCamera::from_node)>((new std::string("from_node"))->c_str())
			.fun<static_cast<Camera3D *(GLTFCamera::*)() const>(&GLTFCamera::to_node)>((new std::string("to_node"))->c_str())
			.static_fun<static_cast<Ref<GLTFCamera> (*)(const Dictionary &)>(&GLTFCamera::from_dictionary)>((new std::string("from_dictionary"))->c_str())
			.fun<static_cast<Dictionary (GLTFCamera::*)() const>(&GLTFCamera::to_dictionary)>((new std::string("to_dictionary"))->c_str());
}