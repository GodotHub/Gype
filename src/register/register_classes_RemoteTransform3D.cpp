#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/remote_transform3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RemoteTransform3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<RemoteTransform3D>("RemoteTransform3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<NodePath (RemoteTransform3D::*)() const>(&RemoteTransform3D::get_remote_node), static_cast<void (RemoteTransform3D::*)(const NodePath &)>(&RemoteTransform3D::set_remote_node)>((new std::string("remote_path"))->c_str())
			.property<static_cast<bool (RemoteTransform3D::*)() const>(&RemoteTransform3D::get_use_global_coordinates), static_cast<void (RemoteTransform3D::*)(bool)>(&RemoteTransform3D::set_use_global_coordinates)>((new std::string("use_global_coordinates"))->c_str())
			.property<static_cast<bool (RemoteTransform3D::*)() const>(&RemoteTransform3D::get_update_position), static_cast<void (RemoteTransform3D::*)(bool)>(&RemoteTransform3D::set_update_position)>((new std::string("update_position"))->c_str())
			.property<static_cast<bool (RemoteTransform3D::*)() const>(&RemoteTransform3D::get_update_rotation), static_cast<void (RemoteTransform3D::*)(bool)>(&RemoteTransform3D::set_update_rotation)>((new std::string("update_rotation"))->c_str())
			.property<static_cast<bool (RemoteTransform3D::*)() const>(&RemoteTransform3D::get_update_scale), static_cast<void (RemoteTransform3D::*)(bool)>(&RemoteTransform3D::set_update_scale)>((new std::string("update_scale"))->c_str())
			.fun<static_cast<void (RemoteTransform3D::*)()>(&RemoteTransform3D::force_update_cache)>((new std::string("force_update_cache"))->c_str());
}