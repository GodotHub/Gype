#include <godot_cpp/classes/render_scene_data.hpp>
#include <godot_cpp/variant/projection.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RenderSceneData() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RenderSceneData>("RenderSceneData")
            .constructor<>()
            .base<Object>()
            .fun<static_cast<Transform3D(RenderSceneData::*)()const>(&RenderSceneData::get_cam_transform)>("get_cam_transform")
            .fun<static_cast<Projection(RenderSceneData::*)()const>(&RenderSceneData::get_cam_projection)>("get_cam_projection")
            .fun<static_cast<uint32_t(RenderSceneData::*)()const>(&RenderSceneData::get_view_count)>("get_view_count")
            .fun<static_cast<Vector3(RenderSceneData::*)(uint32_t)const>(&RenderSceneData::get_view_eye_offset)>("get_view_eye_offset")
            .fun<static_cast<Projection(RenderSceneData::*)(uint32_t)const>(&RenderSceneData::get_view_projection)>("get_view_projection")
            .fun<static_cast<RID(RenderSceneData::*)()const>(&RenderSceneData::get_uniform_buffer)>("get_uniform_buffer")
;}