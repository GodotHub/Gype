#include <godot_cpp/classes/render_scene_buffers_rd.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/classes/rd_texture_view.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/classes/rendering_server.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RenderSceneBuffersRD() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RenderSceneBuffersRD>("RenderSceneBuffersRD")
            .constructor<>()
            .base<RenderSceneBuffers>()
            .fun<static_cast<bool(RenderSceneBuffersRD::*)(const StringName &,const StringName &)const>(&RenderSceneBuffersRD::has_texture)>("has_texture")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)(const StringName &,const StringName &,RenderingDevice::DataFormat,uint32_t,RenderingDevice::TextureSamples,const Vector2i &,uint32_t,uint32_t,bool)>(&RenderSceneBuffersRD::create_texture)>("create_texture")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)(const StringName &,const StringName &,const Ref<RDTextureFormat> &,const Ref<RDTextureView> &,bool)>(&RenderSceneBuffersRD::create_texture_from_format)>("create_texture_from_format")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)(const StringName &,const StringName &,const StringName &,const Ref<RDTextureView> &)>(&RenderSceneBuffersRD::create_texture_view)>("create_texture_view")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)(const StringName &,const StringName &)const>(&RenderSceneBuffersRD::get_texture)>("get_texture")
            .fun<static_cast<Ref<RDTextureFormat>(RenderSceneBuffersRD::*)(const StringName &,const StringName &)const>(&RenderSceneBuffersRD::get_texture_format)>("get_texture_format")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)(const StringName &,const StringName &,uint32_t,uint32_t,uint32_t,uint32_t)>(&RenderSceneBuffersRD::get_texture_slice)>("get_texture_slice")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)(const StringName &,const StringName &,uint32_t,uint32_t,uint32_t,uint32_t,const Ref<RDTextureView> &)>(&RenderSceneBuffersRD::get_texture_slice_view)>("get_texture_slice_view")
            .fun<static_cast<Vector2i(RenderSceneBuffersRD::*)(const StringName &,const StringName &,uint32_t)>(&RenderSceneBuffersRD::get_texture_slice_size)>("get_texture_slice_size")
            .fun<static_cast<void(RenderSceneBuffersRD::*)(const StringName &)>(&RenderSceneBuffersRD::clear_context)>("clear_context")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)(bool)>(&RenderSceneBuffersRD::get_color_texture)>("get_color_texture")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)(uint32_t,bool)>(&RenderSceneBuffersRD::get_color_layer)>("get_color_layer")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)(bool)>(&RenderSceneBuffersRD::get_depth_texture)>("get_depth_texture")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)(uint32_t,bool)>(&RenderSceneBuffersRD::get_depth_layer)>("get_depth_layer")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)(bool)>(&RenderSceneBuffersRD::get_velocity_texture)>("get_velocity_texture")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)(uint32_t,bool)>(&RenderSceneBuffersRD::get_velocity_layer)>("get_velocity_layer")
            .fun<static_cast<RID(RenderSceneBuffersRD::*)()const>(&RenderSceneBuffersRD::get_render_target)>("get_render_target")
            .fun<static_cast<uint32_t(RenderSceneBuffersRD::*)()const>(&RenderSceneBuffersRD::get_view_count)>("get_view_count")
            .fun<static_cast<Vector2i(RenderSceneBuffersRD::*)()const>(&RenderSceneBuffersRD::get_internal_size)>("get_internal_size")
            .fun<static_cast<RenderingServer::ViewportMSAA(RenderSceneBuffersRD::*)()const>(&RenderSceneBuffersRD::get_msaa_3d)>("get_msaa_3d")
            .fun<static_cast<bool(RenderSceneBuffersRD::*)()const>(&RenderSceneBuffersRD::get_use_taa)>("get_use_taa")
;}