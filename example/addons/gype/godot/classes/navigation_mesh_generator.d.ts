
import { NavigationMeshSourceGeometryData3D } from "@godot/classes/navigation_mesh_source_geometry_data3d";
import { Node } from "@godot/classes/node";
import { Object } from "@godot/classes/object";
import { NavigationMesh } from "@godot/classes/navigation_mesh";

export declare class NavigationMeshGenerator extends Object{
  public bake(_navigation_mesh: NavigationMesh, _root_node: Node): void;
  public clear(_navigation_mesh: NavigationMesh): void;
  public parse_source_geometry_data(_navigation_mesh: NavigationMesh, _source_geometry_data: NavigationMeshSourceGeometryData3D, _root_node: Node, _callback: Callable): void;
  public bake_from_source_geometry_data(_navigation_mesh: NavigationMesh, _source_geometry_data: NavigationMeshSourceGeometryData3D, _callback: Callable): void;
}