
import { RefCounted } from "@godot/classes/ref_counted";
import { Skin } from "@godot/classes/skin";


export declare class SkinReference extends RefCounted{
  public get_skeleton(): RID;
  public get_skin(): Skin;
}