
import { NavigationMesh } from "@godot/classes/navigation_mesh";
import { GodotObject } from "@godot/classes/godot_object";
import { NavigationMeshSourceGeometryData3D } from "@godot/classes/navigation_mesh_source_geometry_data3d";
import { Node } from "@godot/classes/node";

export declare class NavigationMeshGenerator extends GodotObject{
  public bake(_navigation_mesh: NavigationMesh, _root_node: Node): void;
  public clear(_navigation_mesh: NavigationMesh): void;
  public parse_source_geometry_data(_navigation_mesh: NavigationMesh, _source_geometry_data: NavigationMeshSourceGeometryData3D, _root_node: Node, _callback: Callable): void;
  public bake_from_source_geometry_data(_navigation_mesh: NavigationMesh, _source_geometry_data: NavigationMeshSourceGeometryData3D, _callback: Callable): void;
}