#include <godot_cpp/classes/h_split_container.hpp>
#include <godot_cpp/classes/split_container.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_HSplitContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<HSplitContainer>("HSplitContainer")
            .constructor<>()
            .base<SplitContainer>()
;}