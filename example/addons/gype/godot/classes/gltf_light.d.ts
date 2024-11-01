
import { Light3D } from "@godot/classes/light3d";
import { Resource } from "@godot/classes/resource";

export declare class GLTFLight extends Resource{
  public from_node(_light_node: Light3D): GLTFLight;
  public to_node(): Light3D;
  public from_dictionary(_dictionary: Dictionary): GLTFLight;
  public to_dictionary(): Dictionary;
  public get_color(): Color;
  public set_color(_color: Color): void;
  public get_intensity(): number;
  public set_intensity(_intensity: number): void;
  public get_light_type(): String;
  public set_light_type(_light_type: String | StringName | string): void;
  public get_range(): number;
  public set_range(_range: number): void;
  public get_inner_cone_angle(): number;
  public set_inner_cone_angle(_inner_cone_angle: number): void;
  public get_outer_cone_angle(): number;
  public set_outer_cone_angle(_outer_cone_angle: number): void;
  public get_additional_data(_extension_name: String | StringName | string): any;
  public set_additional_data(_extension_name: String | StringName | string, _additional_data: any): void;
  public get color(): Color {
    get_color();
  }
  public set color(value): void {
    set_color(value);
  }
  public get intensity(): number {
    get_intensity();
  }
  public set intensity(value): void {
    set_intensity(value);
  }
  public get light_type(): String {
    get_light_type();
  }
  public set light_type(value): void {
    set_light_type(value);
  }
  public get range(): number {
    get_range();
  }
  public set range(value): void {
    set_range(value);
  }
  public get inner_cone_angle(): number {
    get_inner_cone_angle();
  }
  public set inner_cone_angle(value): void {
    set_inner_cone_angle(value);
  }
  public get outer_cone_angle(): number {
    get_outer_cone_angle();
  }
  public set outer_cone_angle(value): void {
    set_outer_cone_angle(value);
  }
}