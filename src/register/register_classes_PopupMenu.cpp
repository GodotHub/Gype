#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/native_menu.hpp>
#include <godot_cpp/classes/popup.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PopupMenu() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<PopupMenu>("PopupMenu")
            .constructor<>()
            .base<Popup>()
            .property<static_cast<bool(PopupMenu::*)()const>(&PopupMenu::is_hide_on_item_selection),static_cast<void(PopupMenu::*)(bool)>(&PopupMenu::set_hide_on_item_selection)>("hide_on_item_selection")
            .property<static_cast<bool(PopupMenu::*)()const>(&PopupMenu::is_hide_on_checkable_item_selection),static_cast<void(PopupMenu::*)(bool)>(&PopupMenu::set_hide_on_checkable_item_selection)>("hide_on_checkable_item_selection")
            .property<static_cast<bool(PopupMenu::*)()const>(&PopupMenu::is_hide_on_state_item_selection),static_cast<void(PopupMenu::*)(bool)>(&PopupMenu::set_hide_on_state_item_selection)>("hide_on_state_item_selection")
            .property<static_cast<double(PopupMenu::*)()const>(&PopupMenu::get_submenu_popup_delay),static_cast<void(PopupMenu::*)(double)>(&PopupMenu::set_submenu_popup_delay)>("submenu_popup_delay")
            .property<static_cast<bool(PopupMenu::*)()const>(&PopupMenu::get_allow_search),static_cast<void(PopupMenu::*)(bool)>(&PopupMenu::set_allow_search)>("allow_search")
            .property<static_cast<NativeMenu::SystemMenus(PopupMenu::*)()const>(&PopupMenu::get_system_menu),static_cast<void(PopupMenu::*)(NativeMenu::SystemMenus)>(&PopupMenu::set_system_menu)>("system_menu_id")
            .property<static_cast<bool(PopupMenu::*)()const>(&PopupMenu::is_prefer_native_menu),static_cast<void(PopupMenu::*)(bool)>(&PopupMenu::set_prefer_native_menu)>("prefer_native_menu")
            .property<static_cast<int32_t(PopupMenu::*)()const>(&PopupMenu::get_item_count),static_cast<void(PopupMenu::*)(int32_t)>(&PopupMenu::set_item_count)>("item_count")
            .fun<static_cast<bool(PopupMenu::*)(const Ref<InputEvent> &,bool)>(&PopupMenu::activate_item_by_event)>("activate_item_by_event")
            .fun<static_cast<void(PopupMenu::*)(const String &,int32_t,Key)>(&PopupMenu::add_item)>("add_item")
            .fun<static_cast<void(PopupMenu::*)(const Ref<Texture2D> &,const String &,int32_t,Key)>(&PopupMenu::add_icon_item)>("add_icon_item")
            .fun<static_cast<void(PopupMenu::*)(const String &,int32_t,Key)>(&PopupMenu::add_check_item)>("add_check_item")
            .fun<static_cast<void(PopupMenu::*)(const Ref<Texture2D> &,const String &,int32_t,Key)>(&PopupMenu::add_icon_check_item)>("add_icon_check_item")
            .fun<static_cast<void(PopupMenu::*)(const String &,int32_t,Key)>(&PopupMenu::add_radio_check_item)>("add_radio_check_item")
            .fun<static_cast<void(PopupMenu::*)(const Ref<Texture2D> &,const String &,int32_t,Key)>(&PopupMenu::add_icon_radio_check_item)>("add_icon_radio_check_item")
            .fun<static_cast<void(PopupMenu::*)(const String &,int32_t,int32_t,int32_t,Key)>(&PopupMenu::add_multistate_item)>("add_multistate_item")
            .fun<static_cast<void(PopupMenu::*)(const Ref<Shortcut> &,int32_t,bool,bool)>(&PopupMenu::add_shortcut)>("add_shortcut")
            .fun<static_cast<void(PopupMenu::*)(const Ref<Texture2D> &,const Ref<Shortcut> &,int32_t,bool,bool)>(&PopupMenu::add_icon_shortcut)>("add_icon_shortcut")
            .fun<static_cast<void(PopupMenu::*)(const Ref<Shortcut> &,int32_t,bool)>(&PopupMenu::add_check_shortcut)>("add_check_shortcut")
            .fun<static_cast<void(PopupMenu::*)(const Ref<Texture2D> &,const Ref<Shortcut> &,int32_t,bool)>(&PopupMenu::add_icon_check_shortcut)>("add_icon_check_shortcut")
            .fun<static_cast<void(PopupMenu::*)(const Ref<Shortcut> &,int32_t,bool)>(&PopupMenu::add_radio_check_shortcut)>("add_radio_check_shortcut")
            .fun<static_cast<void(PopupMenu::*)(const Ref<Texture2D> &,const Ref<Shortcut> &,int32_t,bool)>(&PopupMenu::add_icon_radio_check_shortcut)>("add_icon_radio_check_shortcut")
            .fun<static_cast<void(PopupMenu::*)(const String &,const String &,int32_t)>(&PopupMenu::add_submenu_item)>("add_submenu_item")
            .fun<static_cast<void(PopupMenu::*)(const String &,PopupMenu *,int32_t)>(&PopupMenu::add_submenu_node_item)>("add_submenu_node_item")
            .fun<static_cast<void(PopupMenu::*)(int32_t,const String &)>(&PopupMenu::set_item_text)>("set_item_text")
            .fun<static_cast<void(PopupMenu::*)(int32_t,Control::TextDirection)>(&PopupMenu::set_item_text_direction)>("set_item_text_direction")
            .fun<static_cast<void(PopupMenu::*)(int32_t,const String &)>(&PopupMenu::set_item_language)>("set_item_language")
            .fun<static_cast<void(PopupMenu::*)(int32_t,const Ref<Texture2D> &)>(&PopupMenu::set_item_icon)>("set_item_icon")
            .fun<static_cast<void(PopupMenu::*)(int32_t,int32_t)>(&PopupMenu::set_item_icon_max_width)>("set_item_icon_max_width")
            .fun<static_cast<void(PopupMenu::*)(int32_t,const Color &)>(&PopupMenu::set_item_icon_modulate)>("set_item_icon_modulate")
            .fun<static_cast<void(PopupMenu::*)(int32_t,bool)>(&PopupMenu::set_item_checked)>("set_item_checked")
            .fun<static_cast<void(PopupMenu::*)(int32_t,int32_t)>(&PopupMenu::set_item_id)>("set_item_id")
            .fun<static_cast<void(PopupMenu::*)(int32_t,Key)>(&PopupMenu::set_item_accelerator)>("set_item_accelerator")
            .fun<static_cast<void(PopupMenu::*)(int32_t,const Variant &)>(&PopupMenu::set_item_metadata)>("set_item_metadata")
            .fun<static_cast<void(PopupMenu::*)(int32_t,bool)>(&PopupMenu::set_item_disabled)>("set_item_disabled")
            .fun<static_cast<void(PopupMenu::*)(int32_t,const String &)>(&PopupMenu::set_item_submenu)>("set_item_submenu")
            .fun<static_cast<void(PopupMenu::*)(int32_t,PopupMenu *)>(&PopupMenu::set_item_submenu_node)>("set_item_submenu_node")
            .fun<static_cast<void(PopupMenu::*)(int32_t,bool)>(&PopupMenu::set_item_as_separator)>("set_item_as_separator")
            .fun<static_cast<void(PopupMenu::*)(int32_t,bool)>(&PopupMenu::set_item_as_checkable)>("set_item_as_checkable")
            .fun<static_cast<void(PopupMenu::*)(int32_t,bool)>(&PopupMenu::set_item_as_radio_checkable)>("set_item_as_radio_checkable")
            .fun<static_cast<void(PopupMenu::*)(int32_t,const String &)>(&PopupMenu::set_item_tooltip)>("set_item_tooltip")
            .fun<static_cast<void(PopupMenu::*)(int32_t,const Ref<Shortcut> &,bool)>(&PopupMenu::set_item_shortcut)>("set_item_shortcut")
            .fun<static_cast<void(PopupMenu::*)(int32_t,int32_t)>(&PopupMenu::set_item_indent)>("set_item_indent")
            .fun<static_cast<void(PopupMenu::*)(int32_t,int32_t)>(&PopupMenu::set_item_multistate)>("set_item_multistate")
            .fun<static_cast<void(PopupMenu::*)(int32_t,int32_t)>(&PopupMenu::set_item_multistate_max)>("set_item_multistate_max")
            .fun<static_cast<void(PopupMenu::*)(int32_t,bool)>(&PopupMenu::set_item_shortcut_disabled)>("set_item_shortcut_disabled")
            .fun<static_cast<void(PopupMenu::*)(int32_t)>(&PopupMenu::toggle_item_checked)>("toggle_item_checked")
            .fun<static_cast<void(PopupMenu::*)(int32_t)>(&PopupMenu::toggle_item_multistate)>("toggle_item_multistate")
            .fun<static_cast<String(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_text)>("get_item_text")
            .fun<static_cast<Control::TextDirection(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_text_direction)>("get_item_text_direction")
            .fun<static_cast<String(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_language)>("get_item_language")
            .fun<static_cast<Ref<Texture2D>(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_icon)>("get_item_icon")
            .fun<static_cast<int32_t(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_icon_max_width)>("get_item_icon_max_width")
            .fun<static_cast<Color(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_icon_modulate)>("get_item_icon_modulate")
            .fun<static_cast<bool(PopupMenu::*)(int32_t)const>(&PopupMenu::is_item_checked)>("is_item_checked")
            .fun<static_cast<int32_t(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_id)>("get_item_id")
            .fun<static_cast<int32_t(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_index)>("get_item_index")
            .fun<static_cast<Key(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_accelerator)>("get_item_accelerator")
            .fun<static_cast<Variant(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_metadata)>("get_item_metadata")
            .fun<static_cast<bool(PopupMenu::*)(int32_t)const>(&PopupMenu::is_item_disabled)>("is_item_disabled")
            .fun<static_cast<String(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_submenu)>("get_item_submenu")
            .fun<static_cast<PopupMenu *(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_submenu_node)>("get_item_submenu_node")
            .fun<static_cast<bool(PopupMenu::*)(int32_t)const>(&PopupMenu::is_item_separator)>("is_item_separator")
            .fun<static_cast<bool(PopupMenu::*)(int32_t)const>(&PopupMenu::is_item_checkable)>("is_item_checkable")
            .fun<static_cast<bool(PopupMenu::*)(int32_t)const>(&PopupMenu::is_item_radio_checkable)>("is_item_radio_checkable")
            .fun<static_cast<bool(PopupMenu::*)(int32_t)const>(&PopupMenu::is_item_shortcut_disabled)>("is_item_shortcut_disabled")
            .fun<static_cast<String(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_tooltip)>("get_item_tooltip")
            .fun<static_cast<Ref<Shortcut>(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_shortcut)>("get_item_shortcut")
            .fun<static_cast<int32_t(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_indent)>("get_item_indent")
            .fun<static_cast<int32_t(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_multistate_max)>("get_item_multistate_max")
            .fun<static_cast<int32_t(PopupMenu::*)(int32_t)const>(&PopupMenu::get_item_multistate)>("get_item_multistate")
            .fun<static_cast<void(PopupMenu::*)(int32_t)>(&PopupMenu::set_focused_item)>("set_focused_item")
            .fun<static_cast<int32_t(PopupMenu::*)()const>(&PopupMenu::get_focused_item)>("get_focused_item")
            .fun<static_cast<void(PopupMenu::*)(int32_t)>(&PopupMenu::scroll_to_item)>("scroll_to_item")
            .fun<static_cast<void(PopupMenu::*)(int32_t)>(&PopupMenu::remove_item)>("remove_item")
            .fun<static_cast<void(PopupMenu::*)(const String &,int32_t)>(&PopupMenu::add_separator)>("add_separator")
            .fun<static_cast<void(PopupMenu::*)(bool)>(&PopupMenu::clear)>("clear")
            .fun<static_cast<bool(PopupMenu::*)()const>(&PopupMenu::is_system_menu)>("is_system_menu")
;}