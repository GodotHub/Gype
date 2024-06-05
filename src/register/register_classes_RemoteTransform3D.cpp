#include <godot_cpp/classes/remote_transform3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_RemoteTransform3D() {
	qjs::Context::Module &_module = _Node3D;
	_module.class_<RemoteTransform3D>("RemoteTransform3D")
			.constructor<>()
			.property<&RemoteTransform3D::get_remote_node, &RemoteTransform3D::set_remote_node>("remote_path")
			.property<&RemoteTransform3D::get_use_global_coordinates, &RemoteTransform3D::set_use_global_coordinates>("use_global_coordinates")
			.property<&RemoteTransform3D::get_update_position, &RemoteTransform3D::set_update_position>("update_position")
			.property<&RemoteTransform3D::get_update_rotation, &RemoteTransform3D::set_update_rotation>("update_rotation")
			.property<&RemoteTransform3D::get_update_scale, &RemoteTransform3D::set_update_scale>("update_scale")
			.fun<static_cast<void (RemoteTransform3D::*)()>(&RemoteTransform3D::force_update_cache)>("force_update_cache");
}