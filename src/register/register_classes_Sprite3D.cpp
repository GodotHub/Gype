
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/sprite3d.hpp>
#include <godot_cpp/classes/sprite_base3d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Sprite3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Sprite3D>("Sprite3D")
			.constructor<>()
			.base<SpriteBase3D>()
			.property<static_cast<Ref<Texture2D> (Sprite3D::*)() const>(&Sprite3D::get_texture), static_cast<void (Sprite3D::*)(const Ref<Texture2D> &)>(&Sprite3D::set_texture)>((new std::string("texture"))->c_str())
			.property<static_cast<int32_t (Sprite3D::*)() const>(&Sprite3D::get_hframes), static_cast<void (Sprite3D::*)(int32_t)>(&Sprite3D::set_hframes)>((new std::string("hframes"))->c_str())
			.property<static_cast<int32_t (Sprite3D::*)() const>(&Sprite3D::get_vframes), static_cast<void (Sprite3D::*)(int32_t)>(&Sprite3D::set_vframes)>((new std::string("vframes"))->c_str())
			.property<static_cast<int32_t (Sprite3D::*)() const>(&Sprite3D::get_frame), static_cast<void (Sprite3D::*)(int32_t)>(&Sprite3D::set_frame)>((new std::string("frame"))->c_str())
			.property<static_cast<Vector2i (Sprite3D::*)() const>(&Sprite3D::get_frame_coords), static_cast<void (Sprite3D::*)(const Vector2i &)>(&Sprite3D::set_frame_coords)>((new std::string("frame_coords"))->c_str())
			.property<static_cast<bool (Sprite3D::*)() const>(&Sprite3D::is_region_enabled), static_cast<void (Sprite3D::*)(bool)>(&Sprite3D::set_region_enabled)>((new std::string("region_enabled"))->c_str())
			.property<static_cast<Rect2 (Sprite3D::*)() const>(&Sprite3D::get_region_rect), static_cast<void (Sprite3D::*)(const Rect2 &)>(&Sprite3D::set_region_rect)>((new std::string("region_rect"))->c_str());
}