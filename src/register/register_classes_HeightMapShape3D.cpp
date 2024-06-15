#include <godot_cpp/classes/height_map_shape3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_HeightMapShape3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<HeightMapShape3D>("HeightMapShape3D")
            .constructor<>()
            .base<Shape3D>()
            .property<static_cast<int32_t(HeightMapShape3D::*)()const>(&HeightMapShape3D::get_map_width),static_cast<void(HeightMapShape3D::*)(int32_t)>(&HeightMapShape3D::set_map_width)>("map_width")
            .property<static_cast<int32_t(HeightMapShape3D::*)()const>(&HeightMapShape3D::get_map_depth),static_cast<void(HeightMapShape3D::*)(int32_t)>(&HeightMapShape3D::set_map_depth)>("map_depth")
            .property<static_cast<PackedFloat32Array(HeightMapShape3D::*)()const>(&HeightMapShape3D::get_map_data),static_cast<void(HeightMapShape3D::*)(const PackedFloat32Array &)>(&HeightMapShape3D::set_map_data)>("map_data")
            .fun<static_cast<double(HeightMapShape3D::*)()const>(&HeightMapShape3D::get_min_height)>("get_min_height")
            .fun<static_cast<double(HeightMapShape3D::*)()const>(&HeightMapShape3D::get_max_height)>("get_max_height")
            .fun<static_cast<void(HeightMapShape3D::*)(const Ref<Image> &,double,double)>(&HeightMapShape3D::update_map_data_from_image)>("update_map_data_from_image")
;}