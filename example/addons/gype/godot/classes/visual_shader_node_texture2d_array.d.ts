
import { VisualShaderNodeSample3D } from "@godot/classes/visual_shader_node_sample3d";
import { Texture2DArray } from "@godot/classes/texture2d_array";

export declare class VisualShaderNodeTexture2DArray extends VisualShaderNodeSample3D{
  public set_texture_array(_value: Texture2DArray): void;
  public get_texture_array(): Texture2DArray;
  public get texture_array(): Texture2DArray {
    get_texture_array();
  }
  public set texture_array(value: Texture2DArray): void {
    set_texture_array(value);
  }
}