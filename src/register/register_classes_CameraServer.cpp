#include <godot_cpp/classes/camera_feed.hpp>
#include <godot_cpp/classes/camera_server.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CameraServer() {
	qjs::Context::Module &_module = _General;
	_module.class_<CameraServer>("CameraServer")
			.constructor<>()
			.fun<static_cast<Ref<CameraFeed> (CameraServer::*)(int32_t)>(&CameraServer::get_feed)>("get_feed")
			.fun<static_cast<int32_t (CameraServer::*)()>(&CameraServer::get_feed_count)>("get_feed_count")
			.fun<static_cast<TypedArray<CameraFeed> (CameraServer::*)()>(&CameraServer::feeds)>("feeds")
			.fun<static_cast<void (CameraServer::*)(const Ref<CameraFeed> &)>(&CameraServer::add_feed)>("add_feed")
			.fun<static_cast<void (CameraServer::*)(const Ref<CameraFeed> &)>(&CameraServer::remove_feed)>("remove_feed");
}