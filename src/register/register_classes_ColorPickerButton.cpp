#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/color_picker_button.hpp>

using namespace godot;

void register_classes_ColorPickerButton() {
    qjs::Context::Module &_module = _Control;
    _module.class_<ColorPickerButton>("ColorPickerButton")
           .constructor<>()
           .property<ColorPickerButton::get_pick_color, ColorPickerButton::set_pick_color>("color")
           .property<ColorPickerButton::is_editing_alpha, ColorPickerButton::set_edit_alpha>("edit_alpha")
		    .fun<static_cast<ColorPicker *(ColorPickerButton::*)()>(&ColorPickerButton::get_picker)>("get_picker")
		    .fun<static_cast<PopupPanel *(ColorPickerButton::*)()>(&ColorPickerButton::get_popup)>("get_popup")
;}