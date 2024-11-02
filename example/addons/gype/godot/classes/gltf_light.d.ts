
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
  public set_light_type(_light_type: GDString | StringName | string): void;
  public get_range(): number;
  public set_range(_range: number): void;
  public get_inner_cone_angle(): number;
  public set_inner_cone_angle(_inner_cone_angle: number): void;
  public get_outer_cone_angle(): number;
  public set_outer_cone_angle(_outer_cone_angle: number): void;
  public get_additional_data(_extension_name: GDString | StringName | string): any;
  public set_additional_data(_extension_name: GDString | StringName | string, _additional_data: any): void;
  public get color(): Color;
  public set color(value): void;
  public get intensity(): number;
  public set intensity(value): void;
  public get light_type(): String;
  public set light_type(value): void;
  public get range(): number;
  public set range(value): void;
  public get inner_cone_angle(): number;
  public set inner_cone_angle(value): void;
  public get outer_cone_angle(): number;
  public set outer_cone_angle(value): void;
}