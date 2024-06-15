#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MultiMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<MultiMesh>("MultiMesh")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<MultiMesh::TransformFormat(MultiMesh::*)()const>(&MultiMesh::get_transform_format),static_cast<void(MultiMesh::*)(MultiMesh::TransformFormat)>(&MultiMesh::set_transform_format)>("transform_format")
            .property<static_cast<bool(MultiMesh::*)()const>(&MultiMesh::is_using_colors),static_cast<void(MultiMesh::*)(bool)>(&MultiMesh::set_use_colors)>("use_colors")
            .property<static_cast<bool(MultiMesh::*)()const>(&MultiMesh::is_using_custom_data),static_cast<void(MultiMesh::*)(bool)>(&MultiMesh::set_use_custom_data)>("use_custom_data")
            .property<static_cast<AABB(MultiMesh::*)()const>(&MultiMesh::get_custom_aabb),static_cast<void(MultiMesh::*)(const AABB &)>(&MultiMesh::set_custom_aabb)>("custom_aabb")
            .property<static_cast<int32_t(MultiMesh::*)()const>(&MultiMesh::get_instance_count),static_cast<void(MultiMesh::*)(int32_t)>(&MultiMesh::set_instance_count)>("instance_count")
            .property<static_cast<int32_t(MultiMesh::*)()const>(&MultiMesh::get_visible_instance_count),static_cast<void(MultiMesh::*)(int32_t)>(&MultiMesh::set_visible_instance_count)>("visible_instance_count")
            .property<static_cast<Ref<Mesh>(MultiMesh::*)()const>(&MultiMesh::get_mesh),static_cast<void(MultiMesh::*)(const Ref<Mesh> &)>(&MultiMesh::set_mesh)>("mesh")
            .property<static_cast<PackedFloat32Array(MultiMesh::*)()const>(&MultiMesh::get_buffer),static_cast<void(MultiMesh::*)(const PackedFloat32Array &)>(&MultiMesh::set_buffer)>("buffer")
            .fun<static_cast<void(MultiMesh::*)(int32_t,const Transform3D &)>(&MultiMesh::set_instance_transform)>("set_instance_transform")
            .fun<static_cast<void(MultiMesh::*)(int32_t,const Transform2D &)>(&MultiMesh::set_instance_transform_2d)>("set_instance_transform_2d")
            .fun<static_cast<Transform3D(MultiMesh::*)(int32_t)const>(&MultiMesh::get_instance_transform)>("get_instance_transform")
            .fun<static_cast<Transform2D(MultiMesh::*)(int32_t)const>(&MultiMesh::get_instance_transform_2d)>("get_instance_transform_2d")
            .fun<static_cast<void(MultiMesh::*)(int32_t,const Color &)>(&MultiMesh::set_instance_color)>("set_instance_color")
            .fun<static_cast<Color(MultiMesh::*)(int32_t)const>(&MultiMesh::get_instance_color)>("get_instance_color")
            .fun<static_cast<void(MultiMesh::*)(int32_t,const Color &)>(&MultiMesh::set_instance_custom_data)>("set_instance_custom_data")
            .fun<static_cast<Color(MultiMesh::*)(int32_t)const>(&MultiMesh::get_instance_custom_data)>("get_instance_custom_data")
            .fun<static_cast<AABB(MultiMesh::*)()const>(&MultiMesh::get_aabb)>("get_aabb")
;    qjs::Value _TransformFormat = context->newObject();
    _TransformFormat["TRANSFORM_2D"] = MultiMesh::TransformFormat::TRANSFORM_2D;
    _TransformFormat["TRANSFORM_3D"] = MultiMesh::TransformFormat::TRANSFORM_3D;
    _module.add("TransformFormat", std::move(_TransformFormat));
}