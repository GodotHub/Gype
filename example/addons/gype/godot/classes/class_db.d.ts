
import { GodotObject } from "@godot/classes/godot_object";


export declare class ClassDB extends GodotObject{
  public get_class_list(): PackedStringArray;
  public get_inheriters_from_class(_class: GDString | StringName | string): PackedStringArray;
  public get_parent_class(_class: GDString | StringName | string): StringName;
  public class_exists(_class: GDString | StringName | string): boolean;
  public is_parent_class(_class: GDString | StringName | string, _inherits: GDString | StringName | string): boolean;
  public can_instantiate(_class: GDString | StringName | string): boolean;
  public instantiate(_class: GDString | StringName | string): any;
  public class_has_signal(_class: GDString | StringName | string, _signal: GDString | StringName | string): boolean;
  public class_get_signal(_class: GDString | StringName | string, _signal: GDString | StringName | string): Dictionary;
  public class_get_signal_list(_class: GDString | StringName | string, _no_inheritance: boolean): GDArray;
  public class_get_property_list(_class: GDString | StringName | string, _no_inheritance: boolean): GDArray;
  public class_get_property(_object: GodotObject, _property: GDString | StringName | string): any;
  public class_set_property(_object: GodotObject, _property: GDString | StringName | string, _value: any): number;
  public class_get_property_default_value(_class: GDString | StringName | string, _property: GDString | StringName | string): any;
  public class_has_method(_class: GDString | StringName | string, _method: GDString | StringName | string, _no_inheritance: boolean): boolean;
  public class_get_method_argument_count(_class: GDString | StringName | string, _method: GDString | StringName | string, _no_inheritance: boolean): number;
  public class_get_method_list(_class: GDString | StringName | string, _no_inheritance: boolean): GDArray;
  public class_get_integer_constant_list(_class: GDString | StringName | string, _no_inheritance: boolean): PackedStringArray;
  public class_has_integer_constant(_class: GDString | StringName | string, _name: GDString | StringName | string): boolean;
  public class_get_integer_constant(_class: GDString | StringName | string, _name: GDString | StringName | string): number;
  public class_has_enum(_class: GDString | StringName | string, _name: GDString | StringName | string, _no_inheritance: boolean): boolean;
  public class_get_enum_list(_class: GDString | StringName | string, _no_inheritance: boolean): PackedStringArray;
  public class_get_enum_constants(_class: GDString | StringName | string, _enum: GDString | StringName | string, _no_inheritance: boolean): PackedStringArray;
  public class_get_integer_constant_enum(_class: GDString | StringName | string, _name: GDString | StringName | string, _no_inheritance: boolean): StringName;
  public is_class_enum_bitfield(_class: GDString | StringName | string, _enum: GDString | StringName | string, _no_inheritance: boolean): boolean;
  public is_class_enabled(_class: GDString | StringName | string): boolean;
}