#include <godot_cpp/classes/color_picker.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ColorPicker() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<ColorPicker>("ColorPicker")
			.constructor<>()
			.property<&ColorPicker::get_pick_color, &ColorPicker::set_pick_color>("color")
			.property<&ColorPicker::is_editing_alpha, &ColorPicker::set_edit_alpha>("edit_alpha")
			.property<&ColorPicker::get_color_mode, &ColorPicker::set_color_mode>("color_mode")
			.property<&ColorPicker::is_deferred_mode, &ColorPicker::set_deferred_mode>("deferred_mode")
			.property<&ColorPicker::get_picker_shape, &ColorPicker::set_picker_shape>("picker_shape")
			.property<&ColorPicker::are_swatches_enabled, &ColorPicker::set_can_add_swatches>("can_add_swatches")
			.property<&ColorPicker::is_sampler_visible, &ColorPicker::set_sampler_visible>("sampler_visible")
			.property<&ColorPicker::are_modes_visible, &ColorPicker::set_modes_visible>("color_modes_visible")
			.property<&ColorPicker::are_sliders_visible, &ColorPicker::set_sliders_visible>("sliders_visible")
			.property<&ColorPicker::is_hex_visible, &ColorPicker::set_hex_visible>("hex_visible")
			.property<&ColorPicker::are_presets_visible, &ColorPicker::set_presets_visible>("presets_visible")
			.fun<static_cast<void (ColorPicker::*)(const Color &)>(&ColorPicker::add_preset)>("add_preset")
			.fun<static_cast<void (ColorPicker::*)(const Color &)>(&ColorPicker::erase_preset)>("erase_preset")
			.fun<static_cast<PackedColorArray (ColorPicker::*)() const>(&ColorPicker::get_presets)>("get_presets")
			.fun<static_cast<void (ColorPicker::*)(const Color &)>(&ColorPicker::add_recent_preset)>("add_recent_preset")
			.fun<static_cast<void (ColorPicker::*)(const Color &)>(&ColorPicker::erase_recent_preset)>("erase_recent_preset")
			.fun<static_cast<PackedColorArray (ColorPicker::*)() const>(&ColorPicker::get_recent_presets)>("get_recent_presets");
}