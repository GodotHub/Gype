
import { Node } from "@godot/classes/node";
import { Control } from "@godot/classes/control";

export declare class Range extends Control{
  public _value_changed(_new_value: number): void;
  public get_value(): number;
  public get_min(): number;
  public get_max(): number;
  public get_step(): number;
  public get_page(): number;
  public get_as_ratio(): number;
  public set_value(_value: number): void;
  public set_value_no_signal(_value: number): void;
  public set_min(_minimum: number): void;
  public set_max(_maximum: number): void;
  public set_step(_step: number): void;
  public set_page(_pagesize: number): void;
  public set_as_ratio(_value: number): void;
  public set_use_rounded_values(_enabled: boolean): void;
  public is_using_rounded_values(): boolean;
  public set_exp_ratio(_enabled: boolean): void;
  public is_ratio_exp(): boolean;
  public set_allow_greater(_allow: boolean): void;
  public is_greater_allowed(): boolean;
  public set_allow_lesser(_allow: boolean): void;
  public is_lesser_allowed(): boolean;
  public share(_with: Node): void;
  public unshare(): void;
  public get min_value(): number {
    get_min();
  }
  public set min_value(value): void {
    set_min(value);
  }
  public get max_value(): number {
    get_max();
  }
  public set max_value(value): void {
    set_max(value);
  }
  public get step(): number {
    get_step();
  }
  public set step(value): void {
    set_step(value);
  }
  public get page(): number {
    get_page();
  }
  public set page(value): void {
    set_page(value);
  }
  public get value(): number {
    get_value();
  }
  public set value(value): void {
    set_value(value);
  }
  public get ratio(): number {
    get_as_ratio();
  }
  public set ratio(value): void {
    set_as_ratio(value);
  }
  public get exp_edit(): boolean {
    is_ratio_exp();
  }
  public set exp_edit(value): void {
    set_exp_ratio(value);
  }
  public get rounded(): boolean {
    is_using_rounded_values();
  }
  public set rounded(value): void {
    set_use_rounded_values(value);
  }
  public get allow_greater(): boolean {
    is_greater_allowed();
  }
  public set allow_greater(value): void {
    set_allow_greater(value);
  }
  public get allow_lesser(): boolean {
    is_lesser_allowed();
  }
  public set allow_lesser(value): void {
    set_allow_lesser(value);
  }
  public get value_changed(): Signal;
  public get changed(): Signal;
}