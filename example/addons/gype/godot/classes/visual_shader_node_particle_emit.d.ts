
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeParticleEmit extends VisualShaderNode{
  public set_flags(_flags: number): void;
  public get_flags(): number;
  public get flags(): number {
    get_flags();
  }
  public set flags(value: number): void {
    set_flags(value);
  }
  static EmitFlags = {
    EMIT_FLAG_POSITION = 1,
    EMIT_FLAG_ROT_SCALE = 2,
    EMIT_FLAG_VELOCITY = 4,
    EMIT_FLAG_COLOR = 8,
    EMIT_FLAG_CUSTOM = 16,
  }
}