#include <godot_cpp/classes/render_scene_data_extension.hpp>
#include <godot_cpp/variant/projection.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/render_scene_data.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RenderSceneDataExtension() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RenderSceneDataExtension>("RenderSceneDataExtension")
            .constructor<>()
            .base<RenderSceneData>()
            .fun<static_cast<Transform3D(RenderSceneDataExtension::*)()const>(&RenderSceneDataExtension::_get_cam_transform)>("_get_cam_transform")
            .fun<static_cast<Projection(RenderSceneDataExtension::*)()const>(&RenderSceneDataExtension::_get_cam_projection)>("_get_cam_projection")
            .fun<static_cast<uint32_t(RenderSceneDataExtension::*)()const>(&RenderSceneDataExtension::_get_view_count)>("_get_view_count")
            .fun<static_cast<Vector3(RenderSceneDataExtension::*)(uint32_t)const>(&RenderSceneDataExtension::_get_view_eye_offset)>("_get_view_eye_offset")
            .fun<static_cast<Projection(RenderSceneDataExtension::*)(uint32_t)const>(&RenderSceneDataExtension::_get_view_projection)>("_get_view_projection")
            .fun<static_cast<RID(RenderSceneDataExtension::*)()const>(&RenderSceneDataExtension::_get_uniform_buffer)>("_get_uniform_buffer")
;}