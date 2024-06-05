#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/gltf_camera.hpp>
#include <godot_cpp/variant/dictionary.hpp>


#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_GLTFCamera() {
	qjs::Context::Module &_module = _General;
	_module.class_<GLTFCamera>("GLTFCamera")
			.constructor<>()
			.property<&GLTFCamera::get_perspective, &GLTFCamera::set_perspective>("perspective")
			.property<&GLTFCamera::get_fov, &GLTFCamera::set_fov>("fov")
			.property<&GLTFCamera::get_size_mag, &GLTFCamera::set_size_mag>("size_mag")
			.property<&GLTFCamera::get_depth_far, &GLTFCamera::set_depth_far>("depth_far")
			.property<&GLTFCamera::get_depth_near, &GLTFCamera::set_depth_near>("depth_near")
			.static_fun<&GLTFCamera::from_node>("from_node")
			.fun<static_cast<Camera3D *(GLTFCamera::*)() const>(&GLTFCamera::to_node)>("to_node")
			.static_fun<&GLTFCamera::from_dictionary>("from_dictionary")
			.fun<static_cast<Dictionary (GLTFCamera::*)() const>(&GLTFCamera::to_dictionary)>("to_dictionary");
}