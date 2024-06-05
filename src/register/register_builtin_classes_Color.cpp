
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Color() {
	_Variant.class_<Color>("Color")
			.constructor<>()
			.constructor<const Color &>("Color_1")
			.constructor<const Color &, real_t>("Color_2")
			.constructor<real_t, real_t, real_t>("Color_3")
			.constructor<real_t, real_t, real_t, real_t>("Color_4")
			.constructor<const String &>("Color_5")
			.constructor<const String &, real_t>("Color_6")

			.fun<static_cast<uint32_t (Color::*)() const>(&Color::to_argb32)>("to_argb32")
			.fun<static_cast<uint32_t (Color::*)() const>(&Color::to_abgr32)>("to_abgr32")
			.fun<static_cast<uint32_t (Color::*)() const>(&Color::to_rgba32)>("to_rgba32")
			.fun<static_cast<uint64_t (Color::*)() const>(&Color::to_argb64)>("to_argb64")
			.fun<static_cast<uint64_t (Color::*)() const>(&Color::to_abgr64)>("to_abgr64")
			.fun<static_cast<uint64_t (Color::*)() const>(&Color::to_rgba64)>("to_rgba64")
			.fun<static_cast<String (Color::*)(bool) const>(&Color::to_html)>("to_html")
			.fun<static_cast<Color (Color::*)(const Color &, const Color &) const>(&Color::clamp)>("clamp")
			.fun<static_cast<Color (Color::*)() const>(&Color::inverted)>("inverted")
			.fun<static_cast<Color (Color::*)(const Color &, real_t) const>(&Color::lerp)>("lerp")
			.fun<static_cast<Color (Color::*)(real_t) const>(&Color::lightened)>("lightened")
			.fun<static_cast<Color (Color::*)(real_t) const>(&Color::darkened)>("darkened")
			.fun<static_cast<Color (Color::*)(const Color &) const>(&Color::blend)>("blend")
			.fun<static_cast<real_t (Color::*)() const>(&Color::get_luminance)>("get_luminance")
			.fun<static_cast<Color (Color::*)() const>(&Color::srgb_to_linear)>("srgb_to_linear")
			.fun<static_cast<Color (Color::*)() const>(&Color::linear_to_srgb)>("linear_to_srgb")
			.fun<static_cast<bool (Color::*)(const Color &) const>(&Color::is_equal_approx)>("is_equal_approx")
			.static_fun<Color::hex>("hex")
			.static_fun<Color::hex64>("hex64")
			.static_fun<Color::html>("html")
			.static_fun<Color::html_is_valid>("html_is_valid")
			.static_fun<Color::from_string>("from_string")
			.static_fun<Color::from_hsv>("from_hsv")
			.static_fun<Color::from_rgbe9995>("from_rgbe9995");
}