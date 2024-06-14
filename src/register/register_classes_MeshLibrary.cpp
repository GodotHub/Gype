
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/mesh_library.hpp>
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MeshLibrary() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MeshLibrary>("MeshLibrary")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<void (MeshLibrary::*)(int32_t)>(&MeshLibrary::create_item)>((new std::string("create_item"))->c_str())
			.fun<static_cast<void (MeshLibrary::*)(int32_t, const String &)>(&MeshLibrary::set_item_name)>((new std::string("set_item_name"))->c_str())
			.fun<static_cast<void (MeshLibrary::*)(int32_t, const Ref<Mesh> &)>(&MeshLibrary::set_item_mesh)>((new std::string("set_item_mesh"))->c_str())
			.fun<static_cast<void (MeshLibrary::*)(int32_t, const Transform3D &)>(&MeshLibrary::set_item_mesh_transform)>((new std::string("set_item_mesh_transform"))->c_str())
			.fun<static_cast<void (MeshLibrary::*)(int32_t, const Ref<NavigationMesh> &)>(&MeshLibrary::set_item_navigation_mesh)>((new std::string("set_item_navigation_mesh"))->c_str())
			.fun<static_cast<void (MeshLibrary::*)(int32_t, const Transform3D &)>(&MeshLibrary::set_item_navigation_mesh_transform)>((new std::string("set_item_navigation_mesh_transform"))->c_str())
			.fun<static_cast<void (MeshLibrary::*)(int32_t, uint32_t)>(&MeshLibrary::set_item_navigation_layers)>((new std::string("set_item_navigation_layers"))->c_str())
			.fun<static_cast<void (MeshLibrary::*)(int32_t, const Array &)>(&MeshLibrary::set_item_shapes)>((new std::string("set_item_shapes"))->c_str())
			.fun<static_cast<void (MeshLibrary::*)(int32_t, const Ref<Texture2D> &)>(&MeshLibrary::set_item_preview)>((new std::string("set_item_preview"))->c_str())
			.fun<static_cast<String (MeshLibrary::*)(int32_t) const>(&MeshLibrary::get_item_name)>((new std::string("get_item_name"))->c_str())
			.fun<static_cast<Ref<Mesh> (MeshLibrary::*)(int32_t) const>(&MeshLibrary::get_item_mesh)>((new std::string("get_item_mesh"))->c_str())
			.fun<static_cast<Transform3D (MeshLibrary::*)(int32_t) const>(&MeshLibrary::get_item_mesh_transform)>((new std::string("get_item_mesh_transform"))->c_str())
			.fun<static_cast<Ref<NavigationMesh> (MeshLibrary::*)(int32_t) const>(&MeshLibrary::get_item_navigation_mesh)>((new std::string("get_item_navigation_mesh"))->c_str())
			.fun<static_cast<Transform3D (MeshLibrary::*)(int32_t) const>(&MeshLibrary::get_item_navigation_mesh_transform)>((new std::string("get_item_navigation_mesh_transform"))->c_str())
			.fun<static_cast<uint32_t (MeshLibrary::*)(int32_t) const>(&MeshLibrary::get_item_navigation_layers)>((new std::string("get_item_navigation_layers"))->c_str())
			.fun<static_cast<Array (MeshLibrary::*)(int32_t) const>(&MeshLibrary::get_item_shapes)>((new std::string("get_item_shapes"))->c_str())
			.fun<static_cast<Ref<Texture2D> (MeshLibrary::*)(int32_t) const>(&MeshLibrary::get_item_preview)>((new std::string("get_item_preview"))->c_str())
			.fun<static_cast<void (MeshLibrary::*)(int32_t)>(&MeshLibrary::remove_item)>((new std::string("remove_item"))->c_str())
			.fun<static_cast<int32_t (MeshLibrary::*)(const String &) const>(&MeshLibrary::find_item_by_name)>((new std::string("find_item_by_name"))->c_str())
			.fun<static_cast<void (MeshLibrary::*)()>(&MeshLibrary::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<PackedInt32Array (MeshLibrary::*)() const>(&MeshLibrary::get_item_list)>((new std::string("get_item_list"))->c_str())
			.fun<static_cast<int32_t (MeshLibrary::*)() const>(&MeshLibrary::get_last_unused_item_id)>((new std::string("get_last_unused_item_id"))->c_str());
}