#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/xr_face_modifier3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRFaceModifier3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<XRFaceModifier3D>("XRFaceModifier3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<StringName (XRFaceModifier3D::*)() const>(&XRFaceModifier3D::get_face_tracker), static_cast<void (XRFaceModifier3D::*)(const StringName &)>(&XRFaceModifier3D::set_face_tracker)>((new std::string("face_tracker"))->c_str())
			.property<static_cast<NodePath (XRFaceModifier3D::*)() const>(&XRFaceModifier3D::get_target), static_cast<void (XRFaceModifier3D::*)(const NodePath &)>(&XRFaceModifier3D::set_target)>((new std::string("target"))->c_str());
}