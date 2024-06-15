#include <godot_cpp/classes/color_picker.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ColorPicker() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<ColorPicker>("ColorPicker")
            .constructor<>()
            .base<VBoxContainer>()
            .property<static_cast<Color(ColorPicker::*)()const>(&ColorPicker::get_pick_color),static_cast<void(ColorPicker::*)(const Color &)>(&ColorPicker::set_pick_color)>("color")
            .property<static_cast<bool(ColorPicker::*)()const>(&ColorPicker::is_editing_alpha),static_cast<void(ColorPicker::*)(bool)>(&ColorPicker::set_edit_alpha)>("edit_alpha")
            .property<static_cast<ColorPicker::ColorModeType(ColorPicker::*)()const>(&ColorPicker::get_color_mode),static_cast<void(ColorPicker::*)(ColorPicker::ColorModeType)>(&ColorPicker::set_color_mode)>("color_mode")
            .property<static_cast<bool(ColorPicker::*)()const>(&ColorPicker::is_deferred_mode),static_cast<void(ColorPicker::*)(bool)>(&ColorPicker::set_deferred_mode)>("deferred_mode")
            .property<static_cast<ColorPicker::PickerShapeType(ColorPicker::*)()const>(&ColorPicker::get_picker_shape),static_cast<void(ColorPicker::*)(ColorPicker::PickerShapeType)>(&ColorPicker::set_picker_shape)>("picker_shape")
            .property<static_cast<bool(ColorPicker::*)()const>(&ColorPicker::are_swatches_enabled),static_cast<void(ColorPicker::*)(bool)>(&ColorPicker::set_can_add_swatches)>("can_add_swatches")
            .property<static_cast<bool(ColorPicker::*)()const>(&ColorPicker::is_sampler_visible),static_cast<void(ColorPicker::*)(bool)>(&ColorPicker::set_sampler_visible)>("sampler_visible")
            .property<static_cast<bool(ColorPicker::*)()const>(&ColorPicker::are_modes_visible),static_cast<void(ColorPicker::*)(bool)>(&ColorPicker::set_modes_visible)>("color_modes_visible")
            .property<static_cast<bool(ColorPicker::*)()const>(&ColorPicker::are_sliders_visible),static_cast<void(ColorPicker::*)(bool)>(&ColorPicker::set_sliders_visible)>("sliders_visible")
            .property<static_cast<bool(ColorPicker::*)()const>(&ColorPicker::is_hex_visible),static_cast<void(ColorPicker::*)(bool)>(&ColorPicker::set_hex_visible)>("hex_visible")
            .property<static_cast<bool(ColorPicker::*)()const>(&ColorPicker::are_presets_visible),static_cast<void(ColorPicker::*)(bool)>(&ColorPicker::set_presets_visible)>("presets_visible")
            .fun<static_cast<void(ColorPicker::*)(const Color &)>(&ColorPicker::add_preset)>("add_preset")
            .fun<static_cast<void(ColorPicker::*)(const Color &)>(&ColorPicker::erase_preset)>("erase_preset")
            .fun<static_cast<PackedColorArray(ColorPicker::*)()const>(&ColorPicker::get_presets)>("get_presets")
            .fun<static_cast<void(ColorPicker::*)(const Color &)>(&ColorPicker::add_recent_preset)>("add_recent_preset")
            .fun<static_cast<void(ColorPicker::*)(const Color &)>(&ColorPicker::erase_recent_preset)>("erase_recent_preset")
            .fun<static_cast<PackedColorArray(ColorPicker::*)()const>(&ColorPicker::get_recent_presets)>("get_recent_presets")
;    qjs::Value _ColorModeType = context->newObject();
    _ColorModeType["MODE_RGB"] = ColorPicker::ColorModeType::MODE_RGB;
    _ColorModeType["MODE_HSV"] = ColorPicker::ColorModeType::MODE_HSV;
    _ColorModeType["MODE_RAW"] = ColorPicker::ColorModeType::MODE_RAW;
    _ColorModeType["MODE_OKHSL"] = ColorPicker::ColorModeType::MODE_OKHSL;
    _module.add("ColorModeType", std::move(_ColorModeType));
    qjs::Value _PickerShapeType = context->newObject();
    _PickerShapeType["SHAPE_HSV_RECTANGLE"] = ColorPicker::PickerShapeType::SHAPE_HSV_RECTANGLE;
    _PickerShapeType["SHAPE_HSV_WHEEL"] = ColorPicker::PickerShapeType::SHAPE_HSV_WHEEL;
    _PickerShapeType["SHAPE_VHS_CIRCLE"] = ColorPicker::PickerShapeType::SHAPE_VHS_CIRCLE;
    _PickerShapeType["SHAPE_OKHSL_CIRCLE"] = ColorPicker::PickerShapeType::SHAPE_OKHSL_CIRCLE;
    _PickerShapeType["SHAPE_NONE"] = ColorPicker::PickerShapeType::SHAPE_NONE;
    _module.add("PickerShapeType", std::move(_PickerShapeType));
}