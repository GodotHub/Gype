
import { GodotObject } from "@godot/classes/godot_object";
declare global {
export declare class _Time extends GodotObject{
  public get_datetime_dict_from_unix_time(_unix_time_val: number): Dictionary;
  public get_date_dict_from_unix_time(_unix_time_val: number): Dictionary;
  public get_time_dict_from_unix_time(_unix_time_val: number): Dictionary;
  public get_datetime_string_from_unix_time(_unix_time_val: number, _use_space: boolean = false): String;
  public get_date_string_from_unix_time(_unix_time_val: number): String;
  public get_time_string_from_unix_time(_unix_time_val: number): String;
  public get_datetime_dict_from_datetime_string(_datetime: GDString | StringName | string, _weekday: boolean): Dictionary;
  public get_datetime_string_from_datetime_dict(_datetime: Dictionary, _use_space: boolean): String;
  public get_unix_time_from_datetime_dict(_datetime: Dictionary): number;
  public get_unix_time_from_datetime_string(_datetime: GDString | StringName | string): number;
  public get_offset_string_from_offset_minutes(_offset_minutes: number): String;
  public get_datetime_dict_from_system(_utc: boolean = false): Dictionary;
  public get_date_dict_from_system(_utc: boolean = false): Dictionary;
  public get_time_dict_from_system(_utc: boolean = false): Dictionary;
  public get_datetime_string_from_system(_utc: boolean = false, _use_space: boolean = false): String;
  public get_date_string_from_system(_utc: boolean = false): String;
  public get_time_string_from_system(_utc: boolean = false): String;
  public get_time_zone_from_system(): Dictionary;
  public get_unix_time_from_system(): number;
  public get_ticks_msec(): number;
  public get_ticks_usec(): number;
  static Month = {
    MONTH_JANUARY = 1,
    MONTH_FEBRUARY = 2,
    MONTH_MARCH = 3,
    MONTH_APRIL = 4,
    MONTH_MAY = 5,
    MONTH_JUNE = 6,
    MONTH_JULY = 7,
    MONTH_AUGUST = 8,
    MONTH_SEPTEMBER = 9,
    MONTH_OCTOBER = 10,
    MONTH_NOVEMBER = 11,
    MONTH_DECEMBER = 12,
  }
  static Weekday = {
    WEEKDAY_SUNDAY = 0,
    WEEKDAY_MONDAY = 1,
    WEEKDAY_TUESDAY = 2,
    WEEKDAY_WEDNESDAY = 3,
    WEEKDAY_THURSDAY = 4,
    WEEKDAY_FRIDAY = 5,
    WEEKDAY_SATURDAY = 6,
  }
}
}
declare global {
  const Time: _Time;
}