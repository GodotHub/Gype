
import { Resource } from "@godot/classes/resource";
export declare class RDShaderSPIRV extends Resource{
  public set_stage_bytecode(_stage: number, _bytecode: PackedByteArray): void;
  public get_stage_bytecode(_stage: number): PackedByteArray;
  public set_stage_compile_error(_stage: number, _compile_error: GDString | StringName | string): void;
  public get_stage_compile_error(_stage: number): String;
  public get bytecode_vertex(): PackedByteArray;
  public set bytecode_vertex(value): void;
  public get bytecode_fragment(): PackedByteArray;
  public set bytecode_fragment(value): void;
  public get bytecode_tesselation_control(): PackedByteArray;
  public set bytecode_tesselation_control(value): void;
  public get bytecode_tesselation_evaluation(): PackedByteArray;
  public set bytecode_tesselation_evaluation(value): void;
  public get bytecode_compute(): PackedByteArray;
  public set bytecode_compute(value): void;
  public get compile_error_vertex(): String;
  public set compile_error_vertex(value): void;
  public get compile_error_fragment(): String;
  public set compile_error_fragment(value): void;
  public get compile_error_tesselation_control(): String;
  public set compile_error_tesselation_control(value): void;
  public get compile_error_tesselation_evaluation(): String;
  public set compile_error_tesselation_evaluation(value): void;
  public get compile_error_compute(): String;
  public set compile_error_compute(value): void;
}