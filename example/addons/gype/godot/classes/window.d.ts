
import { StyleBox } from "@godot/classes/style_box";
import { Node } from "@godot/classes/node";
import { Theme } from "@godot/classes/theme";
import { Texture2D } from "@godot/classes/texture2d";
import { Viewport } from "@godot/classes/viewport";
import { Font } from "@godot/classes/font";

export declare class Window extends Viewport{
  public _get_contents_minimum_size(): Vector2;
  public set_title(_title: String | StringName | string): void;
  public get_title(): String;
  public get_window_id(): number;
  public set_initial_position(_initial_position: number): void;
  public get_initial_position(): number;
  public set_current_screen(_index: number): void;
  public get_current_screen(): number;
  public set_position(_position: Vector2i): void;
  public get_position(): Vector2i;
  public move_to_center(): void;
  public set_size(_size: Vector2i): void;
  public get_size(): Vector2i;
  public reset_size(): void;
  public get_position_with_decorations(): Vector2i;
  public get_size_with_decorations(): Vector2i;
  public set_max_size(_max_size: Vector2i): void;
  public get_max_size(): Vector2i;
  public set_min_size(_min_size: Vector2i): void;
  public get_min_size(): Vector2i;
  public set_mode(_mode: number): void;
  public get_mode(): number;
  public set_flag(_flag: number, _enabled: boolean): void;
  public get_flag(_flag: number): boolean;
  public is_maximize_allowed(): boolean;
  public request_attention(): void;
  public move_to_foreground(): void;
  public set_visible(_visible: boolean): void;
  public is_visible(): boolean;
  public hide(): void;
  public show(): void;
  public set_transient(_transient: boolean): void;
  public is_transient(): boolean;
  public set_transient_to_focused(_enable: boolean): void;
  public is_transient_to_focused(): boolean;
  public set_exclusive(_exclusive: boolean): void;
  public is_exclusive(): boolean;
  public set_unparent_when_invisible(_unparent: boolean): void;
  public can_draw(): boolean;
  public has_focus(): boolean;
  public grab_focus(): void;
  public set_ime_active(_active: boolean): void;
  public set_ime_position(_position: Vector2i): void;
  public is_embedded(): boolean;
  public get_contents_minimum_size(): Vector2;
  public set_force_native(_force_native: boolean): void;
  public get_force_native(): boolean;
  public set_content_scale_size(_size: Vector2i): void;
  public get_content_scale_size(): Vector2i;
  public set_content_scale_mode(_mode: number): void;
  public get_content_scale_mode(): number;
  public set_content_scale_aspect(_aspect: number): void;
  public get_content_scale_aspect(): number;
  public set_content_scale_stretch(_stretch: number): void;
  public get_content_scale_stretch(): number;
  public set_keep_title_visible(_title_visible: boolean): void;
  public get_keep_title_visible(): boolean;
  public set_content_scale_factor(_factor: number): void;
  public get_content_scale_factor(): number;
  public set_use_font_oversampling(_enable: boolean): void;
  public is_using_font_oversampling(): boolean;
  public set_mouse_passthrough_polygon(_polygon: PackedVector2Array): void;
  public get_mouse_passthrough_polygon(): PackedVector2Array;
  public set_wrap_controls(_enable: boolean): void;
  public is_wrapping_controls(): boolean;
  public child_controls_changed(): void;
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
  public set_layout_direction(_direction: number): void;
  public get_layout_direction(): number;
  public is_layout_rtl(): boolean;
  public set_auto_translate(_enable: boolean): void;
  public is_auto_translating(): boolean;
  public popup(_rect: Rect2i): void;
  public popup_on_parent(_parent_rect: Rect2i): void;
  public popup_centered(_minsize: Vector2i): void;
  public popup_centered_ratio(_ratio: number): void;
  public popup_centered_clamped(_minsize: Vector2i, _fallback_ratio: number): void;
  public popup_exclusive(_from_node: Node, _rect: Rect2i): void;
  public popup_exclusive_on_parent(_from_node: Node, _parent_rect: Rect2i): void;
  public popup_exclusive_centered(_from_node: Node, _minsize: Vector2i): void;
  public popup_exclusive_centered_ratio(_from_node: Node, _ratio: number): void;
  public popup_exclusive_centered_clamped(_from_node: Node, _minsize: Vector2i, _fallback_ratio: number): void;
  public get mode(): number {
    get_mode();
  }
  public set mode(value): void {
    set_mode(value);
  }
  public get title(): String {
    get_title();
  }
  public set title(value): void {
    set_title(value);
  }
  public get initial_position(): number {
    get_initial_position();
  }
  public set initial_position(value): void {
    set_initial_position(value);
  }
  public get position(): Vector2i {
    get_position();
  }
  public set position(value): void {
    set_position(value);
  }
  public get size(): Vector2i {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
  public get current_screen(): number {
    get_current_screen();
  }
  public set current_screen(value): void {
    set_current_screen(value);
  }
  public get mouse_passthrough_polygon(): PackedVector2Array {
    get_mouse_passthrough_polygon();
  }
  public set mouse_passthrough_polygon(value): void {
    set_mouse_passthrough_polygon(value);
  }
  public get visible(): boolean {
    is_visible();
  }
  public set visible(value): void {
    set_visible(value);
  }
  public get wrap_controls(): boolean {
    is_wrapping_controls();
  }
  public set wrap_controls(value): void {
    set_wrap_controls(value);
  }
  public get transient(): boolean {
    is_transient();
  }
  public set transient(value): void {
    set_transient(value);
  }
  public get transient_to_focused(): boolean {
    is_transient_to_focused();
  }
  public set transient_to_focused(value): void {
    set_transient_to_focused(value);
  }
  public get exclusive(): boolean {
    is_exclusive();
  }
  public set exclusive(value): void {
    set_exclusive(value);
  }
  public get unresizable(): boolean {
    get_flag();
  }
  public set unresizable(value): void {
    set_flag(value);
  }
  public get borderless(): boolean {
    get_flag();
  }
  public set borderless(value): void {
    set_flag(value);
  }
  public get always_on_top(): boolean {
    get_flag();
  }
  public set always_on_top(value): void {
    set_flag(value);
  }
  public get transparent(): boolean {
    get_flag();
  }
  public set transparent(value): void {
    set_flag(value);
  }
  public get unfocusable(): boolean {
    get_flag();
  }
  public set unfocusable(value): void {
    set_flag(value);
  }
  public get popup_window(): boolean {
    get_flag();
  }
  public set popup_window(value): void {
    set_flag(value);
  }
  public get extend_to_title(): boolean {
    get_flag();
  }
  public set extend_to_title(value): void {
    set_flag(value);
  }
  public get mouse_passthrough(): boolean {
    get_flag();
  }
  public set mouse_passthrough(value): void {
    set_flag(value);
  }
  public get force_native(): boolean {
    get_force_native();
  }
  public set force_native(value): void {
    set_force_native(value);
  }
  public get min_size(): Vector2i {
    get_min_size();
  }
  public set min_size(value): void {
    set_min_size(value);
  }
  public get max_size(): Vector2i {
    get_max_size();
  }
  public set max_size(value): void {
    set_max_size(value);
  }
  public get keep_title_visible(): boolean {
    get_keep_title_visible();
  }
  public set keep_title_visible(value): void {
    set_keep_title_visible(value);
  }
  public get content_scale_size(): Vector2i {
    get_content_scale_size();
  }
  public set content_scale_size(value): void {
    set_content_scale_size(value);
  }
  public get content_scale_mode(): number {
    get_content_scale_mode();
  }
  public set content_scale_mode(value): void {
    set_content_scale_mode(value);
  }
  public get content_scale_aspect(): number {
    get_content_scale_aspect();
  }
  public set content_scale_aspect(value): void {
    set_content_scale_aspect(value);
  }
  public get content_scale_stretch(): number {
    get_content_scale_stretch();
  }
  public set content_scale_stretch(value): void {
    set_content_scale_stretch(value);
  }
  public get content_scale_factor(): number {
    get_content_scale_factor();
  }
  public set content_scale_factor(value): void {
    set_content_scale_factor(value);
  }
  public get auto_translate(): boolean {
    is_auto_translating();
  }
  public set auto_translate(value): void {
    set_auto_translate(value);
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
  static Mode = {
    MODE_WINDOWED = 0,
    MODE_MINIMIZED = 1,
    MODE_MAXIMIZED = 2,
    MODE_FULLSCREEN = 3,
    MODE_EXCLUSIVE_FULLSCREEN = 4,
  }
  static Flags = {
    FLAG_RESIZE_DISABLED = 0,
    FLAG_BORDERLESS = 1,
    FLAG_ALWAYS_ON_TOP = 2,
    FLAG_TRANSPARENT = 3,
    FLAG_NO_FOCUS = 4,
    FLAG_POPUP = 5,
    FLAG_EXTEND_TO_TITLE = 6,
    FLAG_MOUSE_PASSTHROUGH = 7,
    FLAG_MAX = 8,
  }
  static ContentScaleMode = {
    CONTENT_SCALE_MODE_DISABLED = 0,
    CONTENT_SCALE_MODE_CANVAS_ITEMS = 1,
    CONTENT_SCALE_MODE_VIEWPORT = 2,
  }
  static ContentScaleAspect = {
    CONTENT_SCALE_ASPECT_IGNORE = 0,
    CONTENT_SCALE_ASPECT_KEEP = 1,
    CONTENT_SCALE_ASPECT_KEEP_WIDTH = 2,
    CONTENT_SCALE_ASPECT_KEEP_HEIGHT = 3,
    CONTENT_SCALE_ASPECT_EXPAND = 4,
  }
  static ContentScaleStretch = {
    CONTENT_SCALE_STRETCH_FRACTIONAL = 0,
    CONTENT_SCALE_STRETCH_INTEGER = 1,
  }
  static LayoutDirection = {
    LAYOUT_DIRECTION_INHERITED = 0,
    LAYOUT_DIRECTION_LOCALE = 1,
    LAYOUT_DIRECTION_LTR = 2,
    LAYOUT_DIRECTION_RTL = 3,
  }
  static WindowInitialPosition = {
    WINDOW_INITIAL_POSITION_ABSOLUTE = 0,
    WINDOW_INITIAL_POSITION_CENTER_PRIMARY_SCREEN = 1,
    WINDOW_INITIAL_POSITION_CENTER_MAIN_WINDOW_SCREEN = 2,
    WINDOW_INITIAL_POSITION_CENTER_OTHER_SCREEN = 3,
    WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_MOUSE_FOCUS = 4,
    WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_KEYBOARD_FOCUS = 5,
  }
  public get window_input(): Signal;
  public get files_dropped(): Signal;
  public get mouse_entered(): Signal;
  public get mouse_exited(): Signal;
  public get focus_entered(): Signal;
  public get focus_exited(): Signal;
  public get close_requested(): Signal;
  public get go_back_requested(): Signal;
  public get visibility_changed(): Signal;
  public get about_to_popup(): Signal;
  public get theme_changed(): Signal;
  public get dpi_changed(): Signal;
  public get titlebar_changed(): Signal;
}