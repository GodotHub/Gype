#include <godot_cpp/classes/text_server_advanced.hpp>
#include <godot_cpp/classes/text_server_extension.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TextServerAdvanced() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TextServerAdvanced>("TextServerAdvanced")
            .constructor<>()
            .base<TextServerExtension>()
;}