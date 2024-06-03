#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_Time() {
    qjs::Context::Module &_module = _System;
    _module.class_<Time>("Time")
           .constructor<>()
		   .fun<static_cast<Dictionary(Time::*)(int64_t)const>(&Time::get_datetime_dict_from_unix_time)>("get_datetime_dict_from_unix_time")
		   .fun<static_cast<Dictionary(Time::*)(int64_t)const>(&Time::get_date_dict_from_unix_time)>("get_date_dict_from_unix_time")
		   .fun<static_cast<Dictionary(Time::*)(int64_t)const>(&Time::get_time_dict_from_unix_time)>("get_time_dict_from_unix_time")
		   .fun<static_cast<String(Time::*)(int64_t,bool)const>(&Time::get_datetime_string_from_unix_time)>("get_datetime_string_from_unix_time")
		   .fun<static_cast<String(Time::*)(int64_t)const>(&Time::get_date_string_from_unix_time)>("get_date_string_from_unix_time")
		   .fun<static_cast<String(Time::*)(int64_t)const>(&Time::get_time_string_from_unix_time)>("get_time_string_from_unix_time")
		   .fun<static_cast<Dictionary(Time::*)(const String &,bool)const>(&Time::get_datetime_dict_from_datetime_string)>("get_datetime_dict_from_datetime_string")
		   .fun<static_cast<String(Time::*)(const Dictionary &,bool)const>(&Time::get_datetime_string_from_datetime_dict)>("get_datetime_string_from_datetime_dict")
		   .fun<static_cast<int64_t(Time::*)(const Dictionary &)const>(&Time::get_unix_time_from_datetime_dict)>("get_unix_time_from_datetime_dict")
		   .fun<static_cast<int64_t(Time::*)(const String &)const>(&Time::get_unix_time_from_datetime_string)>("get_unix_time_from_datetime_string")
		   .fun<static_cast<String(Time::*)(int64_t)const>(&Time::get_offset_string_from_offset_minutes)>("get_offset_string_from_offset_minutes")
		   .fun<static_cast<Dictionary(Time::*)(bool)const>(&Time::get_datetime_dict_from_system)>("get_datetime_dict_from_system")
		   .fun<static_cast<Dictionary(Time::*)(bool)const>(&Time::get_date_dict_from_system)>("get_date_dict_from_system")
		   .fun<static_cast<Dictionary(Time::*)(bool)const>(&Time::get_time_dict_from_system)>("get_time_dict_from_system")
		   .fun<static_cast<String(Time::*)(bool,bool)const>(&Time::get_datetime_string_from_system)>("get_datetime_string_from_system")
		   .fun<static_cast<String(Time::*)(bool)const>(&Time::get_date_string_from_system)>("get_date_string_from_system")
		   .fun<static_cast<String(Time::*)(bool)const>(&Time::get_time_string_from_system)>("get_time_string_from_system")
		   .fun<static_cast<Dictionary(Time::*)()const>(&Time::get_time_zone_from_system)>("get_time_zone_from_system")
		   .fun<static_cast<double(Time::*)()const>(&Time::get_unix_time_from_system)>("get_unix_time_from_system")
		   .fun<static_cast<uint64_t(Time::*)()const>(&Time::get_ticks_msec)>("get_ticks_msec")
		   .fun<static_cast<uint64_t(Time::*)()const>(&Time::get_ticks_usec)>("get_ticks_usec")
;}