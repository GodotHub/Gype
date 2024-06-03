#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/text_server_advanced.hpp>

using namespace godot;

void register_classes_TextServerAdvanced() {
    qjs::Context::Module &_module = _General;
    _module.class_<TextServerAdvanced>("TextServerAdvanced")
           .constructor<>()
;}