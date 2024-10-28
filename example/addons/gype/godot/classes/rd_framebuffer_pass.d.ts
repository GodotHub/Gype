
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
  public get color_attachments(): PackedInt32Array {
    get_color_attachments();
  }
  public set color_attachments(value: PackedInt32Array): void {
    set_color_attachments(value);
  }
  public get input_attachments(): PackedInt32Array {
    get_input_attachments();
  }
  public set input_attachments(value: PackedInt32Array): void {
    set_input_attachments(value);
  }
  public get resolve_attachments(): PackedInt32Array {
    get_resolve_attachments();
  }
  public set resolve_attachments(value: PackedInt32Array): void {
    set_resolve_attachments(value);
  }
  public get preserve_attachments(): PackedInt32Array {
    get_preserve_attachments();
  }
  public set preserve_attachments(value: PackedInt32Array): void {
    set_preserve_attachments(value);
  }
  public get depth_attachment(): number {
    get_depth_attachment();
  }
  public set depth_attachment(value: number): void {
    set_depth_attachment(value);
  }
}