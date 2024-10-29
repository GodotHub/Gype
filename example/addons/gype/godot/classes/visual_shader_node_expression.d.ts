
import { VisualShaderNodeGroupBase } from "@godot/classes/visual_shader_node_group_base";

export declare class VisualShaderNodeExpression extends VisualShaderNodeGroupBase{
  public set_expression(_expression: String): void;
  public get_expression(): String;
  public get expression(): String {
    get_expression();
  }
  public set expression(value): void {
    set_expression(value);
  }
}