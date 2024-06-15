#include <godot_cpp/classes/render_scene_buffers_configuration.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_server.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RenderSceneBuffersConfiguration() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RenderSceneBuffersConfiguration>("RenderSceneBuffersConfiguration")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<RID(RenderSceneBuffersConfiguration::*)()const>(&RenderSceneBuffersConfiguration::get_render_target),static_cast<void(RenderSceneBuffersConfiguration::*)(const RID &)>(&RenderSceneBuffersConfiguration::set_render_target)>("render_target")
            .property<static_cast<Vector2i(RenderSceneBuffersConfiguration::*)()const>(&RenderSceneBuffersConfiguration::get_internal_size),static_cast<void(RenderSceneBuffersConfiguration::*)(const Vector2i &)>(&RenderSceneBuffersConfiguration::set_internal_size)>("internal_size")
            .property<static_cast<Vector2i(RenderSceneBuffersConfiguration::*)()const>(&RenderSceneBuffersConfiguration::get_target_size),static_cast<void(RenderSceneBuffersConfiguration::*)(const Vector2i &)>(&RenderSceneBuffersConfiguration::set_target_size)>("target_size")
            .property<static_cast<uint32_t(RenderSceneBuffersConfiguration::*)()const>(&RenderSceneBuffersConfiguration::get_view_count),static_cast<void(RenderSceneBuffersConfiguration::*)(uint32_t)>(&RenderSceneBuffersConfiguration::set_view_count)>("view_count")
            .property<static_cast<RenderingServer::ViewportScaling3DMode(RenderSceneBuffersConfiguration::*)()const>(&RenderSceneBuffersConfiguration::get_scaling_3d_mode),static_cast<void(RenderSceneBuffersConfiguration::*)(RenderingServer::ViewportScaling3DMode)>(&RenderSceneBuffersConfiguration::set_scaling_3d_mode)>("scaling_3d_mode")
            .property<static_cast<RenderingServer::ViewportMSAA(RenderSceneBuffersConfiguration::*)()const>(&RenderSceneBuffersConfiguration::get_msaa_3d),static_cast<void(RenderSceneBuffersConfiguration::*)(RenderingServer::ViewportMSAA)>(&RenderSceneBuffersConfiguration::set_msaa_3d)>("msaa_3d")
            .property<static_cast<RenderingServer::ViewportScreenSpaceAA(RenderSceneBuffersConfiguration::*)()const>(&RenderSceneBuffersConfiguration::get_screen_space_aa),static_cast<void(RenderSceneBuffersConfiguration::*)(RenderingServer::ViewportScreenSpaceAA)>(&RenderSceneBuffersConfiguration::set_screen_space_aa)>("screen_space_aa")
            .property<static_cast<double(RenderSceneBuffersConfiguration::*)()const>(&RenderSceneBuffersConfiguration::get_fsr_sharpness),static_cast<void(RenderSceneBuffersConfiguration::*)(double)>(&RenderSceneBuffersConfiguration::set_fsr_sharpness)>("fsr_sharpness")
            .property<static_cast<double(RenderSceneBuffersConfiguration::*)()const>(&RenderSceneBuffersConfiguration::get_texture_mipmap_bias),static_cast<void(RenderSceneBuffersConfiguration::*)(double)>(&RenderSceneBuffersConfiguration::set_texture_mipmap_bias)>("texture_mipmap_bias")
;}