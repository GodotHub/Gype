#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/polygon_path_finder.hpp>

using namespace godot;

void register_classes_PolygonPathFinder() {
    qjs::Context::Module &_module = _General;
    _module.class_<PolygonPathFinder>("PolygonPathFinder")
           .constructor<>()
           .property<PolygonPathFinder::_get_data, PolygonPathFinder::_set_data>("data")
		    .fun<static_cast<void(PolygonPathFinder::*)(const PackedVector2Array &,const PackedInt32Array &)>(&PolygonPathFinder::setup)>("setup")
		    .fun<static_cast<PackedVector2Array(PolygonPathFinder::*)(const Vector2 &,const Vector2 &)>(&PolygonPathFinder::find_path)>("find_path")
		    .fun<static_cast<PackedVector2Array(PolygonPathFinder::*)(const Vector2 &,const Vector2 &)const>(&PolygonPathFinder::get_intersections)>("get_intersections")
		    .fun<static_cast<Vector2(PolygonPathFinder::*)(const Vector2 &)const>(&PolygonPathFinder::get_closest_point)>("get_closest_point")
		    .fun<static_cast<bool(PolygonPathFinder::*)(const Vector2 &)const>(&PolygonPathFinder::is_point_inside)>("is_point_inside")
		    .fun<static_cast<void(PolygonPathFinder::*)(int32_t,double)>(&PolygonPathFinder::set_point_penalty)>("set_point_penalty")
		    .fun<static_cast<double(PolygonPathFinder::*)(int32_t)const>(&PolygonPathFinder::get_point_penalty)>("get_point_penalty")
		    .fun<static_cast<Rect2(PolygonPathFinder::*)()const>(&PolygonPathFinder::get_bounds)>("get_bounds")
;}