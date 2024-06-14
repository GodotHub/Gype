#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Shape2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Shape2D>("Shape2D")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<double (Shape2D::*)() const>(&Shape2D::get_custom_solver_bias), static_cast<void (Shape2D::*)(double)>(&Shape2D::set_custom_solver_bias)>((new std::string("custom_solver_bias"))->c_str())
			.fun<static_cast<bool (Shape2D::*)(const Transform2D &, const Ref<Shape2D> &, const Transform2D &)>(&Shape2D::collide)>((new std::string("collide"))->c_str())
			.fun<static_cast<bool (Shape2D::*)(const Transform2D &, const Vector2 &, const Ref<Shape2D> &, const Transform2D &, const Vector2 &)>(&Shape2D::collide_with_motion)>((new std::string("collide_with_motion"))->c_str())
			.fun<static_cast<PackedVector2Array (Shape2D::*)(const Transform2D &, const Ref<Shape2D> &, const Transform2D &)>(&Shape2D::collide_and_get_contacts)>((new std::string("collide_and_get_contacts"))->c_str())
			.fun<static_cast<PackedVector2Array (Shape2D::*)(const Transform2D &, const Vector2 &, const Ref<Shape2D> &, const Transform2D &, const Vector2 &)>(&Shape2D::collide_with_motion_and_get_contacts)>((new std::string("collide_with_motion_and_get_contacts"))->c_str())
			.fun<static_cast<void (Shape2D::*)(const RID &, const Color &)>(&Shape2D::draw)>((new std::string("draw"))->c_str())
			.fun<static_cast<Rect2 (Shape2D::*)() const>(&Shape2D::get_rect)>((new std::string("get_rect"))->c_str());
}