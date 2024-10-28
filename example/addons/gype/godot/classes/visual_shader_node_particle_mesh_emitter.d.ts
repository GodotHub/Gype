
import { Mesh } from "@godot/classes/mesh";
import { VisualShaderNodeParticleEmitter } from "@godot/classes/visual_shader_node_particle_emitter";

export declare class VisualShaderNodeParticleMeshEmitter extends VisualShaderNodeParticleEmitter{
  public set_mesh(_mesh: Mesh): void;
  public get_mesh(): Mesh;
  public set_use_all_surfaces(_enabled: boolean): void;
  public is_use_all_surfaces(): boolean;
  public set_surface_index(_surface_index: number): void;
  public get_surface_index(): number;
  public get mesh(): Mesh {
    get_mesh();
  }
  public set mesh(value: Mesh): void {
    set_mesh(value);
  }
  public get use_all_surfaces(): boolean {
    is_use_all_surfaces();
  }
  public set use_all_surfaces(value: boolean): void {
    set_use_all_surfaces(value);
  }
  public get surface_index(): number {
    get_surface_index();
  }
  public set surface_index(value: number): void {
    set_surface_index(value);
  }
}