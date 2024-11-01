
import { GLTFTexture } from "@godot/classes/gltf_texture";
import { GLTFSkeleton } from "@godot/classes/gltf_skeleton";
import { Node } from "@godot/classes/node";
import { Texture2D } from "@godot/classes/texture2d";
import { GLTFAccessor } from "@godot/classes/gltf_accessor";
import { GLTFNode } from "@godot/classes/gltf_node";
import { GLTFCamera } from "@godot/classes/gltf_camera";
import { GLTFBufferView } from "@godot/classes/gltf_buffer_view";
import { Resource } from "@godot/classes/resource";
import { GLTFTextureSampler } from "@godot/classes/gltf_texture_sampler";
import { GLTFMesh } from "@godot/classes/gltf_mesh";
import { Material } from "@godot/classes/material";
import { GLTFLight } from "@godot/classes/gltf_light";
import { GLTFAnimation } from "@godot/classes/gltf_animation";
import { GLTFSkin } from "@godot/classes/gltf_skin";
import { AnimationPlayer } from "@godot/classes/animation_player";

export declare class GLTFState extends Resource{
  public add_used_extension(_extension_name: String | StringName | string, _required: boolean): void;
  public append_data_to_buffers(_data: PackedByteArray, _deduplication: boolean): number;
  public get_json(): Dictionary;
  public set_json(_json: Dictionary): void;
  public get_major_version(): number;
  public set_major_version(_major_version: number): void;
  public get_minor_version(): number;
  public set_minor_version(_minor_version: number): void;
  public get_copyright(): String;
  public set_copyright(_copyright: String | StringName | string): void;
  public get_glb_data(): PackedByteArray;
  public set_glb_data(_glb_data: PackedByteArray): void;
  public get_use_named_skin_binds(): boolean;
  public set_use_named_skin_binds(_use_named_skin_binds: boolean): void;
  public get_nodes(): GDArray;
  public set_nodes(_nodes: GDArray): void;
  public get_buffers(): GDArray;
  public set_buffers(_buffers: GDArray): void;
  public get_buffer_views(): GDArray;
  public set_buffer_views(_buffer_views: GDArray): void;
  public get_accessors(): GDArray;
  public set_accessors(_accessors: GDArray): void;
  public get_meshes(): GDArray;
  public set_meshes(_meshes: GDArray): void;
  public get_animation_players_count(_idx: number): number;
  public get_animation_player(_idx: number): AnimationPlayer;
  public get_materials(): GDArray;
  public set_materials(_materials: GDArray): void;
  public get_scene_name(): String;
  public set_scene_name(_scene_name: String | StringName | string): void;
  public get_base_path(): String;
  public set_base_path(_base_path: String | StringName | string): void;
  public get_filename(): String;
  public set_filename(_filename: String | StringName | string): void;
  public get_root_nodes(): PackedInt32Array;
  public set_root_nodes(_root_nodes: PackedInt32Array): void;
  public get_textures(): GDArray;
  public set_textures(_textures: GDArray): void;
  public get_texture_samplers(): GDArray;
  public set_texture_samplers(_texture_samplers: GDArray): void;
  public get_images(): GDArray;
  public set_images(_images: GDArray): void;
  public get_skins(): GDArray;
  public set_skins(_skins: GDArray): void;
  public get_cameras(): GDArray;
  public set_cameras(_cameras: GDArray): void;
  public get_lights(): GDArray;
  public set_lights(_lights: GDArray): void;
  public get_unique_names(): GDArray;
  public set_unique_names(_unique_names: GDArray): void;
  public get_unique_animation_names(): GDArray;
  public set_unique_animation_names(_unique_animation_names: GDArray): void;
  public get_skeletons(): GDArray;
  public set_skeletons(_skeletons: GDArray): void;
  public get_create_animations(): boolean;
  public set_create_animations(_create_animations: boolean): void;
  public get_import_as_skeleton_bones(): boolean;
  public set_import_as_skeleton_bones(_import_as_skeleton_bones: boolean): void;
  public get_animations(): GDArray;
  public set_animations(_animations: GDArray): void;
  public get_scene_node(_idx: number): Node;
  public get_node_index(_scene_node: Node): number;
  public get_additional_data(_extension_name: String | StringName | string): any;
  public set_additional_data(_extension_name: String | StringName | string, _additional_data: any): void;
  public get_handle_binary_image(): number;
  public set_handle_binary_image(_method: number): void;
  public set_bake_fps(_value: number): void;
  public get_bake_fps(): number;
  public get json(): Dictionary {
    get_json();
  }
  public set json(value): void {
    set_json(value);
  }
  public get major_version(): number {
    get_major_version();
  }
  public set major_version(value): void {
    set_major_version(value);
  }
  public get minor_version(): number {
    get_minor_version();
  }
  public set minor_version(value): void {
    set_minor_version(value);
  }
  public get copyright(): String {
    get_copyright();
  }
  public set copyright(value): void {
    set_copyright(value);
  }
  public get glb_data(): PackedByteArray {
    get_glb_data();
  }
  public set glb_data(value): void {
    set_glb_data(value);
  }
  public get use_named_skin_binds(): boolean {
    get_use_named_skin_binds();
  }
  public set use_named_skin_binds(value): void {
    set_use_named_skin_binds(value);
  }
  public get nodes(): GDArray {
    get_nodes();
  }
  public set nodes(value): void {
    set_nodes(value);
  }
  public get buffers(): GDArray {
    get_buffers();
  }
  public set buffers(value): void {
    set_buffers(value);
  }
  public get buffer_views(): GDArray {
    get_buffer_views();
  }
  public set buffer_views(value): void {
    set_buffer_views(value);
  }
  public get accessors(): GDArray {
    get_accessors();
  }
  public set accessors(value): void {
    set_accessors(value);
  }
  public get meshes(): GDArray {
    get_meshes();
  }
  public set meshes(value): void {
    set_meshes(value);
  }
  public get materials(): GDArray {
    get_materials();
  }
  public set materials(value): void {
    set_materials(value);
  }
  public get scene_name(): String {
    get_scene_name();
  }
  public set scene_name(value): void {
    set_scene_name(value);
  }
  public get base_path(): String {
    get_base_path();
  }
  public set base_path(value): void {
    set_base_path(value);
  }
  public get filename(): String {
    get_filename();
  }
  public set filename(value): void {
    set_filename(value);
  }
  public get root_nodes(): PackedInt32Array {
    get_root_nodes();
  }
  public set root_nodes(value): void {
    set_root_nodes(value);
  }
  public get textures(): GDArray {
    get_textures();
  }
  public set textures(value): void {
    set_textures(value);
  }
  public get texture_samplers(): GDArray {
    get_texture_samplers();
  }
  public set texture_samplers(value): void {
    set_texture_samplers(value);
  }
  public get images(): GDArray {
    get_images();
  }
  public set images(value): void {
    set_images(value);
  }
  public get skins(): GDArray {
    get_skins();
  }
  public set skins(value): void {
    set_skins(value);
  }
  public get cameras(): GDArray {
    get_cameras();
  }
  public set cameras(value): void {
    set_cameras(value);
  }
  public get lights(): GDArray {
    get_lights();
  }
  public set lights(value): void {
    set_lights(value);
  }
  public get unique_names(): GDArray {
    get_unique_names();
  }
  public set unique_names(value): void {
    set_unique_names(value);
  }
  public get unique_animation_names(): GDArray {
    get_unique_animation_names();
  }
  public set unique_animation_names(value): void {
    set_unique_animation_names(value);
  }
  public get skeletons(): GDArray {
    get_skeletons();
  }
  public set skeletons(value): void {
    set_skeletons(value);
  }
  public get create_animations(): boolean {
    get_create_animations();
  }
  public set create_animations(value): void {
    set_create_animations(value);
  }
  public get import_as_skeleton_bones(): boolean {
    get_import_as_skeleton_bones();
  }
  public set import_as_skeleton_bones(value): void {
    set_import_as_skeleton_bones(value);
  }
  public get animations(): GDArray {
    get_animations();
  }
  public set animations(value): void {
    set_animations(value);
  }
  public get handle_binary_image(): number {
    get_handle_binary_image();
  }
  public set handle_binary_image(value): void {
    set_handle_binary_image(value);
  }
  public get bake_fps(): number {
    get_bake_fps();
  }
  public set bake_fps(value): void {
    set_bake_fps(value);
  }
}