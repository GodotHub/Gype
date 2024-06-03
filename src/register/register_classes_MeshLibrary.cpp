#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/mesh_library.hpp>

using namespace godot;

void register_classes_MeshLibrary() {
    qjs::Context::Module &_module = _General;
    _module.class_<MeshLibrary>("MeshLibrary")
           .constructor<>()
		    .fun<static_cast<void(MeshLibrary::*)(int32_t)>(&MeshLibrary::create_item)>("create_item")
		    .fun<static_cast<void(MeshLibrary::*)(int32_t,const String &)>(&MeshLibrary::set_item_name)>("set_item_name")
		    .fun<static_cast<void(MeshLibrary::*)(int32_t,const Ref<Mesh> &)>(&MeshLibrary::set_item_mesh)>("set_item_mesh")
		    .fun<static_cast<void(MeshLibrary::*)(int32_t,const Transform3D &)>(&MeshLibrary::set_item_mesh_transform)>("set_item_mesh_transform")
		    .fun<static_cast<void(MeshLibrary::*)(int32_t,const Ref<NavigationMesh> &)>(&MeshLibrary::set_item_navigation_mesh)>("set_item_navigation_mesh")
		    .fun<static_cast<void(MeshLibrary::*)(int32_t,const Transform3D &)>(&MeshLibrary::set_item_navigation_mesh_transform)>("set_item_navigation_mesh_transform")
		    .fun<static_cast<void(MeshLibrary::*)(int32_t,uint32_t)>(&MeshLibrary::set_item_navigation_layers)>("set_item_navigation_layers")
		    .fun<static_cast<void(MeshLibrary::*)(int32_t,const Array &)>(&MeshLibrary::set_item_shapes)>("set_item_shapes")
		    .fun<static_cast<void(MeshLibrary::*)(int32_t,const Ref<Texture2D> &)>(&MeshLibrary::set_item_preview)>("set_item_preview")
		    .fun<static_cast<String(MeshLibrary::*)(int32_t)const>(&MeshLibrary::get_item_name)>("get_item_name")
		    .fun<static_cast<Ref<Mesh>(MeshLibrary::*)(int32_t)const>(&MeshLibrary::get_item_mesh)>("get_item_mesh")
		    .fun<static_cast<Transform3D(MeshLibrary::*)(int32_t)const>(&MeshLibrary::get_item_mesh_transform)>("get_item_mesh_transform")
		    .fun<static_cast<Ref<NavigationMesh>(MeshLibrary::*)(int32_t)const>(&MeshLibrary::get_item_navigation_mesh)>("get_item_navigation_mesh")
		    .fun<static_cast<Transform3D(MeshLibrary::*)(int32_t)const>(&MeshLibrary::get_item_navigation_mesh_transform)>("get_item_navigation_mesh_transform")
		    .fun<static_cast<uint32_t(MeshLibrary::*)(int32_t)const>(&MeshLibrary::get_item_navigation_layers)>("get_item_navigation_layers")
		    .fun<static_cast<Array(MeshLibrary::*)(int32_t)const>(&MeshLibrary::get_item_shapes)>("get_item_shapes")
		    .fun<static_cast<Ref<Texture2D>(MeshLibrary::*)(int32_t)const>(&MeshLibrary::get_item_preview)>("get_item_preview")
		    .fun<static_cast<void(MeshLibrary::*)(int32_t)>(&MeshLibrary::remove_item)>("remove_item")
		    .fun<static_cast<int32_t(MeshLibrary::*)(const String &)const>(&MeshLibrary::find_item_by_name)>("find_item_by_name")
		    .fun<static_cast<void(MeshLibrary::*)()>(&MeshLibrary::clear)>("clear")
		    .fun<static_cast<PackedInt32Array(MeshLibrary::*)()const>(&MeshLibrary::get_item_list)>("get_item_list")
		    .fun<static_cast<int32_t(MeshLibrary::*)()const>(&MeshLibrary::get_last_unused_item_id)>("get_last_unused_item_id")
;}