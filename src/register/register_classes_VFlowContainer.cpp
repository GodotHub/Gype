#include <godot_cpp/classes/v_flow_container.hpp>
#include <godot_cpp/classes/flow_container.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VFlowContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<VFlowContainer>("VFlowContainer")
            .constructor<>()
            .base<FlowContainer>()
;}