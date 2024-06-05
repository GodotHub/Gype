#include <godot_cpp/classes/accept_dialog.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AcceptDialog() {
	qjs::Context::Module &_module = _Node;
	_module.class_<AcceptDialog>("AcceptDialog")
			.constructor<>()
			.property<&AcceptDialog::get_ok_button_text, &AcceptDialog::set_ok_button_text>("ok_button_text")
			.property<&AcceptDialog::get_text, &AcceptDialog::set_text>("dialog_text")
			.property<&AcceptDialog::get_hide_on_ok, &AcceptDialog::set_hide_on_ok>("dialog_hide_on_ok")
			.property<&AcceptDialog::get_close_on_escape, &AcceptDialog::set_close_on_escape>("dialog_close_on_escape")
			.property<&AcceptDialog::has_autowrap, &AcceptDialog::set_autowrap>("dialog_autowrap")
			.fun<static_cast<Button *(AcceptDialog::*)()>(&AcceptDialog::get_ok_button)>("get_ok_button")
			.fun<static_cast<Label *(AcceptDialog::*)()>(&AcceptDialog::get_label)>("get_label")
			.fun<static_cast<Button *(AcceptDialog::*)(const String &, bool, const String &)>(&AcceptDialog::add_button)>("add_button")
			.fun<static_cast<Button *(AcceptDialog::*)(const String &)>(&AcceptDialog::add_cancel_button)>("add_cancel_button")
			.fun<static_cast<void (AcceptDialog::*)(Control *)>(&AcceptDialog::remove_button)>("remove_button")
			.fun<static_cast<void (AcceptDialog::*)(Control *)>(&AcceptDialog::register_text_enter)>("register_text_enter");
}