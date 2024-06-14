
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/menu_bar.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MenuBar() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<MenuBar>("MenuBar")
			.constructor<>()
			.base<Control>()
			.property<static_cast<bool (MenuBar::*)() const>(&MenuBar::is_flat), static_cast<void (MenuBar::*)(bool)>(&MenuBar::set_flat)>((new std::string("flat"))->c_str())
			.property<static_cast<int32_t (MenuBar::*)() const>(&MenuBar::get_start_index), static_cast<void (MenuBar::*)(int32_t)>(&MenuBar::set_start_index)>((new std::string("start_index"))->c_str())
			.property<static_cast<bool (MenuBar::*)()>(&MenuBar::is_switch_on_hover), static_cast<void (MenuBar::*)(bool)>(&MenuBar::set_switch_on_hover)>((new std::string("switch_on_hover"))->c_str())
			.property<static_cast<bool (MenuBar::*)() const>(&MenuBar::is_prefer_global_menu), static_cast<void (MenuBar::*)(bool)>(&MenuBar::set_prefer_global_menu)>((new std::string("prefer_global_menu"))->c_str())
			.property<static_cast<Control::TextDirection (MenuBar::*)() const>(&MenuBar::get_text_direction), static_cast<void (MenuBar::*)(Control::TextDirection)>(&MenuBar::set_text_direction)>((new std::string("text_direction"))->c_str())
			.property<static_cast<String (MenuBar::*)() const>(&MenuBar::get_language), static_cast<void (MenuBar::*)(const String &)>(&MenuBar::set_language)>((new std::string("language"))->c_str())
			.fun<static_cast<void (MenuBar::*)(bool)>(&MenuBar::set_disable_shortcuts)>((new std::string("set_disable_shortcuts"))->c_str())
			.fun<static_cast<bool (MenuBar::*)() const>(&MenuBar::is_native_menu)>((new std::string("is_native_menu"))->c_str())
			.fun<static_cast<int32_t (MenuBar::*)() const>(&MenuBar::get_menu_count)>((new std::string("get_menu_count"))->c_str())
			.fun<static_cast<void (MenuBar::*)(int32_t, const String &)>(&MenuBar::set_menu_title)>((new std::string("set_menu_title"))->c_str())
			.fun<static_cast<String (MenuBar::*)(int32_t) const>(&MenuBar::get_menu_title)>((new std::string("get_menu_title"))->c_str())
			.fun<static_cast<void (MenuBar::*)(int32_t, const String &)>(&MenuBar::set_menu_tooltip)>((new std::string("set_menu_tooltip"))->c_str())
			.fun<static_cast<String (MenuBar::*)(int32_t) const>(&MenuBar::get_menu_tooltip)>((new std::string("get_menu_tooltip"))->c_str())
			.fun<static_cast<void (MenuBar::*)(int32_t, bool)>(&MenuBar::set_menu_disabled)>((new std::string("set_menu_disabled"))->c_str())
			.fun<static_cast<bool (MenuBar::*)(int32_t) const>(&MenuBar::is_menu_disabled)>((new std::string("is_menu_disabled"))->c_str())
			.fun<static_cast<void (MenuBar::*)(int32_t, bool)>(&MenuBar::set_menu_hidden)>((new std::string("set_menu_hidden"))->c_str())
			.fun<static_cast<bool (MenuBar::*)(int32_t) const>(&MenuBar::is_menu_hidden)>((new std::string("is_menu_hidden"))->c_str())
			.fun<static_cast<PopupMenu *(MenuBar::*)(int32_t) const>(&MenuBar::get_menu_popup)>((new std::string("get_menu_popup"))->c_str());
}