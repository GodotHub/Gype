#include <godot_cpp/classes/navigation_path_query_parameters3d.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NavigationPathQueryParameters3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<NavigationPathQueryParameters3D>("NavigationPathQueryParameters3D")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<RID(NavigationPathQueryParameters3D::*)()const>(&NavigationPathQueryParameters3D::get_map),static_cast<void(NavigationPathQueryParameters3D::*)(const RID &)>(&NavigationPathQueryParameters3D::set_map)>("map")
            .property<static_cast<Vector3(NavigationPathQueryParameters3D::*)()const>(&NavigationPathQueryParameters3D::get_start_position),static_cast<void(NavigationPathQueryParameters3D::*)(const Vector3 &)>(&NavigationPathQueryParameters3D::set_start_position)>("start_position")
            .property<static_cast<Vector3(NavigationPathQueryParameters3D::*)()const>(&NavigationPathQueryParameters3D::get_target_position),static_cast<void(NavigationPathQueryParameters3D::*)(const Vector3 &)>(&NavigationPathQueryParameters3D::set_target_position)>("target_position")
            .property<static_cast<uint32_t(NavigationPathQueryParameters3D::*)()const>(&NavigationPathQueryParameters3D::get_navigation_layers),static_cast<void(NavigationPathQueryParameters3D::*)(uint32_t)>(&NavigationPathQueryParameters3D::set_navigation_layers)>("navigation_layers")
            .property<static_cast<NavigationPathQueryParameters3D::PathfindingAlgorithm(NavigationPathQueryParameters3D::*)()const>(&NavigationPathQueryParameters3D::get_pathfinding_algorithm),static_cast<void(NavigationPathQueryParameters3D::*)(NavigationPathQueryParameters3D::PathfindingAlgorithm)>(&NavigationPathQueryParameters3D::set_pathfinding_algorithm)>("pathfinding_algorithm")
            .property<static_cast<NavigationPathQueryParameters3D::PathPostProcessing(NavigationPathQueryParameters3D::*)()const>(&NavigationPathQueryParameters3D::get_path_postprocessing),static_cast<void(NavigationPathQueryParameters3D::*)(NavigationPathQueryParameters3D::PathPostProcessing)>(&NavigationPathQueryParameters3D::set_path_postprocessing)>("path_postprocessing")
            .property<static_cast<BitField<NavigationPathQueryParameters3D::PathMetadataFlags>(NavigationPathQueryParameters3D::*)()const>(&NavigationPathQueryParameters3D::get_metadata_flags),static_cast<void(NavigationPathQueryParameters3D::*)(BitField<NavigationPathQueryParameters3D::PathMetadataFlags>)>(&NavigationPathQueryParameters3D::set_metadata_flags)>("metadata_flags")
            .property<static_cast<bool(NavigationPathQueryParameters3D::*)()const>(&NavigationPathQueryParameters3D::get_simplify_path),static_cast<void(NavigationPathQueryParameters3D::*)(bool)>(&NavigationPathQueryParameters3D::set_simplify_path)>("simplify_path")
            .property<static_cast<double(NavigationPathQueryParameters3D::*)()const>(&NavigationPathQueryParameters3D::get_simplify_epsilon),static_cast<void(NavigationPathQueryParameters3D::*)(double)>(&NavigationPathQueryParameters3D::set_simplify_epsilon)>("simplify_epsilon")
;    qjs::Value _PathfindingAlgorithm = context->newObject();
    _PathfindingAlgorithm["PATHFINDING_ALGORITHM_ASTAR"] = NavigationPathQueryParameters3D::PathfindingAlgorithm::PATHFINDING_ALGORITHM_ASTAR;
    _module.add("PathfindingAlgorithm", std::move(_PathfindingAlgorithm));
    qjs::Value _PathPostProcessing = context->newObject();
    _PathPostProcessing["PATH_POSTPROCESSING_CORRIDORFUNNEL"] = NavigationPathQueryParameters3D::PathPostProcessing::PATH_POSTPROCESSING_CORRIDORFUNNEL;
    _PathPostProcessing["PATH_POSTPROCESSING_EDGECENTERED"] = NavigationPathQueryParameters3D::PathPostProcessing::PATH_POSTPROCESSING_EDGECENTERED;
    _module.add("PathPostProcessing", std::move(_PathPostProcessing));
    qjs::Value _PathMetadataFlags = context->newObject();
    _PathMetadataFlags["PATH_METADATA_INCLUDE_NONE"] = NavigationPathQueryParameters3D::PathMetadataFlags::PATH_METADATA_INCLUDE_NONE;
    _PathMetadataFlags["PATH_METADATA_INCLUDE_TYPES"] = NavigationPathQueryParameters3D::PathMetadataFlags::PATH_METADATA_INCLUDE_TYPES;
    _PathMetadataFlags["PATH_METADATA_INCLUDE_RIDS"] = NavigationPathQueryParameters3D::PathMetadataFlags::PATH_METADATA_INCLUDE_RIDS;
    _PathMetadataFlags["PATH_METADATA_INCLUDE_OWNERS"] = NavigationPathQueryParameters3D::PathMetadataFlags::PATH_METADATA_INCLUDE_OWNERS;
    _PathMetadataFlags["PATH_METADATA_INCLUDE_ALL"] = NavigationPathQueryParameters3D::PathMetadataFlags::PATH_METADATA_INCLUDE_ALL;
    _module.add("PathMetadataFlags", std::move(_PathMetadataFlags));
}