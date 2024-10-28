
import { Object } from "@godot/classes/object";

export declare class RenderSceneData extends Object{
  public get_cam_transform(): Transform3D;
  public get_cam_projection(): Projection;
  public get_view_count(): number;
  public get_view_eye_offset(_view: number): Vector3;
  public get_view_projection(_view: number): Projection;
  public get_uniform_buffer(): RID;
}