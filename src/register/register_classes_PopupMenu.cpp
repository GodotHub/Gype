
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/native_menu.hpp>
#include <godot_cpp/classes/popup.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PopupMenu() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<PopupMenu>("PopupMenu")
			.constructor<>()
			.base<Popup>()
			.property<static_cast<bool (PopupMenu::*)() const>(&PopupMenu::is_hide_on_item_selection), static_cast<void (PopupMenu::*)(bool)>(&PopupMenu::set_hide_on_item_selection)>((new std::string("hide_on_item_selection"))->c_str())
			.property<static_cast<bool (PopupMenu::*)() const>(&PopupMenu::is_hide_on_checkable_item_selection), static_cast<void (PopupMenu::*)(bool)>(&PopupMenu::set_hide_on_checkable_item_selection)>((new std::string("hide_on_checkable_item_selection"))->c_str())
			.property<static_cast<bool (PopupMenu::*)() const>(&PopupMenu::is_hide_on_state_item_selection), static_cast<void (PopupMenu::*)(bool)>(&PopupMenu::set_hide_on_state_item_selection)>((new std::string("hide_on_state_item_selection"))->c_str())
			.property<static_cast<double (PopupMenu::*)() const>(&PopupMenu::get_submenu_popup_delay), static_cast<void (PopupMenu::*)(double)>(&PopupMenu::set_submenu_popup_delay)>((new std::string("submenu_popup_delay"))->c_str())
			.property<static_cast<bool (PopupMenu::*)() const>(&PopupMenu::get_allow_search), static_cast<void (PopupMenu::*)(bool)>(&PopupMenu::set_allow_search)>((new std::string("allow_search"))->c_str())
			.property<static_cast<NativeMenu::SystemMenus (PopupMenu::*)() const>(&PopupMenu::get_system_menu), static_cast<void (PopupMenu::*)(NativeMenu::SystemMenus)>(&PopupMenu::set_system_menu)>((new std::string("system_menu_id"))->c_str())
			.property<static_cast<bool (PopupMenu::*)() const>(&PopupMenu::is_prefer_native_menu), static_cast<void (PopupMenu::*)(bool)>(&PopupMenu::set_prefer_native_menu)>((new std::string("prefer_native_menu"))->c_str())
			.property<static_cast<int32_t (PopupMenu::*)() const>(&PopupMenu::get_item_count), static_cast<void (PopupMenu::*)(int32_t)>(&PopupMenu::set_item_count)>((new std::string("item_count"))->c_str())
			.fun<static_cast<bool (PopupMenu::*)(const Ref<InputEvent> &, bool)>(&PopupMenu::activate_item_by_event)>((new std::string("activate_item_by_event"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const String &, int32_t, Key)>(&PopupMenu::add_item)>((new std::string("add_item"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const Ref<Texture2D> &, const String &, int32_t, Key)>(&PopupMenu::add_icon_item)>((new std::string("add_icon_item"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const String &, int32_t, Key)>(&PopupMenu::add_check_item)>((new std::string("add_check_item"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const Ref<Texture2D> &, const String &, int32_t, Key)>(&PopupMenu::add_icon_check_item)>((new std::string("add_icon_check_item"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const String &, int32_t, Key)>(&PopupMenu::add_radio_check_item)>((new std::string("add_radio_check_item"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const Ref<Texture2D> &, const String &, int32_t, Key)>(&PopupMenu::add_icon_radio_check_item)>((new std::string("add_icon_radio_check_item"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const String &, int32_t, int32_t, int32_t, Key)>(&PopupMenu::add_multistate_item)>((new std::string("add_multistate_item"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const Ref<Shortcut> &, int32_t, bool, bool)>(&PopupMenu::add_shortcut)>((new std::string("add_shortcut"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const Ref<Texture2D> &, const Ref<Shortcut> &, int32_t, bool, bool)>(&PopupMenu::add_icon_shortcut)>((new std::string("add_icon_shortcut"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const Ref<Shortcut> &, int32_t, bool)>(&PopupMenu::add_check_shortcut)>((new std::string("add_check_shortcut"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const Ref<Texture2D> &, const Ref<Shortcut> &, int32_t, bool)>(&PopupMenu::add_icon_check_shortcut)>((new std::string("add_icon_check_shortcut"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const Ref<Shortcut> &, int32_t, bool)>(&PopupMenu::add_radio_check_shortcut)>((new std::string("add_radio_check_shortcut"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const Ref<Texture2D> &, const Ref<Shortcut> &, int32_t, bool)>(&PopupMenu::add_icon_radio_check_shortcut)>((new std::string("add_icon_radio_check_shortcut"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const String &, const String &, int32_t)>(&PopupMenu::add_submenu_item)>((new std::string("add_submenu_item"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const String &, PopupMenu *, int32_t)>(&PopupMenu::add_submenu_node_item)>((new std::string("add_submenu_node_item"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, const String &)>(&PopupMenu::set_item_text)>((new std::string("set_item_text"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, Control::TextDirection)>(&PopupMenu::set_item_text_direction)>((new std::string("set_item_text_direction"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, const String &)>(&PopupMenu::set_item_language)>((new std::string("set_item_language"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, const Ref<Texture2D> &)>(&PopupMenu::set_item_icon)>((new std::string("set_item_icon"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, int32_t)>(&PopupMenu::set_item_icon_max_width)>((new std::string("set_item_icon_max_width"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, const Color &)>(&PopupMenu::set_item_icon_modulate)>((new std::string("set_item_icon_modulate"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, bool)>(&PopupMenu::set_item_checked)>((new std::string("set_item_checked"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, int32_t)>(&PopupMenu::set_item_id)>((new std::string("set_item_id"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, Key)>(&PopupMenu::set_item_accelerator)>((new std::string("set_item_accelerator"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, const Variant &)>(&PopupMenu::set_item_metadata)>((new std::string("set_item_metadata"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, bool)>(&PopupMenu::set_item_disabled)>((new std::string("set_item_disabled"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, const String &)>(&PopupMenu::set_item_submenu)>((new std::string("set_item_submenu"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, PopupMenu *)>(&PopupMenu::set_item_submenu_node)>((new std::string("set_item_submenu_node"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, bool)>(&PopupMenu::set_item_as_separator)>((new std::string("set_item_as_separator"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, bool)>(&PopupMenu::set_item_as_checkable)>((new std::string("set_item_as_checkable"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, bool)>(&PopupMenu::set_item_as_radio_checkable)>((new std::string("set_item_as_radio_checkable"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, const String &)>(&PopupMenu::set_item_tooltip)>((new std::string("set_item_tooltip"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, const Ref<Shortcut> &, bool)>(&PopupMenu::set_item_shortcut)>((new std::string("set_item_shortcut"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, int32_t)>(&PopupMenu::set_item_indent)>((new std::string("set_item_indent"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, int32_t)>(&PopupMenu::set_item_multistate)>((new std::string("set_item_multistate"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, int32_t)>(&PopupMenu::set_item_multistate_max)>((new std::string("set_item_multistate_max"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t, bool)>(&PopupMenu::set_item_shortcut_disabled)>((new std::string("set_item_shortcut_disabled"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t)>(&PopupMenu::toggle_item_checked)>((new std::string("toggle_item_checked"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t)>(&PopupMenu::toggle_item_multistate)>((new std::string("toggle_item_multistate"))->c_str())
			.fun<static_cast<String (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_text)>((new std::string("get_item_text"))->c_str())
			.fun<static_cast<Control::TextDirection (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_text_direction)>((new std::string("get_item_text_direction"))->c_str())
			.fun<static_cast<String (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_language)>((new std::string("get_item_language"))->c_str())
			.fun<static_cast<Ref<Texture2D> (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_icon)>((new std::string("get_item_icon"))->c_str())
			.fun<static_cast<int32_t (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_icon_max_width)>((new std::string("get_item_icon_max_width"))->c_str())
			.fun<static_cast<Color (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_icon_modulate)>((new std::string("get_item_icon_modulate"))->c_str())
			.fun<static_cast<bool (PopupMenu::*)(int32_t) const>(&PopupMenu::is_item_checked)>((new std::string("is_item_checked"))->c_str())
			.fun<static_cast<int32_t (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_id)>((new std::string("get_item_id"))->c_str())
			.fun<static_cast<int32_t (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_index)>((new std::string("get_item_index"))->c_str())
			.fun<static_cast<Key (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_accelerator)>((new std::string("get_item_accelerator"))->c_str())
			.fun<static_cast<Variant (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_metadata)>((new std::string("get_item_metadata"))->c_str())
			.fun<static_cast<bool (PopupMenu::*)(int32_t) const>(&PopupMenu::is_item_disabled)>((new std::string("is_item_disabled"))->c_str())
			.fun<static_cast<String (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_submenu)>((new std::string("get_item_submenu"))->c_str())
			.fun<static_cast<PopupMenu *(PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_submenu_node)>((new std::string("get_item_submenu_node"))->c_str())
			.fun<static_cast<bool (PopupMenu::*)(int32_t) const>(&PopupMenu::is_item_separator)>((new std::string("is_item_separator"))->c_str())
			.fun<static_cast<bool (PopupMenu::*)(int32_t) const>(&PopupMenu::is_item_checkable)>((new std::string("is_item_checkable"))->c_str())
			.fun<static_cast<bool (PopupMenu::*)(int32_t) const>(&PopupMenu::is_item_radio_checkable)>((new std::string("is_item_radio_checkable"))->c_str())
			.fun<static_cast<bool (PopupMenu::*)(int32_t) const>(&PopupMenu::is_item_shortcut_disabled)>((new std::string("is_item_shortcut_disabled"))->c_str())
			.fun<static_cast<String (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_tooltip)>((new std::string("get_item_tooltip"))->c_str())
			.fun<static_cast<Ref<Shortcut> (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_shortcut)>((new std::string("get_item_shortcut"))->c_str())
			.fun<static_cast<int32_t (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_indent)>((new std::string("get_item_indent"))->c_str())
			.fun<static_cast<int32_t (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_multistate_max)>((new std::string("get_item_multistate_max"))->c_str())
			.fun<static_cast<int32_t (PopupMenu::*)(int32_t) const>(&PopupMenu::get_item_multistate)>((new std::string("get_item_multistate"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t)>(&PopupMenu::set_focused_item)>((new std::string("set_focused_item"))->c_str())
			.fun<static_cast<int32_t (PopupMenu::*)() const>(&PopupMenu::get_focused_item)>((new std::string("get_focused_item"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t)>(&PopupMenu::scroll_to_item)>((new std::string("scroll_to_item"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(int32_t)>(&PopupMenu::remove_item)>((new std::string("remove_item"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(const String &, int32_t)>(&PopupMenu::add_separator)>((new std::string("add_separator"))->c_str())
			.fun<static_cast<void (PopupMenu::*)(bool)>(&PopupMenu::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<bool (PopupMenu::*)() const>(&PopupMenu::is_system_menu)>((new std::string("is_system_menu"))->c_str());
}