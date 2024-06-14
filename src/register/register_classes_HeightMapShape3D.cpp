
#include <godot_cpp/classes/height_map_shape3d.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_HeightMapShape3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<HeightMapShape3D>("HeightMapShape3D")
			.constructor<>()
			.base<Shape3D>()
			.property<static_cast<int32_t (HeightMapShape3D::*)() const>(&HeightMapShape3D::get_map_width), static_cast<void (HeightMapShape3D::*)(int32_t)>(&HeightMapShape3D::set_map_width)>((new std::string("map_width"))->c_str())
			.property<static_cast<int32_t (HeightMapShape3D::*)() const>(&HeightMapShape3D::get_map_depth), static_cast<void (HeightMapShape3D::*)(int32_t)>(&HeightMapShape3D::set_map_depth)>((new std::string("map_depth"))->c_str())
			.property<static_cast<PackedFloat32Array (HeightMapShape3D::*)() const>(&HeightMapShape3D::get_map_data), static_cast<void (HeightMapShape3D::*)(const PackedFloat32Array &)>(&HeightMapShape3D::set_map_data)>((new std::string("map_data"))->c_str())
			.fun<static_cast<double (HeightMapShape3D::*)() const>(&HeightMapShape3D::get_min_height)>((new std::string("get_min_height"))->c_str())
			.fun<static_cast<double (HeightMapShape3D::*)() const>(&HeightMapShape3D::get_max_height)>((new std::string("get_max_height"))->c_str())
			.fun<static_cast<void (HeightMapShape3D::*)(const Ref<Image> &, double, double)>(&HeightMapShape3D::update_map_data_from_image)>((new std::string("update_map_data_from_image"))->c_str());
}