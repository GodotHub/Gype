#include <godot_cpp/classes/center_container.hpp>
#include <godot_cpp/classes/container.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CenterContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<CenterContainer>("CenterContainer")
            .constructor<>()
            .base<Container>()
            .property<static_cast<bool(CenterContainer::*)()const>(&CenterContainer::is_using_top_left),static_cast<void(CenterContainer::*)(bool)>(&CenterContainer::set_use_top_left)>("use_top_left")
;}