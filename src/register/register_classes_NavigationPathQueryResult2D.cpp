#include <godot_cpp/classes/navigation_path_query_result2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NavigationPathQueryResult2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<NavigationPathQueryResult2D>("NavigationPathQueryResult2D")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<PackedVector2Array(NavigationPathQueryResult2D::*)()const>(&NavigationPathQueryResult2D::get_path),static_cast<void(NavigationPathQueryResult2D::*)(const PackedVector2Array &)>(&NavigationPathQueryResult2D::set_path)>("path")
            .property<static_cast<PackedInt32Array(NavigationPathQueryResult2D::*)()const>(&NavigationPathQueryResult2D::get_path_types),static_cast<void(NavigationPathQueryResult2D::*)(const PackedInt32Array &)>(&NavigationPathQueryResult2D::set_path_types)>("path_types")
            .property<static_cast<TypedArray<RID>(NavigationPathQueryResult2D::*)()const>(&NavigationPathQueryResult2D::get_path_rids),static_cast<void(NavigationPathQueryResult2D::*)(const TypedArray<RID> &)>(&NavigationPathQueryResult2D::set_path_rids)>("path_rids")
            .property<static_cast<PackedInt64Array(NavigationPathQueryResult2D::*)()const>(&NavigationPathQueryResult2D::get_path_owner_ids),static_cast<void(NavigationPathQueryResult2D::*)(const PackedInt64Array &)>(&NavigationPathQueryResult2D::set_path_owner_ids)>("path_owner_ids")
            .fun<static_cast<void(NavigationPathQueryResult2D::*)()>(&NavigationPathQueryResult2D::reset)>("reset")
;    qjs::Value _PathSegmentType = context->newObject();
    _PathSegmentType["PATH_SEGMENT_TYPE_REGION"] = NavigationPathQueryResult2D::PathSegmentType::PATH_SEGMENT_TYPE_REGION;
    _PathSegmentType["PATH_SEGMENT_TYPE_LINK"] = NavigationPathQueryResult2D::PathSegmentType::PATH_SEGMENT_TYPE_LINK;
    _module.add("PathSegmentType", std::move(_PathSegmentType));
}