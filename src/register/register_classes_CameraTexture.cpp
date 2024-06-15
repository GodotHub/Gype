#include <godot_cpp/classes/camera_texture.hpp>
#include <godot_cpp/classes/camera_server.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CameraTexture() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CameraTexture>("CameraTexture")
            .constructor<>()
            .base<Texture2D>()
            .property<static_cast<int32_t(CameraTexture::*)()const>(&CameraTexture::get_camera_feed_id),static_cast<void(CameraTexture::*)(int32_t)>(&CameraTexture::set_camera_feed_id)>("camera_feed_id")
            .property<static_cast<CameraServer::FeedImage(CameraTexture::*)()const>(&CameraTexture::get_which_feed),static_cast<void(CameraTexture::*)(CameraServer::FeedImage)>(&CameraTexture::set_which_feed)>("which_feed")
            .property<static_cast<bool(CameraTexture::*)()const>(&CameraTexture::get_camera_active),static_cast<void(CameraTexture::*)(bool)>(&CameraTexture::set_camera_active)>("camera_is_active")
;}