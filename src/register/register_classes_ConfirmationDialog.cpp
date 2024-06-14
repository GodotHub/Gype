#include <godot_cpp/classes/accept_dialog.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ConfirmationDialog() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<ConfirmationDialog>("ConfirmationDialog")
			.constructor<>()
			.base<AcceptDialog>()
			.property<static_cast<String (ConfirmationDialog::*)() const>(&ConfirmationDialog::get_cancel_button_text), static_cast<void (ConfirmationDialog::*)(const String &)>(&ConfirmationDialog::set_cancel_button_text)>((new std::string("cancel_button_text"))->c_str())
			.fun<static_cast<Button *(ConfirmationDialog::*)()>(&ConfirmationDialog::get_cancel_button)>((new std::string("get_cancel_button"))->c_str());
}