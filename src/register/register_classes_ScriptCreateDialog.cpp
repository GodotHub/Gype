#include <godot_cpp/classes/script_create_dialog.hpp>
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ScriptCreateDialog() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<ScriptCreateDialog>("ScriptCreateDialog")
            .constructor<>()
            .base<ConfirmationDialog>()
            .fun<static_cast<void(ScriptCreateDialog::*)(const String &,const String &,bool,bool)>(&ScriptCreateDialog::config)>("config")
;}