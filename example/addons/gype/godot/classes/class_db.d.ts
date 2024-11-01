
import { GodotObject } from "@godot/classes/godot_object";

export declare class ClassDB extends GodotObject{
  public get_class_list(): PackedStringArray;
  public get_inheriters_from_class(_class: String | StringName | string): PackedStringArray;
  public get_parent_class(_class: String | StringName | string): StringName;
  public class_exists(_class: String | StringName | string): boolean;
  public is_parent_class(_class: String | StringName | string, _inherits: String | StringName | string): boolean;
  public can_instantiate(_class: String | StringName | string): boolean;
  public instantiate(_class: String | StringName | string): any;
  public class_has_signal(_class: String | StringName | string, _signal: String | StringName | string): boolean;
  public class_get_signal(_class: String | StringName | string, _signal: String | StringName | string): Dictionary;
  public class_get_signal_list(_class: String | StringName | string, _no_inheritance: boolean): GDArray;
  public class_get_property_list(_class: String | StringName | string, _no_inheritance: boolean): GDArray;
  public class_get_property(_object: Object, _property: String | StringName | string): any;
  public class_set_property(_object: Object, _property: String | StringName | string, _value: any): number;
  public class_get_property_default_value(_class: String | StringName | string, _property: String | StringName | string): any;
  public class_has_method(_class: String | StringName | string, _method: String | StringName | string, _no_inheritance: boolean): boolean;
  public class_get_method_argument_count(_class: String | StringName | string, _method: String | StringName | string, _no_inheritance: boolean): number;
  public class_get_method_list(_class: String | StringName | string, _no_inheritance: boolean): GDArray;
  public class_get_integer_constant_list(_class: String | StringName | string, _no_inheritance: boolean): PackedStringArray;
  public class_has_integer_constant(_class: String | StringName | string, _name: String | StringName | string): boolean;
  public class_get_integer_constant(_class: String | StringName | string, _name: String | StringName | string): number;
  public class_has_enum(_class: String | StringName | string, _name: String | StringName | string, _no_inheritance: boolean): boolean;
  public class_get_enum_list(_class: String | StringName | string, _no_inheritance: boolean): PackedStringArray;
  public class_get_enum_constants(_class: String | StringName | string, _enum: String | StringName | string, _no_inheritance: boolean): PackedStringArray;
  public class_get_integer_constant_enum(_class: String | StringName | string, _name: String | StringName | string, _no_inheritance: boolean): StringName;
  public is_class_enum_bitfield(_class: String | StringName | string, _enum: String | StringName | string, _no_inheritance: boolean): boolean;
  public is_class_enabled(_class: String | StringName | string): boolean;
}