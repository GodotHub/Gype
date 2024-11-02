
import { Resource } from "@godot/classes/resource";


export declare class Material extends Resource{
  public _get_shader_rid(): RID;
  public _get_shader_mode(): number;
  public _can_do_next_pass(): boolean;
  public _can_use_render_priority(): boolean;
  public set_next_pass(_next_pass: Material): void;
  public get_next_pass(): Material;
  public set_render_priority(_priority: number): void;
  public get_render_priority(): number;
  public inspect_native_shader_code(): void;
  public create_placeholder(): Resource;
  public get render_priority(): number;
  public set render_priority(value): void;
  public get next_pass(): Material;
  public set next_pass(value): void;
}