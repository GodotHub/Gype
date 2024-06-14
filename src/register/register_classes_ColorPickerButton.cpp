#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/color_picker.hpp>
#include <godot_cpp/classes/color_picker_button.hpp>
#include <godot_cpp/classes/popup_panel.hpp>
#include <godot_cpp/variant/color.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ColorPickerButton() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<ColorPickerButton>("ColorPickerButton")
			.constructor<>()
			.base<Button>()
			.property<static_cast<Color (ColorPickerButton::*)() const>(&ColorPickerButton::get_pick_color), static_cast<void (ColorPickerButton::*)(const Color &)>(&ColorPickerButton::set_pick_color)>((new std::string("color"))->c_str())
			.property<static_cast<bool (ColorPickerButton::*)() const>(&ColorPickerButton::is_editing_alpha), static_cast<void (ColorPickerButton::*)(bool)>(&ColorPickerButton::set_edit_alpha)>((new std::string("edit_alpha"))->c_str())
			.fun<static_cast<ColorPicker *(ColorPickerButton::*)()>(&ColorPickerButton::get_picker)>((new std::string("get_picker"))->c_str())
			.fun<static_cast<PopupPanel *(ColorPickerButton::*)()>(&ColorPickerButton::get_popup)>((new std::string("get_popup"))->c_str());
}