#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/confirmation_dialog.hpp>

using namespace godot;

void register_classes_ConfirmationDialog() {
    qjs::Context::Module &_module = _Node;
    _module.class_<ConfirmationDialog>("ConfirmationDialog")
           .constructor<>()
           .property<ConfirmationDialog::get_cancel_button_text, ConfirmationDialog::set_cancel_button_text>("cancel_button_text")
		    .fun<static_cast<Button *(ConfirmationDialog::*)()>(&ConfirmationDialog::get_cancel_button)>("get_cancel_button")
;}