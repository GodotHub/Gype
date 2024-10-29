
import { GLTFState } from "@godot/classes/gltf_state";

export declare class FBXState extends GLTFState{
  public get_allow_geometry_helper_nodes(): boolean;
  public set_allow_geometry_helper_nodes(_allow: boolean): void;
  public get allow_geometry_helper_nodes(): boolean {
    get_allow_geometry_helper_nodes();
  }
  public set allow_geometry_helper_nodes(value): void {
    set_allow_geometry_helper_nodes(value);
  }
}