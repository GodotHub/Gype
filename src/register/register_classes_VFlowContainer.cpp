#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/v_flow_container.hpp>

using namespace godot;

void register_classes_VFlowContainer() {
    qjs::Context::Module &_module = _Control;
    _module.class_<VFlowContainer>("VFlowContainer")
           .constructor<>()
;}