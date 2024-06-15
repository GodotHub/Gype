#include <godot_cpp/classes/render_data.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/render_scene_data.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RenderData() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RenderData>("RenderData")
            .constructor<>()
            .base<Object>()
            .fun<static_cast<Ref<RenderSceneBuffers>(RenderData::*)()const>(&RenderData::get_render_scene_buffers)>("get_render_scene_buffers")
            .fun<static_cast<RenderSceneData *(RenderData::*)()const>(&RenderData::get_render_scene_data)>("get_render_scene_data")
            .fun<static_cast<RID(RenderData::*)()const>(&RenderData::get_environment)>("get_environment")
            .fun<static_cast<RID(RenderData::*)()const>(&RenderData::get_camera_attributes)>("get_camera_attributes")
;}