#include <godot_cpp/classes/navigation_path_query_result3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NavigationPathQueryResult3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<NavigationPathQueryResult3D>("NavigationPathQueryResult3D")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<PackedVector3Array(NavigationPathQueryResult3D::*)()const>(&NavigationPathQueryResult3D::get_path),static_cast<void(NavigationPathQueryResult3D::*)(const PackedVector3Array &)>(&NavigationPathQueryResult3D::set_path)>("path")
            .property<static_cast<PackedInt32Array(NavigationPathQueryResult3D::*)()const>(&NavigationPathQueryResult3D::get_path_types),static_cast<void(NavigationPathQueryResult3D::*)(const PackedInt32Array &)>(&NavigationPathQueryResult3D::set_path_types)>("path_types")
            .property<static_cast<TypedArray<RID>(NavigationPathQueryResult3D::*)()const>(&NavigationPathQueryResult3D::get_path_rids),static_cast<void(NavigationPathQueryResult3D::*)(const TypedArray<RID> &)>(&NavigationPathQueryResult3D::set_path_rids)>("path_rids")
            .property<static_cast<PackedInt64Array(NavigationPathQueryResult3D::*)()const>(&NavigationPathQueryResult3D::get_path_owner_ids),static_cast<void(NavigationPathQueryResult3D::*)(const PackedInt64Array &)>(&NavigationPathQueryResult3D::set_path_owner_ids)>("path_owner_ids")
            .fun<static_cast<void(NavigationPathQueryResult3D::*)()>(&NavigationPathQueryResult3D::reset)>("reset")
;    qjs::Value _PathSegmentType = context->newObject();
    _PathSegmentType["PATH_SEGMENT_TYPE_REGION"] = NavigationPathQueryResult3D::PathSegmentType::PATH_SEGMENT_TYPE_REGION;
    _PathSegmentType["PATH_SEGMENT_TYPE_LINK"] = NavigationPathQueryResult3D::PathSegmentType::PATH_SEGMENT_TYPE_LINK;
    _module.add("PathSegmentType", std::move(_PathSegmentType));
}