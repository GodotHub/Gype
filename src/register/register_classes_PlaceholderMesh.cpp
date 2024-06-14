#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/placeholder_mesh.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PlaceholderMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PlaceholderMesh>("PlaceholderMesh")
			.constructor<>()
			.base<Mesh>()
			.property<static_cast<void (PlaceholderMesh::*)(const AABB &)>(&PlaceholderMesh::set_aabb)>((new std::string("{'name': 'set_aabb', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 259215842, 'arguments': [{'name': 'aabb', 'type': 'AABB'}]}"))->c_str());
}