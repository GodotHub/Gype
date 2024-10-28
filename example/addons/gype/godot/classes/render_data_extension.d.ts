
import { RenderSceneData } from "@godot/classes/render_scene_data";
import { RenderSceneBuffers } from "@godot/classes/render_scene_buffers";
import { RenderData } from "@godot/classes/render_data";

export declare class RenderDataExtension extends RenderData{
  public _get_render_scene_buffers(): RenderSceneBuffers;
  public _get_render_scene_data(): RenderSceneData;
  public _get_environment(): RID;
  public _get_camera_attributes(): RID;
}