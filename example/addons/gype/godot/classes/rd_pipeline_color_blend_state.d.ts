
import { RefCounted } from "@godot/classes/ref_counted";
import { RDPipelineColorBlendStateAttachment } from "@godot/classes/rd_pipeline_color_blend_state_attachment";


export declare class RDPipelineColorBlendState extends RefCounted{
  public set_enable_logic_op(_p_member: boolean): void;
  public get_enable_logic_op(): boolean;
  public set_logic_op(_p_member: number): void;
  public get_logic_op(): number;
  public set_blend_constant(_p_member: Color): void;
  public get_blend_constant(): Color;
  public set_attachments(_attachments: GDArray): void;
  public get_attachments(): GDArray;
  public get enable_logic_op(): boolean;
  public set enable_logic_op(value): void;
  public get logic_op(): number;
  public set logic_op(value): void;
  public get blend_constant(): Color;
  public set blend_constant(value): void;
  public get attachments(): GDArray;
  public set attachments(value): void;
}