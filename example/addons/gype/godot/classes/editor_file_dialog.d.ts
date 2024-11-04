
import { LineEdit } from "@godot/classes/line_edit";
import { Control } from "@godot/classes/control";
import { ConfirmationDialog } from "@godot/classes/confirmation_dialog";
import { VBoxContainer } from "@godot/classes/v_box_container";
export declare class EditorFileDialog extends ConfirmationDialog{
  public clear_filters(): void;
  public add_filter(_filter: GDString | StringName | string, _description: GDString | StringName | string = ""): void;
  public set_filters(_filters: PackedStringArray): void;
  public get_filters(): PackedStringArray;
  public get_option_name(_option: number): String;
  public get_option_values(_option: number): PackedStringArray;
  public get_option_default(_option: number): number;
  public set_option_name(_option: number, _name: GDString | StringName | string): void;
  public set_option_values(_option: number, _values: PackedStringArray): void;
  public set_option_default(_option: number, _default_value_index: number): void;
  public set_option_count(_count: number): void;
  public get_option_count(): number;
  public add_option(_name: GDString | StringName | string, _values: PackedStringArray, _default_value_index: number): void;
  public get_selected_options(): Dictionary;
  public get_current_dir(): String;
  public get_current_file(): String;
  public get_current_path(): String;
  public set_current_dir(_dir: GDString | StringName | string): void;
  public set_current_file(_file: GDString | StringName | string): void;
  public set_current_path(_path: GDString | StringName | string): void;
  public set_file_mode(_mode: number): void;
  public get_file_mode(): number;
  public get_vbox(): VBoxContainer;
  public get_line_edit(): LineEdit;
  public set_access(_access: number): void;
  public get_access(): number;
  public set_show_hidden_files(_show: boolean): void;
  public is_showing_hidden_files(): boolean;
  public set_display_mode(_mode: number): void;
  public get_display_mode(): number;
  public set_disable_overwrite_warning(_disable: boolean): void;
  public is_overwrite_warning_disabled(): boolean;
  public add_side_menu(_menu: Control, _title: GDString | StringName | string = ""): void;
  public popup_file_dialog(): void;
  public invalidate(): void;
  public get access(): number;
  public set access(value): void;
  public get display_mode(): number;
  public set display_mode(value): void;
  public get file_mode(): number;
  public set file_mode(value): void;
  public get current_dir(): String;
  public set current_dir(value): void;
  public get current_file(): String;
  public set current_file(value): void;
  public get current_path(): String;
  public set current_path(value): void;
  public get filters(): PackedStringArray;
  public set filters(value): void;
  public get option_count(): number;
  public set option_count(value): void;
  public get show_hidden_files(): boolean;
  public set show_hidden_files(value): void;
  public get disable_overwrite_warning(): boolean;
  public set disable_overwrite_warning(value): void;
  static FileMode = {
    FILE_MODE_OPEN_FILE = 0,
    FILE_MODE_OPEN_FILES = 1,
    FILE_MODE_OPEN_DIR = 2,
    FILE_MODE_OPEN_ANY = 3,
    FILE_MODE_SAVE_FILE = 4,
  }
  static Access = {
    ACCESS_RESOURCES = 0,
    ACCESS_USERDATA = 1,
    ACCESS_FILESYSTEM = 2,
  }
  static DisplayMode = {
    DISPLAY_THUMBNAILS = 0,
    DISPLAY_LIST = 1,
  }
  public get file_selected(): Signal;
  public get files_selected(): Signal;
  public get dir_selected(): Signal;
}