
import { Resource } from "@godot/classes/resource";

export declare class NavigationMeshSourceGeometryData2D extends Resource{
  public clear(): void;
  public has_data(): boolean;
  public set_traversable_outlines(_traversable_outlines: GDArray): void;
  public get_traversable_outlines(): GDArray;
  public set_obstruction_outlines(_obstruction_outlines: GDArray): void;
  public get_obstruction_outlines(): GDArray;
  public append_traversable_outlines(_traversable_outlines: GDArray): void;
  public append_obstruction_outlines(_obstruction_outlines: GDArray): void;
  public add_traversable_outline(_shape_outline: PackedVector2Array): void;
  public add_obstruction_outline(_shape_outline: PackedVector2Array): void;
  public merge(_other_geometry: NavigationMeshSourceGeometryData2D): void;
  public add_projected_obstruction(_vertices: PackedVector2Array, _carve: boolean): void;
  public clear_projected_obstructions(): void;
  public set_projected_obstructions(_projected_obstructions: GDArray): void;
  public get_projected_obstructions(): GDArray;
  public get traversable_outlines(): GDArray {
    get_traversable_outlines();
  }
  public set traversable_outlines(value): void {
    set_traversable_outlines(value);
  }
  public get obstruction_outlines(): GDArray {
    get_obstruction_outlines();
  }
  public set obstruction_outlines(value): void {
    set_obstruction_outlines(value);
  }
  public get projected_obstructions(): GDArray {
    get_projected_obstructions();
  }
  public set projected_obstructions(value): void {
    set_projected_obstructions(value);
  }
}