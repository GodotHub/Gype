
import { RefCounted } from "@godot/classes/ref_counted";


export declare class RDPipelineMultisampleState extends RefCounted{
  public set_sample_count(_p_member: number): void;
  public get_sample_count(): number;
  public set_enable_sample_shading(_p_member: boolean): void;
  public get_enable_sample_shading(): boolean;
  public set_min_sample_shading(_p_member: number): void;
  public get_min_sample_shading(): number;
  public set_enable_alpha_to_coverage(_p_member: boolean): void;
  public get_enable_alpha_to_coverage(): boolean;
  public set_enable_alpha_to_one(_p_member: boolean): void;
  public get_enable_alpha_to_one(): boolean;
  public set_sample_masks(_masks: GDArray): void;
  public get_sample_masks(): GDArray;
  public get sample_count(): number;
  public set sample_count(value): void;
  public get enable_sample_shading(): boolean;
  public set enable_sample_shading(value): void;
  public get min_sample_shading(): number;
  public set min_sample_shading(value): void;
  public get enable_alpha_to_coverage(): boolean;
  public set enable_alpha_to_coverage(value): void;
  public get enable_alpha_to_one(): boolean;
  public set enable_alpha_to_one(value): void;
  public get sample_masks(): GDArray;
  public set sample_masks(value): void;
}