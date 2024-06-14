
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/option_button.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OptionButton() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<OptionButton>("OptionButton")
			.constructor<>()
			.base<Button>()
			.property<static_cast<int32_t (OptionButton::*)() const>(&OptionButton::get_selected)>((new std::string("selected"))->c_str())
			.property<static_cast<bool (OptionButton::*)() const>(&OptionButton::is_fit_to_longest_item), static_cast<void (OptionButton::*)(bool)>(&OptionButton::set_fit_to_longest_item)>((new std::string("fit_to_longest_item"))->c_str())
			.property<static_cast<bool (OptionButton::*)() const>(&OptionButton::get_allow_reselect), static_cast<void (OptionButton::*)(bool)>(&OptionButton::set_allow_reselect)>((new std::string("allow_reselect"))->c_str())
			.property<static_cast<int32_t (OptionButton::*)() const>(&OptionButton::get_item_count), static_cast<void (OptionButton::*)(int32_t)>(&OptionButton::set_item_count)>((new std::string("item_count"))->c_str())
			.fun<static_cast<void (OptionButton::*)(const String &, int32_t)>(&OptionButton::add_item)>((new std::string("add_item"))->c_str())
			.fun<static_cast<void (OptionButton::*)(const Ref<Texture2D> &, const String &, int32_t)>(&OptionButton::add_icon_item)>((new std::string("add_icon_item"))->c_str())
			.fun<static_cast<void (OptionButton::*)(int32_t, const String &)>(&OptionButton::set_item_text)>((new std::string("set_item_text"))->c_str())
			.fun<static_cast<void (OptionButton::*)(int32_t, const Ref<Texture2D> &)>(&OptionButton::set_item_icon)>((new std::string("set_item_icon"))->c_str())
			.fun<static_cast<void (OptionButton::*)(int32_t, bool)>(&OptionButton::set_item_disabled)>((new std::string("set_item_disabled"))->c_str())
			.fun<static_cast<void (OptionButton::*)(int32_t, int32_t)>(&OptionButton::set_item_id)>((new std::string("set_item_id"))->c_str())
			.fun<static_cast<void (OptionButton::*)(int32_t, const Variant &)>(&OptionButton::set_item_metadata)>((new std::string("set_item_metadata"))->c_str())
			.fun<static_cast<void (OptionButton::*)(int32_t, const String &)>(&OptionButton::set_item_tooltip)>((new std::string("set_item_tooltip"))->c_str())
			.fun<static_cast<String (OptionButton::*)(int32_t) const>(&OptionButton::get_item_text)>((new std::string("get_item_text"))->c_str())
			.fun<static_cast<Ref<Texture2D> (OptionButton::*)(int32_t) const>(&OptionButton::get_item_icon)>((new std::string("get_item_icon"))->c_str())
			.fun<static_cast<int32_t (OptionButton::*)(int32_t) const>(&OptionButton::get_item_id)>((new std::string("get_item_id"))->c_str())
			.fun<static_cast<int32_t (OptionButton::*)(int32_t) const>(&OptionButton::get_item_index)>((new std::string("get_item_index"))->c_str())
			.fun<static_cast<Variant (OptionButton::*)(int32_t) const>(&OptionButton::get_item_metadata)>((new std::string("get_item_metadata"))->c_str())
			.fun<static_cast<String (OptionButton::*)(int32_t) const>(&OptionButton::get_item_tooltip)>((new std::string("get_item_tooltip"))->c_str())
			.fun<static_cast<bool (OptionButton::*)(int32_t) const>(&OptionButton::is_item_disabled)>((new std::string("is_item_disabled"))->c_str())
			.fun<static_cast<bool (OptionButton::*)(int32_t) const>(&OptionButton::is_item_separator)>((new std::string("is_item_separator"))->c_str())
			.fun<static_cast<void (OptionButton::*)(const String &)>(&OptionButton::add_separator)>((new std::string("add_separator"))->c_str())
			.fun<static_cast<void (OptionButton::*)()>(&OptionButton::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (OptionButton::*)(int32_t)>(&OptionButton::select)>((new std::string("select"))->c_str())
			.fun<static_cast<int32_t (OptionButton::*)() const>(&OptionButton::get_selected_id)>((new std::string("get_selected_id"))->c_str())
			.fun<static_cast<Variant (OptionButton::*)() const>(&OptionButton::get_selected_metadata)>((new std::string("get_selected_metadata"))->c_str())
			.fun<static_cast<void (OptionButton::*)(int32_t)>(&OptionButton::remove_item)>((new std::string("remove_item"))->c_str())
			.fun<static_cast<PopupMenu *(OptionButton::*)() const>(&OptionButton::get_popup)>((new std::string("get_popup"))->c_str())
			.fun<static_cast<void (OptionButton::*)()>(&OptionButton::show_popup)>((new std::string("show_popup"))->c_str())
			.fun<static_cast<bool (OptionButton::*)() const>(&OptionButton::has_selectable_items)>((new std::string("has_selectable_items"))->c_str())
			.fun<static_cast<int32_t (OptionButton::*)(bool) const>(&OptionButton::get_selectable_item)>((new std::string("get_selectable_item"))->c_str())
			.fun<static_cast<void (OptionButton::*)(bool)>(&OptionButton::set_disable_shortcuts)>((new std::string("set_disable_shortcuts"))->c_str());
}