#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/style_box_empty.hpp>

using namespace godot;

void register_classes_StyleBoxEmpty() {
    qjs::Context::Module &_module = _General;
    _module.class_<StyleBoxEmpty>("StyleBoxEmpty")
           .constructor<>()
;}