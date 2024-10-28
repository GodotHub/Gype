
import { RefCounted } from "@godot/classes/ref_counted";

export declare class RDAttachmentFormat extends RefCounted{
  public set_format(_p_member: number): void;
  public get_format(): number;
  public set_samples(_p_member: number): void;
  public get_samples(): number;
  public set_usage_flags(_p_member: number): void;
  public get_usage_flags(): number;
  public get format(): number {
    get_format();
  }
  public set format(value: number): void {
    set_format(value);
  }
  public get samples(): number {
    get_samples();
  }
  public set samples(value: number): void {
    set_samples(value);
  }
  public get usage_flags(): number {
    get_usage_flags();
  }
  public set usage_flags(value: number): void {
    set_usage_flags(value);
  }
}