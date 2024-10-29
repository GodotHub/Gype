
import { VBoxContainer } from "@godot/classes/v_box_container";

export declare class ColorPicker extends VBoxContainer{
  public set_pick_color(_color: Color): void;
  public get_pick_color(): Color;
  public set_deferred_mode(_mode: boolean): void;
  public is_deferred_mode(): boolean;
  public set_color_mode(_color_mode: number): void;
  public get_color_mode(): number;
  public set_edit_alpha(_show: boolean): void;
  public is_editing_alpha(): boolean;
  public set_can_add_swatches(_enabled: boolean): void;
  public are_swatches_enabled(): boolean;
  public set_presets_visible(_visible: boolean): void;
  public are_presets_visible(): boolean;
  public set_modes_visible(_visible: boolean): void;
  public are_modes_visible(): boolean;
  public set_sampler_visible(_visible: boolean): void;
  public is_sampler_visible(): boolean;
  public set_sliders_visible(_visible: boolean): void;
  public are_sliders_visible(): boolean;
  public set_hex_visible(_visible: boolean): void;
  public is_hex_visible(): boolean;
  public add_preset(_color: Color): void;
  public erase_preset(_color: Color): void;
  public get_presets(): PackedColorArray;
  public add_recent_preset(_color: Color): void;
  public erase_recent_preset(_color: Color): void;
  public get_recent_presets(): PackedColorArray;
  public set_picker_shape(_shape: number): void;
  public get_picker_shape(): number;
  public get color(): Color {
    get_pick_color();
  }
  public set color(value): void {
    set_pick_color(value);
  }
  public get edit_alpha(): boolean {
    is_editing_alpha();
  }
  public set edit_alpha(value): void {
    set_edit_alpha(value);
  }
  public get color_mode(): number {
    get_color_mode();
  }
  public set color_mode(value): void {
    set_color_mode(value);
  }
  public get deferred_mode(): boolean {
    is_deferred_mode();
  }
  public set deferred_mode(value): void {
    set_deferred_mode(value);
  }
  public get picker_shape(): number {
    get_picker_shape();
  }
  public set picker_shape(value): void {
    set_picker_shape(value);
  }
  public get can_add_swatches(): boolean {
    are_swatches_enabled();
  }
  public set can_add_swatches(value): void {
    set_can_add_swatches(value);
  }
  public get sampler_visible(): boolean {
    is_sampler_visible();
  }
  public set sampler_visible(value): void {
    set_sampler_visible(value);
  }
  public get color_modes_visible(): boolean {
    are_modes_visible();
  }
  public set color_modes_visible(value): void {
    set_modes_visible(value);
  }
  public get sliders_visible(): boolean {
    are_sliders_visible();
  }
  public set sliders_visible(value): void {
    set_sliders_visible(value);
  }
  public get hex_visible(): boolean {
    is_hex_visible();
  }
  public set hex_visible(value): void {
    set_hex_visible(value);
  }
  public get presets_visible(): boolean {
    are_presets_visible();
  }
  public set presets_visible(value): void {
    set_presets_visible(value);
  }
  static ColorModeType = {
    MODE_RGB = 0,
    MODE_HSV = 1,
    MODE_RAW = 2,
    MODE_OKHSL = 3,
  }
  static PickerShapeType = {
    SHAPE_HSV_RECTANGLE = 0,
    SHAPE_HSV_WHEEL = 1,
    SHAPE_VHS_CIRCLE = 2,
    SHAPE_OKHSL_CIRCLE = 3,
    SHAPE_NONE = 4,
  }
}