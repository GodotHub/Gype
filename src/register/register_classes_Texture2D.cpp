#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Texture2D() {
	qjs::Context::Module &_module = _General;
	_module.class_<Texture2D>("Texture2D")
			.constructor<>()
			.fun<static_cast<int32_t (Texture2D::*)() const>(&Texture2D::_get_width)>("_get_width")
			.fun<static_cast<int32_t (Texture2D::*)() const>(&Texture2D::_get_height)>("_get_height")
			.fun<static_cast<bool (Texture2D::*)(int32_t, int32_t) const>(&Texture2D::_is_pixel_opaque)>("_is_pixel_opaque")
			.fun<static_cast<bool (Texture2D::*)() const>(&Texture2D::_has_alpha)>("_has_alpha")
			.fun<static_cast<void (Texture2D::*)(const RID &, const Vector2 &, const Color &, bool) const>(&Texture2D::_draw)>("_draw")
			.fun<static_cast<void (Texture2D::*)(const RID &, const Rect2 &, bool, const Color &, bool) const>(&Texture2D::_draw_rect)>("_draw_rect")
			.fun<static_cast<void (Texture2D::*)(const RID &, const Rect2 &, const Rect2 &, const Color &, bool, bool) const>(&Texture2D::_draw_rect_region)>("_draw_rect_region")
			.fun<static_cast<int32_t (Texture2D::*)() const>(&Texture2D::get_width)>("get_width")
			.fun<static_cast<int32_t (Texture2D::*)() const>(&Texture2D::get_height)>("get_height")
			.fun<static_cast<Vector2 (Texture2D::*)() const>(&Texture2D::get_size)>("get_size")
			.fun<static_cast<bool (Texture2D::*)() const>(&Texture2D::has_alpha)>("has_alpha")
			.fun<static_cast<void (Texture2D::*)(const RID &, const Vector2 &, const Color &, bool) const>(&Texture2D::draw)>("draw")
			.fun<static_cast<void (Texture2D::*)(const RID &, const Rect2 &, bool, const Color &, bool) const>(&Texture2D::draw_rect)>("draw_rect")
			.fun<static_cast<void (Texture2D::*)(const RID &, const Rect2 &, const Rect2 &, const Color &, bool, bool) const>(&Texture2D::draw_rect_region)>("draw_rect_region")
			.fun<static_cast<Ref<Image> (Texture2D::*)() const>(&Texture2D::get_image)>("get_image")
			.fun<static_cast<Ref<Resource> (Texture2D::*)() const>(&Texture2D::create_placeholder)>("create_placeholder");
}