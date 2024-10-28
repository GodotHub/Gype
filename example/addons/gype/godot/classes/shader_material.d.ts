
import { Material } from "@godot/classes/material";
import { Shader } from "@godot/classes/shader";

export declare class ShaderMaterial extends Material{
  public set_shader(_shader: Shader): void;
  public get_shader(): Shader;
  public set_shader_parameter(_param: StringName, _value: Variant): void;
  public get_shader_parameter(_param: StringName): Variant;
  public get shader(): Shader {
    get_shader();
  }
  public set shader(value: Shader): void {
    set_shader(value);
  }
}