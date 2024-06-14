
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MultiMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MultiMesh>("MultiMesh")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<MultiMesh::TransformFormat (MultiMesh::*)() const>(&MultiMesh::get_transform_format), static_cast<void (MultiMesh::*)(MultiMesh::TransformFormat)>(&MultiMesh::set_transform_format)>((new std::string("transform_format"))->c_str())
			.property<static_cast<bool (MultiMesh::*)() const>(&MultiMesh::is_using_colors), static_cast<void (MultiMesh::*)(bool)>(&MultiMesh::set_use_colors)>((new std::string("use_colors"))->c_str())
			.property<static_cast<bool (MultiMesh::*)() const>(&MultiMesh::is_using_custom_data), static_cast<void (MultiMesh::*)(bool)>(&MultiMesh::set_use_custom_data)>((new std::string("use_custom_data"))->c_str())
			.property<static_cast<AABB (MultiMesh::*)() const>(&MultiMesh::get_custom_aabb), static_cast<void (MultiMesh::*)(const AABB &)>(&MultiMesh::set_custom_aabb)>((new std::string("custom_aabb"))->c_str())
			.property<static_cast<int32_t (MultiMesh::*)() const>(&MultiMesh::get_instance_count), static_cast<void (MultiMesh::*)(int32_t)>(&MultiMesh::set_instance_count)>((new std::string("instance_count"))->c_str())
			.property<static_cast<int32_t (MultiMesh::*)() const>(&MultiMesh::get_visible_instance_count), static_cast<void (MultiMesh::*)(int32_t)>(&MultiMesh::set_visible_instance_count)>((new std::string("visible_instance_count"))->c_str())
			.property<static_cast<Ref<Mesh> (MultiMesh::*)() const>(&MultiMesh::get_mesh), static_cast<void (MultiMesh::*)(const Ref<Mesh> &)>(&MultiMesh::set_mesh)>((new std::string("mesh"))->c_str())
			.property<static_cast<PackedFloat32Array (MultiMesh::*)() const>(&MultiMesh::get_buffer), static_cast<void (MultiMesh::*)(const PackedFloat32Array &)>(&MultiMesh::set_buffer)>((new std::string("buffer"))->c_str())
			.fun<static_cast<void (MultiMesh::*)(int32_t, const Transform3D &)>(&MultiMesh::set_instance_transform)>((new std::string("set_instance_transform"))->c_str())
			.fun<static_cast<void (MultiMesh::*)(int32_t, const Transform2D &)>(&MultiMesh::set_instance_transform_2d)>((new std::string("set_instance_transform_2d"))->c_str())
			.fun<static_cast<Transform3D (MultiMesh::*)(int32_t) const>(&MultiMesh::get_instance_transform)>((new std::string("get_instance_transform"))->c_str())
			.fun<static_cast<Transform2D (MultiMesh::*)(int32_t) const>(&MultiMesh::get_instance_transform_2d)>((new std::string("get_instance_transform_2d"))->c_str())
			.fun<static_cast<void (MultiMesh::*)(int32_t, const Color &)>(&MultiMesh::set_instance_color)>((new std::string("set_instance_color"))->c_str())
			.fun<static_cast<Color (MultiMesh::*)(int32_t) const>(&MultiMesh::get_instance_color)>((new std::string("get_instance_color"))->c_str())
			.fun<static_cast<void (MultiMesh::*)(int32_t, const Color &)>(&MultiMesh::set_instance_custom_data)>((new std::string("set_instance_custom_data"))->c_str())
			.fun<static_cast<Color (MultiMesh::*)(int32_t) const>(&MultiMesh::get_instance_custom_data)>((new std::string("get_instance_custom_data"))->c_str())
			.fun<static_cast<AABB (MultiMesh::*)() const>(&MultiMesh::get_aabb)>((new std::string("get_aabb"))->c_str());
	qjs::Value _TransformFormat = context->newObject();
	_TransformFormat[(new std::string("TRANSFORM_2D"))->c_str()] = MultiMesh::TransformFormat::TRANSFORM_2D;
	_TransformFormat[(new std::string("TRANSFORM_3D"))->c_str()] = MultiMesh::TransformFormat::TRANSFORM_3D;
	_module.add("TransformFormat", std::move(_TransformFormat));
}