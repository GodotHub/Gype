#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/render_scene_buffers_configuration.hpp>
#include <godot_cpp/classes/render_scene_buffers_extension.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RenderSceneBuffersExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RenderSceneBuffersExtension>("RenderSceneBuffersExtension")
			.constructor<>()
			.base<RenderSceneBuffers>()
			.fun<static_cast<void (RenderSceneBuffersExtension::*)(const Ref<RenderSceneBuffersConfiguration> &)>(&RenderSceneBuffersExtension::_configure)>((new std::string("_configure"))->c_str())
			.fun<static_cast<void (RenderSceneBuffersExtension::*)(double)>(&RenderSceneBuffersExtension::_set_fsr_sharpness)>((new std::string("_set_fsr_sharpness"))->c_str())
			.fun<static_cast<void (RenderSceneBuffersExtension::*)(double)>(&RenderSceneBuffersExtension::_set_texture_mipmap_bias)>((new std::string("_set_texture_mipmap_bias"))->c_str())
			.fun<static_cast<void (RenderSceneBuffersExtension::*)(bool)>(&RenderSceneBuffersExtension::_set_use_debanding)>((new std::string("_set_use_debanding"))->c_str());
}