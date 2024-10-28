
import { RefCounted } from "@godot/classes/ref_counted";

export declare class RDPipelineSpecializationConstant extends RefCounted{
  public set_value(_value: Variant): void;
  public get_value(): Variant;
  public set_constant_id(_constant_id: number): void;
  public get_constant_id(): number;
  public get value(): Variant {
    get_value();
  }
  public set value(value: Variant): void {
    set_value(value);
  }
  public get constant_id(): number {
    get_constant_id();
  }
  public set constant_id(value: number): void {
    set_constant_id(value);
  }
}