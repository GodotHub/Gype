
import { Material } from "@godot/classes/material";
import { Shader } from "@godot/classes/shader";
export declare class ShaderMaterial extends Material{
  public set_shader(_shader: Shader): void;
  public get_shader(): Shader;
  public set_shader_parameter(_param: GDString | StringName | string, _value: any): void;
  public get_shader_parameter(_param: GDString | StringName | string): any;
  public get shader(): Shader;
  public set shader(value): void;
}