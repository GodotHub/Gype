#include <godot_cpp/classes/color_picker_button.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/color_picker.hpp>
#include <godot_cpp/classes/popup_panel.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ColorPickerButton() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<ColorPickerButton>("ColorPickerButton")
            .constructor<>()
            .base<Button>()
            .property<static_cast<Color(ColorPickerButton::*)()const>(&ColorPickerButton::get_pick_color),static_cast<void(ColorPickerButton::*)(const Color &)>(&ColorPickerButton::set_pick_color)>("color")
            .property<static_cast<bool(ColorPickerButton::*)()const>(&ColorPickerButton::is_editing_alpha),static_cast<void(ColorPickerButton::*)(bool)>(&ColorPickerButton::set_edit_alpha)>("edit_alpha")
            .fun<static_cast<ColorPicker *(ColorPickerButton::*)()>(&ColorPickerButton::get_picker)>("get_picker")
            .fun<static_cast<PopupPanel *(ColorPickerButton::*)()>(&ColorPickerButton::get_popup)>("get_popup")
;}