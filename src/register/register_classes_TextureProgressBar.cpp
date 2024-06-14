
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/texture_progress_bar.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextureProgressBar() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<TextureProgressBar>("TextureProgressBar")
			.constructor<>()
			.base<Range>()
			.property<static_cast<int32_t (TextureProgressBar::*)()>(&TextureProgressBar::get_fill_mode), static_cast<void (TextureProgressBar::*)(int32_t)>(&TextureProgressBar::set_fill_mode)>((new std::string("fill_mode"))->c_str())
			.property<static_cast<double (TextureProgressBar::*)()>(&TextureProgressBar::get_radial_initial_angle), static_cast<void (TextureProgressBar::*)(double)>(&TextureProgressBar::set_radial_initial_angle)>((new std::string("radial_initial_angle"))->c_str())
			.property<static_cast<double (TextureProgressBar::*)()>(&TextureProgressBar::get_fill_degrees), static_cast<void (TextureProgressBar::*)(double)>(&TextureProgressBar::set_fill_degrees)>((new std::string("radial_fill_degrees"))->c_str())
			.property<static_cast<Vector2 (TextureProgressBar::*)()>(&TextureProgressBar::get_radial_center_offset), static_cast<void (TextureProgressBar::*)(const Vector2 &)>(&TextureProgressBar::set_radial_center_offset)>((new std::string("radial_center_offset"))->c_str())
			.property<static_cast<bool (TextureProgressBar::*)() const>(&TextureProgressBar::get_nine_patch_stretch), static_cast<void (TextureProgressBar::*)(bool)>(&TextureProgressBar::set_nine_patch_stretch)>((new std::string("nine_patch_stretch"))->c_str())
			.property<static_cast<int32_t (TextureProgressBar::*)(Side) const>(&TextureProgressBar::get_stretch_margin), static_cast<void (TextureProgressBar::*)(Side, int32_t)>(&TextureProgressBar::set_stretch_margin)>((new std::string("stretch_margin_left"))->c_str())
			.property<static_cast<int32_t (TextureProgressBar::*)(Side) const>(&TextureProgressBar::get_stretch_margin), static_cast<void (TextureProgressBar::*)(Side, int32_t)>(&TextureProgressBar::set_stretch_margin)>((new std::string("stretch_margin_top"))->c_str())
			.property<static_cast<int32_t (TextureProgressBar::*)(Side) const>(&TextureProgressBar::get_stretch_margin), static_cast<void (TextureProgressBar::*)(Side, int32_t)>(&TextureProgressBar::set_stretch_margin)>((new std::string("stretch_margin_right"))->c_str())
			.property<static_cast<int32_t (TextureProgressBar::*)(Side) const>(&TextureProgressBar::get_stretch_margin), static_cast<void (TextureProgressBar::*)(Side, int32_t)>(&TextureProgressBar::set_stretch_margin)>((new std::string("stretch_margin_bottom"))->c_str())
			.property<static_cast<Ref<Texture2D> (TextureProgressBar::*)() const>(&TextureProgressBar::get_under_texture), static_cast<void (TextureProgressBar::*)(const Ref<Texture2D> &)>(&TextureProgressBar::set_under_texture)>((new std::string("texture_under"))->c_str())
			.property<static_cast<Ref<Texture2D> (TextureProgressBar::*)() const>(&TextureProgressBar::get_over_texture), static_cast<void (TextureProgressBar::*)(const Ref<Texture2D> &)>(&TextureProgressBar::set_over_texture)>((new std::string("texture_over"))->c_str())
			.property<static_cast<Ref<Texture2D> (TextureProgressBar::*)() const>(&TextureProgressBar::get_progress_texture), static_cast<void (TextureProgressBar::*)(const Ref<Texture2D> &)>(&TextureProgressBar::set_progress_texture)>((new std::string("texture_progress"))->c_str())
			.property<static_cast<Vector2 (TextureProgressBar::*)() const>(&TextureProgressBar::get_texture_progress_offset), static_cast<void (TextureProgressBar::*)(const Vector2 &)>(&TextureProgressBar::set_texture_progress_offset)>((new std::string("texture_progress_offset"))->c_str())
			.property<static_cast<Color (TextureProgressBar::*)() const>(&TextureProgressBar::get_tint_under), static_cast<void (TextureProgressBar::*)(const Color &)>(&TextureProgressBar::set_tint_under)>((new std::string("tint_under"))->c_str())
			.property<static_cast<Color (TextureProgressBar::*)() const>(&TextureProgressBar::get_tint_over), static_cast<void (TextureProgressBar::*)(const Color &)>(&TextureProgressBar::set_tint_over)>((new std::string("tint_over"))->c_str())
			.property<static_cast<Color (TextureProgressBar::*)() const>(&TextureProgressBar::get_tint_progress), static_cast<void (TextureProgressBar::*)(const Color &)>(&TextureProgressBar::set_tint_progress)>((new std::string("tint_progress"))->c_str());
	qjs::Value _FillMode = context->newObject();
	_FillMode[(new std::string("FILL_LEFT_TO_RIGHT"))->c_str()] = TextureProgressBar::FillMode::FILL_LEFT_TO_RIGHT;
	_FillMode[(new std::string("FILL_RIGHT_TO_LEFT"))->c_str()] = TextureProgressBar::FillMode::FILL_RIGHT_TO_LEFT;
	_FillMode[(new std::string("FILL_TOP_TO_BOTTOM"))->c_str()] = TextureProgressBar::FillMode::FILL_TOP_TO_BOTTOM;
	_FillMode[(new std::string("FILL_BOTTOM_TO_TOP"))->c_str()] = TextureProgressBar::FillMode::FILL_BOTTOM_TO_TOP;
	_FillMode[(new std::string("FILL_CLOCKWISE"))->c_str()] = TextureProgressBar::FillMode::FILL_CLOCKWISE;
	_FillMode[(new std::string("FILL_COUNTER_CLOCKWISE"))->c_str()] = TextureProgressBar::FillMode::FILL_COUNTER_CLOCKWISE;
	_FillMode[(new std::string("FILL_BILINEAR_LEFT_AND_RIGHT"))->c_str()] = TextureProgressBar::FillMode::FILL_BILINEAR_LEFT_AND_RIGHT;
	_FillMode[(new std::string("FILL_BILINEAR_TOP_AND_BOTTOM"))->c_str()] = TextureProgressBar::FillMode::FILL_BILINEAR_TOP_AND_BOTTOM;
	_FillMode[(new std::string("FILL_CLOCKWISE_AND_COUNTER_CLOCKWISE"))->c_str()] = TextureProgressBar::FillMode::FILL_CLOCKWISE_AND_COUNTER_CLOCKWISE;
	_module.add("FillMode", std::move(_FillMode));
}