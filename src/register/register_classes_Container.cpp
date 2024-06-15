#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Container() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<Container>("Container")
            .constructor<>()
            .base<Control>()
            .static_fun<&Container::NOTIFICATION_PRE_SORT_CHILDREN>("NOTIFICATION_PRE_SORT_CHILDREN")
            .static_fun<&Container::NOTIFICATION_SORT_CHILDREN>("NOTIFICATION_SORT_CHILDREN")
            .fun<static_cast<PackedInt32Array(Container::*)()const>(&Container::_get_allowed_size_flags_horizontal)>("_get_allowed_size_flags_horizontal")
            .fun<static_cast<PackedInt32Array(Container::*)()const>(&Container::_get_allowed_size_flags_vertical)>("_get_allowed_size_flags_vertical")
            .fun<static_cast<void(Container::*)()>(&Container::queue_sort)>("queue_sort")
            .fun<static_cast<void(Container::*)(Control *,const Rect2 &)>(&Container::fit_child_in_rect)>("fit_child_in_rect")
;}