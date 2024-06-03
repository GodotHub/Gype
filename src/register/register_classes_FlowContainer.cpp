#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/flow_container.hpp>

using namespace godot;

void register_classes_FlowContainer() {
    qjs::Context::Module &_module = _Control;
    _module.class_<FlowContainer>("FlowContainer")
           .constructor<>()
           .property<FlowContainer::get_alignment, FlowContainer::set_alignment>("alignment")
           .property<FlowContainer::is_vertical, FlowContainer::set_vertical>("vertical")
		    .fun<static_cast<int32_t(FlowContainer::*)()const>(&FlowContainer::get_line_count)>("get_line_count")
;}