#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/menu_bar.hpp>

using namespace godot;

void register_classes_MenuBar() {
    qjs::Context::Module &_module = _Control;
    _module.class_<MenuBar>("MenuBar")
           .constructor<>()
           .property<MenuBar::is_flat, MenuBar::set_flat>("flat")
           .property<MenuBar::get_start_index, MenuBar::set_start_index>("start_index")
           .property<MenuBar::is_switch_on_hover, MenuBar::set_switch_on_hover>("switch_on_hover")
           .property<MenuBar::is_prefer_global_menu, MenuBar::set_prefer_global_menu>("prefer_global_menu")
           .property<MenuBar::get_text_direction, MenuBar::set_text_direction>("text_direction")
           .property<MenuBar::get_language, MenuBar::set_language>("language")
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