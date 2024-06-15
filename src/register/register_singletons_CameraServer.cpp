#include <godot_cpp/classes/camera_server.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/camera_feed.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_CameraServer() {
	qjs::Value js_singleton = context->newObject();
    CameraServer *singleton = CameraServer::get_singleton();
    js_singleton.add("get_feed", [singleton](int32_t index)->Ref<CameraFeed>{return singleton->get_feed(index);});
    js_singleton.add("get_feed_count", [singleton]()->int64_t{return singleton->get_feed_count();});
    js_singleton.add("feeds", [singleton]()->TypedArray<CameraFeed>{return singleton->feeds();});
    js_singleton.add("add_feed", [singleton](const Ref<CameraFeed> & feed)->void{singleton->add_feed(feed);});
    js_singleton.add("remove_feed", [singleton](const Ref<CameraFeed> & feed)->void{singleton->remove_feed(feed);});
    context->global()["CameraServer"] = js_singleton;

    qjs::Value _FeedImage = context->newObject();
    _FeedImage["FEED_RGBA_IMAGE"] = CameraServer::FeedImage::FEED_RGBA_IMAGE;
    _FeedImage["FEED_YCBCR_IMAGE"] = CameraServer::FeedImage::FEED_YCBCR_IMAGE;
    _FeedImage["FEED_Y_IMAGE"] = CameraServer::FeedImage::FEED_Y_IMAGE;
    _FeedImage["FEED_CBCR_IMAGE"] = CameraServer::FeedImage::FEED_CBCR_IMAGE;
    js_singleton["FeedImage"] = _FeedImage;
}