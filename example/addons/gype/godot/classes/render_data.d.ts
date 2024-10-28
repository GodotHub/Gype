
import { RenderSceneData } from "@godot/classes/render_scene_data";
import { RenderSceneBuffers } from "@godot/classes/render_scene_buffers";
import { Object } from "@godot/classes/object";

export declare class RenderData extends Object{
  public get_render_scene_buffers(): RenderSceneBuffers;
  public get_render_scene_data(): RenderSceneData;
  public get_environment(): RID;
  public get_camera_attributes(): RID;
}