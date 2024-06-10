#include <godot_cpp/classes/camera_feed.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CameraFeed() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CameraFeed>("CameraFeed")
			.constructor<>()
			.property<&CameraFeed::is_active, &CameraFeed::set_active>("feed_is_active")
			.property<&CameraFeed::get_transform, &CameraFeed::set_transform>("feed_transform")
			.fun<static_cast<int32_t (CameraFeed::*)() const>(&CameraFeed::get_id)>("get_id")
			.fun<static_cast<String (CameraFeed::*)() const>(&CameraFeed::get_name)>("get_name")
			.fun<static_cast<CameraFeed::FeedPosition (CameraFeed::*)() const>(&CameraFeed::get_position)>("get_position")
			.fun<static_cast<CameraFeed::FeedDataType (CameraFeed::*)() const>(&CameraFeed::get_datatype)>("get_datatype");
}