#include "register/register_builtin_classes.h"
#include "register/utils.h"

using namespace godot;

void register_builtin_classes_Signal() {
	_Variant.class_<Signal>("Signal")
            .constructor<>()
            .constructor<const Signal &>("Signal_1")
            .constructor<Object *,const StringName &>("Signal_2")

			.fun<static_cast<bool(Signal::*)()const>(&Signal::is_null)>("is_null")
			.fun<static_cast<Object *(Signal::*)()const>(&Signal::get_object)>("get_object")
			.fun<static_cast<int64_t(Signal::*)()const>(&Signal::get_object_id)>("get_object_id")
			.fun<static_cast<StringName(Signal::*)()const>(&Signal::get_name)>("get_name")
			.fun<static_cast<int64_t(Signal::*)(const Callable &,int64_t)>(&Signal::connect)>("connect")
			.fun<static_cast<void(Signal::*)(const Callable &)>(&Signal::disconnect)>("disconnect")
			.fun<static_cast<bool(Signal::*)(const Callable &)const>(&Signal::is_connected)>("is_connected")
			.fun<static_cast<Array(Signal::*)()const>(&Signal::get_connections)>("get_connections")
			.fun<static_cast<void(Signal::*)(rest<Variant> args)const>(&Signal::emit)>("emit");
}