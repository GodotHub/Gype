
import { GLTFNode } from "@godot/classes/gltf_node";
import { AnimationPlayer } from "@godot/classes/animation_player";
import { GLTFTexture } from "@godot/classes/gltf_texture";
import { GLTFSkeleton } from "@godot/classes/gltf_skeleton";
import { Node } from "@godot/classes/node";
import { GLTFSkin } from "@godot/classes/gltf_skin";
import { GLTFAccessor } from "@godot/classes/gltf_accessor";
import { Texture2D } from "@godot/classes/texture2d";
import { GLTFAnimation } from "@godot/classes/gltf_animation";
import { GLTFBufferView } from "@godot/classes/gltf_buffer_view";
import { GLTFTextureSampler } from "@godot/classes/gltf_texture_sampler";
import { GLTFCamera } from "@godot/classes/gltf_camera";
import { GLTFLight } from "@godot/classes/gltf_light";
import { Material } from "@godot/classes/material";
import { GLTFMesh } from "@godot/classes/gltf_mesh";
import { Resource } from "@godot/classes/resource";

export declare class GLTFState extends Resource{
  public add_used_extension(_extension_name: String, _required: boolean): void;
  public append_data_to_buffers(_data: PackedByteArray, _deduplication: boolean): number;
  public get_json(): Dictionary;
  public set_json(_json: Dictionary): void;
  public get_major_version(): number;
  public set_major_version(_major_version: number): void;
  public get_minor_version(): number;
  public set_minor_version(_minor_version: number): void;
  public get_copyright(): String;
  public set_copyright(_copyright: String): void;
  public get_glb_data(): PackedByteArray;
  public set_glb_data(_glb_data: PackedByteArray): void;
  public get_use_named_skin_binds(): boolean;
  public set_use_named_skin_binds(_use_named_skin_binds: boolean): void;
  public get_nodes(): Array;
  public set_nodes(_nodes: typedarray::GLTFNode): void;
  public get_buffers(): Array;
  public set_buffers(_buffers: typedarray::PackedByteArray): void;
  public get_buffer_views(): Array;
  public set_buffer_views(_buffer_views: typedarray::GLTFBufferView): void;
  public get_accessors(): Array;
  public set_accessors(_accessors: typedarray::GLTFAccessor): void;
  public get_meshes(): Array;
  public set_meshes(_meshes: typedarray::GLTFMesh): void;
  public get_animation_players_count(_idx: number): number;
  public get_animation_player(_idx: number): AnimationPlayer;
  public get_materials(): Array;
  public set_materials(_materials: typedarray::Material): void;
  public get_scene_name(): String;
  public set_scene_name(_scene_name: String): void;
  public get_base_path(): String;
  public set_base_path(_base_path: String): void;
  public get_filename(): String;
  public set_filename(_filename: String): void;
  public get_root_nodes(): PackedInt32Array;
  public set_root_nodes(_root_nodes: PackedInt32Array): void;
  public get_textures(): Array;
  public set_textures(_textures: typedarray::GLTFTexture): void;
  public get_texture_samplers(): Array;
  public set_texture_samplers(_texture_samplers: typedarray::GLTFTextureSampler): void;
  public get_images(): Array;
  public set_images(_images: typedarray::Texture2D): void;
  public get_skins(): Array;
  public set_skins(_skins: typedarray::GLTFSkin): void;
  public get_cameras(): Array;
  public set_cameras(_cameras: typedarray::GLTFCamera): void;
  public get_lights(): Array;
  public set_lights(_lights: typedarray::GLTFLight): void;
  public get_unique_names(): Array;
  public set_unique_names(_unique_names: typedarray::String): void;
  public get_unique_animation_names(): Array;
  public set_unique_animation_names(_unique_animation_names: typedarray::String): void;
  public get_skeletons(): Array;
  public set_skeletons(_skeletons: typedarray::GLTFSkeleton): void;
  public get_create_animations(): boolean;
  public set_create_animations(_create_animations: boolean): void;
  public get_import_as_skeleton_bones(): boolean;
  public set_import_as_skeleton_bones(_import_as_skeleton_bones: boolean): void;
  public get_animations(): Array;
  public set_animations(_animations: typedarray::GLTFAnimation): void;
  public get_scene_node(_idx: number): Node;
  public get_node_index(_scene_node: Node): number;
  public get_additional_data(_extension_name: StringName): Variant;
  public set_additional_data(_extension_name: StringName, _additional_data: Variant): void;
  public get_handle_binary_image(): number;
  public set_handle_binary_image(_method: number): void;
  public set_bake_fps(_value: number): void;
  public get_bake_fps(): number;
  public get json(): Dictionary {
    get_json();
  }
  public set json(value: Dictionary): void {
    set_json(value);
  }
  public get major_version(): number {
    get_major_version();
  }
  public set major_version(value: number): void {
    set_major_version(value);
  }
  public get minor_version(): number {
    get_minor_version();
  }
  public set minor_version(value: number): void {
    set_minor_version(value);
  }
  public get copyright(): String {
    get_copyright();
  }
  public set copyright(value: String): void {
    set_copyright(value);
  }
  public get glb_data(): PackedByteArray {
    get_glb_data();
  }
  public set glb_data(value: PackedByteArray): void {
    set_glb_data(value);
  }
  public get use_named_skin_binds(): boolean {
    get_use_named_skin_binds();
  }
  public set use_named_skin_binds(value: boolean): void {
    set_use_named_skin_binds(value);
  }
  public get nodes(): Array {
    get_nodes();
  }
  public set nodes(value: Array): void {
    set_nodes(value);
  }
  public get buffers(): Array {
    get_buffers();
  }
  public set buffers(value: Array): void {
    set_buffers(value);
  }
  public get buffer_views(): Array {
    get_buffer_views();
  }
  public set buffer_views(value: Array): void {
    set_buffer_views(value);
  }
  public get accessors(): Array {
    get_accessors();
  }
  public set accessors(value: Array): void {
    set_accessors(value);
  }
  public get meshes(): Array {
    get_meshes();
  }
  public set meshes(value: Array): void {
    set_meshes(value);
  }
  public get materials(): Array {
    get_materials();
  }
  public set materials(value: Array): void {
    set_materials(value);
  }
  public get scene_name(): String {
    get_scene_name();
  }
  public set scene_name(value: String): void {
    set_scene_name(value);
  }
  public get base_path(): String {
    get_base_path();
  }
  public set base_path(value: String): void {
    set_base_path(value);
  }
  public get filename(): String {
    get_filename();
  }
  public set filename(value: String): void {
    set_filename(value);
  }
  public get root_nodes(): PackedInt32Array {
    get_root_nodes();
  }
  public set root_nodes(value: PackedInt32Array): void {
    set_root_nodes(value);
  }
  public get textures(): Array {
    get_textures();
  }
  public set textures(value: Array): void {
    set_textures(value);
  }
  public get texture_samplers(): Array {
    get_texture_samplers();
  }
  public set texture_samplers(value: Array): void {
    set_texture_samplers(value);
  }
  public get images(): Array {
    get_images();
  }
  public set images(value: Array): void {
    set_images(value);
  }
  public get skins(): Array {
    get_skins();
  }
  public set skins(value: Array): void {
    set_skins(value);
  }
  public get cameras(): Array {
    get_cameras();
  }
  public set cameras(value: Array): void {
    set_cameras(value);
  }
  public get lights(): Array {
    get_lights();
  }
  public set lights(value: Array): void {
    set_lights(value);
  }
  public get unique_names(): Array {
    get_unique_names();
  }
  public set unique_names(value: Array): void {
    set_unique_names(value);
  }
  public get unique_animation_names(): Array {
    get_unique_animation_names();
  }
  public set unique_animation_names(value: Array): void {
    set_unique_animation_names(value);
  }
  public get skeletons(): Array {
    get_skeletons();
  }
  public set skeletons(value: Array): void {
    set_skeletons(value);
  }
  public get create_animations(): boolean {
    get_create_animations();
  }
  public set create_animations(value: boolean): void {
    set_create_animations(value);
  }
  public get import_as_skeleton_bones(): boolean {
    get_import_as_skeleton_bones();
  }
  public set import_as_skeleton_bones(value: boolean): void {
    set_import_as_skeleton_bones(value);
  }
  public get animations(): Array {
    get_animations();
  }
  public set animations(value: Array): void {
    set_animations(value);
  }
  public get handle_binary_image(): number {
    get_handle_binary_image();
  }
  public set handle_binary_image(value: number): void {
    set_handle_binary_image(value);
  }
  public get bake_fps(): number {
    get_bake_fps();
  }
  public set bake_fps(value: number): void {
    set_bake_fps(value);
  }
}