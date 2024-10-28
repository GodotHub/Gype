
import { Object } from "@godot/classes/object";

export declare class RefCounted extends Object{
  public init_ref(): boolean;
  public reference(): boolean;
  public unreference(): boolean;
  public get_reference_count(): number;
}