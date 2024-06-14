#include <godot_cpp/classes/style_box_empty.hpp>
#include <godot_cpp/classes/style_box.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_StyleBoxEmpty() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<StyleBoxEmpty>("StyleBoxEmpty")
            .constructor<>()
            .base<StyleBox>()
;}