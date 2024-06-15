#include <godot_cpp/classes/option_button.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OptionButton() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<OptionButton>("OptionButton")
            .constructor<>()
            .base<Button>()
            .property<static_cast<int32_t(OptionButton::*)()const>(&OptionButton::get_selected)>("selected")
            .property<static_cast<bool(OptionButton::*)()const>(&OptionButton::is_fit_to_longest_item),static_cast<void(OptionButton::*)(bool)>(&OptionButton::set_fit_to_longest_item)>("fit_to_longest_item")
            .property<static_cast<bool(OptionButton::*)()const>(&OptionButton::get_allow_reselect),static_cast<void(OptionButton::*)(bool)>(&OptionButton::set_allow_reselect)>("allow_reselect")
            .property<static_cast<int32_t(OptionButton::*)()const>(&OptionButton::get_item_count),static_cast<void(OptionButton::*)(int32_t)>(&OptionButton::set_item_count)>("item_count")
            .fun<static_cast<void(OptionButton::*)(const String &,int32_t)>(&OptionButton::add_item)>("add_item")
            .fun<static_cast<void(OptionButton::*)(const Ref<Texture2D> &,const String &,int32_t)>(&OptionButton::add_icon_item)>("add_icon_item")
            .fun<static_cast<void(OptionButton::*)(int32_t,const String &)>(&OptionButton::set_item_text)>("set_item_text")
            .fun<static_cast<void(OptionButton::*)(int32_t,const Ref<Texture2D> &)>(&OptionButton::set_item_icon)>("set_item_icon")
            .fun<static_cast<void(OptionButton::*)(int32_t,bool)>(&OptionButton::set_item_disabled)>("set_item_disabled")
            .fun<static_cast<void(OptionButton::*)(int32_t,int32_t)>(&OptionButton::set_item_id)>("set_item_id")
            .fun<static_cast<void(OptionButton::*)(int32_t,const Variant &)>(&OptionButton::set_item_metadata)>("set_item_metadata")
            .fun<static_cast<void(OptionButton::*)(int32_t,const String &)>(&OptionButton::set_item_tooltip)>("set_item_tooltip")
            .fun<static_cast<String(OptionButton::*)(int32_t)const>(&OptionButton::get_item_text)>("get_item_text")
            .fun<static_cast<Ref<Texture2D>(OptionButton::*)(int32_t)const>(&OptionButton::get_item_icon)>("get_item_icon")
            .fun<static_cast<int32_t(OptionButton::*)(int32_t)const>(&OptionButton::get_item_id)>("get_item_id")
            .fun<static_cast<int32_t(OptionButton::*)(int32_t)const>(&OptionButton::get_item_index)>("get_item_index")
            .fun<static_cast<Variant(OptionButton::*)(int32_t)const>(&OptionButton::get_item_metadata)>("get_item_metadata")
            .fun<static_cast<String(OptionButton::*)(int32_t)const>(&OptionButton::get_item_tooltip)>("get_item_tooltip")
            .fun<static_cast<bool(OptionButton::*)(int32_t)const>(&OptionButton::is_item_disabled)>("is_item_disabled")
            .fun<static_cast<bool(OptionButton::*)(int32_t)const>(&OptionButton::is_item_separator)>("is_item_separator")
            .fun<static_cast<void(OptionButton::*)(const String &)>(&OptionButton::add_separator)>("add_separator")
            .fun<static_cast<void(OptionButton::*)()>(&OptionButton::clear)>("clear")
            .fun<static_cast<void(OptionButton::*)(int32_t)>(&OptionButton::select)>("select")
            .fun<static_cast<int32_t(OptionButton::*)()const>(&OptionButton::get_selected_id)>("get_selected_id")
            .fun<static_cast<Variant(OptionButton::*)()const>(&OptionButton::get_selected_metadata)>("get_selected_metadata")
            .fun<static_cast<void(OptionButton::*)(int32_t)>(&OptionButton::remove_item)>("remove_item")
            .fun<static_cast<PopupMenu *(OptionButton::*)()const>(&OptionButton::get_popup)>("get_popup")
            .fun<static_cast<void(OptionButton::*)()>(&OptionButton::show_popup)>("show_popup")
            .fun<static_cast<bool(OptionButton::*)()const>(&OptionButton::has_selectable_items)>("has_selectable_items")
            .fun<static_cast<int32_t(OptionButton::*)(bool)const>(&OptionButton::get_selectable_item)>("get_selectable_item")
            .fun<static_cast<void(OptionButton::*)(bool)>(&OptionButton::set_disable_shortcuts)>("set_disable_shortcuts")
;}