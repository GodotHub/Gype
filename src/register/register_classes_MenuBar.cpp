#include <godot_cpp/classes/menu_bar.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MenuBar() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<MenuBar>("MenuBar")
            .constructor<>()
            .base<Control>()
            .property<static_cast<bool(MenuBar::*)()const>(&MenuBar::is_flat),static_cast<void(MenuBar::*)(bool)>(&MenuBar::set_flat)>("flat")
            .property<static_cast<int32_t(MenuBar::*)()const>(&MenuBar::get_start_index),static_cast<void(MenuBar::*)(int32_t)>(&MenuBar::set_start_index)>("start_index")
            .property<static_cast<bool(MenuBar::*)()>(&MenuBar::is_switch_on_hover),static_cast<void(MenuBar::*)(bool)>(&MenuBar::set_switch_on_hover)>("switch_on_hover")
            .property<static_cast<bool(MenuBar::*)()const>(&MenuBar::is_prefer_global_menu),static_cast<void(MenuBar::*)(bool)>(&MenuBar::set_prefer_global_menu)>("prefer_global_menu")
            .property<static_cast<Control::TextDirection(MenuBar::*)()const>(&MenuBar::get_text_direction),static_cast<void(MenuBar::*)(Control::TextDirection)>(&MenuBar::set_text_direction)>("text_direction")
            .property<static_cast<String(MenuBar::*)()const>(&MenuBar::get_language),static_cast<void(MenuBar::*)(const String &)>(&MenuBar::set_language)>("language")
            .fun<static_cast<void(MenuBar::*)(bool)>(&MenuBar::set_disable_shortcuts)>("set_disable_shortcuts")
            .fun<static_cast<bool(MenuBar::*)()const>(&MenuBar::is_native_menu)>("is_native_menu")
            .fun<static_cast<int32_t(MenuBar::*)()const>(&MenuBar::get_menu_count)>("get_menu_count")
            .fun<static_cast<void(MenuBar::*)(int32_t,const String &)>(&MenuBar::set_menu_title)>("set_menu_title")
            .fun<static_cast<String(MenuBar::*)(int32_t)const>(&MenuBar::get_menu_title)>("get_menu_title")
            .fun<static_cast<void(MenuBar::*)(int32_t,const String &)>(&MenuBar::set_menu_tooltip)>("set_menu_tooltip")
            .fun<static_cast<String(MenuBar::*)(int32_t)const>(&MenuBar::get_menu_tooltip)>("get_menu_tooltip")
            .fun<static_cast<void(MenuBar::*)(int32_t,bool)>(&MenuBar::set_menu_disabled)>("set_menu_disabled")
            .fun<static_cast<bool(MenuBar::*)(int32_t)const>(&MenuBar::is_menu_disabled)>("is_menu_disabled")
            .fun<static_cast<void(MenuBar::*)(int32_t,bool)>(&MenuBar::set_menu_hidden)>("set_menu_hidden")
            .fun<static_cast<bool(MenuBar::*)(int32_t)const>(&MenuBar::is_menu_hidden)>("is_menu_hidden")
            .fun<static_cast<PopupMenu *(MenuBar::*)(int32_t)const>(&MenuBar::get_menu_popup)>("get_menu_popup")
;}