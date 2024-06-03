#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/box_container.hpp>

using namespace godot;

void register_classes_BoxContainer() {
    qjs::Context::Module &_module = _Control;
    _module.class_<BoxContainer>("BoxContainer")
           .constructor<>()
           .property<BoxContainer::get_alignment, BoxContainer::set_alignment>("alignment")
           .property<BoxContainer::is_vertical, BoxContainer::set_vertical>("vertical")
		    .fun<static_cast<Control *(BoxContainer::*)(bool)>(&BoxContainer::add_spacer)>("add_spacer")
;}