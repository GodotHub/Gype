
import { RefCounted } from "@godot/classes/ref_counted";
export declare class RDFramebufferPass extends RefCounted{
  public set_color_attachments(_p_member: PackedInt32Array): void;
  public get_color_attachments(): PackedInt32Array;
  public set_input_attachments(_p_member: PackedInt32Array): void;
  public get_input_attachments(): PackedInt32Array;
  public set_resolve_attachments(_p_member: PackedInt32Array): void;
  public get_resolve_attachments(): PackedInt32Array;
  public set_preserve_attachments(_p_member: PackedInt32Array): void;
  public get_preserve_attachments(): PackedInt32Array;
  public set_depth_attachment(_p_member: number): void;
  public get_depth_attachment(): number;
  public get color_attachments(): PackedInt32Array;
  public set color_attachments(value): void;
  public get input_attachments(): PackedInt32Array;
  public set input_attachments(value): void;
  public get resolve_attachments(): PackedInt32Array;
  public set resolve_attachments(value): void;
  public get preserve_attachments(): PackedInt32Array;
  public set preserve_attachments(value): void;
  public get depth_attachment(): number;
  public set depth_attachment(value): void;
}