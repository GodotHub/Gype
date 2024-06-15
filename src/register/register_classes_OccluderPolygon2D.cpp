#include <godot_cpp/classes/occluder_polygon2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OccluderPolygon2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<OccluderPolygon2D>("OccluderPolygon2D")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<bool(OccluderPolygon2D::*)()const>(&OccluderPolygon2D::is_closed),static_cast<void(OccluderPolygon2D::*)(bool)>(&OccluderPolygon2D::set_closed)>("closed")
            .property<static_cast<OccluderPolygon2D::CullMode(OccluderPolygon2D::*)()const>(&OccluderPolygon2D::get_cull_mode),static_cast<void(OccluderPolygon2D::*)(OccluderPolygon2D::CullMode)>(&OccluderPolygon2D::set_cull_mode)>("cull_mode")
            .property<static_cast<PackedVector2Array(OccluderPolygon2D::*)()const>(&OccluderPolygon2D::get_polygon),static_cast<void(OccluderPolygon2D::*)(const PackedVector2Array &)>(&OccluderPolygon2D::set_polygon)>("polygon")
;    qjs::Value _CullMode = context->newObject();
    _CullMode["CULL_DISABLED"] = OccluderPolygon2D::CullMode::CULL_DISABLED;
    _CullMode["CULL_CLOCKWISE"] = OccluderPolygon2D::CullMode::CULL_CLOCKWISE;
    _CullMode["CULL_COUNTER_CLOCKWISE"] = OccluderPolygon2D::CullMode::CULL_COUNTER_CLOCKWISE;
    _module.add("CullMode", std::move(_CullMode));
}