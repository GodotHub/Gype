
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/render_scene_data.hpp>
#include <godot_cpp/variant/projection.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RenderSceneData() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RenderSceneData>("RenderSceneData")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<Transform3D (RenderSceneData::*)() const>(&RenderSceneData::get_cam_transform)>((new std::string("get_cam_transform"))->c_str())
			.fun<static_cast<Projection (RenderSceneData::*)() const>(&RenderSceneData::get_cam_projection)>((new std::string("get_cam_projection"))->c_str())
			.fun<static_cast<uint32_t (RenderSceneData::*)() const>(&RenderSceneData::get_view_count)>((new std::string("get_view_count"))->c_str())
			.fun<static_cast<Vector3 (RenderSceneData::*)(uint32_t) const>(&RenderSceneData::get_view_eye_offset)>((new std::string("get_view_eye_offset"))->c_str())
			.fun<static_cast<Projection (RenderSceneData::*)(uint32_t) const>(&RenderSceneData::get_view_projection)>((new std::string("get_view_projection"))->c_str())
			.fun<static_cast<RID (RenderSceneData::*)() const>(&RenderSceneData::get_uniform_buffer)>((new std::string("get_uniform_buffer"))->c_str());
}