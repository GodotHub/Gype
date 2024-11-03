
import { VisualShaderNodeResizableBase } from "@godot/classes/visual_shader_node_resizable_base";
import { CurveTexture } from "@godot/classes/curve_texture";
export declare class VisualShaderNodeCurveTexture extends VisualShaderNodeResizableBase{
  public set_texture(_texture: CurveTexture): void;
  public get_texture(): CurveTexture;
  public get texture(): CurveTexture;
  public set texture(value): void;
}