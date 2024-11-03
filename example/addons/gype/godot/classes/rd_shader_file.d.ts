
import { RDShaderSPIRV } from "@godot/classes/rd_shader_spirv";
import { Resource } from "@godot/classes/resource";
export declare class RDShaderFile extends Resource{
  public set_bytecode(_bytecode: RDShaderSPIRV, _version: GDString | StringName | string = ""): void;
  public get_spirv(_version: GDString | StringName | string = ""): RDShaderSPIRV;
  public get_version_list(): GDArray;
  public set_base_error(_error: GDString | StringName | string): void;
  public get_base_error(): String;
  public get base_error(): String;
  public set base_error(value): void;
}