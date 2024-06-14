
#include <godot_cpp/classes/time.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_Time() {
	qjs::Value js_singleton = context->newObject();
	Time *singleton = Time::get_singleton();
	js_singleton.add((new std::string("get_datetime_dict_from_unix_time"))->c_str(), [singleton](int64_t unix_time_val) -> Dictionary { return singleton->get_datetime_dict_from_unix_time(unix_time_val); });
	js_singleton.add((new std::string("get_date_dict_from_unix_time"))->c_str(), [singleton](int64_t unix_time_val) -> Dictionary { return singleton->get_date_dict_from_unix_time(unix_time_val); });
	js_singleton.add((new std::string("get_time_dict_from_unix_time"))->c_str(), [singleton](int64_t unix_time_val) -> Dictionary { return singleton->get_time_dict_from_unix_time(unix_time_val); });
	js_singleton.add((new std::string("get_datetime_string_from_unix_time"))->c_str(), [singleton](int64_t unix_time_val, bool use_space) -> String { return singleton->get_datetime_string_from_unix_time(unix_time_val, use_space); });
	js_singleton.add((new std::string("get_date_string_from_unix_time"))->c_str(), [singleton](int64_t unix_time_val) -> String { return singleton->get_date_string_from_unix_time(unix_time_val); });
	js_singleton.add((new std::string("get_time_string_from_unix_time"))->c_str(), [singleton](int64_t unix_time_val) -> String { return singleton->get_time_string_from_unix_time(unix_time_val); });
	js_singleton.add((new std::string("get_datetime_dict_from_datetime_string"))->c_str(), [singleton](const String &datetime, bool weekday) -> Dictionary { return singleton->get_datetime_dict_from_datetime_string(datetime, weekday); });
	js_singleton.add((new std::string("get_datetime_string_from_datetime_dict"))->c_str(), [singleton](const Dictionary &datetime, bool use_space) -> String { return singleton->get_datetime_string_from_datetime_dict(datetime, use_space); });
	js_singleton.add((new std::string("get_unix_time_from_datetime_dict"))->c_str(), [singleton](const Dictionary &datetime) -> int64_t { return singleton->get_unix_time_from_datetime_dict(datetime); });
	js_singleton.add((new std::string("get_unix_time_from_datetime_string"))->c_str(), [singleton](const String &datetime) -> int64_t { return singleton->get_unix_time_from_datetime_string(datetime); });
	js_singleton.add((new std::string("get_offset_string_from_offset_minutes"))->c_str(), [singleton](int64_t offset_minutes) -> String { return singleton->get_offset_string_from_offset_minutes(offset_minutes); });
	js_singleton.add((new std::string("get_datetime_dict_from_system"))->c_str(), [singleton](bool utc) -> Dictionary { return singleton->get_datetime_dict_from_system(utc); });
	js_singleton.add((new std::string("get_date_dict_from_system"))->c_str(), [singleton](bool utc) -> Dictionary { return singleton->get_date_dict_from_system(utc); });
	js_singleton.add((new std::string("get_time_dict_from_system"))->c_str(), [singleton](bool utc) -> Dictionary { return singleton->get_time_dict_from_system(utc); });
	js_singleton.add((new std::string("get_datetime_string_from_system"))->c_str(), [singleton](bool utc, bool use_space) -> String { return singleton->get_datetime_string_from_system(utc, use_space); });
	js_singleton.add((new std::string("get_date_string_from_system"))->c_str(), [singleton](bool utc) -> String { return singleton->get_date_string_from_system(utc); });
	js_singleton.add((new std::string("get_time_string_from_system"))->c_str(), [singleton](bool utc) -> String { return singleton->get_time_string_from_system(utc); });
	js_singleton.add((new std::string("get_time_zone_from_system"))->c_str(), [singleton]() -> Dictionary { return singleton->get_time_zone_from_system(); });
	js_singleton.add((new std::string("get_unix_time_from_system"))->c_str(), [singleton]() -> double { return singleton->get_unix_time_from_system(); });
	js_singleton.add((new std::string("get_ticks_msec"))->c_str(), [singleton]() -> int64_t { return singleton->get_ticks_msec(); });
	js_singleton.add((new std::string("get_ticks_usec"))->c_str(), [singleton]() -> int64_t { return singleton->get_ticks_usec(); });
	context->global()[(new std::string("Time"))->c_str()] = js_singleton;

	qjs::Value _Month = context->newObject();
	_Month[(new std::string("MONTH_JANUARY"))->c_str()] = Time::Month::MONTH_JANUARY;
	_Month[(new std::string("MONTH_FEBRUARY"))->c_str()] = Time::Month::MONTH_FEBRUARY;
	_Month[(new std::string("MONTH_MARCH"))->c_str()] = Time::Month::MONTH_MARCH;
	_Month[(new std::string("MONTH_APRIL"))->c_str()] = Time::Month::MONTH_APRIL;
	_Month[(new std::string("MONTH_MAY"))->c_str()] = Time::Month::MONTH_MAY;
	_Month[(new std::string("MONTH_JUNE"))->c_str()] = Time::Month::MONTH_JUNE;
	_Month[(new std::string("MONTH_JULY"))->c_str()] = Time::Month::MONTH_JULY;
	_Month[(new std::string("MONTH_AUGUST"))->c_str()] = Time::Month::MONTH_AUGUST;
	_Month[(new std::string("MONTH_SEPTEMBER"))->c_str()] = Time::Month::MONTH_SEPTEMBER;
	_Month[(new std::string("MONTH_OCTOBER"))->c_str()] = Time::Month::MONTH_OCTOBER;
	_Month[(new std::string("MONTH_NOVEMBER"))->c_str()] = Time::Month::MONTH_NOVEMBER;
	_Month[(new std::string("MONTH_DECEMBER"))->c_str()] = Time::Month::MONTH_DECEMBER;
	js_singleton[(new std::string("Month"))->c_str()] = _Month;
	qjs::Value _Weekday = context->newObject();
	_Weekday[(new std::string("WEEKDAY_SUNDAY"))->c_str()] = Time::Weekday::WEEKDAY_SUNDAY;
	_Weekday[(new std::string("WEEKDAY_MONDAY"))->c_str()] = Time::Weekday::WEEKDAY_MONDAY;
	_Weekday[(new std::string("WEEKDAY_TUESDAY"))->c_str()] = Time::Weekday::WEEKDAY_TUESDAY;
	_Weekday[(new std::string("WEEKDAY_WEDNESDAY"))->c_str()] = Time::Weekday::WEEKDAY_WEDNESDAY;
	_Weekday[(new std::string("WEEKDAY_THURSDAY"))->c_str()] = Time::Weekday::WEEKDAY_THURSDAY;
	_Weekday[(new std::string("WEEKDAY_FRIDAY"))->c_str()] = Time::Weekday::WEEKDAY_FRIDAY;
	_Weekday[(new std::string("WEEKDAY_SATURDAY"))->c_str()] = Time::Weekday::WEEKDAY_SATURDAY;
	js_singleton[(new std::string("Weekday"))->c_str()] = _Weekday;
}