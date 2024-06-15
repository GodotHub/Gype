#include <godot_cpp/classes/navigation_mesh_generator.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/callable.hpp>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_NavigationMeshGenerator() {
	qjs::Value js_singleton = context->newObject();
    NavigationMeshGenerator *singleton = NavigationMeshGenerator::get_singleton();
    js_singleton.add("bake", [singleton](const Ref<NavigationMesh> & navigation_mesh,Node * root_node)->void{singleton->bake(navigation_mesh,root_node);});
    js_singleton.add("clear", [singleton](const Ref<NavigationMesh> & navigation_mesh)->void{singleton->clear(navigation_mesh);});
    js_singleton.add("parse_source_geometry_data", [singleton](const Ref<NavigationMesh> & navigation_mesh,const Ref<NavigationMeshSourceGeometryData3D> & source_geometry_data,Node * root_node,const Callable & callback)->void{singleton->parse_source_geometry_data(navigation_mesh,source_geometry_data,root_node,callback);});
    js_singleton.add("bake_from_source_geometry_data", [singleton](const Ref<NavigationMesh> & navigation_mesh,const Ref<NavigationMeshSourceGeometryData3D> & source_geometry_data,const Callable & callback)->void{singleton->bake_from_source_geometry_data(navigation_mesh,source_geometry_data,callback);});
    context->global()["NavigationMeshGenerator"] = js_singleton;

}