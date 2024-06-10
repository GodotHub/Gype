#include <godot_cpp/classes/placeholder_mesh.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PlaceholderMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PlaceholderMesh>("PlaceholderMesh")
			.constructor<>()
			.property<&PlaceholderMesh::get_aabb, &PlaceholderMesh::set_aabb>("aabb");
}