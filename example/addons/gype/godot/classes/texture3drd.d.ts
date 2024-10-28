
import { Texture3D } from "@godot/classes/texture3d";

export declare class Texture3DRD extends Texture3D{
  public set_texture_rd_rid(_texture_rd_rid: RID): void;
  public get_texture_rd_rid(): RID;
  public get texture_rd_rid(): RID {
    get_texture_rd_rid();
  }
  public set texture_rd_rid(value: RID): void {
    set_texture_rd_rid(value);
  }
}