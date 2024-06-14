
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_LineEdit() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<LineEdit>("LineEdit")
			.constructor<>()
			.base<Control>()
			.property<static_cast<String (LineEdit::*)() const>(&LineEdit::get_text), static_cast<void (LineEdit::*)(const String &)>(&LineEdit::set_text)>((new std::string("text"))->c_str())
			.property<static_cast<String (LineEdit::*)() const>(&LineEdit::get_placeholder), static_cast<void (LineEdit::*)(const String &)>(&LineEdit::set_placeholder)>((new std::string("placeholder_text"))->c_str())
			.property<static_cast<HorizontalAlignment (LineEdit::*)() const>(&LineEdit::get_horizontal_alignment), static_cast<void (LineEdit::*)(HorizontalAlignment)>(&LineEdit::set_horizontal_alignment)>((new std::string("alignment"))->c_str())
			.property<static_cast<int32_t (LineEdit::*)() const>(&LineEdit::get_max_length), static_cast<void (LineEdit::*)(int32_t)>(&LineEdit::set_max_length)>((new std::string("max_length"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_editable), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_editable)>((new std::string("editable"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_expand_to_text_length_enabled), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_expand_to_text_length_enabled)>((new std::string("expand_to_text_length"))->c_str())
			.property<static_cast<bool (LineEdit::*)()>(&LineEdit::is_context_menu_enabled), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_context_menu_enabled)>((new std::string("context_menu_enabled"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_virtual_keyboard_enabled), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_virtual_keyboard_enabled)>((new std::string("virtual_keyboard_enabled"))->c_str())
			.property<static_cast<LineEdit::VirtualKeyboardType (LineEdit::*)() const>(&LineEdit::get_virtual_keyboard_type), static_cast<void (LineEdit::*)(LineEdit::VirtualKeyboardType)>(&LineEdit::set_virtual_keyboard_type)>((new std::string("virtual_keyboard_type"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_clear_button_enabled), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_clear_button_enabled)>((new std::string("clear_button_enabled"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_shortcut_keys_enabled), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_shortcut_keys_enabled)>((new std::string("shortcut_keys_enabled"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_middle_mouse_paste_enabled), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_middle_mouse_paste_enabled)>((new std::string("middle_mouse_paste_enabled"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_selecting_enabled), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_selecting_enabled)>((new std::string("selecting_enabled"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_deselect_on_focus_loss_enabled), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_deselect_on_focus_loss_enabled)>((new std::string("deselect_on_focus_loss_enabled"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_drag_and_drop_selection_enabled), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_drag_and_drop_selection_enabled)>((new std::string("drag_and_drop_selection_enabled"))->c_str())
			.property<static_cast<Ref<Texture2D> (LineEdit::*)()>(&LineEdit::get_right_icon), static_cast<void (LineEdit::*)(const Ref<Texture2D> &)>(&LineEdit::set_right_icon)>((new std::string("right_icon"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_flat), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_flat)>((new std::string("flat"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::get_draw_control_chars), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_draw_control_chars)>((new std::string("draw_control_chars"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_select_all_on_focus), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_select_all_on_focus)>((new std::string("select_all_on_focus"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_caret_blink_enabled), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_caret_blink_enabled)>((new std::string("caret_blink"))->c_str())
			.property<static_cast<double (LineEdit::*)() const>(&LineEdit::get_caret_blink_interval), static_cast<void (LineEdit::*)(double)>(&LineEdit::set_caret_blink_interval)>((new std::string("caret_blink_interval"))->c_str())
			.property<static_cast<int32_t (LineEdit::*)() const>(&LineEdit::get_caret_column), static_cast<void (LineEdit::*)(int32_t)>(&LineEdit::set_caret_column)>((new std::string("caret_column"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_caret_force_displayed), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_caret_force_displayed)>((new std::string("caret_force_displayed"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_caret_mid_grapheme_enabled), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_caret_mid_grapheme_enabled)>((new std::string("caret_mid_grapheme"))->c_str())
			.property<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_secret), static_cast<void (LineEdit::*)(bool)>(&LineEdit::set_secret)>((new std::string("secret"))->c_str())
			.property<static_cast<String (LineEdit::*)() const>(&LineEdit::get_secret_character), static_cast<void (LineEdit::*)(const String &)>(&LineEdit::set_secret_character)>((new std::string("secret_character"))->c_str())
			.property<static_cast<Control::TextDirection (LineEdit::*)() const>(&LineEdit::get_text_direction), static_cast<void (LineEdit::*)(Control::TextDirection)>(&LineEdit::set_text_direction)>((new std::string("text_direction"))->c_str())
			.property<static_cast<String (LineEdit::*)() const>(&LineEdit::get_language), static_cast<void (LineEdit::*)(const String &)>(&LineEdit::set_language)>((new std::string("language"))->c_str())
			.property<static_cast<TextServer::StructuredTextParser (LineEdit::*)() const>(&LineEdit::get_structured_text_bidi_override), static_cast<void (LineEdit::*)(TextServer::StructuredTextParser)>(&LineEdit::set_structured_text_bidi_override)>((new std::string("structured_text_bidi_override"))->c_str())
			.property<static_cast<Array (LineEdit::*)() const>(&LineEdit::get_structured_text_bidi_override_options), static_cast<void (LineEdit::*)(const Array &)>(&LineEdit::set_structured_text_bidi_override_options)>((new std::string("structured_text_bidi_override_options"))->c_str())
			.fun<static_cast<void (LineEdit::*)()>(&LineEdit::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (LineEdit::*)(int32_t, int32_t)>(&LineEdit::select)>((new std::string("select"))->c_str())
			.fun<static_cast<void (LineEdit::*)()>(&LineEdit::select_all)>((new std::string("select_all"))->c_str())
			.fun<static_cast<void (LineEdit::*)()>(&LineEdit::deselect)>((new std::string("deselect"))->c_str())
			.fun<static_cast<bool (LineEdit::*)() const>(&LineEdit::has_selection)>((new std::string("has_selection"))->c_str())
			.fun<static_cast<String (LineEdit::*)()>(&LineEdit::get_selected_text)>((new std::string("get_selected_text"))->c_str())
			.fun<static_cast<int32_t (LineEdit::*)() const>(&LineEdit::get_selection_from_column)>((new std::string("get_selection_from_column"))->c_str())
			.fun<static_cast<int32_t (LineEdit::*)() const>(&LineEdit::get_selection_to_column)>((new std::string("get_selection_to_column"))->c_str())
			.fun<static_cast<double (LineEdit::*)() const>(&LineEdit::get_scroll_offset)>((new std::string("get_scroll_offset"))->c_str())
			.fun<static_cast<void (LineEdit::*)(const String &)>(&LineEdit::insert_text_at_caret)>((new std::string("insert_text_at_caret"))->c_str())
			.fun<static_cast<void (LineEdit::*)()>(&LineEdit::delete_char_at_caret)>((new std::string("delete_char_at_caret"))->c_str())
			.fun<static_cast<void (LineEdit::*)(int32_t, int32_t)>(&LineEdit::delete_text)>((new std::string("delete_text"))->c_str())
			.fun<static_cast<void (LineEdit::*)(int32_t)>(&LineEdit::menu_option)>((new std::string("menu_option"))->c_str())
			.fun<static_cast<PopupMenu *(LineEdit::*)() const>(&LineEdit::get_menu)>((new std::string("get_menu"))->c_str())
			.fun<static_cast<bool (LineEdit::*)() const>(&LineEdit::is_menu_visible)>((new std::string("is_menu_visible"))->c_str());
	qjs::Value _MenuItems = context->newObject();
	_MenuItems[(new std::string("MENU_CUT"))->c_str()] = LineEdit::MenuItems::MENU_CUT;
	_MenuItems[(new std::string("MENU_COPY"))->c_str()] = LineEdit::MenuItems::MENU_COPY;
	_MenuItems[(new std::string("MENU_PASTE"))->c_str()] = LineEdit::MenuItems::MENU_PASTE;
	_MenuItems[(new std::string("MENU_CLEAR"))->c_str()] = LineEdit::MenuItems::MENU_CLEAR;
	_MenuItems[(new std::string("MENU_SELECT_ALL"))->c_str()] = LineEdit::MenuItems::MENU_SELECT_ALL;
	_MenuItems[(new std::string("MENU_UNDO"))->c_str()] = LineEdit::MenuItems::MENU_UNDO;
	_MenuItems[(new std::string("MENU_REDO"))->c_str()] = LineEdit::MenuItems::MENU_REDO;
	_MenuItems[(new std::string("MENU_SUBMENU_TEXT_DIR"))->c_str()] = LineEdit::MenuItems::MENU_SUBMENU_TEXT_DIR;
	_MenuItems[(new std::string("MENU_DIR_INHERITED"))->c_str()] = LineEdit::MenuItems::MENU_DIR_INHERITED;
	_MenuItems[(new std::string("MENU_DIR_AUTO"))->c_str()] = LineEdit::MenuItems::MENU_DIR_AUTO;
	_MenuItems[(new std::string("MENU_DIR_LTR"))->c_str()] = LineEdit::MenuItems::MENU_DIR_LTR;
	_MenuItems[(new std::string("MENU_DIR_RTL"))->c_str()] = LineEdit::MenuItems::MENU_DIR_RTL;
	_MenuItems[(new std::string("MENU_DISPLAY_UCC"))->c_str()] = LineEdit::MenuItems::MENU_DISPLAY_UCC;
	_MenuItems[(new std::string("MENU_SUBMENU_INSERT_UCC"))->c_str()] = LineEdit::MenuItems::MENU_SUBMENU_INSERT_UCC;
	_MenuItems[(new std::string("MENU_INSERT_LRM"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_LRM;
	_MenuItems[(new std::string("MENU_INSERT_RLM"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_RLM;
	_MenuItems[(new std::string("MENU_INSERT_LRE"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_LRE;
	_MenuItems[(new std::string("MENU_INSERT_RLE"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_RLE;
	_MenuItems[(new std::string("MENU_INSERT_LRO"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_LRO;
	_MenuItems[(new std::string("MENU_INSERT_RLO"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_RLO;
	_MenuItems[(new std::string("MENU_INSERT_PDF"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_PDF;
	_MenuItems[(new std::string("MENU_INSERT_ALM"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_ALM;
	_MenuItems[(new std::string("MENU_INSERT_LRI"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_LRI;
	_MenuItems[(new std::string("MENU_INSERT_RLI"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_RLI;
	_MenuItems[(new std::string("MENU_INSERT_FSI"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_FSI;
	_MenuItems[(new std::string("MENU_INSERT_PDI"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_PDI;
	_MenuItems[(new std::string("MENU_INSERT_ZWJ"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_ZWJ;
	_MenuItems[(new std::string("MENU_INSERT_ZWNJ"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_ZWNJ;
	_MenuItems[(new std::string("MENU_INSERT_WJ"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_WJ;
	_MenuItems[(new std::string("MENU_INSERT_SHY"))->c_str()] = LineEdit::MenuItems::MENU_INSERT_SHY;
	_MenuItems[(new std::string("MENU_MAX"))->c_str()] = LineEdit::MenuItems::MENU_MAX;
	_module.add("MenuItems", std::move(_MenuItems));
	qjs::Value _VirtualKeyboardType = context->newObject();
	_VirtualKeyboardType[(new std::string("KEYBOARD_TYPE_DEFAULT"))->c_str()] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_DEFAULT;
	_VirtualKeyboardType[(new std::string("KEYBOARD_TYPE_MULTILINE"))->c_str()] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_MULTILINE;
	_VirtualKeyboardType[(new std::string("KEYBOARD_TYPE_NUMBER"))->c_str()] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_NUMBER;
	_VirtualKeyboardType[(new std::string("KEYBOARD_TYPE_NUMBER_DECIMAL"))->c_str()] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_NUMBER_DECIMAL;
	_VirtualKeyboardType[(new std::string("KEYBOARD_TYPE_PHONE"))->c_str()] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_PHONE;
	_VirtualKeyboardType[(new std::string("KEYBOARD_TYPE_EMAIL_ADDRESS"))->c_str()] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_EMAIL_ADDRESS;
	_VirtualKeyboardType[(new std::string("KEYBOARD_TYPE_PASSWORD"))->c_str()] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_PASSWORD;
	_VirtualKeyboardType[(new std::string("KEYBOARD_TYPE_URL"))->c_str()] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_URL;
	_module.add("VirtualKeyboardType", std::move(_VirtualKeyboardType));
}