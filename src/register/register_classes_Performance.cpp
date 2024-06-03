#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_Performance() {
    qjs::Context::Module &_module = _System;
    _module.class_<Performance>("Performance")
           .constructor<>()
		   .fun<static_cast<double(Performance::*)(Performance::Monitor)const>(&Performance::get_monitor)>("get_monitor")
		   .fun<static_cast<void(Performance::*)(const StringName &,const Callable &,const Array &)>(&Performance::add_custom_monitor)>("add_custom_monitor")
		   .fun<static_cast<void(Performance::*)(const StringName &)>(&Performance::remove_custom_monitor)>("remove_custom_monitor")
		   .fun<static_cast<bool(Performance::*)(const StringName &)>(&Performance::has_custom_monitor)>("has_custom_monitor")
		   .fun<static_cast<Variant(Performance::*)(const StringName &)>(&Performance::get_custom_monitor)>("get_custom_monitor")
		   .fun<static_cast<uint64_t(Performance::*)()>(&Performance::get_monitor_modification_time)>("get_monitor_modification_time")
		   .fun<static_cast<TypedArray<StringName>(Performance::*)()>(&Performance::get_custom_monitor_names)>("get_custom_monitor_names")
;}