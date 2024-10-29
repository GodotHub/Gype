
import { Object } from "@godot/classes/object";

export declare class ClassDB extends Object{
  public get_class_list(): PackedStringArray;
  public get_inheriters_from_class(_class: StringName): PackedStringArray;
  public get_parent_class(_class: StringName): StringName;
  public class_exists(_class: StringName): boolean;
  public is_parent_class(_class: StringName, _inherits: StringName): boolean;
  public can_instantiate(_class: StringName): boolean;
  public instantiate(_class: StringName): any;
  public class_has_signal(_class: StringName, _signal: StringName): boolean;
  public class_get_signal(_class: StringName, _signal: StringName): Dictionary;
  public class_get_signal_list(_class: StringName, _no_inheritance: boolean): GDArray;
  public class_get_property_list(_class: StringName, _no_inheritance: boolean): GDArray;
  public class_get_property(_object: Object, _property: StringName): any;
  public class_set_property(_object: Object, _property: StringName, _value: any): number;
  public class_get_property_default_value(_class: StringName, _property: StringName): any;
  public class_has_method(_class: StringName, _method: StringName, _no_inheritance: boolean): boolean;
  public class_get_method_argument_count(_class: StringName, _method: StringName, _no_inheritance: boolean): number;
  public class_get_method_list(_class: StringName, _no_inheritance: boolean): GDArray;
  public class_get_integer_constant_list(_class: StringName, _no_inheritance: boolean): PackedStringArray;
  public class_has_integer_constant(_class: StringName, _name: StringName): boolean;
  public class_get_integer_constant(_class: StringName, _name: StringName): number;
  public class_has_enum(_class: StringName, _name: StringName, _no_inheritance: boolean): boolean;
  public class_get_enum_list(_class: StringName, _no_inheritance: boolean): PackedStringArray;
  public class_get_enum_constants(_class: StringName, _enum: StringName, _no_inheritance: boolean): PackedStringArray;
  public class_get_integer_constant_enum(_class: StringName, _name: StringName, _no_inheritance: boolean): StringName;
  public is_class_enum_bitfield(_class: StringName, _enum: StringName, _no_inheritance: boolean): boolean;
  public is_class_enabled(_class: StringName): boolean;
}