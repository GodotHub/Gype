#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/sub_viewport_container.hpp>

using namespace godot;

void register_classes_SubViewportContainer() {
    qjs::Context::Module &_module = _Control;
    _module.class_<SubViewportContainer>("SubViewportContainer")
           .constructor<>()
           .property<SubViewportContainer::is_stretch_enabled, SubViewportContainer::set_stretch>("stretch")
           .property<SubViewportContainer::get_stretch_shrink, SubViewportContainer::set_stretch_shrink>("stretch_shrink")
		    .fun<static_cast<bool(SubViewportContainer::*)(const Ref<InputEvent> &)const>(&SubViewportContainer::_propagate_input_event)>("_propagate_input_event")
;}