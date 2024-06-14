
#include <godot_cpp/classes/camera_feed.hpp>
#include <godot_cpp/classes/camera_server.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_CameraServer() {
	qjs::Value js_singleton = context->newObject();
	CameraServer *singleton = CameraServer::get_singleton();
	js_singleton.add((new std::string("get_feed"))->c_str(), [singleton](int32_t index) -> Ref<CameraFeed> { return singleton->get_feed(index); });
	js_singleton.add((new std::string("get_feed_count"))->c_str(), [singleton]() -> int64_t { return singleton->get_feed_count(); });
	js_singleton.add((new std::string("feeds"))->c_str(), [singleton]() -> TypedArray<CameraFeed> { return singleton->feeds(); });
	js_singleton.add((new std::string("add_feed"))->c_str(), [singleton](const Ref<CameraFeed> &feed) -> void { singleton->add_feed(feed); });
	js_singleton.add((new std::string("remove_feed"))->c_str(), [singleton](const Ref<CameraFeed> &feed) -> void { singleton->remove_feed(feed); });
	context->global()[(new std::string("CameraServer"))->c_str()] = js_singleton;

	qjs::Value _FeedImage = context->newObject();
	_FeedImage[(new std::string("FEED_RGBA_IMAGE"))->c_str()] = CameraServer::FeedImage::FEED_RGBA_IMAGE;
	_FeedImage[(new std::string("FEED_YCBCR_IMAGE"))->c_str()] = CameraServer::FeedImage::FEED_YCBCR_IMAGE;
	_FeedImage[(new std::string("FEED_Y_IMAGE"))->c_str()] = CameraServer::FeedImage::FEED_Y_IMAGE;
	_FeedImage[(new std::string("FEED_CBCR_IMAGE"))->c_str()] = CameraServer::FeedImage::FEED_CBCR_IMAGE;
	js_singleton[(new std::string("FeedImage"))->c_str()] = _FeedImage;
}