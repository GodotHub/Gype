
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/menu_button.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MenuButton() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<MenuButton>("MenuButton")
			.constructor<>()
			.base<Button>()
			.property<static_cast<bool (MenuButton::*)()>(&MenuButton::is_switch_on_hover), static_cast<void (MenuButton::*)(bool)>(&MenuButton::set_switch_on_hover)>((new std::string("switch_on_hover"))->c_str())
			.property<static_cast<int32_t (MenuButton::*)() const>(&MenuButton::get_item_count), static_cast<void (MenuButton::*)(int32_t)>(&MenuButton::set_item_count)>((new std::string("item_count"))->c_str())
			.fun<static_cast<PopupMenu *(MenuButton::*)() const>(&MenuButton::get_popup)>((new std::string("get_popup"))->c_str())
			.fun<static_cast<void (MenuButton::*)()>(&MenuButton::show_popup)>((new std::string("show_popup"))->c_str())
			.fun<static_cast<void (MenuButton::*)(bool)>(&MenuButton::set_disable_shortcuts)>((new std::string("set_disable_shortcuts"))->c_str());
}