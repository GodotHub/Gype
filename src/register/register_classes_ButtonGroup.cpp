#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/button_group.hpp>

using namespace godot;

void register_classes_ButtonGroup() {
    qjs::Context::Module &_module = _General;
    _module.class_<ButtonGroup>("ButtonGroup")
           .constructor<>()
           .property<ButtonGroup::is_allow_unpress, ButtonGroup::set_allow_unpress>("allow_unpress")
		    .fun<static_cast<BaseButton *(ButtonGroup::*)()>(&ButtonGroup::get_pressed_button)>("get_pressed_button")
		    .fun<static_cast<TypedArray<BaseButton>(ButtonGroup::*)()>(&ButtonGroup::get_buttons)>("get_buttons")
;}