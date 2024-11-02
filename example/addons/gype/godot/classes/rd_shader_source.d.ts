
import { RefCounted } from "@godot/classes/ref_counted";


export declare class RDShaderSource extends RefCounted{
  public set_stage_source(_stage: number, _source: GDString | StringName | string): void;
  public get_stage_source(_stage: number): String;
  public set_language(_language: number): void;
  public get_language(): number;
  public get source_vertex(): String;
  public set source_vertex(value): void;
  public get source_fragment(): String;
  public set source_fragment(value): void;
  public get source_tesselation_control(): String;
  public set source_tesselation_control(value): void;
  public get source_tesselation_evaluation(): String;
  public set source_tesselation_evaluation(value): void;
  public get source_compute(): String;
  public set source_compute(value): void;
  public get language(): number;
  public set language(value): void;
}