
import { GodotObject } from "@godot/classes/godot_object";
import { JavaClass } from "@godot/classes/java_class";

export declare class JavaClassWrapper extends GodotObject{
  public wrap(_name: String | StringName | string): JavaClass;
}