
import { RefCounted } from "@godot/classes/ref_counted";

export declare class RDShaderSource extends RefCounted{
  public set_stage_source(_stage: number, _source: String): void;
  public get_stage_source(_stage: number): String;
  public set_language(_language: number): void;
  public get_language(): number;
  public get source_vertex(): String {
    get_stage_source();
  }
  public set source_vertex(value): void {
    set_stage_source(value);
  }
  public get source_fragment(): String {
    get_stage_source();
  }
  public set source_fragment(value): void {
    set_stage_source(value);
  }
  public get source_tesselation_control(): String {
    get_stage_source();
  }
  public set source_tesselation_control(value): void {
    set_stage_source(value);
  }
  public get source_tesselation_evaluation(): String {
    get_stage_source();
  }
  public set source_tesselation_evaluation(value): void {
    set_stage_source(value);
  }
  public get source_compute(): String {
    get_stage_source();
  }
  public set source_compute(value): void {
    set_stage_source(value);
  }
  public get language(): number {
    get_language();
  }
  public set language(value): void {
    set_language(value);
  }
}