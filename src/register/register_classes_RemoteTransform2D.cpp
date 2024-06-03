#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/remote_transform2d.hpp>

using namespace godot;

void register_classes_RemoteTransform2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<RemoteTransform2D>("RemoteTransform2D")
           .constructor<>()
           .property<RemoteTransform2D::get_remote_node, RemoteTransform2D::set_remote_node>("remote_path")
           .property<RemoteTransform2D::get_use_global_coordinates, RemoteTransform2D::set_use_global_coordinates>("use_global_coordinates")
           .property<RemoteTransform2D::get_update_position, RemoteTransform2D::set_update_position>("update_position")
           .property<RemoteTransform2D::get_update_rotation, RemoteTransform2D::set_update_rotation>("update_rotation")
           .property<RemoteTransform2D::get_update_scale, RemoteTransform2D::set_update_scale>("update_scale")
		    .fun<static_cast<void(RemoteTransform2D::*)()>(&RemoteTransform2D::force_update_cache)>("force_update_cache")
;}