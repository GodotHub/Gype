
import { SceneState } from "@godot/classes/scene_state";
import { Node } from "@godot/classes/node";
import { Resource } from "@godot/classes/resource";

export declare class PackedScene extends Resource{
  public pack(_path: Node): number;
  public instantiate(_edit_state: number): Node;
  public can_instantiate(): boolean;
  public get_state(): SceneState;
  static GenEditState = {
    GEN_EDIT_STATE_DISABLED = 0,
    GEN_EDIT_STATE_INSTANCE = 1,
    GEN_EDIT_STATE_MAIN = 2,
    GEN_EDIT_STATE_MAIN_INHERITED = 3,
  }
}