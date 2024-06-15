#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Shape2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Shape2D>("Shape2D")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<double(Shape2D::*)()const>(&Shape2D::get_custom_solver_bias),static_cast<void(Shape2D::*)(double)>(&Shape2D::set_custom_solver_bias)>("custom_solver_bias")
            .fun<static_cast<bool(Shape2D::*)(const Transform2D &,const Ref<Shape2D> &,const Transform2D &)>(&Shape2D::collide)>("collide")
            .fun<static_cast<bool(Shape2D::*)(const Transform2D &,const Vector2 &,const Ref<Shape2D> &,const Transform2D &,const Vector2 &)>(&Shape2D::collide_with_motion)>("collide_with_motion")
            .fun<static_cast<PackedVector2Array(Shape2D::*)(const Transform2D &,const Ref<Shape2D> &,const Transform2D &)>(&Shape2D::collide_and_get_contacts)>("collide_and_get_contacts")
            .fun<static_cast<PackedVector2Array(Shape2D::*)(const Transform2D &,const Vector2 &,const Ref<Shape2D> &,const Transform2D &,const Vector2 &)>(&Shape2D::collide_with_motion_and_get_contacts)>("collide_with_motion_and_get_contacts")
            .fun<static_cast<void(Shape2D::*)(const RID &,const Color &)>(&Shape2D::draw)>("draw")
            .fun<static_cast<Rect2(Shape2D::*)()const>(&Shape2D::get_rect)>("get_rect")
;}