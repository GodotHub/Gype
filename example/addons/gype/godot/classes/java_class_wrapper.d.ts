
import { JavaClass } from "@godot/classes/java_class";
import { GodotObject } from "@godot/classes/godot_object";
declare global {
export declare class _JavaClassWrapper extends GodotObject{
  public wrap(_name: GDString | StringName | string): JavaClass;
}
}
declare global {
  const JavaClassWrapper: _JavaClassWrapper;
}