#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/multi_mesh.hpp>

using namespace godot;

void register_classes_MultiMesh() {
    qjs::Context::Module &_module = _General;
    _module.class_<MultiMesh>("MultiMesh")
           .constructor<>()
           .property<MultiMesh::get_transform_format, MultiMesh::set_transform_format>("transform_format")
           .property<MultiMesh::is_using_colors, MultiMesh::set_use_colors>("use_colors")
           .property<MultiMesh::is_using_custom_data, MultiMesh::set_use_custom_data>("use_custom_data")
           .property<MultiMesh::get_instance_count, MultiMesh::set_instance_count>("instance_count")
           .property<MultiMesh::get_visible_instance_count, MultiMesh::set_visible_instance_count>("visible_instance_count")
           .property<MultiMesh::get_mesh, MultiMesh::set_mesh>("mesh")
           .property<MultiMesh::get_buffer, MultiMesh::set_buffer>("buffer")
           .property<MultiMesh::_get_transform_array, MultiMesh::_set_transform_array>("transform_array")
           .property<MultiMesh::_get_transform_2d_array, MultiMesh::_set_transform_2d_array>("transform_2d_array")
           .property<MultiMesh::_get_color_array, MultiMesh::_set_color_array>("color_array")
           .property<MultiMesh::_get_custom_data_array, MultiMesh::_set_custom_data_array>("custom_data_array")
		    .fun<static_cast<void(MultiMesh::*)(int32_t,const Transform3D &)>(&MultiMesh::set_instance_transform)>("set_instance_transform")
		    .fun<static_cast<void(MultiMesh::*)(int32_t,const Transform2D &)>(&MultiMesh::set_instance_transform_2d)>("set_instance_transform_2d")
		    .fun<static_cast<Transform3D(MultiMesh::*)(int32_t)const>(&MultiMesh::get_instance_transform)>("get_instance_transform")
		    .fun<static_cast<Transform2D(MultiMesh::*)(int32_t)const>(&MultiMesh::get_instance_transform_2d)>("get_instance_transform_2d")
		    .fun<static_cast<void(MultiMesh::*)(int32_t,const Color &)>(&MultiMesh::set_instance_color)>("set_instance_color")
		    .fun<static_cast<Color(MultiMesh::*)(int32_t)const>(&MultiMesh::get_instance_color)>("get_instance_color")
		    .fun<static_cast<void(MultiMesh::*)(int32_t,const Color &)>(&MultiMesh::set_instance_custom_data)>("set_instance_custom_data")
		    .fun<static_cast<Color(MultiMesh::*)(int32_t)const>(&MultiMesh::get_instance_custom_data)>("get_instance_custom_data")
		    .fun<static_cast<AABB(MultiMesh::*)()const>(&MultiMesh::get_aabb)>("get_aabb")
;}