
import { RefCounted } from "@godot/classes/ref_counted";


export declare class RandomNumberGenerator extends RefCounted{
  public set_seed(_seed: number): void;
  public get_seed(): number;
  public set_state(_state: number): void;
  public get_state(): number;
  public randi(): number;
  public randf(): number;
  public randfn(_mean: number, _deviation: number): number;
  public randf_range(_from: number, _to: number): number;
  public randi_range(_from: number, _to: number): number;
  public rand_weighted(_weights: PackedFloat32Array): number;
  public randomize(): void;
  public get seed(): number;
  public set seed(value): void;
  public get state(): number;
  public set state(value): void;
}