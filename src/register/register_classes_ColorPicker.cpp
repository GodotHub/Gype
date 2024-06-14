#include <godot_cpp/classes/color_picker.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ColorPicker() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<ColorPicker>("ColorPicker")
			.constructor<>()
			.base<VBoxContainer>()
			.property<static_cast<Color (ColorPicker::*)() const>(&ColorPicker::get_pick_color), static_cast<void (ColorPicker::*)(const Color &)>(&ColorPicker::set_pick_color)>((new std::string("color"))->c_str())
			.property<static_cast<bool (ColorPicker::*)() const>(&ColorPicker::is_editing_alpha), static_cast<void (ColorPicker::*)(bool)>(&ColorPicker::set_edit_alpha)>((new std::string("edit_alpha"))->c_str())
			.property<static_cast<ColorPicker::ColorModeType (ColorPicker::*)() const>(&ColorPicker::get_color_mode), static_cast<void (ColorPicker::*)(ColorPicker::ColorModeType)>(&ColorPicker::set_color_mode)>((new std::string("color_mode"))->c_str())
			.property<static_cast<bool (ColorPicker::*)() const>(&ColorPicker::is_deferred_mode), static_cast<void (ColorPicker::*)(bool)>(&ColorPicker::set_deferred_mode)>((new std::string("deferred_mode"))->c_str())
			.property<static_cast<ColorPicker::PickerShapeType (ColorPicker::*)() const>(&ColorPicker::get_picker_shape), static_cast<void (ColorPicker::*)(ColorPicker::PickerShapeType)>(&ColorPicker::set_picker_shape)>((new std::string("picker_shape"))->c_str())
			.property<static_cast<bool (ColorPicker::*)() const>(&ColorPicker::are_swatches_enabled), static_cast<void (ColorPicker::*)(bool)>(&ColorPicker::set_can_add_swatches)>((new std::string("can_add_swatches"))->c_str())
			.property<static_cast<bool (ColorPicker::*)() const>(&ColorPicker::is_sampler_visible), static_cast<void (ColorPicker::*)(bool)>(&ColorPicker::set_sampler_visible)>((new std::string("sampler_visible"))->c_str())
			.property<static_cast<bool (ColorPicker::*)() const>(&ColorPicker::are_modes_visible), static_cast<void (ColorPicker::*)(bool)>(&ColorPicker::set_modes_visible)>((new std::string("color_modes_visible"))->c_str())
			.property<static_cast<bool (ColorPicker::*)() const>(&ColorPicker::are_sliders_visible), static_cast<void (ColorPicker::*)(bool)>(&ColorPicker::set_sliders_visible)>((new std::string("sliders_visible"))->c_str())
			.property<static_cast<bool (ColorPicker::*)() const>(&ColorPicker::is_hex_visible), static_cast<void (ColorPicker::*)(bool)>(&ColorPicker::set_hex_visible)>((new std::string("hex_visible"))->c_str())
			.property<static_cast<bool (ColorPicker::*)() const>(&ColorPicker::are_presets_visible), static_cast<void (ColorPicker::*)(bool)>(&ColorPicker::set_presets_visible)>((new std::string("presets_visible"))->c_str())
			.fun<static_cast<void (ColorPicker::*)(const Color &)>(&ColorPicker::add_preset)>((new std::string("add_preset"))->c_str())
			.fun<static_cast<void (ColorPicker::*)(const Color &)>(&ColorPicker::erase_preset)>((new std::string("erase_preset"))->c_str())
			.fun<static_cast<PackedColorArray (ColorPicker::*)() const>(&ColorPicker::get_presets)>((new std::string("get_presets"))->c_str())
			.fun<static_cast<void (ColorPicker::*)(const Color &)>(&ColorPicker::add_recent_preset)>((new std::string("add_recent_preset"))->c_str())
			.fun<static_cast<void (ColorPicker::*)(const Color &)>(&ColorPicker::erase_recent_preset)>((new std::string("erase_recent_preset"))->c_str())
			.fun<static_cast<PackedColorArray (ColorPicker::*)() const>(&ColorPicker::get_recent_presets)>((new std::string("get_recent_presets"))->c_str());
	qjs::Value _ColorModeType = context->newObject();
	_ColorModeType[(new std::string("MODE_RGB"))->c_str()] = ColorPicker::ColorModeType::MODE_RGB;
	_ColorModeType[(new std::string("MODE_HSV"))->c_str()] = ColorPicker::ColorModeType::MODE_HSV;
	_ColorModeType[(new std::string("MODE_RAW"))->c_str()] = ColorPicker::ColorModeType::MODE_RAW;
	_ColorModeType[(new std::string("MODE_OKHSL"))->c_str()] = ColorPicker::ColorModeType::MODE_OKHSL;
	_module.add("ColorModeType", std::move(_ColorModeType));
	qjs::Value _PickerShapeType = context->newObject();
	_PickerShapeType[(new std::string("SHAPE_HSV_RECTANGLE"))->c_str()] = ColorPicker::PickerShapeType::SHAPE_HSV_RECTANGLE;
	_PickerShapeType[(new std::string("SHAPE_HSV_WHEEL"))->c_str()] = ColorPicker::PickerShapeType::SHAPE_HSV_WHEEL;
	_PickerShapeType[(new std::string("SHAPE_VHS_CIRCLE"))->c_str()] = ColorPicker::PickerShapeType::SHAPE_VHS_CIRCLE;
	_PickerShapeType[(new std::string("SHAPE_OKHSL_CIRCLE"))->c_str()] = ColorPicker::PickerShapeType::SHAPE_OKHSL_CIRCLE;
	_PickerShapeType[(new std::string("SHAPE_NONE"))->c_str()] = ColorPicker::PickerShapeType::SHAPE_NONE;
	_module.add("PickerShapeType", std::move(_PickerShapeType));
}