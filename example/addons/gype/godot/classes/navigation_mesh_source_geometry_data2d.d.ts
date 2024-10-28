
import { Resource } from "@godot/classes/resource";

export declare class NavigationMeshSourceGeometryData2D extends Resource{
  public clear(): void;
  public has_data(): boolean;
  public set_traversable_outlines(_traversable_outlines: typedarray::PackedVector2Array): void;
  public get_traversable_outlines(): Array;
  public set_obstruction_outlines(_obstruction_outlines: typedarray::PackedVector2Array): void;
  public get_obstruction_outlines(): Array;
  public append_traversable_outlines(_traversable_outlines: typedarray::PackedVector2Array): void;
  public append_obstruction_outlines(_obstruction_outlines: typedarray::PackedVector2Array): void;
  public add_traversable_outline(_shape_outline: PackedVector2Array): void;
  public add_obstruction_outline(_shape_outline: PackedVector2Array): void;
  public merge(_other_geometry: NavigationMeshSourceGeometryData2D): void;
  public add_projected_obstruction(_vertices: PackedVector2Array, _carve: boolean): void;
  public clear_projected_obstructions(): void;
  public set_projected_obstructions(_projected_obstructions: GDArray): void;
  public get_projected_obstructions(): GDArray;
  public get traversable_outlines(): Array {
    get_traversable_outlines();
  }
  public set traversable_outlines(value: Array): void {
    set_traversable_outlines(value);
  }
  public get obstruction_outlines(): Array {
    get_obstruction_outlines();
  }
  public set obstruction_outlines(value: Array): void {
    set_obstruction_outlines(value);
  }
  public get projected_obstructions(): Array {
    get_projected_obstructions();
  }
  public set projected_obstructions(value: Array): void {
    set_projected_obstructions(value);
  }
}