
import { Resource } from "@godot/classes/resource";

export declare class RDShaderSPIRV extends Resource{
  public set_stage_bytecode(_stage: number, _bytecode: PackedByteArray): void;
  public get_stage_bytecode(_stage: number): PackedByteArray;
  public set_stage_compile_error(_stage: number, _compile_error: String | StringName | string): void;
  public get_stage_compile_error(_stage: number): String;
  public get bytecode_vertex(): PackedByteArray {
    get_stage_bytecode();
  }
  public set bytecode_vertex(value): void {
    set_stage_bytecode(value);
  }
  public get bytecode_fragment(): PackedByteArray {
    get_stage_bytecode();
  }
  public set bytecode_fragment(value): void {
    set_stage_bytecode(value);
  }
  public get bytecode_tesselation_control(): PackedByteArray {
    get_stage_bytecode();
  }
  public set bytecode_tesselation_control(value): void {
    set_stage_bytecode(value);
  }
  public get bytecode_tesselation_evaluation(): PackedByteArray {
    get_stage_bytecode();
  }
  public set bytecode_tesselation_evaluation(value): void {
    set_stage_bytecode(value);
  }
  public get bytecode_compute(): PackedByteArray {
    get_stage_bytecode();
  }
  public set bytecode_compute(value): void {
    set_stage_bytecode(value);
  }
  public get compile_error_vertex(): String {
    get_stage_compile_error();
  }
  public set compile_error_vertex(value): void {
    set_stage_compile_error(value);
  }
  public get compile_error_fragment(): String {
    get_stage_compile_error();
  }
  public set compile_error_fragment(value): void {
    set_stage_compile_error(value);
  }
  public get compile_error_tesselation_control(): String {
    get_stage_compile_error();
  }
  public set compile_error_tesselation_control(value): void {
    set_stage_compile_error(value);
  }
  public get compile_error_tesselation_evaluation(): String {
    get_stage_compile_error();
  }
  public set compile_error_tesselation_evaluation(value): void {
    set_stage_compile_error(value);
  }
  public get compile_error_compute(): String {
    get_stage_compile_error();
  }
  public set compile_error_compute(value): void {
    set_stage_compile_error(value);
  }
}