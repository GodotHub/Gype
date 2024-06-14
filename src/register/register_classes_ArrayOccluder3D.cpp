#include <godot_cpp/classes/array_occluder3d.hpp>
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ArrayOccluder3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ArrayOccluder3D>("ArrayOccluder3D")
			.constructor<>()
			.base<Occluder3D>()
			.property<static_cast<void (ArrayOccluder3D::*)(const PackedVector3Array &)>(&ArrayOccluder3D::set_vertices)>((new std::string("{'name': 'set_vertices', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 334873810, 'arguments': [{'name': 'vertices', 'type': 'PackedVector3Array'}]}"))->c_str())
			.property<static_cast<void (ArrayOccluder3D::*)(const PackedInt32Array &)>(&ArrayOccluder3D::set_indices)>((new std::string("{'name': 'set_indices', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 3614634198, 'arguments': [{'name': 'indices', 'type': 'PackedInt32Array'}]}"))->c_str())
			.fun<static_cast<void (ArrayOccluder3D::*)(const PackedVector3Array &, const PackedInt32Array &)>(&ArrayOccluder3D::set_arrays)>((new std::string("set_arrays"))->c_str());
}