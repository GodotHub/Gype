
import { Texture3D } from "@godot/classes/texture3d";
import { VisualShaderNodeSample3D } from "@godot/classes/visual_shader_node_sample3d";
export declare class VisualShaderNodeTexture3D extends VisualShaderNodeSample3D{
  public set_texture(_value: Texture3D): void;
  public get_texture(): Texture3D;
  public get texture(): Texture3D;
  public set texture(value): void;
}