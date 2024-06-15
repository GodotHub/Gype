#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/classes/accept_dialog.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ConfirmationDialog() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<ConfirmationDialog>("ConfirmationDialog")
            .constructor<>()
            .base<AcceptDialog>()
            .property<static_cast<String(ConfirmationDialog::*)()const>(&ConfirmationDialog::get_cancel_button_text),static_cast<void(ConfirmationDialog::*)(const String &)>(&ConfirmationDialog::set_cancel_button_text)>("cancel_button_text")
            .fun<static_cast<Button *(ConfirmationDialog::*)()>(&ConfirmationDialog::get_cancel_button)>("get_cancel_button")
;}