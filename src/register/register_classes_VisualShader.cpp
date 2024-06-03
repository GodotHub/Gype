#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/visual_shader.hpp>

using namespace godot;

void register_classes_VisualShader() {
    qjs::Context::Module &_module = _General;
    _module.class_<VisualShader>("VisualShader")
           .constructor<>()
           .property<VisualShader::get_graph_offset, VisualShader::set_graph_offset>("graph_offset")
		    .fun<static_cast<void(VisualShader::*)(Shader::Mode)>(&VisualShader::set_mode)>("set_mode")
		    .fun<static_cast<void(VisualShader::*)(VisualShader::Type,const Ref<VisualShaderNode> &,const Vector2 &,int32_t)>(&VisualShader::add_node)>("add_node")
		    .fun<static_cast<Ref<VisualShaderNode>(VisualShader::*)(VisualShader::Type,int32_t)const>(&VisualShader::get_node)>("get_node")
		    .fun<static_cast<void(VisualShader::*)(VisualShader::Type,int32_t,const Vector2 &)>(&VisualShader::set_node_position)>("set_node_position")
		    .fun<static_cast<Vector2(VisualShader::*)(VisualShader::Type,int32_t)const>(&VisualShader::get_node_position)>("get_node_position")
		    .fun<static_cast<PackedInt32Array(VisualShader::*)(VisualShader::Type)const>(&VisualShader::get_node_list)>("get_node_list")
		    .fun<static_cast<int32_t(VisualShader::*)(VisualShader::Type)const>(&VisualShader::get_valid_node_id)>("get_valid_node_id")
		    .fun<static_cast<void(VisualShader::*)(VisualShader::Type,int32_t)>(&VisualShader::remove_node)>("remove_node")
		    .fun<static_cast<void(VisualShader::*)(VisualShader::Type,int32_t,const StringName &)>(&VisualShader::replace_node)>("replace_node")
		    .fun<static_cast<bool(VisualShader::*)(VisualShader::Type,int32_t,int32_t,int32_t,int32_t)const>(&VisualShader::is_node_connection)>("is_node_connection")
		    .fun<static_cast<bool(VisualShader::*)(VisualShader::Type,int32_t,int32_t,int32_t,int32_t)const>(&VisualShader::can_connect_nodes)>("can_connect_nodes")
		    .fun<static_cast<Error(VisualShader::*)(VisualShader::Type,int32_t,int32_t,int32_t,int32_t)>(&VisualShader::connect_nodes)>("connect_nodes")
		    .fun<static_cast<void(VisualShader::*)(VisualShader::Type,int32_t,int32_t,int32_t,int32_t)>(&VisualShader::disconnect_nodes)>("disconnect_nodes")
		    .fun<static_cast<void(VisualShader::*)(VisualShader::Type,int32_t,int32_t,int32_t,int32_t)>(&VisualShader::connect_nodes_forced)>("connect_nodes_forced")
		    .fun<static_cast<TypedArray<Dictionary>(VisualShader::*)(VisualShader::Type)const>(&VisualShader::get_node_connections)>("get_node_connections")
		    .fun<static_cast<void(VisualShader::*)(const String &,VisualShader::VaryingMode,VisualShader::VaryingType)>(&VisualShader::add_varying)>("add_varying")
		    .fun<static_cast<void(VisualShader::*)(const String &)>(&VisualShader::remove_varying)>("remove_varying")
		    .fun<static_cast<bool(VisualShader::*)(const String &)const>(&VisualShader::has_varying)>("has_varying")
;}