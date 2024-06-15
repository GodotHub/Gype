#include <godot_cpp/classes/remote_transform3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/node_path.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RemoteTransform3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<RemoteTransform3D>("RemoteTransform3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<NodePath(RemoteTransform3D::*)()const>(&RemoteTransform3D::get_remote_node),static_cast<void(RemoteTransform3D::*)(const NodePath &)>(&RemoteTransform3D::set_remote_node)>("remote_path")
            .property<static_cast<bool(RemoteTransform3D::*)()const>(&RemoteTransform3D::get_use_global_coordinates),static_cast<void(RemoteTransform3D::*)(bool)>(&RemoteTransform3D::set_use_global_coordinates)>("use_global_coordinates")
            .property<static_cast<bool(RemoteTransform3D::*)()const>(&RemoteTransform3D::get_update_position),static_cast<void(RemoteTransform3D::*)(bool)>(&RemoteTransform3D::set_update_position)>("update_position")
            .property<static_cast<bool(RemoteTransform3D::*)()const>(&RemoteTransform3D::get_update_rotation),static_cast<void(RemoteTransform3D::*)(bool)>(&RemoteTransform3D::set_update_rotation)>("update_rotation")
            .property<static_cast<bool(RemoteTransform3D::*)()const>(&RemoteTransform3D::get_update_scale),static_cast<void(RemoteTransform3D::*)(bool)>(&RemoteTransform3D::set_update_scale)>("update_scale")
            .fun<static_cast<void(RemoteTransform3D::*)()>(&RemoteTransform3D::force_update_cache)>("force_update_cache")
;}