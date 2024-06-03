#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/container.hpp>

using namespace godot;

void register_classes_Container() {
    qjs::Context::Module &_module = _Control;
    _module.class_<Container>("Container")
           .constructor<>()
		    .fun<static_cast<PackedInt32Array(Container::*)()const>(&Container::_get_allowed_size_flags_horizontal)>("_get_allowed_size_flags_horizontal")
		    .fun<static_cast<PackedInt32Array(Container::*)()const>(&Container::_get_allowed_size_flags_vertical)>("_get_allowed_size_flags_vertical")
		    .fun<static_cast<void(Container::*)()>(&Container::queue_sort)>("queue_sort")
		    .fun<static_cast<void(Container::*)(Control *,const Rect2 &)>(&Container::fit_child_in_rect)>("fit_child_in_rect")
;}