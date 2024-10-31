
import { StyleBox } from "@godot/classes/style_box";
import { Resource } from "@godot/classes/resource";
import { Texture2D } from "@godot/classes/texture2d";
import { Font } from "@godot/classes/font";

export declare class Theme extends Resource{
  public set_icon(_name: String | StringName | string, _theme_type: String | StringName | string, _texture: Texture2D): void;
  public get_icon(_name: String | StringName | string, _theme_type: String | StringName | string): Texture2D;
  public has_icon(_name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public rename_icon(_old_name: String | StringName | string, _name: String | StringName | string, _theme_type: String | StringName | string): void;
  public clear_icon(_name: String | StringName | string, _theme_type: String | StringName | string): void;
  public get_icon_list(_theme_type: String | StringName | string): PackedStringArray;
  public get_icon_type_list(): PackedStringArray;
  public set_stylebox(_name: String | StringName | string, _theme_type: String | StringName | string, _texture: StyleBox): void;
  public get_stylebox(_name: String | StringName | string, _theme_type: String | StringName | string): StyleBox;
  public has_stylebox(_name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public rename_stylebox(_old_name: String | StringName | string, _name: String | StringName | string, _theme_type: String | StringName | string): void;
  public clear_stylebox(_name: String | StringName | string, _theme_type: String | StringName | string): void;
  public get_stylebox_list(_theme_type: String | StringName | string): PackedStringArray;
  public get_stylebox_type_list(): PackedStringArray;
  public set_font(_name: String | StringName | string, _theme_type: String | StringName | string, _font: Font): void;
  public get_font(_name: String | StringName | string, _theme_type: String | StringName | string): Font;
  public has_font(_name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public rename_font(_old_name: String | StringName | string, _name: String | StringName | string, _theme_type: String | StringName | string): void;
  public clear_font(_name: String | StringName | string, _theme_type: String | StringName | string): void;
  public get_font_list(_theme_type: String | StringName | string): PackedStringArray;
  public get_font_type_list(): PackedStringArray;
  public set_font_size(_name: String | StringName | string, _theme_type: String | StringName | string, _font_size: number): void;
  public get_font_size(_name: String | StringName | string, _theme_type: String | StringName | string): number;
  public has_font_size(_name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public rename_font_size(_old_name: String | StringName | string, _name: String | StringName | string, _theme_type: String | StringName | string): void;
  public clear_font_size(_name: String | StringName | string, _theme_type: String | StringName | string): void;
  public get_font_size_list(_theme_type: String | StringName | string): PackedStringArray;
  public get_font_size_type_list(): PackedStringArray;
  public set_color(_name: String | StringName | string, _theme_type: String | StringName | string, _color: Color): void;
  public get_color(_name: String | StringName | string, _theme_type: String | StringName | string): Color;
  public has_color(_name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public rename_color(_old_name: String | StringName | string, _name: String | StringName | string, _theme_type: String | StringName | string): void;
  public clear_color(_name: String | StringName | string, _theme_type: String | StringName | string): void;
  public get_color_list(_theme_type: String | StringName | string): PackedStringArray;
  public get_color_type_list(): PackedStringArray;
  public set_constant(_name: String | StringName | string, _theme_type: String | StringName | string, _constant: number): void;
  public get_constant(_name: String | StringName | string, _theme_type: String | StringName | string): number;
  public has_constant(_name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public rename_constant(_old_name: String | StringName | string, _name: String | StringName | string, _theme_type: String | StringName | string): void;
  public clear_constant(_name: String | StringName | string, _theme_type: String | StringName | string): void;
  public get_constant_list(_theme_type: String | StringName | string): PackedStringArray;
  public get_constant_type_list(): PackedStringArray;
  public set_default_base_scale(_base_scale: number): void;
  public get_default_base_scale(): number;
  public has_default_base_scale(): boolean;
  public set_default_font(_font: Font): void;
  public get_default_font(): Font;
  public has_default_font(): boolean;
  public set_default_font_size(_font_size: number): void;
  public get_default_font_size(): number;
  public has_default_font_size(): boolean;
  public set_theme_item(_data_type: number, _name: String | StringName | string, _theme_type: String | StringName | string, _value: any): void;
  public get_theme_item(_data_type: number, _name: String | StringName | string, _theme_type: String | StringName | string): any;
  public has_theme_item(_data_type: number, _name: String | StringName | string, _theme_type: String | StringName | string): boolean;
  public rename_theme_item(_data_type: number, _old_name: String | StringName | string, _name: String | StringName | string, _theme_type: String | StringName | string): void;
  public clear_theme_item(_data_type: number, _name: String | StringName | string, _theme_type: String | StringName | string): void;
  public get_theme_item_list(_data_type: number, _theme_type: String | StringName | string): PackedStringArray;
  public get_theme_item_type_list(_data_type: number): PackedStringArray;
  public set_type_variation(_theme_type: String | StringName | string, _base_type: String | StringName | string): void;
  public is_type_variation(_theme_type: String | StringName | string, _base_type: String | StringName | string): boolean;
  public clear_type_variation(_theme_type: String | StringName | string): void;
  public get_type_variation_base(_theme_type: String | StringName | string): StringName;
  public get_type_variation_list(_base_type: String | StringName | string): PackedStringArray;
  public add_type(_theme_type: String | StringName | string): void;
  public remove_type(_theme_type: String | StringName | string): void;
  public get_type_list(): PackedStringArray;
  public merge_with(_other: Theme): void;
  public clear(): void;
  public get default_base_scale(): number {
    get_default_base_scale();
  }
  public set default_base_scale(value): void {
    set_default_base_scale(value);
  }
  public get default_font(): Font {
    get_default_font();
  }
  public set default_font(value): void {
    set_default_font(value);
  }
  public get default_font_size(): number {
    get_default_font_size();
  }
  public set default_font_size(value): void {
    set_default_font_size(value);
  }
  static DataType = {
    DATA_TYPE_COLOR = 0,
    DATA_TYPE_CONSTANT = 1,
    DATA_TYPE_FONT = 2,
    DATA_TYPE_FONT_SIZE = 3,
    DATA_TYPE_ICON = 4,
    DATA_TYPE_STYLEBOX = 5,
    DATA_TYPE_MAX = 6,
  }
}