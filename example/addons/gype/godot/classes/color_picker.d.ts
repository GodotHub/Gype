
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
  public get color(): Color;
  public set color(value): void;
  public get edit_alpha(): boolean;
  public set edit_alpha(value): void;
  public get color_mode(): number;
  public set color_mode(value): void;
  public get deferred_mode(): boolean;
  public set deferred_mode(value): void;
  public get picker_shape(): number;
  public set picker_shape(value): void;
  public get can_add_swatches(): boolean;
  public set can_add_swatches(value): void;
  public get sampler_visible(): boolean;
  public set sampler_visible(value): void;
  public get color_modes_visible(): boolean;
  public set color_modes_visible(value): void;
  public get sliders_visible(): boolean;
  public set sliders_visible(value): void;
  public get hex_visible(): boolean;
  public set hex_visible(value): void;
  public get presets_visible(): boolean;
  public set presets_visible(value): void;
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
  public get color_changed(): Signal;
  public get preset_added(): Signal;
  public get preset_removed(): Signal;
}