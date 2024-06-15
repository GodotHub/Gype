#include <godot_cpp/classes/menu_button.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MenuButton() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<MenuButton>("MenuButton")
            .constructor<>()
            .base<Button>()
            .property<static_cast<bool(MenuButton::*)()>(&MenuButton::is_switch_on_hover),static_cast<void(MenuButton::*)(bool)>(&MenuButton::set_switch_on_hover)>("switch_on_hover")
            .property<static_cast<int32_t(MenuButton::*)()const>(&MenuButton::get_item_count),static_cast<void(MenuButton::*)(int32_t)>(&MenuButton::set_item_count)>("item_count")
            .fun<static_cast<PopupMenu *(MenuButton::*)()const>(&MenuButton::get_popup)>("get_popup")
            .fun<static_cast<void(MenuButton::*)()>(&MenuButton::show_popup)>("show_popup")
            .fun<static_cast<void(MenuButton::*)(bool)>(&MenuButton::set_disable_shortcuts)>("set_disable_shortcuts")
;}