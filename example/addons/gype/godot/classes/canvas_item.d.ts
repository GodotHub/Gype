
import { Font } from "@godot/classes/font";
import { World2D } from "@godot/classes/world2d";
import { Texture2D } from "@godot/classes/texture2d";
import { StyleBox } from "@godot/classes/style_box";
import { CanvasLayer } from "@godot/classes/canvas_layer";
import { InputEvent } from "@godot/classes/input_event";
import { Material } from "@godot/classes/material";
import { Mesh } from "@godot/classes/mesh";
import { Node } from "@godot/classes/node";
import { MultiMesh } from "@godot/classes/multi_mesh";

export declare class CanvasItem extends Node{
  public _draw(): void;
  public get_canvas_item(): RID;
  public set_visible(_visible: boolean): void;
  public is_visible(): boolean;
  public is_visible_in_tree(): boolean;
  public show(): void;
  public hide(): void;
  public queue_redraw(): void;
  public move_to_front(): void;
  public set_as_top_level(_enable: boolean): void;
  public is_set_as_top_level(): boolean;
  public set_light_mask(_light_mask: number): void;
  public get_light_mask(): number;
  public set_modulate(_modulate: Color): void;
  public get_modulate(): Color;
  public set_self_modulate(_self_modulate: Color): void;
  public get_self_modulate(): Color;
  public set_z_index(_z_index: number): void;
  public get_z_index(): number;
  public set_z_as_relative(_enable: boolean): void;
  public is_z_relative(): boolean;
  public set_y_sort_enabled(_enabled: boolean): void;
  public is_y_sort_enabled(): boolean;
  public set_draw_behind_parent(_enable: boolean): void;
  public is_draw_behind_parent_enabled(): boolean;
  public draw_line(_from: Vector2, _to: Vector2, _color: Color, _width: number, _antialiased: boolean): void;
  public draw_dashed_line(_from: Vector2, _to: Vector2, _color: Color, _width: number, _dash: number, _aligned: boolean, _antialiased: boolean): void;
  public draw_polyline(_points: PackedVector2Array, _color: Color, _width: number, _antialiased: boolean): void;
  public draw_polyline_colors(_points: PackedVector2Array, _colors: PackedColorArray, _width: number, _antialiased: boolean): void;
  public draw_arc(_center: Vector2, _radius: number, _start_angle: number, _end_angle: number, _point_count: number, _color: Color, _width: number, _antialiased: boolean): void;
  public draw_multiline(_points: PackedVector2Array, _color: Color, _width: number, _antialiased: boolean): void;
  public draw_multiline_colors(_points: PackedVector2Array, _colors: PackedColorArray, _width: number, _antialiased: boolean): void;
  public draw_rect(_rect: Rect2, _color: Color, _filled: boolean, _width: number, _antialiased: boolean): void;
  public draw_circle(_position: Vector2, _radius: number, _color: Color, _filled: boolean, _width: number, _antialiased: boolean): void;
  public draw_texture(_texture: Texture2D, _position: Vector2, _modulate: Color): void;
  public draw_texture_rect(_texture: Texture2D, _rect: Rect2, _tile: boolean, _modulate: Color, _transpose: boolean): void;
  public draw_texture_rect_region(_texture: Texture2D, _rect: Rect2, _src_rect: Rect2, _modulate: Color, _transpose: boolean, _clip_uv: boolean): void;
  public draw_msdf_texture_rect_region(_texture: Texture2D, _rect: Rect2, _src_rect: Rect2, _modulate: Color, _outline: number, _pixel_range: number, _scale: number): void;
  public draw_lcd_texture_rect_region(_texture: Texture2D, _rect: Rect2, _src_rect: Rect2, _modulate: Color): void;
  public draw_style_box(_style_box: StyleBox, _rect: Rect2): void;
  public draw_primitive(_points: PackedVector2Array, _colors: PackedColorArray, _uvs: PackedVector2Array, _texture: Texture2D): void;
  public draw_polygon(_points: PackedVector2Array, _colors: PackedColorArray, _uvs: PackedVector2Array, _texture: Texture2D): void;
  public draw_colored_polygon(_points: PackedVector2Array, _color: Color, _uvs: PackedVector2Array, _texture: Texture2D): void;
  public draw_string(_font: Font, _pos: Vector2, _text: String | StringName | string, _alignment: number, _width: number, _font_size: number, _modulate: Color, _justification_flags: number, _direction: number, _orientation: number): void;
  public draw_multiline_string(_font: Font, _pos: Vector2, _text: String | StringName | string, _alignment: number, _width: number, _font_size: number, _max_lines: number, _modulate: Color, _brk_flags: number, _justification_flags: number, _direction: number, _orientation: number): void;
  public draw_string_outline(_font: Font, _pos: Vector2, _text: String | StringName | string, _alignment: number, _width: number, _font_size: number, _size: number, _modulate: Color, _justification_flags: number, _direction: number, _orientation: number): void;
  public draw_multiline_string_outline(_font: Font, _pos: Vector2, _text: String | StringName | string, _alignment: number, _width: number, _font_size: number, _max_lines: number, _size: number, _modulate: Color, _brk_flags: number, _justification_flags: number, _direction: number, _orientation: number): void;
  public draw_char(_font: Font, _pos: Vector2, _char: String | StringName | string, _font_size: number, _modulate: Color): void;
  public draw_char_outline(_font: Font, _pos: Vector2, _char: String | StringName | string, _font_size: number, _size: number, _modulate: Color): void;
  public draw_mesh(_mesh: Mesh, _texture: Texture2D, _transform: Transform2D, _modulate: Color): void;
  public draw_multimesh(_multimesh: MultiMesh, _texture: Texture2D): void;
  public draw_set_transform(_position: Vector2, _rotation: number, _scale: Vector2): void;
  public draw_set_transform_matrix(_xform: Transform2D): void;
  public draw_animation_slice(_animation_length: number, _slice_begin: number, _slice_end: number, _offset: number): void;
  public draw_end_animation(): void;
  public get_transform(): Transform2D;
  public get_global_transform(): Transform2D;
  public get_global_transform_with_canvas(): Transform2D;
  public get_viewport_transform(): Transform2D;
  public get_viewport_rect(): Rect2;
  public get_canvas_transform(): Transform2D;
  public get_screen_transform(): Transform2D;
  public get_local_mouse_position(): Vector2;
  public get_global_mouse_position(): Vector2;
  public get_canvas(): RID;
  public get_canvas_layer_node(): CanvasLayer;
  public get_world_2d(): World2D;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public set_use_parent_material(_enable: boolean): void;
  public get_use_parent_material(): boolean;
  public set_notify_local_transform(_enable: boolean): void;
  public is_local_transform_notification_enabled(): boolean;
  public set_notify_transform(_enable: boolean): void;
  public is_transform_notification_enabled(): boolean;
  public force_update_transform(): void;
  public make_canvas_position_local(_screen_point: Vector2): Vector2;
  public make_input_local(_event: InputEvent): InputEvent;
  public set_visibility_layer(_layer: number): void;
  public get_visibility_layer(): number;
  public set_visibility_layer_bit(_layer: number, _enabled: boolean): void;
  public get_visibility_layer_bit(_layer: number): boolean;
  public set_texture_filter(_mode: number): void;
  public get_texture_filter(): number;
  public set_texture_repeat(_mode: number): void;
  public get_texture_repeat(): number;
  public set_clip_children_mode(_mode: number): void;
  public get_clip_children_mode(): number;
  public get visible(): boolean {
    is_visible();
  }
  public set visible(value): void {
    set_visible(value);
  }
  public get modulate(): Color {
    get_modulate();
  }
  public set modulate(value): void {
    set_modulate(value);
  }
  public get self_modulate(): Color {
    get_self_modulate();
  }
  public set self_modulate(value): void {
    set_self_modulate(value);
  }
  public get show_behind_parent(): boolean {
    is_draw_behind_parent_enabled();
  }
  public set show_behind_parent(value): void {
    set_draw_behind_parent(value);
  }
  public get top_level(): boolean {
    is_set_as_top_level();
  }
  public set top_level(value): void {
    set_as_top_level(value);
  }
  public get clip_children(): number {
    get_clip_children_mode();
  }
  public set clip_children(value): void {
    set_clip_children_mode(value);
  }
  public get light_mask(): number {
    get_light_mask();
  }
  public set light_mask(value): void {
    set_light_mask(value);
  }
  public get visibility_layer(): number {
    get_visibility_layer();
  }
  public set visibility_layer(value): void {
    set_visibility_layer(value);
  }
  public get z_index(): number {
    get_z_index();
  }
  public set z_index(value): void {
    set_z_index(value);
  }
  public get z_as_relative(): boolean {
    is_z_relative();
  }
  public set z_as_relative(value): void {
    set_z_as_relative(value);
  }
  public get y_sort_enabled(): boolean {
    is_y_sort_enabled();
  }
  public set y_sort_enabled(value): void {
    set_y_sort_enabled(value);
  }
  public get texture_filter(): number {
    get_texture_filter();
  }
  public set texture_filter(value): void {
    set_texture_filter(value);
  }
  public get texture_repeat(): number {
    get_texture_repeat();
  }
  public set texture_repeat(value): void {
    set_texture_repeat(value);
  }
  public get material(): CanvasItemMaterial {
    get_material();
  }
  public set material(value): void {
    set_material(value);
  }
  public get use_parent_material(): boolean {
    get_use_parent_material();
  }
  public set use_parent_material(value): void {
    set_use_parent_material(value);
  }
  static TextureFilter = {
    TEXTURE_FILTER_PARENT_NODE = 0,
    TEXTURE_FILTER_NEAREST = 1,
    TEXTURE_FILTER_LINEAR = 2,
    TEXTURE_FILTER_NEAREST_WITH_MIPMAPS = 3,
    TEXTURE_FILTER_LINEAR_WITH_MIPMAPS = 4,
    TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC = 5,
    TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC = 6,
    TEXTURE_FILTER_MAX = 7,
  }
  static TextureRepeat = {
    TEXTURE_REPEAT_PARENT_NODE = 0,
    TEXTURE_REPEAT_DISABLED = 1,
    TEXTURE_REPEAT_ENABLED = 2,
    TEXTURE_REPEAT_MIRROR = 3,
    TEXTURE_REPEAT_MAX = 4,
  }
  static ClipChildrenMode = {
    CLIP_CHILDREN_DISABLED = 0,
    CLIP_CHILDREN_ONLY = 1,
    CLIP_CHILDREN_AND_DRAW = 2,
    CLIP_CHILDREN_MAX = 3,
  }
  public get draw(): Signal;
  public get visibility_changed(): Signal;
  public get hidden(): Signal;
  public get item_rect_changed(): Signal;
}