#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_LineEdit() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<LineEdit>("LineEdit")
            .constructor<>()
            .base<Control>()
            .property<static_cast<String(LineEdit::*)()const>(&LineEdit::get_text),static_cast<void(LineEdit::*)(const String &)>(&LineEdit::set_text)>("text")
            .property<static_cast<String(LineEdit::*)()const>(&LineEdit::get_placeholder),static_cast<void(LineEdit::*)(const String &)>(&LineEdit::set_placeholder)>("placeholder_text")
            .property<static_cast<HorizontalAlignment(LineEdit::*)()const>(&LineEdit::get_horizontal_alignment),static_cast<void(LineEdit::*)(HorizontalAlignment)>(&LineEdit::set_horizontal_alignment)>("alignment")
            .property<static_cast<int32_t(LineEdit::*)()const>(&LineEdit::get_max_length),static_cast<void(LineEdit::*)(int32_t)>(&LineEdit::set_max_length)>("max_length")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_editable),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_editable)>("editable")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_expand_to_text_length_enabled),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_expand_to_text_length_enabled)>("expand_to_text_length")
            .property<static_cast<bool(LineEdit::*)()>(&LineEdit::is_context_menu_enabled),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_context_menu_enabled)>("context_menu_enabled")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_virtual_keyboard_enabled),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_virtual_keyboard_enabled)>("virtual_keyboard_enabled")
            .property<static_cast<LineEdit::VirtualKeyboardType(LineEdit::*)()const>(&LineEdit::get_virtual_keyboard_type),static_cast<void(LineEdit::*)(LineEdit::VirtualKeyboardType)>(&LineEdit::set_virtual_keyboard_type)>("virtual_keyboard_type")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_clear_button_enabled),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_clear_button_enabled)>("clear_button_enabled")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_shortcut_keys_enabled),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_shortcut_keys_enabled)>("shortcut_keys_enabled")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_middle_mouse_paste_enabled),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_middle_mouse_paste_enabled)>("middle_mouse_paste_enabled")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_selecting_enabled),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_selecting_enabled)>("selecting_enabled")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_deselect_on_focus_loss_enabled),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_deselect_on_focus_loss_enabled)>("deselect_on_focus_loss_enabled")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_drag_and_drop_selection_enabled),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_drag_and_drop_selection_enabled)>("drag_and_drop_selection_enabled")
            .property<static_cast<Ref<Texture2D>(LineEdit::*)()>(&LineEdit::get_right_icon),static_cast<void(LineEdit::*)(const Ref<Texture2D> &)>(&LineEdit::set_right_icon)>("right_icon")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_flat),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_flat)>("flat")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::get_draw_control_chars),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_draw_control_chars)>("draw_control_chars")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_select_all_on_focus),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_select_all_on_focus)>("select_all_on_focus")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_caret_blink_enabled),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_caret_blink_enabled)>("caret_blink")
            .property<static_cast<double(LineEdit::*)()const>(&LineEdit::get_caret_blink_interval),static_cast<void(LineEdit::*)(double)>(&LineEdit::set_caret_blink_interval)>("caret_blink_interval")
            .property<static_cast<int32_t(LineEdit::*)()const>(&LineEdit::get_caret_column),static_cast<void(LineEdit::*)(int32_t)>(&LineEdit::set_caret_column)>("caret_column")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_caret_force_displayed),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_caret_force_displayed)>("caret_force_displayed")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_caret_mid_grapheme_enabled),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_caret_mid_grapheme_enabled)>("caret_mid_grapheme")
            .property<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_secret),static_cast<void(LineEdit::*)(bool)>(&LineEdit::set_secret)>("secret")
            .property<static_cast<String(LineEdit::*)()const>(&LineEdit::get_secret_character),static_cast<void(LineEdit::*)(const String &)>(&LineEdit::set_secret_character)>("secret_character")
            .property<static_cast<Control::TextDirection(LineEdit::*)()const>(&LineEdit::get_text_direction),static_cast<void(LineEdit::*)(Control::TextDirection)>(&LineEdit::set_text_direction)>("text_direction")
            .property<static_cast<String(LineEdit::*)()const>(&LineEdit::get_language),static_cast<void(LineEdit::*)(const String &)>(&LineEdit::set_language)>("language")
            .property<static_cast<TextServer::StructuredTextParser(LineEdit::*)()const>(&LineEdit::get_structured_text_bidi_override),static_cast<void(LineEdit::*)(TextServer::StructuredTextParser)>(&LineEdit::set_structured_text_bidi_override)>("structured_text_bidi_override")
            .property<static_cast<Array(LineEdit::*)()const>(&LineEdit::get_structured_text_bidi_override_options),static_cast<void(LineEdit::*)(const Array &)>(&LineEdit::set_structured_text_bidi_override_options)>("structured_text_bidi_override_options")
            .fun<static_cast<void(LineEdit::*)()>(&LineEdit::clear)>("clear")
            .fun<static_cast<void(LineEdit::*)(int32_t,int32_t)>(&LineEdit::select)>("select")
            .fun<static_cast<void(LineEdit::*)()>(&LineEdit::select_all)>("select_all")
            .fun<static_cast<void(LineEdit::*)()>(&LineEdit::deselect)>("deselect")
            .fun<static_cast<bool(LineEdit::*)()const>(&LineEdit::has_selection)>("has_selection")
            .fun<static_cast<String(LineEdit::*)()>(&LineEdit::get_selected_text)>("get_selected_text")
            .fun<static_cast<int32_t(LineEdit::*)()const>(&LineEdit::get_selection_from_column)>("get_selection_from_column")
            .fun<static_cast<int32_t(LineEdit::*)()const>(&LineEdit::get_selection_to_column)>("get_selection_to_column")
            .fun<static_cast<double(LineEdit::*)()const>(&LineEdit::get_scroll_offset)>("get_scroll_offset")
            .fun<static_cast<void(LineEdit::*)(const String &)>(&LineEdit::insert_text_at_caret)>("insert_text_at_caret")
            .fun<static_cast<void(LineEdit::*)()>(&LineEdit::delete_char_at_caret)>("delete_char_at_caret")
            .fun<static_cast<void(LineEdit::*)(int32_t,int32_t)>(&LineEdit::delete_text)>("delete_text")
            .fun<static_cast<void(LineEdit::*)(int32_t)>(&LineEdit::menu_option)>("menu_option")
            .fun<static_cast<PopupMenu *(LineEdit::*)()const>(&LineEdit::get_menu)>("get_menu")
            .fun<static_cast<bool(LineEdit::*)()const>(&LineEdit::is_menu_visible)>("is_menu_visible")
;    qjs::Value _MenuItems = context->newObject();
    _MenuItems["MENU_CUT"] = LineEdit::MenuItems::MENU_CUT;
    _MenuItems["MENU_COPY"] = LineEdit::MenuItems::MENU_COPY;
    _MenuItems["MENU_PASTE"] = LineEdit::MenuItems::MENU_PASTE;
    _MenuItems["MENU_CLEAR"] = LineEdit::MenuItems::MENU_CLEAR;
    _MenuItems["MENU_SELECT_ALL"] = LineEdit::MenuItems::MENU_SELECT_ALL;
    _MenuItems["MENU_UNDO"] = LineEdit::MenuItems::MENU_UNDO;
    _MenuItems["MENU_REDO"] = LineEdit::MenuItems::MENU_REDO;
    _MenuItems["MENU_SUBMENU_TEXT_DIR"] = LineEdit::MenuItems::MENU_SUBMENU_TEXT_DIR;
    _MenuItems["MENU_DIR_INHERITED"] = LineEdit::MenuItems::MENU_DIR_INHERITED;
    _MenuItems["MENU_DIR_AUTO"] = LineEdit::MenuItems::MENU_DIR_AUTO;
    _MenuItems["MENU_DIR_LTR"] = LineEdit::MenuItems::MENU_DIR_LTR;
    _MenuItems["MENU_DIR_RTL"] = LineEdit::MenuItems::MENU_DIR_RTL;
    _MenuItems["MENU_DISPLAY_UCC"] = LineEdit::MenuItems::MENU_DISPLAY_UCC;
    _MenuItems["MENU_SUBMENU_INSERT_UCC"] = LineEdit::MenuItems::MENU_SUBMENU_INSERT_UCC;
    _MenuItems["MENU_INSERT_LRM"] = LineEdit::MenuItems::MENU_INSERT_LRM;
    _MenuItems["MENU_INSERT_RLM"] = LineEdit::MenuItems::MENU_INSERT_RLM;
    _MenuItems["MENU_INSERT_LRE"] = LineEdit::MenuItems::MENU_INSERT_LRE;
    _MenuItems["MENU_INSERT_RLE"] = LineEdit::MenuItems::MENU_INSERT_RLE;
    _MenuItems["MENU_INSERT_LRO"] = LineEdit::MenuItems::MENU_INSERT_LRO;
    _MenuItems["MENU_INSERT_RLO"] = LineEdit::MenuItems::MENU_INSERT_RLO;
    _MenuItems["MENU_INSERT_PDF"] = LineEdit::MenuItems::MENU_INSERT_PDF;
    _MenuItems["MENU_INSERT_ALM"] = LineEdit::MenuItems::MENU_INSERT_ALM;
    _MenuItems["MENU_INSERT_LRI"] = LineEdit::MenuItems::MENU_INSERT_LRI;
    _MenuItems["MENU_INSERT_RLI"] = LineEdit::MenuItems::MENU_INSERT_RLI;
    _MenuItems["MENU_INSERT_FSI"] = LineEdit::MenuItems::MENU_INSERT_FSI;
    _MenuItems["MENU_INSERT_PDI"] = LineEdit::MenuItems::MENU_INSERT_PDI;
    _MenuItems["MENU_INSERT_ZWJ"] = LineEdit::MenuItems::MENU_INSERT_ZWJ;
    _MenuItems["MENU_INSERT_ZWNJ"] = LineEdit::MenuItems::MENU_INSERT_ZWNJ;
    _MenuItems["MENU_INSERT_WJ"] = LineEdit::MenuItems::MENU_INSERT_WJ;
    _MenuItems["MENU_INSERT_SHY"] = LineEdit::MenuItems::MENU_INSERT_SHY;
    _MenuItems["MENU_MAX"] = LineEdit::MenuItems::MENU_MAX;
    _module.add("MenuItems", std::move(_MenuItems));
    qjs::Value _VirtualKeyboardType = context->newObject();
    _VirtualKeyboardType["KEYBOARD_TYPE_DEFAULT"] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_DEFAULT;
    _VirtualKeyboardType["KEYBOARD_TYPE_MULTILINE"] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_MULTILINE;
    _VirtualKeyboardType["KEYBOARD_TYPE_NUMBER"] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_NUMBER;
    _VirtualKeyboardType["KEYBOARD_TYPE_NUMBER_DECIMAL"] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_NUMBER_DECIMAL;
    _VirtualKeyboardType["KEYBOARD_TYPE_PHONE"] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_PHONE;
    _VirtualKeyboardType["KEYBOARD_TYPE_EMAIL_ADDRESS"] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_EMAIL_ADDRESS;
    _VirtualKeyboardType["KEYBOARD_TYPE_PASSWORD"] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_PASSWORD;
    _VirtualKeyboardType["KEYBOARD_TYPE_URL"] = LineEdit::VirtualKeyboardType::KEYBOARD_TYPE_URL;
    _module.add("VirtualKeyboardType", std::move(_VirtualKeyboardType));
}