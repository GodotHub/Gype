#include <godot_cpp/classes/camera_feed.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CameraFeed() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CameraFeed>("CameraFeed")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<bool(CameraFeed::*)()const>(&CameraFeed::is_active),static_cast<void(CameraFeed::*)(bool)>(&CameraFeed::set_active)>("feed_is_active")
            .property<static_cast<Transform2D(CameraFeed::*)()const>(&CameraFeed::get_transform),static_cast<void(CameraFeed::*)(const Transform2D &)>(&CameraFeed::set_transform)>("feed_transform")
            .fun<static_cast<int32_t(CameraFeed::*)()const>(&CameraFeed::get_id)>("get_id")
            .fun<static_cast<String(CameraFeed::*)()const>(&CameraFeed::get_name)>("get_name")
            .fun<static_cast<CameraFeed::FeedPosition(CameraFeed::*)()const>(&CameraFeed::get_position)>("get_position")
            .fun<static_cast<CameraFeed::FeedDataType(CameraFeed::*)()const>(&CameraFeed::get_datatype)>("get_datatype")
;    qjs::Value _FeedDataType = context->newObject();
    _FeedDataType["FEED_NOIMAGE"] = CameraFeed::FeedDataType::FEED_NOIMAGE;
    _FeedDataType["FEED_RGB"] = CameraFeed::FeedDataType::FEED_RGB;
    _FeedDataType["FEED_YCBCR"] = CameraFeed::FeedDataType::FEED_YCBCR;
    _FeedDataType["FEED_YCBCR_SEP"] = CameraFeed::FeedDataType::FEED_YCBCR_SEP;
    _module.add("FeedDataType", std::move(_FeedDataType));
    qjs::Value _FeedPosition = context->newObject();
    _FeedPosition["FEED_UNSPECIFIED"] = CameraFeed::FeedPosition::FEED_UNSPECIFIED;
    _FeedPosition["FEED_FRONT"] = CameraFeed::FeedPosition::FEED_FRONT;
    _FeedPosition["FEED_BACK"] = CameraFeed::FeedPosition::FEED_BACK;
    _module.add("FeedPosition", std::move(_FeedPosition));
}