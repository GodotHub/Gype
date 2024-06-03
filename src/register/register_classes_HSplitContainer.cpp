#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/h_split_container.hpp>

using namespace godot;

void register_classes_HSplitContainer() {
    qjs::Context::Module &_module = _Control;
    _module.class_<HSplitContainer>("HSplitContainer")
           .constructor<>()
;}