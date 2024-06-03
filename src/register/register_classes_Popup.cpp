#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/popup.hpp>

using namespace godot;

void register_classes_Popup() {
    qjs::Context::Module &_module = _Node;
    _module.class_<Popup>("Popup")
           .constructor<>()
;}