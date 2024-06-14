#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/style_box_texture.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StyleBoxTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<StyleBoxTexture>("StyleBoxTexture")
			.constructor<>()
			.base<StyleBox>()
			.property<static_cast<Ref<Texture2D> (StyleBoxTexture::*)() const>(&StyleBoxTexture::get_texture), static_cast<void (StyleBoxTexture::*)(const Ref<Texture2D> &)>(&StyleBoxTexture::set_texture)>((new std::string("texture"))->c_str())
			.property<static_cast<double (StyleBoxTexture::*)(Side) const>(&StyleBoxTexture::get_texture_margin), static_cast<void (StyleBoxTexture::*)(Side, double)>(&StyleBoxTexture::set_texture_margin)>((new std::string("texture_margin_left"))->c_str())
			.property<static_cast<double (StyleBoxTexture::*)(Side) const>(&StyleBoxTexture::get_texture_margin), static_cast<void (StyleBoxTexture::*)(Side, double)>(&StyleBoxTexture::set_texture_margin)>((new std::string("texture_margin_top"))->c_str())
			.property<static_cast<double (StyleBoxTexture::*)(Side) const>(&StyleBoxTexture::get_texture_margin), static_cast<void (StyleBoxTexture::*)(Side, double)>(&StyleBoxTexture::set_texture_margin)>((new std::string("texture_margin_right"))->c_str())
			.property<static_cast<double (StyleBoxTexture::*)(Side) const>(&StyleBoxTexture::get_texture_margin), static_cast<void (StyleBoxTexture::*)(Side, double)>(&StyleBoxTexture::set_texture_margin)>((new std::string("texture_margin_bottom"))->c_str())
			.property<static_cast<double (StyleBoxTexture::*)(Side) const>(&StyleBoxTexture::get_expand_margin), static_cast<void (StyleBoxTexture::*)(Side, double)>(&StyleBoxTexture::set_expand_margin)>((new std::string("expand_margin_left"))->c_str())
			.property<static_cast<double (StyleBoxTexture::*)(Side) const>(&StyleBoxTexture::get_expand_margin), static_cast<void (StyleBoxTexture::*)(Side, double)>(&StyleBoxTexture::set_expand_margin)>((new std::string("expand_margin_top"))->c_str())
			.property<static_cast<double (StyleBoxTexture::*)(Side) const>(&StyleBoxTexture::get_expand_margin), static_cast<void (StyleBoxTexture::*)(Side, double)>(&StyleBoxTexture::set_expand_margin)>((new std::string("expand_margin_right"))->c_str())
			.property<static_cast<double (StyleBoxTexture::*)(Side) const>(&StyleBoxTexture::get_expand_margin), static_cast<void (StyleBoxTexture::*)(Side, double)>(&StyleBoxTexture::set_expand_margin)>((new std::string("expand_margin_bottom"))->c_str())
			.property<static_cast<StyleBoxTexture::AxisStretchMode (StyleBoxTexture::*)() const>(&StyleBoxTexture::get_h_axis_stretch_mode), static_cast<void (StyleBoxTexture::*)(StyleBoxTexture::AxisStretchMode)>(&StyleBoxTexture::set_h_axis_stretch_mode)>((new std::string("axis_stretch_horizontal"))->c_str())
			.property<static_cast<StyleBoxTexture::AxisStretchMode (StyleBoxTexture::*)() const>(&StyleBoxTexture::get_v_axis_stretch_mode), static_cast<void (StyleBoxTexture::*)(StyleBoxTexture::AxisStretchMode)>(&StyleBoxTexture::set_v_axis_stretch_mode)>((new std::string("axis_stretch_vertical"))->c_str())
			.property<static_cast<Rect2 (StyleBoxTexture::*)() const>(&StyleBoxTexture::get_region_rect), static_cast<void (StyleBoxTexture::*)(const Rect2 &)>(&StyleBoxTexture::set_region_rect)>((new std::string("region_rect"))->c_str())
			.property<static_cast<Color (StyleBoxTexture::*)() const>(&StyleBoxTexture::get_modulate), static_cast<void (StyleBoxTexture::*)(const Color &)>(&StyleBoxTexture::set_modulate)>((new std::string("modulate_color"))->c_str())
			.property<static_cast<bool (StyleBoxTexture::*)() const>(&StyleBoxTexture::is_draw_center_enabled), static_cast<void (StyleBoxTexture::*)(bool)>(&StyleBoxTexture::set_draw_center)>((new std::string("draw_center"))->c_str())
			.fun<static_cast<void (StyleBoxTexture::*)(double)>(&StyleBoxTexture::set_texture_margin_all)>((new std::string("set_texture_margin_all"))->c_str())
			.fun<static_cast<void (StyleBoxTexture::*)(double)>(&StyleBoxTexture::set_expand_margin_all)>((new std::string("set_expand_margin_all"))->c_str());
	qjs::Value _AxisStretchMode = context->newObject();
	_AxisStretchMode[(new std::string("AXIS_STRETCH_MODE_STRETCH"))->c_str()] = StyleBoxTexture::AxisStretchMode::AXIS_STRETCH_MODE_STRETCH;
	_AxisStretchMode[(new std::string("AXIS_STRETCH_MODE_TILE"))->c_str()] = StyleBoxTexture::AxisStretchMode::AXIS_STRETCH_MODE_TILE;
	_AxisStretchMode[(new std::string("AXIS_STRETCH_MODE_TILE_FIT"))->c_str()] = StyleBoxTexture::AxisStretchMode::AXIS_STRETCH_MODE_TILE_FIT;
	_module.add("AxisStretchMode", std::move(_AxisStretchMode));
}