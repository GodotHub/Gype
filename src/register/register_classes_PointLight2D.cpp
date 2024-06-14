#include <godot_cpp/classes/light2d.hpp>
#include <godot_cpp/classes/point_light2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PointLight2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<PointLight2D>("PointLight2D")
			.constructor<>()
			.base<Light2D>()
			.property<static_cast<Ref<Texture2D> (PointLight2D::*)() const>(&PointLight2D::get_texture), static_cast<void (PointLight2D::*)(const Ref<Texture2D> &)>(&PointLight2D::set_texture)>((new std::string("texture"))->c_str())
			.property<static_cast<Vector2 (PointLight2D::*)() const>(&PointLight2D::get_texture_offset), static_cast<void (PointLight2D::*)(const Vector2 &)>(&PointLight2D::set_texture_offset)>((new std::string("offset"))->c_str())
			.property<static_cast<double (PointLight2D::*)() const>(&PointLight2D::get_texture_scale), static_cast<void (PointLight2D::*)(double)>(&PointLight2D::set_texture_scale)>((new std::string("texture_scale"))->c_str());
}