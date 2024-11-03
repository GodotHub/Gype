
import { Viewport } from "@godot/classes/viewport";
import { StyleBox } from "@godot/classes/style_box";
import { Node } from "@godot/classes/node";
import { Font } from "@godot/classes/font";
import { Theme } from "@godot/classes/theme";
import { Texture2D } from "@godot/classes/texture2d";
export declare class Window extends Viewport{
  public _get_contents_minimum_size(): Vector2;
  public set_title(_title: GDString | StringName | string): void;
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
  public set_theme_type_variation(_theme_type: GDString | StringName | string): void;
  public get_theme_type_variation(): StringName;
  public begin_bulk_theme_override(): void;
  public end_bulk_theme_override(): void;
  public add_theme_icon_override(_name: GDString | StringName | string, _texture: Texture2D): void;
  public add_theme_stylebox_override(_name: GDString | StringName | string, _stylebox: StyleBox): void;
  public add_theme_font_override(_name: GDString | StringName | string, _font: Font): void;
  public add_theme_font_size_override(_name: GDString | StringName | string, _font_size: number): void;
  public add_theme_color_override(_name: GDString | StringName | string, _color: Color): void;
  public add_theme_constant_override(_name: GDString | StringName | string, _constant: number): void;
  public remove_theme_icon_override(_name: GDString | StringName | string): void;
  public remove_theme_stylebox_override(_name: GDString | StringName | string): void;
  public remove_theme_font_override(_name: GDString | StringName | string): void;
  public remove_theme_font_size_override(_name: GDString | StringName | string): void;
  public remove_theme_color_override(_name: GDString | StringName | string): void;
  public remove_theme_constant_override(_name: GDString | StringName | string): void;
  public get_theme_icon(_name: GDString | StringName | string, _theme_type: GDString | StringName | string = ""): Texture2D;
  public get_theme_stylebox(_name: GDString | StringName | string, _theme_type: GDString | StringName | string = ""): StyleBox;
  public get_theme_font(_name: GDString | StringName | string, _theme_type: GDString | StringName | string = ""): Font;
  public get_theme_font_size(_name: GDString | StringName | string, _theme_type: GDString | StringName | string = ""): number;
  public get_theme_color(_name: GDString | StringName | string, _theme_type: GDString | StringName | string = ""): Color;
  public get_theme_constant(_name: GDString | StringName | string, _theme_type: GDString | StringName | string = ""): number;
  public has_theme_icon_override(_name: GDString | StringName | string): boolean;
  public has_theme_stylebox_override(_name: GDString | StringName | string): boolean;
  public has_theme_font_override(_name: GDString | StringName | string): boolean;
  public has_theme_font_size_override(_name: GDString | StringName | string): boolean;
  public has_theme_color_override(_name: GDString | StringName | string): boolean;
  public has_theme_constant_override(_name: GDString | StringName | string): boolean;
  public has_theme_icon(_name: GDString | StringName | string, _theme_type: GDString | StringName | string = ""): boolean;
  public has_theme_stylebox(_name: GDString | StringName | string, _theme_type: GDString | StringName | string = ""): boolean;
  public has_theme_font(_name: GDString | StringName | string, _theme_type: GDString | StringName | string = ""): boolean;
  public has_theme_font_size(_name: GDString | StringName | string, _theme_type: GDString | StringName | string = ""): boolean;
  public has_theme_color(_name: GDString | StringName | string, _theme_type: GDString | StringName | string = ""): boolean;
  public has_theme_constant(_name: GDString | StringName | string, _theme_type: GDString | StringName | string = ""): boolean;
  public get_theme_default_base_scale(): number;
  public get_theme_default_font(): Font;
  public get_theme_default_font_size(): number;
  public set_layout_direction(_direction: number): void;
  public get_layout_direction(): number;
  public is_layout_rtl(): boolean;
  public set_auto_translate(_enable: boolean): void;
  public is_auto_translating(): boolean;
  public popup(_rect: Rect2i = Rect2i(0, 0, 0, 0)): void;
  public popup_on_parent(_parent_rect: Rect2i): void;
  public popup_centered(_minsize: Vector2i = Vector2i(0, 0)): void;
  public popup_centered_ratio(_ratio: number = 0.8): void;
  public popup_centered_clamped(_minsize: Vector2i = Vector2i(0, 0), _fallback_ratio: number = 0.75): void;
  public popup_exclusive(_from_node: Node, _rect: Rect2i = Rect2i(0, 0, 0, 0)): void;
  public popup_exclusive_on_parent(_from_node: Node, _parent_rect: Rect2i): void;
  public popup_exclusive_centered(_from_node: Node, _minsize: Vector2i = Vector2i(0, 0)): void;
  public popup_exclusive_centered_ratio(_from_node: Node, _ratio: number = 0.8): void;
  public popup_exclusive_centered_clamped(_from_node: Node, _minsize: Vector2i = Vector2i(0, 0), _fallback_ratio: number = 0.75): void;
  public get mode(): number;
  public set mode(value): void;
  public get title(): String;
  public set title(value): void;
  public get initial_position(): number;
  public set initial_position(value): void;
  public get position(): Vector2i;
  public set position(value): void;
  public get size(): Vector2i;
  public set size(value): void;
  public get current_screen(): number;
  public set current_screen(value): void;
  public get mouse_passthrough_polygon(): PackedVector2Array;
  public set mouse_passthrough_polygon(value): void;
  public get visible(): boolean;
  public set visible(value): void;
  public get wrap_controls(): boolean;
  public set wrap_controls(value): void;
  public get transient(): boolean;
  public set transient(value): void;
  public get transient_to_focused(): boolean;
  public set transient_to_focused(value): void;
  public get exclusive(): boolean;
  public set exclusive(value): void;
  public get unresizable(): boolean;
  public set unresizable(value): void;
  public get borderless(): boolean;
  public set borderless(value): void;
  public get always_on_top(): boolean;
  public set always_on_top(value): void;
  public get transparent(): boolean;
  public set transparent(value): void;
  public get unfocusable(): boolean;
  public set unfocusable(value): void;
  public get popup_window(): boolean;
  public set popup_window(value): void;
  public get extend_to_title(): boolean;
  public set extend_to_title(value): void;
  public get mouse_passthrough(): boolean;
  public set mouse_passthrough(value): void;
  public get force_native(): boolean;
  public set force_native(value): void;
  public get min_size(): Vector2i;
  public set min_size(value): void;
  public get max_size(): Vector2i;
  public set max_size(value): void;
  public get keep_title_visible(): boolean;
  public set keep_title_visible(value): void;
  public get content_scale_size(): Vector2i;
  public set content_scale_size(value): void;
  public get content_scale_mode(): number;
  public set content_scale_mode(value): void;
  public get content_scale_aspect(): number;
  public set content_scale_aspect(value): void;
  public get content_scale_stretch(): number;
  public set content_scale_stretch(value): void;
  public get content_scale_factor(): number;
  public set content_scale_factor(value): void;
  public get auto_translate(): boolean;
  public set auto_translate(value): void;
  public get theme(): Theme;
  public set theme(value): void;
  public get theme_type_variation(): String;
  public set theme_type_variation(value): void;
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