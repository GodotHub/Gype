
#include <godot_cpp/classes/render_scene_data.hpp>
#include <godot_cpp/classes/render_scene_data_extension.hpp>
#include <godot_cpp/variant/projection.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RenderSceneDataExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RenderSceneDataExtension>("RenderSceneDataExtension")
			.constructor<>()
			.base<RenderSceneData>()
			.fun<static_cast<Transform3D (RenderSceneDataExtension::*)() const>(&RenderSceneDataExtension::_get_cam_transform)>((new std::string("_get_cam_transform"))->c_str())
			.fun<static_cast<Projection (RenderSceneDataExtension::*)() const>(&RenderSceneDataExtension::_get_cam_projection)>((new std::string("_get_cam_projection"))->c_str())
			.fun<static_cast<uint32_t (RenderSceneDataExtension::*)() const>(&RenderSceneDataExtension::_get_view_count)>((new std::string("_get_view_count"))->c_str())
			.fun<static_cast<Vector3 (RenderSceneDataExtension::*)(uint32_t) const>(&RenderSceneDataExtension::_get_view_eye_offset)>((new std::string("_get_view_eye_offset"))->c_str())
			.fun<static_cast<Projection (RenderSceneDataExtension::*)(uint32_t) const>(&RenderSceneDataExtension::_get_view_projection)>((new std::string("_get_view_projection"))->c_str())
			.fun<static_cast<RID (RenderSceneDataExtension::*)() const>(&RenderSceneDataExtension::_get_uniform_buffer)>((new std::string("_get_uniform_buffer"))->c_str());
}