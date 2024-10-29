
import { RDShaderSPIRV } from "@godot/classes/rd_shader_spirv";
import { Resource } from "@godot/classes/resource";

export declare class RDShaderFile extends Resource{
  public set_bytecode(_bytecode: RDShaderSPIRV, _version: StringName): void;
  public get_spirv(_version: StringName): RDShaderSPIRV;
  public get_version_list(): GDArray;
  public set_base_error(_error: String): void;
  public get_base_error(): String;
  public get base_error(): String {
    get_base_error();
  }
  public set base_error(value): void {
    set_base_error(value);
  }
}