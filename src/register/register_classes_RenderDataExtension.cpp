#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/render_data.hpp>
#include <godot_cpp/classes/render_data_extension.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/render_scene_data.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RenderDataExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RenderDataExtension>("RenderDataExtension")
			.constructor<>()
			.base<RenderData>()
			.fun<static_cast<Ref<RenderSceneBuffers> (RenderDataExtension::*)() const>(&RenderDataExtension::_get_render_scene_buffers)>((new std::string("_get_render_scene_buffers"))->c_str())
			.fun<static_cast<RenderSceneData *(RenderDataExtension::*)() const>(&RenderDataExtension::_get_render_scene_data)>((new std::string("_get_render_scene_data"))->c_str())
			.fun<static_cast<RID (RenderDataExtension::*)() const>(&RenderDataExtension::_get_environment)>((new std::string("_get_environment"))->c_str())
			.fun<static_cast<RID (RenderDataExtension::*)() const>(&RenderDataExtension::_get_camera_attributes)>((new std::string("_get_camera_attributes"))->c_str());
}