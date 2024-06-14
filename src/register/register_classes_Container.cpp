#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Container() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<Container>("Container")
			.constructor<>()
			.base<Control>()
			.static_fun<&Container::NOTIFICATION_PRE_SORT_CHILDREN>((new std::string("NOTIFICATION_PRE_SORT_CHILDREN"))->c_str())
			.static_fun<&Container::NOTIFICATION_SORT_CHILDREN>((new std::string("NOTIFICATION_SORT_CHILDREN"))->c_str())
			.fun<static_cast<PackedInt32Array (Container::*)() const>(&Container::_get_allowed_size_flags_horizontal)>((new std::string("_get_allowed_size_flags_horizontal"))->c_str())
			.fun<static_cast<PackedInt32Array (Container::*)() const>(&Container::_get_allowed_size_flags_vertical)>((new std::string("_get_allowed_size_flags_vertical"))->c_str())
			.fun<static_cast<void (Container::*)()>(&Container::queue_sort)>((new std::string("queue_sort"))->c_str())
			.fun<static_cast<void (Container::*)(Control *, const Rect2 &)>(&Container::fit_child_in_rect)>((new std::string("fit_child_in_rect"))->c_str());
}