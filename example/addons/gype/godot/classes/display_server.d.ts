
import { GodotObject } from "@godot/classes/godot_object";
import { Resource } from "@godot/classes/resource";
import { Image } from "@godot/classes/image";
import { Texture2D } from "@godot/classes/texture2d";


export declare class DisplayServer extends GodotObject{
  public has_feature(_feature: number): boolean;
  public get_name(): String;
  public help_set_search_callbacks(_search_callback: Callable, _action_callback: Callable): void;
  public global_menu_set_popup_callbacks(_menu_root: GDString | StringName | string, _open_callback: Callable, _close_callback: Callable): void;
  public global_menu_add_submenu_item(_menu_root: GDString | StringName | string, _label: GDString | StringName | string, _submenu: GDString | StringName | string, _index: number): number;
  public global_menu_add_item(_menu_root: GDString | StringName | string, _label: GDString | StringName | string, _callback: Callable, _key_callback: Callable, _tag: any, _accelerator: number, _index: number): number;
  public global_menu_add_check_item(_menu_root: GDString | StringName | string, _label: GDString | StringName | string, _callback: Callable, _key_callback: Callable, _tag: any, _accelerator: number, _index: number): number;
  public global_menu_add_icon_item(_menu_root: GDString | StringName | string, _icon: Texture2D, _label: GDString | StringName | string, _callback: Callable, _key_callback: Callable, _tag: any, _accelerator: number, _index: number): number;
  public global_menu_add_icon_check_item(_menu_root: GDString | StringName | string, _icon: Texture2D, _label: GDString | StringName | string, _callback: Callable, _key_callback: Callable, _tag: any, _accelerator: number, _index: number): number;
  public global_menu_add_radio_check_item(_menu_root: GDString | StringName | string, _label: GDString | StringName | string, _callback: Callable, _key_callback: Callable, _tag: any, _accelerator: number, _index: number): number;
  public global_menu_add_icon_radio_check_item(_menu_root: GDString | StringName | string, _icon: Texture2D, _label: GDString | StringName | string, _callback: Callable, _key_callback: Callable, _tag: any, _accelerator: number, _index: number): number;
  public global_menu_add_multistate_item(_menu_root: GDString | StringName | string, _label: GDString | StringName | string, _max_states: number, _default_state: number, _callback: Callable, _key_callback: Callable, _tag: any, _accelerator: number, _index: number): number;
  public global_menu_add_separator(_menu_root: GDString | StringName | string, _index: number): number;
  public global_menu_get_item_index_from_text(_menu_root: GDString | StringName | string, _text: GDString | StringName | string): number;
  public global_menu_get_item_index_from_tag(_menu_root: GDString | StringName | string, _tag: any): number;
  public global_menu_is_item_checked(_menu_root: GDString | StringName | string, _idx: number): boolean;
  public global_menu_is_item_checkable(_menu_root: GDString | StringName | string, _idx: number): boolean;
  public global_menu_is_item_radio_checkable(_menu_root: GDString | StringName | string, _idx: number): boolean;
  public global_menu_get_item_callback(_menu_root: GDString | StringName | string, _idx: number): Callable;
  public global_menu_get_item_key_callback(_menu_root: GDString | StringName | string, _idx: number): Callable;
  public global_menu_get_item_tag(_menu_root: GDString | StringName | string, _idx: number): any;
  public global_menu_get_item_text(_menu_root: GDString | StringName | string, _idx: number): String;
  public global_menu_get_item_submenu(_menu_root: GDString | StringName | string, _idx: number): String;
  public global_menu_get_item_accelerator(_menu_root: GDString | StringName | string, _idx: number): number;
  public global_menu_is_item_disabled(_menu_root: GDString | StringName | string, _idx: number): boolean;
  public global_menu_is_item_hidden(_menu_root: GDString | StringName | string, _idx: number): boolean;
  public global_menu_get_item_tooltip(_menu_root: GDString | StringName | string, _idx: number): String;
  public global_menu_get_item_state(_menu_root: GDString | StringName | string, _idx: number): number;
  public global_menu_get_item_max_states(_menu_root: GDString | StringName | string, _idx: number): number;
  public global_menu_get_item_icon(_menu_root: GDString | StringName | string, _idx: number): Texture2D;
  public global_menu_get_item_indentation_level(_menu_root: GDString | StringName | string, _idx: number): number;
  public global_menu_set_item_checked(_menu_root: GDString | StringName | string, _idx: number, _checked: boolean): void;
  public global_menu_set_item_checkable(_menu_root: GDString | StringName | string, _idx: number, _checkable: boolean): void;
  public global_menu_set_item_radio_checkable(_menu_root: GDString | StringName | string, _idx: number, _checkable: boolean): void;
  public global_menu_set_item_callback(_menu_root: GDString | StringName | string, _idx: number, _callback: Callable): void;
  public global_menu_set_item_hover_callbacks(_menu_root: GDString | StringName | string, _idx: number, _callback: Callable): void;
  public global_menu_set_item_key_callback(_menu_root: GDString | StringName | string, _idx: number, _key_callback: Callable): void;
  public global_menu_set_item_tag(_menu_root: GDString | StringName | string, _idx: number, _tag: any): void;
  public global_menu_set_item_text(_menu_root: GDString | StringName | string, _idx: number, _text: GDString | StringName | string): void;
  public global_menu_set_item_submenu(_menu_root: GDString | StringName | string, _idx: number, _submenu: GDString | StringName | string): void;
  public global_menu_set_item_accelerator(_menu_root: GDString | StringName | string, _idx: number, _keycode: number): void;
  public global_menu_set_item_disabled(_menu_root: GDString | StringName | string, _idx: number, _disabled: boolean): void;
  public global_menu_set_item_hidden(_menu_root: GDString | StringName | string, _idx: number, _hidden: boolean): void;
  public global_menu_set_item_tooltip(_menu_root: GDString | StringName | string, _idx: number, _tooltip: GDString | StringName | string): void;
  public global_menu_set_item_state(_menu_root: GDString | StringName | string, _idx: number, _state: number): void;
  public global_menu_set_item_max_states(_menu_root: GDString | StringName | string, _idx: number, _max_states: number): void;
  public global_menu_set_item_icon(_menu_root: GDString | StringName | string, _idx: number, _icon: Texture2D): void;
  public global_menu_set_item_indentation_level(_menu_root: GDString | StringName | string, _idx: number, _level: number): void;
  public global_menu_get_item_count(_menu_root: GDString | StringName | string): number;
  public global_menu_remove_item(_menu_root: GDString | StringName | string, _idx: number): void;
  public global_menu_clear(_menu_root: GDString | StringName | string): void;
  public global_menu_get_system_menu_roots(): Dictionary;
  public tts_is_speaking(): boolean;
  public tts_is_paused(): boolean;
  public tts_get_voices(): GDArray;
  public tts_get_voices_for_language(_language: GDString | StringName | string): PackedStringArray;
  public tts_speak(_text: GDString | StringName | string, _voice: GDString | StringName | string, _volume: number, _pitch: number, _rate: number, _utterance_id: number, _interrupt: boolean): void;
  public tts_pause(): void;
  public tts_resume(): void;
  public tts_stop(): void;
  public tts_set_utterance_callback(_event: number, _callable: Callable): void;
  public is_dark_mode_supported(): boolean;
  public is_dark_mode(): boolean;
  public get_accent_color(): Color;
  public get_base_color(): Color;
  public set_system_theme_change_callback(_callable: Callable): void;
  public mouse_set_mode(_mouse_mode: number): void;
  public mouse_get_mode(): number;
  public warp_mouse(_position: Vector2i): void;
  public mouse_get_position(): Vector2i;
  public mouse_get_button_state(): number;
  public clipboard_set(_clipboard: GDString | StringName | string): void;
  public clipboard_get(): String;
  public clipboard_get_image(): Image;
  public clipboard_has(): boolean;
  public clipboard_has_image(): boolean;
  public clipboard_set_primary(_clipboard_primary: GDString | StringName | string): void;
  public clipboard_get_primary(): String;
  public get_display_cutouts(): GDArray;
  public get_display_safe_area(): Rect2i;
  public get_screen_count(): number;
  public get_primary_screen(): number;
  public get_keyboard_focus_screen(): number;
  public get_screen_from_rect(_rect: Rect2): number;
  public screen_get_position(_screen: number): Vector2i;
  public screen_get_size(_screen: number): Vector2i;
  public screen_get_usable_rect(_screen: number): Rect2i;
  public screen_get_dpi(_screen: number): number;
  public screen_get_scale(_screen: number): number;
  public is_touchscreen_available(): boolean;
  public screen_get_max_scale(): number;
  public screen_get_refresh_rate(_screen: number): number;
  public screen_get_pixel(_position: Vector2i): Color;
  public screen_get_image(_screen: number): Image;
  public screen_set_orientation(_orientation: number, _screen: number): void;
  public screen_get_orientation(_screen: number): number;
  public screen_set_keep_on(_enable: boolean): void;
  public screen_is_kept_on(): boolean;
  public get_window_list(): PackedInt32Array;
  public get_window_at_screen_position(_position: Vector2i): number;
  public window_get_native_handle(_handle_type: number, _window_id: number): number;
  public window_get_active_popup(): number;
  public window_set_popup_safe_rect(_window: number, _rect: Rect2i): void;
  public window_get_popup_safe_rect(_window: number): Rect2i;
  public window_set_title(_title: GDString | StringName | string, _window_id: number): void;
  public window_get_title_size(_title: GDString | StringName | string, _window_id: number): Vector2i;
  public window_set_mouse_passthrough(_region: PackedVector2Array, _window_id: number): void;
  public window_get_current_screen(_window_id: number): number;
  public window_set_current_screen(_screen: number, _window_id: number): void;
  public window_get_position(_window_id: number): Vector2i;
  public window_get_position_with_decorations(_window_id: number): Vector2i;
  public window_set_position(_position: Vector2i, _window_id: number): void;
  public window_get_size(_window_id: number): Vector2i;
  public window_set_size(_size: Vector2i, _window_id: number): void;
  public window_set_rect_changed_callback(_callback: Callable, _window_id: number): void;
  public window_set_window_event_callback(_callback: Callable, _window_id: number): void;
  public window_set_input_event_callback(_callback: Callable, _window_id: number): void;
  public window_set_input_text_callback(_callback: Callable, _window_id: number): void;
  public window_set_drop_files_callback(_callback: Callable, _window_id: number): void;
  public window_get_attached_instance_id(_window_id: number): number;
  public window_get_max_size(_window_id: number): Vector2i;
  public window_set_max_size(_max_size: Vector2i, _window_id: number): void;
  public window_get_min_size(_window_id: number): Vector2i;
  public window_set_min_size(_min_size: Vector2i, _window_id: number): void;
  public window_get_size_with_decorations(_window_id: number): Vector2i;
  public window_get_mode(_window_id: number): number;
  public window_set_mode(_mode: number, _window_id: number): void;
  public window_set_flag(_flag: number, _enabled: boolean, _window_id: number): void;
  public window_get_flag(_flag: number, _window_id: number): boolean;
  public window_set_window_buttons_offset(_offset: Vector2i, _window_id: number): void;
  public window_get_safe_title_margins(_window_id: number): Vector3i;
  public window_request_attention(_window_id: number): void;
  public window_move_to_foreground(_window_id: number): void;
  public window_is_focused(_window_id: number): boolean;
  public window_can_draw(_window_id: number): boolean;
  public window_set_transient(_window_id: number, _parent_window_id: number): void;
  public window_set_exclusive(_window_id: number, _exclusive: boolean): void;
  public window_set_ime_active(_active: boolean, _window_id: number): void;
  public window_set_ime_position(_position: Vector2i, _window_id: number): void;
  public window_set_vsync_mode(_vsync_mode: number, _window_id: number): void;
  public window_get_vsync_mode(_window_id: number): number;
  public window_is_maximize_allowed(_window_id: number): boolean;
  public window_maximize_on_title_dbl_click(): boolean;
  public window_minimize_on_title_dbl_click(): boolean;
  public ime_get_selection(): Vector2i;
  public ime_get_text(): String;
  public virtual_keyboard_show(_existing_text: GDString | StringName | string, _position: Rect2, _type: number, _max_length: number, _cursor_start: number, _cursor_end: number): void;
  public virtual_keyboard_hide(): void;
  public virtual_keyboard_get_height(): number;
  public cursor_set_shape(_shape: number): void;
  public cursor_get_shape(): number;
  public cursor_set_custom_image(_cursor: Resource, _shape: number, _hotspot: Vector2): void;
  public get_swap_cancel_ok(): boolean;
  public enable_for_stealing_focus(_process_id: number): void;
  public dialog_show(_title: GDString | StringName | string, _description: GDString | StringName | string, _buttons: PackedStringArray, _callback: Callable): number;
  public dialog_input_text(_title: GDString | StringName | string, _description: GDString | StringName | string, _existing_text: GDString | StringName | string, _callback: Callable): number;
  public file_dialog_show(_title: GDString | StringName | string, _current_directory: GDString | StringName | string, _filename: GDString | StringName | string, _show_hidden: boolean, _mode: number, _filters: PackedStringArray, _callback: Callable): number;
  public file_dialog_with_options_show(_title: GDString | StringName | string, _current_directory: GDString | StringName | string, _root: GDString | StringName | string, _filename: GDString | StringName | string, _show_hidden: boolean, _mode: number, _filters: PackedStringArray, _options: GDArray, _callback: Callable): number;
  public keyboard_get_layout_count(): number;
  public keyboard_get_current_layout(): number;
  public keyboard_set_current_layout(_index: number): void;
  public keyboard_get_layout_language(_index: number): String;
  public keyboard_get_layout_name(_index: number): String;
  public keyboard_get_keycode_from_physical(_keycode: number): number;
  public keyboard_get_label_from_physical(_keycode: number): number;
  public process_events(): void;
  public force_process_and_drop_events(): void;
  public set_native_icon(_filename: GDString | StringName | string): void;
  public set_icon(_image: Image): void;
  public create_status_indicator(_icon: Texture2D, _tooltip: GDString | StringName | string, _callback: Callable): number;
  public status_indicator_set_icon(_id: number, _icon: Texture2D): void;
  public status_indicator_set_tooltip(_id: number, _tooltip: GDString | StringName | string): void;
  public status_indicator_set_menu(_id: number, _menu_rid: RID): void;
  public status_indicator_set_callback(_id: number, _callback: Callable): void;
  public status_indicator_get_rect(_id: number): Rect2;
  public delete_status_indicator(_id: number): void;
  public tablet_get_driver_count(): number;
  public tablet_get_driver_name(_idx: number): String;
  public tablet_get_current_driver(): String;
  public tablet_set_current_driver(_name: GDString | StringName | string): void;
  public is_window_transparency_available(): boolean;
  public register_additional_output(_object: GodotObject): void;
  public unregister_additional_output(_object: GodotObject): void;
  public has_additional_outputs(): boolean;
  static Feature = {
    FEATURE_GLOBAL_MENU = 0,
    FEATURE_SUBWINDOWS = 1,
    FEATURE_TOUCHSCREEN = 2,
    FEATURE_MOUSE = 3,
    FEATURE_MOUSE_WARP = 4,
    FEATURE_CLIPBOARD = 5,
    FEATURE_VIRTUAL_KEYBOARD = 6,
    FEATURE_CURSOR_SHAPE = 7,
    FEATURE_CUSTOM_CURSOR_SHAPE = 8,
    FEATURE_NATIVE_DIALOG = 9,
    FEATURE_IME = 10,
    FEATURE_WINDOW_TRANSPARENCY = 11,
    FEATURE_HIDPI = 12,
    FEATURE_ICON = 13,
    FEATURE_NATIVE_ICON = 14,
    FEATURE_ORIENTATION = 15,
    FEATURE_SWAP_BUFFERS = 16,
    FEATURE_CLIPBOARD_PRIMARY = 18,
    FEATURE_TEXT_TO_SPEECH = 19,
    FEATURE_EXTEND_TO_TITLE = 20,
    FEATURE_SCREEN_CAPTURE = 21,
    FEATURE_STATUS_INDICATOR = 22,
    FEATURE_NATIVE_HELP = 23,
    FEATURE_NATIVE_DIALOG_INPUT = 24,
    FEATURE_NATIVE_DIALOG_FILE = 25,
  }
  static MouseMode = {
    MOUSE_MODE_VISIBLE = 0,
    MOUSE_MODE_HIDDEN = 1,
    MOUSE_MODE_CAPTURED = 2,
    MOUSE_MODE_CONFINED = 3,
    MOUSE_MODE_CONFINED_HIDDEN = 4,
  }
  static ScreenOrientation = {
    SCREEN_LANDSCAPE = 0,
    SCREEN_PORTRAIT = 1,
    SCREEN_REVERSE_LANDSCAPE = 2,
    SCREEN_REVERSE_PORTRAIT = 3,
    SCREEN_SENSOR_LANDSCAPE = 4,
    SCREEN_SENSOR_PORTRAIT = 5,
    SCREEN_SENSOR = 6,
  }
  static VirtualKeyboardType = {
    KEYBOARD_TYPE_DEFAULT = 0,
    KEYBOARD_TYPE_MULTILINE = 1,
    KEYBOARD_TYPE_NUMBER = 2,
    KEYBOARD_TYPE_NUMBER_DECIMAL = 3,
    KEYBOARD_TYPE_PHONE = 4,
    KEYBOARD_TYPE_EMAIL_ADDRESS = 5,
    KEYBOARD_TYPE_PASSWORD = 6,
    KEYBOARD_TYPE_URL = 7,
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
    CURSOR_MAX = 17,
  }
  static FileDialogMode = {
    FILE_DIALOG_MODE_OPEN_FILE = 0,
    FILE_DIALOG_MODE_OPEN_FILES = 1,
    FILE_DIALOG_MODE_OPEN_DIR = 2,
    FILE_DIALOG_MODE_OPEN_ANY = 3,
    FILE_DIALOG_MODE_SAVE_FILE = 4,
  }
  static WindowMode = {
    WINDOW_MODE_WINDOWED = 0,
    WINDOW_MODE_MINIMIZED = 1,
    WINDOW_MODE_MAXIMIZED = 2,
    WINDOW_MODE_FULLSCREEN = 3,
    WINDOW_MODE_EXCLUSIVE_FULLSCREEN = 4,
  }
  static WindowFlags = {
    WINDOW_FLAG_RESIZE_DISABLED = 0,
    WINDOW_FLAG_BORDERLESS = 1,
    WINDOW_FLAG_ALWAYS_ON_TOP = 2,
    WINDOW_FLAG_TRANSPARENT = 3,
    WINDOW_FLAG_NO_FOCUS = 4,
    WINDOW_FLAG_POPUP = 5,
    WINDOW_FLAG_EXTEND_TO_TITLE = 6,
    WINDOW_FLAG_MOUSE_PASSTHROUGH = 7,
    WINDOW_FLAG_MAX = 8,
  }
  static WindowEvent = {
    WINDOW_EVENT_MOUSE_ENTER = 0,
    WINDOW_EVENT_MOUSE_EXIT = 1,
    WINDOW_EVENT_FOCUS_IN = 2,
    WINDOW_EVENT_FOCUS_OUT = 3,
    WINDOW_EVENT_CLOSE_REQUEST = 4,
    WINDOW_EVENT_GO_BACK_REQUEST = 5,
    WINDOW_EVENT_DPI_CHANGE = 6,
    WINDOW_EVENT_TITLEBAR_CHANGE = 7,
  }
  static VSyncMode = {
    VSYNC_DISABLED = 0,
    VSYNC_ENABLED = 1,
    VSYNC_ADAPTIVE = 2,
    VSYNC_MAILBOX = 3,
  }
  static HandleType = {
    DISPLAY_HANDLE = 0,
    WINDOW_HANDLE = 1,
    WINDOW_VIEW = 2,
    OPENGL_CONTEXT = 3,
  }
  static TTSUtteranceEvent = {
    TTS_UTTERANCE_STARTED = 0,
    TTS_UTTERANCE_ENDED = 1,
    TTS_UTTERANCE_CANCELED = 2,
    TTS_UTTERANCE_BOUNDARY = 3,
  }
}