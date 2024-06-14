#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/render_scene_buffers_configuration.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RenderSceneBuffers() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RenderSceneBuffers>("RenderSceneBuffers")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (RenderSceneBuffers::*)(const Ref<RenderSceneBuffersConfiguration> &)>(&RenderSceneBuffers::configure)>((new std::string("configure"))->c_str());
}