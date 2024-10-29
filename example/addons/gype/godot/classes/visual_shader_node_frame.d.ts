
import { VisualShaderNodeResizableBase } from "@godot/classes/visual_shader_node_resizable_base";

export declare class VisualShaderNodeFrame extends VisualShaderNodeResizableBase{
  public set_title(_title: String): void;
  public get_title(): String;
  public set_tint_color_enabled(_enable: boolean): void;
  public is_tint_color_enabled(): boolean;
  public set_tint_color(_color: Color): void;
  public get_tint_color(): Color;
  public set_autoshrink_enabled(_enable: boolean): void;
  public is_autoshrink_enabled(): boolean;
  public add_attached_node(_node: number): void;
  public remove_attached_node(_node: number): void;
  public set_attached_nodes(_attached_nodes: PackedInt32Array): void;
  public get_attached_nodes(): PackedInt32Array;
  public get title(): String {
    get_title();
  }
  public set title(value): void {
    set_title(value);
  }
  public get tint_color_enabled(): boolean {
    is_tint_color_enabled();
  }
  public set tint_color_enabled(value): void {
    set_tint_color_enabled(value);
  }
  public get tint_color(): Color {
    get_tint_color();
  }
  public set tint_color(value): void {
    set_tint_color(value);
  }
  public get autoshrink(): boolean {
    is_autoshrink_enabled();
  }
  public set autoshrink(value): void {
    set_autoshrink_enabled(value);
  }
  public get attached_nodes(): PackedInt32Array {
    get_attached_nodes();
  }
  public set attached_nodes(value): void {
    set_attached_nodes(value);
  }
}