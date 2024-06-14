
#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/classes/rd_texture_view.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/render_scene_buffers_rd.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/classes/rendering_server.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RenderSceneBuffersRD() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RenderSceneBuffersRD>("RenderSceneBuffersRD")
			.constructor<>()
			.base<RenderSceneBuffers>()
			.fun<static_cast<bool (RenderSceneBuffersRD::*)(const StringName &, const StringName &) const>(&RenderSceneBuffersRD::has_texture)>((new std::string("has_texture"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)(const StringName &, const StringName &, RenderingDevice::DataFormat, uint32_t, RenderingDevice::TextureSamples, const Vector2i &, uint32_t, uint32_t, bool)>(&RenderSceneBuffersRD::create_texture)>((new std::string("create_texture"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)(const StringName &, const StringName &, const Ref<RDTextureFormat> &, const Ref<RDTextureView> &, bool)>(&RenderSceneBuffersRD::create_texture_from_format)>((new std::string("create_texture_from_format"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)(const StringName &, const StringName &, const StringName &, const Ref<RDTextureView> &)>(&RenderSceneBuffersRD::create_texture_view)>((new std::string("create_texture_view"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)(const StringName &, const StringName &) const>(&RenderSceneBuffersRD::get_texture)>((new std::string("get_texture"))->c_str())
			.fun<static_cast<Ref<RDTextureFormat> (RenderSceneBuffersRD::*)(const StringName &, const StringName &) const>(&RenderSceneBuffersRD::get_texture_format)>((new std::string("get_texture_format"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)(const StringName &, const StringName &, uint32_t, uint32_t, uint32_t, uint32_t)>(&RenderSceneBuffersRD::get_texture_slice)>((new std::string("get_texture_slice"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)(const StringName &, const StringName &, uint32_t, uint32_t, uint32_t, uint32_t, const Ref<RDTextureView> &)>(&RenderSceneBuffersRD::get_texture_slice_view)>((new std::string("get_texture_slice_view"))->c_str())
			.fun<static_cast<Vector2i (RenderSceneBuffersRD::*)(const StringName &, const StringName &, uint32_t)>(&RenderSceneBuffersRD::get_texture_slice_size)>((new std::string("get_texture_slice_size"))->c_str())
			.fun<static_cast<void (RenderSceneBuffersRD::*)(const StringName &)>(&RenderSceneBuffersRD::clear_context)>((new std::string("clear_context"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)(bool)>(&RenderSceneBuffersRD::get_color_texture)>((new std::string("get_color_texture"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)(uint32_t, bool)>(&RenderSceneBuffersRD::get_color_layer)>((new std::string("get_color_layer"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)(bool)>(&RenderSceneBuffersRD::get_depth_texture)>((new std::string("get_depth_texture"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)(uint32_t, bool)>(&RenderSceneBuffersRD::get_depth_layer)>((new std::string("get_depth_layer"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)(bool)>(&RenderSceneBuffersRD::get_velocity_texture)>((new std::string("get_velocity_texture"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)(uint32_t, bool)>(&RenderSceneBuffersRD::get_velocity_layer)>((new std::string("get_velocity_layer"))->c_str())
			.fun<static_cast<RID (RenderSceneBuffersRD::*)() const>(&RenderSceneBuffersRD::get_render_target)>((new std::string("get_render_target"))->c_str())
			.fun<static_cast<uint32_t (RenderSceneBuffersRD::*)() const>(&RenderSceneBuffersRD::get_view_count)>((new std::string("get_view_count"))->c_str())
			.fun<static_cast<Vector2i (RenderSceneBuffersRD::*)() const>(&RenderSceneBuffersRD::get_internal_size)>((new std::string("get_internal_size"))->c_str())
			.fun<static_cast<RenderingServer::ViewportMSAA (RenderSceneBuffersRD::*)() const>(&RenderSceneBuffersRD::get_msaa_3d)>((new std::string("get_msaa_3d"))->c_str())
			.fun<static_cast<bool (RenderSceneBuffersRD::*)() const>(&RenderSceneBuffersRD::get_use_taa)>((new std::string("get_use_taa"))->c_str());
}