
#include <godot_cpp/classes/navigation_path_query_parameters3d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationPathQueryParameters3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<NavigationPathQueryParameters3D>("NavigationPathQueryParameters3D")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<RID (NavigationPathQueryParameters3D::*)() const>(&NavigationPathQueryParameters3D::get_map), static_cast<void (NavigationPathQueryParameters3D::*)(const RID &)>(&NavigationPathQueryParameters3D::set_map)>((new std::string("map"))->c_str())
			.property<static_cast<Vector3 (NavigationPathQueryParameters3D::*)() const>(&NavigationPathQueryParameters3D::get_start_position), static_cast<void (NavigationPathQueryParameters3D::*)(const Vector3 &)>(&NavigationPathQueryParameters3D::set_start_position)>((new std::string("start_position"))->c_str())
			.property<static_cast<Vector3 (NavigationPathQueryParameters3D::*)() const>(&NavigationPathQueryParameters3D::get_target_position), static_cast<void (NavigationPathQueryParameters3D::*)(const Vector3 &)>(&NavigationPathQueryParameters3D::set_target_position)>((new std::string("target_position"))->c_str())
			.property<static_cast<uint32_t (NavigationPathQueryParameters3D::*)() const>(&NavigationPathQueryParameters3D::get_navigation_layers), static_cast<void (NavigationPathQueryParameters3D::*)(uint32_t)>(&NavigationPathQueryParameters3D::set_navigation_layers)>((new std::string("navigation_layers"))->c_str())
			.property<static_cast<NavigationPathQueryParameters3D::PathfindingAlgorithm (NavigationPathQueryParameters3D::*)() const>(&NavigationPathQueryParameters3D::get_pathfinding_algorithm), static_cast<void (NavigationPathQueryParameters3D::*)(NavigationPathQueryParameters3D::PathfindingAlgorithm)>(&NavigationPathQueryParameters3D::set_pathfinding_algorithm)>((new std::string("pathfinding_algorithm"))->c_str())
			.property<static_cast<NavigationPathQueryParameters3D::PathPostProcessing (NavigationPathQueryParameters3D::*)() const>(&NavigationPathQueryParameters3D::get_path_postprocessing), static_cast<void (NavigationPathQueryParameters3D::*)(NavigationPathQueryParameters3D::PathPostProcessing)>(&NavigationPathQueryParameters3D::set_path_postprocessing)>((new std::string("path_postprocessing"))->c_str())
			.property<static_cast<BitField<NavigationPathQueryParameters3D::PathMetadataFlags> (NavigationPathQueryParameters3D::*)() const>(&NavigationPathQueryParameters3D::get_metadata_flags), static_cast<void (NavigationPathQueryParameters3D::*)(BitField<NavigationPathQueryParameters3D::PathMetadataFlags>)>(&NavigationPathQueryParameters3D::set_metadata_flags)>((new std::string("metadata_flags"))->c_str())
			.property<static_cast<bool (NavigationPathQueryParameters3D::*)() const>(&NavigationPathQueryParameters3D::get_simplify_path), static_cast<void (NavigationPathQueryParameters3D::*)(bool)>(&NavigationPathQueryParameters3D::set_simplify_path)>((new std::string("simplify_path"))->c_str())
			.property<static_cast<double (NavigationPathQueryParameters3D::*)() const>(&NavigationPathQueryParameters3D::get_simplify_epsilon), static_cast<void (NavigationPathQueryParameters3D::*)(double)>(&NavigationPathQueryParameters3D::set_simplify_epsilon)>((new std::string("simplify_epsilon"))->c_str());
	qjs::Value _PathfindingAlgorithm = context->newObject();
	_PathfindingAlgorithm[(new std::string("PATHFINDING_ALGORITHM_ASTAR"))->c_str()] = NavigationPathQueryParameters3D::PathfindingAlgorithm::PATHFINDING_ALGORITHM_ASTAR;
	_module.add("PathfindingAlgorithm", std::move(_PathfindingAlgorithm));
	qjs::Value _PathPostProcessing = context->newObject();
	_PathPostProcessing[(new std::string("PATH_POSTPROCESSING_CORRIDORFUNNEL"))->c_str()] = NavigationPathQueryParameters3D::PathPostProcessing::PATH_POSTPROCESSING_CORRIDORFUNNEL;
	_PathPostProcessing[(new std::string("PATH_POSTPROCESSING_EDGECENTERED"))->c_str()] = NavigationPathQueryParameters3D::PathPostProcessing::PATH_POSTPROCESSING_EDGECENTERED;
	_module.add("PathPostProcessing", std::move(_PathPostProcessing));
	qjs::Value _PathMetadataFlags = context->newObject();
	_PathMetadataFlags[(new std::string("PATH_METADATA_INCLUDE_NONE"))->c_str()] = NavigationPathQueryParameters3D::PathMetadataFlags::PATH_METADATA_INCLUDE_NONE;
	_PathMetadataFlags[(new std::string("PATH_METADATA_INCLUDE_TYPES"))->c_str()] = NavigationPathQueryParameters3D::PathMetadataFlags::PATH_METADATA_INCLUDE_TYPES;
	_PathMetadataFlags[(new std::string("PATH_METADATA_INCLUDE_RIDS"))->c_str()] = NavigationPathQueryParameters3D::PathMetadataFlags::PATH_METADATA_INCLUDE_RIDS;
	_PathMetadataFlags[(new std::string("PATH_METADATA_INCLUDE_OWNERS"))->c_str()] = NavigationPathQueryParameters3D::PathMetadataFlags::PATH_METADATA_INCLUDE_OWNERS;
	_PathMetadataFlags[(new std::string("PATH_METADATA_INCLUDE_ALL"))->c_str()] = NavigationPathQueryParameters3D::PathMetadataFlags::PATH_METADATA_INCLUDE_ALL;
	_module.add("PathMetadataFlags", std::move(_PathMetadataFlags));
}