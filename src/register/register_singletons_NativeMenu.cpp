#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"
#include <godot_cpp/classes/native_menu.hpp>
#include <godot_cpp/classes/texture2d.hpp>

using namespace godot;

void register_singletons_NativeMenu() {
	qjs::Value js_singleton = context->newObject();
	NativeMenu *singleton = NativeMenu::get_singleton();
	js_singleton.add((new std::string("has_feature"))->c_str(), [singleton](NativeMenu::Feature feature) -> bool { return singleton->has_feature(feature); });
	js_singleton.add((new std::string("has_system_menu"))->c_str(), [singleton](NativeMenu::SystemMenus menu_id) -> bool { return singleton->has_system_menu(menu_id); });
	js_singleton.add((new std::string("get_system_menu"))->c_str(), [singleton](NativeMenu::SystemMenus menu_id) -> RID { return singleton->get_system_menu(menu_id); });
	js_singleton.add((new std::string("get_system_menu_name"))->c_str(), [singleton](NativeMenu::SystemMenus menu_id) -> String { return singleton->get_system_menu_name(menu_id); });
	js_singleton.add((new std::string("create_menu"))->c_str(), [singleton]() -> RID { return singleton->create_menu(); });
	js_singleton.add((new std::string("has_menu"))->c_str(), [singleton](const RID &rid) -> bool { return singleton->has_menu(rid); });
	js_singleton.add((new std::string("free_menu"))->c_str(), [singleton](const RID &rid) -> void { singleton->free_menu(rid); });
	js_singleton.add((new std::string("get_size"))->c_str(), [singleton](const RID &rid) -> Vector2 { return singleton->get_size(rid); });
	js_singleton.add((new std::string("popup"))->c_str(), [singleton](const RID &rid, const Vector2i &position) -> void { singleton->popup(rid, position); });
	js_singleton.add((new std::string("set_interface_direction"))->c_str(), [singleton](const RID &rid, bool is_rtl) -> void { singleton->set_interface_direction(rid, is_rtl); });
	js_singleton.add((new std::string("set_popup_open_callback"))->c_str(), [singleton](const RID &rid, const Callable &callback) -> void { singleton->set_popup_open_callback(rid, callback); });
	js_singleton.add((new std::string("get_popup_open_callback"))->c_str(), [singleton](const RID &rid) -> Callable { return singleton->get_popup_open_callback(rid); });
	js_singleton.add((new std::string("set_popup_close_callback"))->c_str(), [singleton](const RID &rid, const Callable &callback) -> void { singleton->set_popup_close_callback(rid, callback); });
	js_singleton.add((new std::string("get_popup_close_callback"))->c_str(), [singleton](const RID &rid) -> Callable { return singleton->get_popup_close_callback(rid); });
	js_singleton.add((new std::string("set_minimum_width"))->c_str(), [singleton](const RID &rid, double width) -> void { singleton->set_minimum_width(rid, width); });
	js_singleton.add((new std::string("get_minimum_width"))->c_str(), [singleton](const RID &rid) -> double { return singleton->get_minimum_width(rid); });
	js_singleton.add((new std::string("add_submenu_item"))->c_str(), [singleton](const RID &rid, const String &label, const RID &submenu_rid, const Variant &tag, int32_t index) -> int64_t { return singleton->add_submenu_item(rid, label, submenu_rid, tag, index); });
	js_singleton.add((new std::string("add_item"))->c_str(), [singleton](const RID &rid, const String &label, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) -> int64_t { return singleton->add_item(rid, label, callback, key_callback, tag, accelerator, index); });
	js_singleton.add((new std::string("add_check_item"))->c_str(), [singleton](const RID &rid, const String &label, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) -> int64_t { return singleton->add_check_item(rid, label, callback, key_callback, tag, accelerator, index); });
	js_singleton.add((new std::string("add_icon_item"))->c_str(), [singleton](const RID &rid, const Ref<Texture2D> &icon, const String &label, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) -> int64_t { return singleton->add_icon_item(rid, icon, label, callback, key_callback, tag, accelerator, index); });
	js_singleton.add((new std::string("add_icon_check_item"))->c_str(), [singleton](const RID &rid, const Ref<Texture2D> &icon, const String &label, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) -> int64_t { return singleton->add_icon_check_item(rid, icon, label, callback, key_callback, tag, accelerator, index); });
	js_singleton.add((new std::string("add_radio_check_item"))->c_str(), [singleton](const RID &rid, const String &label, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) -> int64_t { return singleton->add_radio_check_item(rid, label, callback, key_callback, tag, accelerator, index); });
	js_singleton.add((new std::string("add_icon_radio_check_item"))->c_str(), [singleton](const RID &rid, const Ref<Texture2D> &icon, const String &label, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) -> int64_t { return singleton->add_icon_radio_check_item(rid, icon, label, callback, key_callback, tag, accelerator, index); });
	js_singleton.add((new std::string("add_multistate_item"))->c_str(), [singleton](const RID &rid, const String &label, int32_t max_states, int32_t default_state, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) -> int64_t { return singleton->add_multistate_item(rid, label, max_states, default_state, callback, key_callback, tag, accelerator, index); });
	js_singleton.add((new std::string("add_separator"))->c_str(), [singleton](const RID &rid, int32_t index) -> int64_t { return singleton->add_separator(rid, index); });
	js_singleton.add((new std::string("find_item_index_with_text"))->c_str(), [singleton](const RID &rid, const String &text) -> int64_t { return singleton->find_item_index_with_text(rid, text); });
	js_singleton.add((new std::string("find_item_index_with_tag"))->c_str(), [singleton](const RID &rid, const Variant &tag) -> int64_t { return singleton->find_item_index_with_tag(rid, tag); });
	js_singleton.add((new std::string("find_item_index_with_submenu"))->c_str(), [singleton](const RID &rid, const RID &submenu_rid) -> int64_t { return singleton->find_item_index_with_submenu(rid, submenu_rid); });
	js_singleton.add((new std::string("is_item_checked"))->c_str(), [singleton](const RID &rid, int32_t idx) -> bool { return singleton->is_item_checked(rid, idx); });
	js_singleton.add((new std::string("is_item_checkable"))->c_str(), [singleton](const RID &rid, int32_t idx) -> bool { return singleton->is_item_checkable(rid, idx); });
	js_singleton.add((new std::string("is_item_radio_checkable"))->c_str(), [singleton](const RID &rid, int32_t idx) -> bool { return singleton->is_item_radio_checkable(rid, idx); });
	js_singleton.add((new std::string("get_item_callback"))->c_str(), [singleton](const RID &rid, int32_t idx) -> Callable { return singleton->get_item_callback(rid, idx); });
	js_singleton.add((new std::string("get_item_key_callback"))->c_str(), [singleton](const RID &rid, int32_t idx) -> Callable { return singleton->get_item_key_callback(rid, idx); });
	js_singleton.add((new std::string("get_item_tag"))->c_str(), [singleton](const RID &rid, int32_t idx) -> Variant { return singleton->get_item_tag(rid, idx); });
	js_singleton.add((new std::string("get_item_text"))->c_str(), [singleton](const RID &rid, int32_t idx) -> String { return singleton->get_item_text(rid, idx); });
	js_singleton.add((new std::string("get_item_submenu"))->c_str(), [singleton](const RID &rid, int32_t idx) -> RID { return singleton->get_item_submenu(rid, idx); });
	js_singleton.add((new std::string("get_item_accelerator"))->c_str(), [singleton](const RID &rid, int32_t idx) -> Key { return singleton->get_item_accelerator(rid, idx); });
	js_singleton.add((new std::string("is_item_disabled"))->c_str(), [singleton](const RID &rid, int32_t idx) -> bool { return singleton->is_item_disabled(rid, idx); });
	js_singleton.add((new std::string("is_item_hidden"))->c_str(), [singleton](const RID &rid, int32_t idx) -> bool { return singleton->is_item_hidden(rid, idx); });
	js_singleton.add((new std::string("get_item_tooltip"))->c_str(), [singleton](const RID &rid, int32_t idx) -> String { return singleton->get_item_tooltip(rid, idx); });
	js_singleton.add((new std::string("get_item_state"))->c_str(), [singleton](const RID &rid, int32_t idx) -> int64_t { return singleton->get_item_state(rid, idx); });
	js_singleton.add((new std::string("get_item_max_states"))->c_str(), [singleton](const RID &rid, int32_t idx) -> int64_t { return singleton->get_item_max_states(rid, idx); });
	js_singleton.add((new std::string("get_item_icon"))->c_str(), [singleton](const RID &rid, int32_t idx) -> Ref<Texture2D> { return singleton->get_item_icon(rid, idx); });
	js_singleton.add((new std::string("get_item_indentation_level"))->c_str(), [singleton](const RID &rid, int32_t idx) -> int64_t { return singleton->get_item_indentation_level(rid, idx); });
	js_singleton.add((new std::string("set_item_checked"))->c_str(), [singleton](const RID &rid, int32_t idx, bool checked) -> void { singleton->set_item_checked(rid, idx, checked); });
	js_singleton.add((new std::string("set_item_checkable"))->c_str(), [singleton](const RID &rid, int32_t idx, bool checkable) -> void { singleton->set_item_checkable(rid, idx, checkable); });
	js_singleton.add((new std::string("set_item_radio_checkable"))->c_str(), [singleton](const RID &rid, int32_t idx, bool checkable) -> void { singleton->set_item_radio_checkable(rid, idx, checkable); });
	js_singleton.add((new std::string("set_item_callback"))->c_str(), [singleton](const RID &rid, int32_t idx, const Callable &callback) -> void { singleton->set_item_callback(rid, idx, callback); });
	js_singleton.add((new std::string("set_item_hover_callbacks"))->c_str(), [singleton](const RID &rid, int32_t idx, const Callable &callback) -> void { singleton->set_item_hover_callbacks(rid, idx, callback); });
	js_singleton.add((new std::string("set_item_key_callback"))->c_str(), [singleton](const RID &rid, int32_t idx, const Callable &key_callback) -> void { singleton->set_item_key_callback(rid, idx, key_callback); });
	js_singleton.add((new std::string("set_item_tag"))->c_str(), [singleton](const RID &rid, int32_t idx, const Variant &tag) -> void { singleton->set_item_tag(rid, idx, tag); });
	js_singleton.add((new std::string("set_item_text"))->c_str(), [singleton](const RID &rid, int32_t idx, const String &text) -> void { singleton->set_item_text(rid, idx, text); });
	js_singleton.add((new std::string("set_item_submenu"))->c_str(), [singleton](const RID &rid, int32_t idx, const RID &submenu_rid) -> void { singleton->set_item_submenu(rid, idx, submenu_rid); });
	js_singleton.add((new std::string("set_item_accelerator"))->c_str(), [singleton](const RID &rid, int32_t idx, Key keycode) -> void { singleton->set_item_accelerator(rid, idx, keycode); });
	js_singleton.add((new std::string("set_item_disabled"))->c_str(), [singleton](const RID &rid, int32_t idx, bool disabled) -> void { singleton->set_item_disabled(rid, idx, disabled); });
	js_singleton.add((new std::string("set_item_hidden"))->c_str(), [singleton](const RID &rid, int32_t idx, bool hidden) -> void { singleton->set_item_hidden(rid, idx, hidden); });
	js_singleton.add((new std::string("set_item_tooltip"))->c_str(), [singleton](const RID &rid, int32_t idx, const String &tooltip) -> void { singleton->set_item_tooltip(rid, idx, tooltip); });
	js_singleton.add((new std::string("set_item_state"))->c_str(), [singleton](const RID &rid, int32_t idx, int32_t state) -> void { singleton->set_item_state(rid, idx, state); });
	js_singleton.add((new std::string("set_item_max_states"))->c_str(), [singleton](const RID &rid, int32_t idx, int32_t max_states) -> void { singleton->set_item_max_states(rid, idx, max_states); });
	js_singleton.add((new std::string("set_item_icon"))->c_str(), [singleton](const RID &rid, int32_t idx, const Ref<Texture2D> &icon) -> void { singleton->set_item_icon(rid, idx, icon); });
	js_singleton.add((new std::string("set_item_indentation_level"))->c_str(), [singleton](const RID &rid, int32_t idx, int32_t level) -> void { singleton->set_item_indentation_level(rid, idx, level); });
	js_singleton.add((new std::string("get_item_count"))->c_str(), [singleton](const RID &rid) -> int64_t { return singleton->get_item_count(rid); });
	js_singleton.add((new std::string("is_system_menu"))->c_str(), [singleton](const RID &rid) -> bool { return singleton->is_system_menu(rid); });
	js_singleton.add((new std::string("remove_item"))->c_str(), [singleton](const RID &rid, int32_t idx) -> void { singleton->remove_item(rid, idx); });
	js_singleton.add((new std::string("clear"))->c_str(), [singleton](const RID &rid) -> void { singleton->clear(rid); });
	context->global()[(new std::string("NativeMenu"))->c_str()] = js_singleton;

	qjs::Value _Feature = context->newObject();
	_Feature[(new std::string("FEATURE_GLOBAL_MENU"))->c_str()] = NativeMenu::Feature::FEATURE_GLOBAL_MENU;
	_Feature[(new std::string("FEATURE_POPUP_MENU"))->c_str()] = NativeMenu::Feature::FEATURE_POPUP_MENU;
	_Feature[(new std::string("FEATURE_OPEN_CLOSE_CALLBACK"))->c_str()] = NativeMenu::Feature::FEATURE_OPEN_CLOSE_CALLBACK;
	_Feature[(new std::string("FEATURE_HOVER_CALLBACK"))->c_str()] = NativeMenu::Feature::FEATURE_HOVER_CALLBACK;
	_Feature[(new std::string("FEATURE_KEY_CALLBACK"))->c_str()] = NativeMenu::Feature::FEATURE_KEY_CALLBACK;
	js_singleton[(new std::string("Feature"))->c_str()] = _Feature;
	qjs::Value _SystemMenus = context->newObject();
	_SystemMenus[(new std::string("INVALID_MENU_ID"))->c_str()] = NativeMenu::SystemMenus::INVALID_MENU_ID;
	_SystemMenus[(new std::string("MAIN_MENU_ID"))->c_str()] = NativeMenu::SystemMenus::MAIN_MENU_ID;
	_SystemMenus[(new std::string("APPLICATION_MENU_ID"))->c_str()] = NativeMenu::SystemMenus::APPLICATION_MENU_ID;
	_SystemMenus[(new std::string("WINDOW_MENU_ID"))->c_str()] = NativeMenu::SystemMenus::WINDOW_MENU_ID;
	_SystemMenus[(new std::string("HELP_MENU_ID"))->c_str()] = NativeMenu::SystemMenus::HELP_MENU_ID;
	_SystemMenus[(new std::string("DOCK_MENU_ID"))->c_str()] = NativeMenu::SystemMenus::DOCK_MENU_ID;
	js_singleton[(new std::string("SystemMenus"))->c_str()] = _SystemMenus;
}