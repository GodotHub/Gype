
#include <godot_cpp/classes/camera_feed.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CameraFeed() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CameraFeed>("CameraFeed")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<bool (CameraFeed::*)() const>(&CameraFeed::is_active), static_cast<void (CameraFeed::*)(bool)>(&CameraFeed::set_active)>((new std::string("feed_is_active"))->c_str())
			.property<static_cast<Transform2D (CameraFeed::*)() const>(&CameraFeed::get_transform), static_cast<void (CameraFeed::*)(const Transform2D &)>(&CameraFeed::set_transform)>((new std::string("feed_transform"))->c_str())
			.fun<static_cast<int32_t (CameraFeed::*)() const>(&CameraFeed::get_id)>((new std::string("get_id"))->c_str())
			.fun<static_cast<String (CameraFeed::*)() const>(&CameraFeed::get_name)>((new std::string("get_name"))->c_str())
			.fun<static_cast<CameraFeed::FeedPosition (CameraFeed::*)() const>(&CameraFeed::get_position)>((new std::string("get_position"))->c_str())
			.fun<static_cast<CameraFeed::FeedDataType (CameraFeed::*)() const>(&CameraFeed::get_datatype)>((new std::string("get_datatype"))->c_str());
	qjs::Value _FeedDataType = context->newObject();
	_FeedDataType[(new std::string("FEED_NOIMAGE"))->c_str()] = CameraFeed::FeedDataType::FEED_NOIMAGE;
	_FeedDataType[(new std::string("FEED_RGB"))->c_str()] = CameraFeed::FeedDataType::FEED_RGB;
	_FeedDataType[(new std::string("FEED_YCBCR"))->c_str()] = CameraFeed::FeedDataType::FEED_YCBCR;
	_FeedDataType[(new std::string("FEED_YCBCR_SEP"))->c_str()] = CameraFeed::FeedDataType::FEED_YCBCR_SEP;
	_module.add("FeedDataType", std::move(_FeedDataType));
	qjs::Value _FeedPosition = context->newObject();
	_FeedPosition[(new std::string("FEED_UNSPECIFIED"))->c_str()] = CameraFeed::FeedPosition::FEED_UNSPECIFIED;
	_FeedPosition[(new std::string("FEED_FRONT"))->c_str()] = CameraFeed::FeedPosition::FEED_FRONT;
	_FeedPosition[(new std::string("FEED_BACK"))->c_str()] = CameraFeed::FeedPosition::FEED_BACK;
	_module.add("FeedPosition", std::move(_FeedPosition));
}