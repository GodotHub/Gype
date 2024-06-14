
#include <godot_cpp/classes/polygon_path_finder.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PolygonPathFinder() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PolygonPathFinder>("PolygonPathFinder")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<void (PolygonPathFinder::*)(const PackedVector2Array &, const PackedInt32Array &)>(&PolygonPathFinder::setup)>((new std::string("setup"))->c_str())
			.fun<static_cast<PackedVector2Array (PolygonPathFinder::*)(const Vector2 &, const Vector2 &)>(&PolygonPathFinder::find_path)>((new std::string("find_path"))->c_str())
			.fun<static_cast<PackedVector2Array (PolygonPathFinder::*)(const Vector2 &, const Vector2 &) const>(&PolygonPathFinder::get_intersections)>((new std::string("get_intersections"))->c_str())
			.fun<static_cast<Vector2 (PolygonPathFinder::*)(const Vector2 &) const>(&PolygonPathFinder::get_closest_point)>((new std::string("get_closest_point"))->c_str())
			.fun<static_cast<bool (PolygonPathFinder::*)(const Vector2 &) const>(&PolygonPathFinder::is_point_inside)>((new std::string("is_point_inside"))->c_str())
			.fun<static_cast<void (PolygonPathFinder::*)(int32_t, double)>(&PolygonPathFinder::set_point_penalty)>((new std::string("set_point_penalty"))->c_str())
			.fun<static_cast<double (PolygonPathFinder::*)(int32_t) const>(&PolygonPathFinder::get_point_penalty)>((new std::string("get_point_penalty"))->c_str())
			.fun<static_cast<Rect2 (PolygonPathFinder::*)() const>(&PolygonPathFinder::get_bounds)>((new std::string("get_bounds"))->c_str());
}