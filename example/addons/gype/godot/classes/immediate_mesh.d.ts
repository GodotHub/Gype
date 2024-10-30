
import { Material } from "@godot/classes/material";
import { Mesh } from "@godot/classes/mesh";

export declare class ImmediateMesh extends Mesh{
  public surface_begin(_primitive: number, _material: Material): void;
  public surface_set_color(_color: Color): void;
  public surface_set_normal(_normal: Vector3): void;
  public surface_set_tangent(_tangent: Plane): void;
  public surface_set_uv(_uv: Vector2): void;
  public surface_set_uv2(_uv2: Vector2): void;
  public surface_add_vertex(_vertex: Vector3): void;
  public surface_add_vertex_2d(_vertex: Vector2): void;
  public surface_end(): void;
  public clear_surfaces(): void;
}