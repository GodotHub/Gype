
import { InputEvent } from "@godot/classes/input_event";
import { Texture2D } from "@godot/classes/texture2d";
import { Theme } from "@godot/classes/theme";
import { GodotObject } from "@godot/classes/godot_object";
import { StyleBox } from "@godot/classes/style_box";
import { CanvasItem } from "@godot/classes/canvas_item";
import { Node } from "@godot/classes/node";
import { Font } from "@godot/classes/font";

export declare class Control extends CanvasItem{
  public _has_point(_point: Vector2): boolean;
  public _structured_text_parser(_args: GDArray, _text: String | StringName | string): GDArray;
  public _get_minimum_size(): Vector2;
  public _get_tooltip(_at_position: Vector2): String;
  public _get_drag_data(_at_position: Vector2): any;
  public _can_drop_data(_at_position: Vector2, _data: any): boolean;
  public _drop_data(_at_position: Vector2, _data: any): void;
  public _make_custom_tooltip(_for_text: String | StringName | string): GodotObject;
  public _gui_input(_event: InputEvent): void;
  public accept_event(): void;
  public get_minimum_size(): Vector2;
  public get_combined_minimum_size(): Vector2;
  public set_anchors_preset(_preset: number, _keep_offsets: boolean): void;
  public set_offsets_preset(_preset: number, _resize_mode: number, _margin: number): void;
  public set_anchors_and_offsets_preset(_preset: number, _resize_mode: number, _margin: number): void;
  public set_anchor(_side: number, _anchor: number, _keep_offset: boolean, _push_opposite_anchor: boolean): void;
  public get_anchor(_side: number): number;
  public set_offset(_side: number, _offset: number): void;
  public get_offset(_offset: number): number;
  public set_anchor_and_offset(_side: number, _anchor: number, _offset: number, _push_opposite_anchor: boolean): void;
  public set_begin(_position: Vector2): void;
  public set_end(_position: Vector2): void;
  public set_position(_position: Vector2, _keep_offsets: boolean): void;
  public set_size(_size: Vector2, _keep_offsets: boolean): void;
  public reset_size(): void;
  public set_custom_minimum_size(_size: Vector2): void;
  public set_global_position(_position: Vector2, _keep_offsets: boolean): void;
  public set_rotation(_radians: number): void;
  public set_rotation_degrees(_degrees: number): void;
  public set_scale(_scale: Vector2): void;
  public set_pivot_offset(_pivot_offset: Vector2): void;
  public get_begin(): Vector2;
  public get_end(): Vector2;
  public get_position(): Vector2;
  public get_size(): Vector2;
  public get_rotation(): number;
  public get_rotation_degrees(): number;
  public get_scale(): Vector2;
  public get_pivot_offset(): Vector2;
  public get_custom_minimum_size(): Vector2;
  public get_parent_area_size(): Vector2;
  public get_global_position(): Vector2;
  public get_screen_position(): Vector2;
  public get_rect(): Rect2;
  public get_global_rect(): Rect2;
  public set_focus_mode(_mode: number): void;
  public get_focus_mode(): number;
  public has_focus(): boolean;
  public grab_focus(): void;
  public release_focus(): void;
  public find_prev_valid_focus(): Control;
  public find_next_valid_focus(): Control;
  public find_valid_focus_neighbor(_side: number): Control;
  public set_h_size_flags(_flags: number): void;
  public get_h_size_flags(): number;
  public set_stretch_ratio(_ratio: number): void;
  public get_stretch_ratio(): number;
  public set_v_size_flags(_flags: number): void;
  public get_v_size_flags(): number;
  public set_theme(_theme: Theme): void;
  public get_theme(): Theme;
  public set_theme_type_variation(_theme_type: String | StringName | string): void;
  public get_theme_type_variation(): StringName;
  public begin_bulk_theme_override(): void;
  public end_bulk_theme_override(): void;
  public add_theme_icon_override(_name: String | StringName | string, _texture: Texture2D): void;
  public add_theme_stylebox_override(_name: String | StringName | string, _stylebox: StyleBox): void;
  public add_theme_font_override(_name: String | StringName | string, _font: Font): void;
  public add_theme_font_size_override(_name: String | StringName | string, _font_size: number): void;
  public add_theme_color_override(_name: String | StringName | string, _color: Color): void;
  public add_theme_constant_override(_name: String | StringName | string, _constant: number): void;
  public remove_theme_icon_override(_name: String | StringName | string): void;
  public remove_theme_stylebox_override(_name: String | StringName | string): void;
  public remove_theme_font_override(_name: String | StringName | string): void;
  public remove_theme_font_size_override(_name: String | StringName | string): void;
  public remove_theme_color_override(_name: String | StringName | string): void;
  public remove_theme_constant_override(_name: String | StringName | string): void;
  public get_theme_icon(_name: String | StringName | string, _theme_type: String | StringName | string): Texture2D;
  public get_theme_stylebox(_name: String | StringName | string, _theme_type: String | StringName | string): StyleBox;
  public get_theme_font(_name: String | StringName | string, _theme_type: String | StringName | string): Font;
  public get_theme_font_size(_name: String | StringName | string, _theme_type: String | StringName | string): number;
  public get_theme_color(_name: String | StringName | string, _theme_type: String | StringName | string): Color;
  public get_theme_constant(_name: String | StringName | string, _theme_type: String | StringName | string): number;
  public has_theme_icon_override(_name: String | StringName | string): boolean;
  public has_theme_stylebox_override(_name: String | StringName | string): boolean;
  public has_theme_font_override(_name: String | StringName | string): boolean;
  public has_theme_font_size_override(_name: String | StringName | string): boolean;
  public has_theme_color_override(_name: String | StringName | string): boolean;
  public has_theme_constant_override(_name: String | StringName | string): boolean;
  public has_theme_icon(_name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public has_theme_stylebox(_name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public has_theme_font(_name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public has_theme_font_size(_name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public has_theme_color(_name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public has_theme_constant(_name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public get_theme_default_base_scale(): number;
  public get_theme_default_font(): Font;
  public get_theme_default_font_size(): number;
  public get_parent_control(): Control;
  public set_h_grow_direction(_direction: number): void;
  public get_h_grow_direction(): number;
  public set_v_grow_direction(_direction: number): void;
  public get_v_grow_direction(): number;
  public set_tooltip_text(_hint: String | StringName | string): void;
  public get_tooltip_text(): String;
  public get_tooltip(_at_position: Vector2): String;
  public set_default_cursor_shape(_shape: number): void;
  public get_default_cursor_shape(): number;
  public get_cursor_shape(_position: Vector2): number;
  public set_focus_neighbor(_side: number, _neighbor: NodePath): void;
  public get_focus_neighbor(_side: number): NodePath;
  public set_focus_next(_next: NodePath): void;
  public get_focus_next(): NodePath;
  public set_focus_previous(_previous: NodePath): void;
  public get_focus_previous(): NodePath;
  public force_drag(_data: any, _preview: Control): void;
  public set_mouse_filter(_filter: number): void;
  public get_mouse_filter(): number;
  public set_force_pass_scroll_events(_force_pass_scroll_events: boolean): void;
  public is_force_pass_scroll_events(): boolean;
  public set_clip_contents(_enable: boolean): void;
  public is_clipping_contents(): boolean;
  public grab_click_focus(): void;
  public set_drag_forwarding(_drag_func: Callable, _can_drop_func: Callable, _drop_func: Callable): void;
  public set_drag_preview(_control: Control): void;
  public is_drag_successful(): boolean;
  public warp_mouse(_position: Vector2): void;
  public set_shortcut_context(_node: Node): void;
  public get_shortcut_context(): Node;
  public update_minimum_size(): void;
  public set_layout_direction(_direction: number): void;
  public get_layout_direction(): number;
  public is_layout_rtl(): boolean;
  public set_auto_translate(_enable: boolean): void;
  public is_auto_translating(): boolean;
  public set_localize_numeral_system(_enable: boolean): void;
  public is_localizing_numeral_system(): boolean;
  public get clip_contents(): boolean {
    is_clipping_contents();
  }
  public set clip_contents(value): void {
    set_clip_contents(value);
  }
  public get custom_minimum_size(): Vector2 {
    get_custom_minimum_size();
  }
  public set custom_minimum_size(value): void {
    set_custom_minimum_size(value);
  }
  public get layout_direction(): number {
    get_layout_direction();
  }
  public set layout_direction(value): void {
    set_layout_direction(value);
  }
  public get layout_mode(): number {
    _get_layout_mode();
  }
  public set layout_mode(value): void {
    _set_layout_mode(value);
  }
  public get anchors_preset(): number {
    _get_anchors_layout_preset();
  }
  public set anchors_preset(value): void {
    _set_anchors_layout_preset(value);
  }
  public get anchor_left(): number {
    get_anchor();
  }
  public set anchor_left(value): void {
    _set_anchor(value);
  }
  public get anchor_top(): number {
    get_anchor();
  }
  public set anchor_top(value): void {
    _set_anchor(value);
  }
  public get anchor_right(): number {
    get_anchor();
  }
  public set anchor_right(value): void {
    _set_anchor(value);
  }
  public get anchor_bottom(): number {
    get_anchor();
  }
  public set anchor_bottom(value): void {
    _set_anchor(value);
  }
  public get offset_left(): number {
    get_offset();
  }
  public set offset_left(value): void {
    set_offset(value);
  }
  public get offset_top(): number {
    get_offset();
  }
  public set offset_top(value): void {
    set_offset(value);
  }
  public get offset_right(): number {
    get_offset();
  }
  public set offset_right(value): void {
    set_offset(value);
  }
  public get offset_bottom(): number {
    get_offset();
  }
  public set offset_bottom(value): void {
    set_offset(value);
  }
  public get grow_horizontal(): number {
    get_h_grow_direction();
  }
  public set grow_horizontal(value): void {
    set_h_grow_direction(value);
  }
  public get grow_vertical(): number {
    get_v_grow_direction();
  }
  public set grow_vertical(value): void {
    set_v_grow_direction(value);
  }
  public get size(): Vector2 {
    get_size();
  }
  public set size(value): void {
    _set_size(value);
  }
  public get position(): Vector2 {
    get_position();
  }
  public set position(value): void {
    _set_position(value);
  }
  public get global_position(): Vector2 {
    get_global_position();
  }
  public set global_position(value): void {
    _set_global_position(value);
  }
  public get rotation(): number {
    get_rotation();
  }
  public set rotation(value): void {
    set_rotation(value);
  }
  public get rotation_degrees(): number {
    get_rotation_degrees();
  }
  public set rotation_degrees(value): void {
    set_rotation_degrees(value);
  }
  public get scale(): Vector2 {
    get_scale();
  }
  public set scale(value): void {
    set_scale(value);
  }
  public get pivot_offset(): Vector2 {
    get_pivot_offset();
  }
  public set pivot_offset(value): void {
    set_pivot_offset(value);
  }
  public get size_flags_horizontal(): number {
    get_h_size_flags();
  }
  public set size_flags_horizontal(value): void {
    set_h_size_flags(value);
  }
  public get size_flags_vertical(): number {
    get_v_size_flags();
  }
  public set size_flags_vertical(value): void {
    set_v_size_flags(value);
  }
  public get size_flags_stretch_ratio(): number {
    get_stretch_ratio();
  }
  public set size_flags_stretch_ratio(value): void {
    set_stretch_ratio(value);
  }
  public get localize_numeral_system(): boolean {
    is_localizing_numeral_system();
  }
  public set localize_numeral_system(value): void {
    set_localize_numeral_system(value);
  }
  public get auto_translate(): boolean {
    is_auto_translating();
  }
  public set auto_translate(value): void {
    set_auto_translate(value);
  }
  public get tooltip_text(): String {
    get_tooltip_text();
  }
  public set tooltip_text(value): void {
    set_tooltip_text(value);
  }
  public get focus_neighbor_left(): NodePath {
    get_focus_neighbor();
  }
  public set focus_neighbor_left(value): void {
    set_focus_neighbor(value);
  }
  public get focus_neighbor_top(): NodePath {
    get_focus_neighbor();
  }
  public set focus_neighbor_top(value): void {
    set_focus_neighbor(value);
  }
  public get focus_neighbor_right(): NodePath {
    get_focus_neighbor();
  }
  public set focus_neighbor_right(value): void {
    set_focus_neighbor(value);
  }
  public get focus_neighbor_bottom(): NodePath {
    get_focus_neighbor();
  }
  public set focus_neighbor_bottom(value): void {
    set_focus_neighbor(value);
  }
  public get focus_next(): NodePath {
    get_focus_next();
  }
  public set focus_next(value): void {
    set_focus_next(value);
  }
  public get focus_previous(): NodePath {
    get_focus_previous();
  }
  public set focus_previous(value): void {
    set_focus_previous(value);
  }
  public get focus_mode(): number {
    get_focus_mode();
  }
  public set focus_mode(value): void {
    set_focus_mode(value);
  }
  public get mouse_filter(): number {
    get_mouse_filter();
  }
  public set mouse_filter(value): void {
    set_mouse_filter(value);
  }
  public get mouse_force_pass_scroll_events(): boolean {
    is_force_pass_scroll_events();
  }
  public set mouse_force_pass_scroll_events(value): void {
    set_force_pass_scroll_events(value);
  }
  public get mouse_default_cursor_shape(): number {
    get_default_cursor_shape();
  }
  public set mouse_default_cursor_shape(value): void {
    set_default_cursor_shape(value);
  }
  public get shortcut_context(): GodotObject {
    get_shortcut_context();
  }
  public set shortcut_context(value): void {
    set_shortcut_context(value);
  }
  public get theme(): Theme {
    get_theme();
  }
  public set theme(value): void {
    set_theme(value);
  }
  public get theme_type_variation(): String {
    get_theme_type_variation();
  }
  public set theme_type_variation(value): void {
    set_theme_type_variation(value);
  }
  static FocusMode = {
    FOCUS_NONE = 0,
    FOCUS_CLICK = 1,
    FOCUS_ALL = 2,
  }
  static CursorShape = {
    CURSOR_ARROW = 0,
    CURSOR_IBEAM = 1,
    CURSOR_POINTING_HAND = 2,
    CURSOR_CROSS = 3,
    CURSOR_WAIT = 4,
    CURSOR_BUSY = 5,
    CURSOR_DRAG = 6,
    CURSOR_CAN_DROP = 7,
    CURSOR_FORBIDDEN = 8,
    CURSOR_VSIZE = 9,
    CURSOR_HSIZE = 10,
    CURSOR_BDIAGSIZE = 11,
    CURSOR_FDIAGSIZE = 12,
    CURSOR_MOVE = 13,
    CURSOR_VSPLIT = 14,
    CURSOR_HSPLIT = 15,
    CURSOR_HELP = 16,
  }
  static LayoutPreset = {
    PRESET_TOP_LEFT = 0,
    PRESET_TOP_RIGHT = 1,
    PRESET_BOTTOM_LEFT = 2,
    PRESET_BOTTOM_RIGHT = 3,
    PRESET_CENTER_LEFT = 4,
    PRESET_CENTER_TOP = 5,
    PRESET_CENTER_RIGHT = 6,
    PRESET_CENTER_BOTTOM = 7,
    PRESET_CENTER = 8,
    PRESET_LEFT_WIDE = 9,
    PRESET_TOP_WIDE = 10,
    PRESET_RIGHT_WIDE = 11,
    PRESET_BOTTOM_WIDE = 12,
    PRESET_VCENTER_WIDE = 13,
    PRESET_HCENTER_WIDE = 14,
    PRESET_FULL_RECT = 15,
  }
  static LayoutPresetMode = {
    PRESET_MODE_MINSIZE = 0,
    PRESET_MODE_KEEP_WIDTH = 1,
    PRESET_MODE_KEEP_HEIGHT = 2,
    PRESET_MODE_KEEP_SIZE = 3,
  }
  static SizeFlags = {
    SIZE_SHRINK_BEGIN = 0,
    SIZE_FILL = 1,
    SIZE_EXPAND = 2,
    SIZE_EXPAND_FILL = 3,
    SIZE_SHRINK_CENTER = 4,
    SIZE_SHRINK_END = 8,
  }
  static MouseFilter = {
    MOUSE_FILTER_STOP = 0,
    MOUSE_FILTER_PASS = 1,
    MOUSE_FILTER_IGNORE = 2,
  }
  static GrowDirection = {
    GROW_DIRECTION_BEGIN = 0,
    GROW_DIRECTION_END = 1,
    GROW_DIRECTION_BOTH = 2,
  }
  static Anchor = {
    ANCHOR_BEGIN = 0,
    ANCHOR_END = 1,
  }
  static LayoutDirection = {
    LAYOUT_DIRECTION_INHERITED = 0,
    LAYOUT_DIRECTION_LOCALE = 1,
    LAYOUT_DIRECTION_LTR = 2,
    LAYOUT_DIRECTION_RTL = 3,
  }
  static TextDirection = {
    TEXT_DIRECTION_INHERITED = 3,
    TEXT_DIRECTION_AUTO = 0,
    TEXT_DIRECTION_LTR = 1,
    TEXT_DIRECTION_RTL = 2,
  }
  public get resized(): Signal;
  public get gui_input(): Signal;
  public get mouse_entered(): Signal;
  public get mouse_exited(): Signal;
  public get focus_entered(): Signal;
  public get focus_exited(): Signal;
  public get size_flags_changed(): Signal;
  public get minimum_size_changed(): Signal;
  public get theme_changed(): Signal;
}