
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Texture2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Texture2D>("Texture2D")
			.constructor<>()
			.base<Texture>()
			.fun<static_cast<int32_t (Texture2D::*)() const>(&Texture2D::_get_width)>((new std::string("_get_width"))->c_str())
			.fun<static_cast<int32_t (Texture2D::*)() const>(&Texture2D::_get_height)>((new std::string("_get_height"))->c_str())
			.fun<static_cast<bool (Texture2D::*)(int32_t, int32_t) const>(&Texture2D::_is_pixel_opaque)>((new std::string("_is_pixel_opaque"))->c_str())
			.fun<static_cast<bool (Texture2D::*)() const>(&Texture2D::_has_alpha)>((new std::string("_has_alpha"))->c_str())
			.fun<static_cast<void (Texture2D::*)(const RID &, const Vector2 &, const Color &, bool) const>(&Texture2D::_draw)>((new std::string("_draw"))->c_str())
			.fun<static_cast<void (Texture2D::*)(const RID &, const Rect2 &, bool, const Color &, bool) const>(&Texture2D::_draw_rect)>((new std::string("_draw_rect"))->c_str())
			.fun<static_cast<void (Texture2D::*)(const RID &, const Rect2 &, const Rect2 &, const Color &, bool, bool) const>(&Texture2D::_draw_rect_region)>((new std::string("_draw_rect_region"))->c_str())
			.fun<static_cast<int32_t (Texture2D::*)() const>(&Texture2D::get_width)>((new std::string("get_width"))->c_str())
			.fun<static_cast<int32_t (Texture2D::*)() const>(&Texture2D::get_height)>((new std::string("get_height"))->c_str())
			.fun<static_cast<Vector2 (Texture2D::*)() const>(&Texture2D::get_size)>((new std::string("get_size"))->c_str())
			.fun<static_cast<bool (Texture2D::*)() const>(&Texture2D::has_alpha)>((new std::string("has_alpha"))->c_str())
			.fun<static_cast<void (Texture2D::*)(const RID &, const Vector2 &, const Color &, bool) const>(&Texture2D::draw)>((new std::string("draw"))->c_str())
			.fun<static_cast<void (Texture2D::*)(const RID &, const Rect2 &, bool, const Color &, bool) const>(&Texture2D::draw_rect)>((new std::string("draw_rect"))->c_str())
			.fun<static_cast<void (Texture2D::*)(const RID &, const Rect2 &, const Rect2 &, const Color &, bool, bool) const>(&Texture2D::draw_rect_region)>((new std::string("draw_rect_region"))->c_str())
			.fun<static_cast<Ref<Image> (Texture2D::*)() const>(&Texture2D::get_image)>((new std::string("get_image"))->c_str())
			.fun<static_cast<Ref<Resource> (Texture2D::*)() const>(&Texture2D::create_placeholder)>((new std::string("create_placeholder"))->c_str());
}