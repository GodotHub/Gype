#include <godot_cpp/classes/accept_dialog.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AcceptDialog() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<AcceptDialog>("AcceptDialog")
			.constructor<>()
			.base<Window>()
			.property<static_cast<String (AcceptDialog::*)() const>(&AcceptDialog::get_ok_button_text), static_cast<void (AcceptDialog::*)(const String &)>(&AcceptDialog::set_ok_button_text)>((new std::string("ok_button_text"))->c_str())
			.property<static_cast<String (AcceptDialog::*)() const>(&AcceptDialog::get_text), static_cast<void (AcceptDialog::*)(const String &)>(&AcceptDialog::set_text)>((new std::string("dialog_text"))->c_str())
			.property<static_cast<bool (AcceptDialog::*)() const>(&AcceptDialog::get_hide_on_ok), static_cast<void (AcceptDialog::*)(bool)>(&AcceptDialog::set_hide_on_ok)>((new std::string("dialog_hide_on_ok"))->c_str())
			.property<static_cast<bool (AcceptDialog::*)() const>(&AcceptDialog::get_close_on_escape), static_cast<void (AcceptDialog::*)(bool)>(&AcceptDialog::set_close_on_escape)>((new std::string("dialog_close_on_escape"))->c_str())
			.property<static_cast<bool (AcceptDialog::*)()>(&AcceptDialog::has_autowrap), static_cast<void (AcceptDialog::*)(bool)>(&AcceptDialog::set_autowrap)>((new std::string("dialog_autowrap"))->c_str())
			.fun<static_cast<Button *(AcceptDialog::*)()>(&AcceptDialog::get_ok_button)>((new std::string("get_ok_button"))->c_str())
			.fun<static_cast<Label *(AcceptDialog::*)()>(&AcceptDialog::get_label)>((new std::string("get_label"))->c_str())
			.fun<static_cast<Button *(AcceptDialog::*)(const String &, bool, const String &)>(&AcceptDialog::add_button)>((new std::string("add_button"))->c_str())
			.fun<static_cast<Button *(AcceptDialog::*)(const String &)>(&AcceptDialog::add_cancel_button)>((new std::string("add_cancel_button"))->c_str())
			.fun<static_cast<void (AcceptDialog::*)(Button *)>(&AcceptDialog::remove_button)>((new std::string("remove_button"))->c_str())
			.fun<static_cast<void (AcceptDialog::*)(LineEdit *)>(&AcceptDialog::register_text_enter)>((new std::string("register_text_enter"))->c_str());
}