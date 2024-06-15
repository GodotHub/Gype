#include <godot_cpp/classes/render_data_extension.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/render_data.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/render_scene_data.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RenderDataExtension() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RenderDataExtension>("RenderDataExtension")
            .constructor<>()
            .base<RenderData>()
            .fun<static_cast<Ref<RenderSceneBuffers>(RenderDataExtension::*)()const>(&RenderDataExtension::_get_render_scene_buffers)>("_get_render_scene_buffers")
            .fun<static_cast<RenderSceneData *(RenderDataExtension::*)()const>(&RenderDataExtension::_get_render_scene_data)>("_get_render_scene_data")
            .fun<static_cast<RID(RenderDataExtension::*)()const>(&RenderDataExtension::_get_environment)>("_get_environment")
            .fun<static_cast<RID(RenderDataExtension::*)()const>(&RenderDataExtension::_get_camera_attributes)>("_get_camera_attributes")
;}