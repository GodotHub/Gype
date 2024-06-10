#include <godot_cpp/classes/camera_texture.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CameraTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CameraTexture>("CameraTexture")
			.constructor<>()
			.property<&CameraTexture::get_camera_feed_id, &CameraTexture::set_camera_feed_id>("camera_feed_id")
			.property<&CameraTexture::get_which_feed, &CameraTexture::set_which_feed>("which_feed")
			.property<&CameraTexture::get_camera_active, &CameraTexture::set_camera_active>("camera_is_active");
}