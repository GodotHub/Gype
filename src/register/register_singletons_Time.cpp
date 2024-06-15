#include <godot_cpp/classes/time.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_Time() {
	qjs::Value js_singleton = context->newObject();
    Time *singleton = Time::get_singleton();
    js_singleton.add("get_datetime_dict_from_unix_time", [singleton](int64_t unix_time_val)->Dictionary{return singleton->get_datetime_dict_from_unix_time(unix_time_val);});
    js_singleton.add("get_date_dict_from_unix_time", [singleton](int64_t unix_time_val)->Dictionary{return singleton->get_date_dict_from_unix_time(unix_time_val);});
    js_singleton.add("get_time_dict_from_unix_time", [singleton](int64_t unix_time_val)->Dictionary{return singleton->get_time_dict_from_unix_time(unix_time_val);});
    js_singleton.add("get_datetime_string_from_unix_time", [singleton](int64_t unix_time_val,bool use_space)->String{return singleton->get_datetime_string_from_unix_time(unix_time_val,use_space);});
    js_singleton.add("get_date_string_from_unix_time", [singleton](int64_t unix_time_val)->String{return singleton->get_date_string_from_unix_time(unix_time_val);});
    js_singleton.add("get_time_string_from_unix_time", [singleton](int64_t unix_time_val)->String{return singleton->get_time_string_from_unix_time(unix_time_val);});
    js_singleton.add("get_datetime_dict_from_datetime_string", [singleton](const String & datetime,bool weekday)->Dictionary{return singleton->get_datetime_dict_from_datetime_string(datetime,weekday);});
    js_singleton.add("get_datetime_string_from_datetime_dict", [singleton](const Dictionary & datetime,bool use_space)->String{return singleton->get_datetime_string_from_datetime_dict(datetime,use_space);});
    js_singleton.add("get_unix_time_from_datetime_dict", [singleton](const Dictionary & datetime)->int64_t{return singleton->get_unix_time_from_datetime_dict(datetime);});
    js_singleton.add("get_unix_time_from_datetime_string", [singleton](const String & datetime)->int64_t{return singleton->get_unix_time_from_datetime_string(datetime);});
    js_singleton.add("get_offset_string_from_offset_minutes", [singleton](int64_t offset_minutes)->String{return singleton->get_offset_string_from_offset_minutes(offset_minutes);});
    js_singleton.add("get_datetime_dict_from_system", [singleton](bool utc)->Dictionary{return singleton->get_datetime_dict_from_system(utc);});
    js_singleton.add("get_date_dict_from_system", [singleton](bool utc)->Dictionary{return singleton->get_date_dict_from_system(utc);});
    js_singleton.add("get_time_dict_from_system", [singleton](bool utc)->Dictionary{return singleton->get_time_dict_from_system(utc);});
    js_singleton.add("get_datetime_string_from_system", [singleton](bool utc,bool use_space)->String{return singleton->get_datetime_string_from_system(utc,use_space);});
    js_singleton.add("get_date_string_from_system", [singleton](bool utc)->String{return singleton->get_date_string_from_system(utc);});
    js_singleton.add("get_time_string_from_system", [singleton](bool utc)->String{return singleton->get_time_string_from_system(utc);});
    js_singleton.add("get_time_zone_from_system", [singleton]()->Dictionary{return singleton->get_time_zone_from_system();});
    js_singleton.add("get_unix_time_from_system", [singleton]()->double{return singleton->get_unix_time_from_system();});
    js_singleton.add("get_ticks_msec", [singleton]()->int64_t{return singleton->get_ticks_msec();});
    js_singleton.add("get_ticks_usec", [singleton]()->int64_t{return singleton->get_ticks_usec();});
    context->global()["Time"] = js_singleton;

    qjs::Value _Month = context->newObject();
    _Month["MONTH_JANUARY"] = Time::Month::MONTH_JANUARY;
    _Month["MONTH_FEBRUARY"] = Time::Month::MONTH_FEBRUARY;
    _Month["MONTH_MARCH"] = Time::Month::MONTH_MARCH;
    _Month["MONTH_APRIL"] = Time::Month::MONTH_APRIL;
    _Month["MONTH_MAY"] = Time::Month::MONTH_MAY;
    _Month["MONTH_JUNE"] = Time::Month::MONTH_JUNE;
    _Month["MONTH_JULY"] = Time::Month::MONTH_JULY;
    _Month["MONTH_AUGUST"] = Time::Month::MONTH_AUGUST;
    _Month["MONTH_SEPTEMBER"] = Time::Month::MONTH_SEPTEMBER;
    _Month["MONTH_OCTOBER"] = Time::Month::MONTH_OCTOBER;
    _Month["MONTH_NOVEMBER"] = Time::Month::MONTH_NOVEMBER;
    _Month["MONTH_DECEMBER"] = Time::Month::MONTH_DECEMBER;
    js_singleton["Month"] = _Month;
    qjs::Value _Weekday = context->newObject();
    _Weekday["WEEKDAY_SUNDAY"] = Time::Weekday::WEEKDAY_SUNDAY;
    _Weekday["WEEKDAY_MONDAY"] = Time::Weekday::WEEKDAY_MONDAY;
    _Weekday["WEEKDAY_TUESDAY"] = Time::Weekday::WEEKDAY_TUESDAY;
    _Weekday["WEEKDAY_WEDNESDAY"] = Time::Weekday::WEEKDAY_WEDNESDAY;
    _Weekday["WEEKDAY_THURSDAY"] = Time::Weekday::WEEKDAY_THURSDAY;
    _Weekday["WEEKDAY_FRIDAY"] = Time::Weekday::WEEKDAY_FRIDAY;
    _Weekday["WEEKDAY_SATURDAY"] = Time::Weekday::WEEKDAY_SATURDAY;
    js_singleton["Weekday"] = _Weekday;
}