
import { VisualShaderNodeResizableBase } from "@godot/classes/visual_shader_node_resizable_base";
import { CurveXYZTexture } from "@godot/classes/curve_xyz_texture";

export declare class VisualShaderNodeCurveXYZTexture extends VisualShaderNodeResizableBase{
  public set_texture(_texture: CurveXYZTexture): void;
  public get_texture(): CurveXYZTexture;
  public get texture(): CurveXYZTexture {
    get_texture();
  }
  public set texture(value: CurveXYZTexture): void {
    set_texture(value);
  }
}