#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Occluder3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Occluder3D>("Occluder3D")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<PackedVector3Array (Occluder3D::*)() const>(&Occluder3D::get_vertices)>((new std::string("get_vertices"))->c_str())
			.fun<static_cast<PackedInt32Array (Occluder3D::*)() const>(&Occluder3D::get_indices)>((new std::string("get_indices"))->c_str());
}