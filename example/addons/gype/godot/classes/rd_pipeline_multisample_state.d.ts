
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
  public get sample_count(): number {
    get_sample_count();
  }
  public set sample_count(value): void {
    set_sample_count(value);
  }
  public get enable_sample_shading(): boolean {
    get_enable_sample_shading();
  }
  public set enable_sample_shading(value): void {
    set_enable_sample_shading(value);
  }
  public get min_sample_shading(): number {
    get_min_sample_shading();
  }
  public set min_sample_shading(value): void {
    set_min_sample_shading(value);
  }
  public get enable_alpha_to_coverage(): boolean {
    get_enable_alpha_to_coverage();
  }
  public set enable_alpha_to_coverage(value): void {
    set_enable_alpha_to_coverage(value);
  }
  public get enable_alpha_to_one(): boolean {
    get_enable_alpha_to_one();
  }
  public set enable_alpha_to_one(value): void {
    set_enable_alpha_to_one(value);
  }
  public get sample_masks(): GDArray {
    get_sample_masks();
  }
  public set sample_masks(value): void {
    set_sample_masks(value);
  }
}