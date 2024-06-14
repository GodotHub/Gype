#include <godot_cpp/classes/occluder_polygon2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OccluderPolygon2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OccluderPolygon2D>("OccluderPolygon2D")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<bool (OccluderPolygon2D::*)() const>(&OccluderPolygon2D::is_closed), static_cast<void (OccluderPolygon2D::*)(bool)>(&OccluderPolygon2D::set_closed)>((new std::string("closed"))->c_str())
			.property<static_cast<OccluderPolygon2D::CullMode (OccluderPolygon2D::*)() const>(&OccluderPolygon2D::get_cull_mode), static_cast<void (OccluderPolygon2D::*)(OccluderPolygon2D::CullMode)>(&OccluderPolygon2D::set_cull_mode)>((new std::string("cull_mode"))->c_str())
			.property<static_cast<PackedVector2Array (OccluderPolygon2D::*)() const>(&OccluderPolygon2D::get_polygon), static_cast<void (OccluderPolygon2D::*)(const PackedVector2Array &)>(&OccluderPolygon2D::set_polygon)>((new std::string("polygon"))->c_str());
	qjs::Value _CullMode = context->newObject();
	_CullMode[(new std::string("CULL_DISABLED"))->c_str()] = OccluderPolygon2D::CullMode::CULL_DISABLED;
	_CullMode[(new std::string("CULL_CLOCKWISE"))->c_str()] = OccluderPolygon2D::CullMode::CULL_CLOCKWISE;
	_CullMode[(new std::string("CULL_COUNTER_CLOCKWISE"))->c_str()] = OccluderPolygon2D::CullMode::CULL_COUNTER_CLOCKWISE;
	_module.add("CullMode", std::move(_CullMode));
}