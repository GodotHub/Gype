#include <godot_cpp/classes/v_split_container.hpp>
#include <godot_cpp/classes/split_container.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VSplitContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<VSplitContainer>("VSplitContainer")
            .constructor<>()
            .base<SplitContainer>()
;}