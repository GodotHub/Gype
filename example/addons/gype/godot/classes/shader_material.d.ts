
import { Shader } from "@godot/classes/shader";
import { Material } from "@godot/classes/material";

export declare class ShaderMaterial extends Material{
  public set_shader(_shader: Shader): void;
  public get_shader(): Shader;
  public set_shader_parameter(_param: String | StringName | string, _value: any): void;
  public get_shader_parameter(_param: String | StringName | string): any;
  public get shader(): Shader {
    get_shader();
  }
  public set shader(value): void {
    set_shader(value);
  }
}