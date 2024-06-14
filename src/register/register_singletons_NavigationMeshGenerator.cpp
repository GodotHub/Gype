#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_mesh_generator.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_NavigationMeshGenerator() {
	qjs::Value js_singleton = context->newObject();
	NavigationMeshGenerator *singleton = NavigationMeshGenerator::get_singleton();
	js_singleton.add((new std::string("bake"))->c_str(), [singleton](const Ref<NavigationMesh> &navigation_mesh, Node *root_node) -> void { singleton->bake(navigation_mesh, root_node); });
	js_singleton.add((new std::string("clear"))->c_str(), [singleton](const Ref<NavigationMesh> &navigation_mesh) -> void { singleton->clear(navigation_mesh); });
	js_singleton.add((new std::string("parse_source_geometry_data"))->c_str(), [singleton](const Ref<NavigationMesh> &navigation_mesh, const Ref<NavigationMeshSourceGeometryData3D> &source_geometry_data, Node *root_node, const Callable &callback) -> void { singleton->parse_source_geometry_data(navigation_mesh, source_geometry_data, root_node, callback); });
	js_singleton.add((new std::string("bake_from_source_geometry_data"))->c_str(), [singleton](const Ref<NavigationMesh> &navigation_mesh, const Ref<NavigationMeshSourceGeometryData3D> &source_geometry_data, const Callable &callback) -> void { singleton->bake_from_source_geometry_data(navigation_mesh, source_geometry_data, callback); });
	context->global()[(new std::string("NavigationMeshGenerator"))->c_str()] = js_singleton;
}