/**************************************************************************/
/*  display_server.hpp                                                    */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_DISPLAY_SERVER_HPP
#define GODOT_CPP_DISPLAY_SERVER_HPP

#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/variant/vector3i.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Image;
class PackedVector2Array;
class RID;
class Resource;
class Texture2D;

class DisplayServer : public Object {
	GDEXTENSION_CLASS(DisplayServer, Object)

	static DisplayServer *singleton;

public:

	enum Feature {
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
	};

	enum MouseMode {
		MOUSE_MODE_VISIBLE = 0,
		MOUSE_MODE_HIDDEN = 1,
		MOUSE_MODE_CAPTURED = 2,
		MOUSE_MODE_CONFINED = 3,
		MOUSE_MODE_CONFINED_HIDDEN = 4,
	};

	enum ScreenOrientation {
		SCREEN_LANDSCAPE = 0,
		SCREEN_PORTRAIT = 1,
		SCREEN_REVERSE_LANDSCAPE = 2,
		SCREEN_REVERSE_PORTRAIT = 3,
		SCREEN_SENSOR_LANDSCAPE = 4,
		SCREEN_SENSOR_PORTRAIT = 5,
		SCREEN_SENSOR = 6,
	};

	enum VirtualKeyboardType {
		KEYBOARD_TYPE_DEFAULT = 0,
		KEYBOARD_TYPE_MULTILINE = 1,
		KEYBOARD_TYPE_NUMBER = 2,
		KEYBOARD_TYPE_NUMBER_DECIMAL = 3,
		KEYBOARD_TYPE_PHONE = 4,
		KEYBOARD_TYPE_EMAIL_ADDRESS = 5,
		KEYBOARD_TYPE_PASSWORD = 6,
		KEYBOARD_TYPE_URL = 7,
	};

	enum CursorShape {
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
	};

	enum FileDialogMode {
		FILE_DIALOG_MODE_OPEN_FILE = 0,
		FILE_DIALOG_MODE_OPEN_FILES = 1,
		FILE_DIALOG_MODE_OPEN_DIR = 2,
		FILE_DIALOG_MODE_OPEN_ANY = 3,
		FILE_DIALOG_MODE_SAVE_FILE = 4,
	};

	enum WindowMode {
		WINDOW_MODE_WINDOWED = 0,
		WINDOW_MODE_MINIMIZED = 1,
		WINDOW_MODE_MAXIMIZED = 2,
		WINDOW_MODE_FULLSCREEN = 3,
		WINDOW_MODE_EXCLUSIVE_FULLSCREEN = 4,
	};

	enum WindowFlags {
		WINDOW_FLAG_RESIZE_DISABLED = 0,
		WINDOW_FLAG_BORDERLESS = 1,
		WINDOW_FLAG_ALWAYS_ON_TOP = 2,
		WINDOW_FLAG_TRANSPARENT = 3,
		WINDOW_FLAG_NO_FOCUS = 4,
		WINDOW_FLAG_POPUP = 5,
		WINDOW_FLAG_EXTEND_TO_TITLE = 6,
		WINDOW_FLAG_MOUSE_PASSTHROUGH = 7,
		WINDOW_FLAG_MAX = 8,
	};

	enum WindowEvent {
		WINDOW_EVENT_MOUSE_ENTER = 0,
		WINDOW_EVENT_MOUSE_EXIT = 1,
		WINDOW_EVENT_FOCUS_IN = 2,
		WINDOW_EVENT_FOCUS_OUT = 3,
		WINDOW_EVENT_CLOSE_REQUEST = 4,
		WINDOW_EVENT_GO_BACK_REQUEST = 5,
		WINDOW_EVENT_DPI_CHANGE = 6,
		WINDOW_EVENT_TITLEBAR_CHANGE = 7,
	};

	enum VSyncMode {
		VSYNC_DISABLED = 0,
		VSYNC_ENABLED = 1,
		VSYNC_ADAPTIVE = 2,
		VSYNC_MAILBOX = 3,
	};

	enum HandleType {
		DISPLAY_HANDLE = 0,
		WINDOW_HANDLE = 1,
		WINDOW_VIEW = 2,
		OPENGL_CONTEXT = 3,
	};

	enum TTSUtteranceEvent {
		TTS_UTTERANCE_STARTED = 0,
		TTS_UTTERANCE_ENDED = 1,
		TTS_UTTERANCE_CANCELED = 2,
		TTS_UTTERANCE_BOUNDARY = 3,
	};

	static const int SCREEN_WITH_MOUSE_FOCUS;
	static const int SCREEN_WITH_KEYBOARD_FOCUS;
	static const int SCREEN_PRIMARY;
	static const int SCREEN_OF_MAIN_WINDOW;
	static const int MAIN_WINDOW_ID;
	static const int INVALID_WINDOW_ID;
	static const int INVALID_INDICATOR_ID;

	static DisplayServer *get_singleton();

	bool has_feature(DisplayServer::Feature feature) const;
	String get_name() const;
	void help_set_search_callbacks(const Callable &search_callback, const Callable &action_callback);
	void global_menu_set_popup_callbacks(const String &menu_root, const Callable &open_callback, const Callable &close_callback);
	int32_t global_menu_add_submenu_item(const String &menu_root, const String &label, const String &submenu, int32_t index = -1);
	int32_t global_menu_add_item(const String &menu_root, const String &label, const Callable &callback = Callable(), const Callable &key_callback = Callable(), const Variant &tag = nullptr, Key accelerator = (Key)0, int32_t index = -1);
	int32_t global_menu_add_check_item(const String &menu_root, const String &label, const Callable &callback = Callable(), const Callable &key_callback = Callable(), const Variant &tag = nullptr, Key accelerator = (Key)0, int32_t index = -1);
	int32_t global_menu_add_icon_item(const String &menu_root, const Ref<Texture2D> &icon, const String &label, const Callable &callback = Callable(), const Callable &key_callback = Callable(), const Variant &tag = nullptr, Key accelerator = (Key)0, int32_t index = -1);
	int32_t global_menu_add_icon_check_item(const String &menu_root, const Ref<Texture2D> &icon, const String &label, const Callable &callback = Callable(), const Callable &key_callback = Callable(), const Variant &tag = nullptr, Key accelerator = (Key)0, int32_t index = -1);
	int32_t global_menu_add_radio_check_item(const String &menu_root, const String &label, const Callable &callback = Callable(), const Callable &key_callback = Callable(), const Variant &tag = nullptr, Key accelerator = (Key)0, int32_t index = -1);
	int32_t global_menu_add_icon_radio_check_item(const String &menu_root, const Ref<Texture2D> &icon, const String &label, const Callable &callback = Callable(), const Callable &key_callback = Callable(), const Variant &tag = nullptr, Key accelerator = (Key)0, int32_t index = -1);
	int32_t global_menu_add_multistate_item(const String &menu_root, const String &label, int32_t max_states, int32_t default_state, const Callable &callback = Callable(), const Callable &key_callback = Callable(), const Variant &tag = nullptr, Key accelerator = (Key)0, int32_t index = -1);
	int32_t global_menu_add_separator(const String &menu_root, int32_t index = -1);
	int32_t global_menu_get_item_index_from_text(const String &menu_root, const String &text) const;
	int32_t global_menu_get_item_index_from_tag(const String &menu_root, const Variant &tag) const;
	bool global_menu_is_item_checked(const String &menu_root, int32_t idx) const;
	bool global_menu_is_item_checkable(const String &menu_root, int32_t idx) const;
	bool global_menu_is_item_radio_checkable(const String &menu_root, int32_t idx) const;
	Callable global_menu_get_item_callback(const String &menu_root, int32_t idx) const;
	Callable global_menu_get_item_key_callback(const String &menu_root, int32_t idx) const;
	Variant global_menu_get_item_tag(const String &menu_root, int32_t idx) const;
	String global_menu_get_item_text(const String &menu_root, int32_t idx) const;
	String global_menu_get_item_submenu(const String &menu_root, int32_t idx) const;
	Key global_menu_get_item_accelerator(const String &menu_root, int32_t idx) const;
	bool global_menu_is_item_disabled(const String &menu_root, int32_t idx) const;
	bool global_menu_is_item_hidden(const String &menu_root, int32_t idx) const;
	String global_menu_get_item_tooltip(const String &menu_root, int32_t idx) const;
	int32_t global_menu_get_item_state(const String &menu_root, int32_t idx) const;
	int32_t global_menu_get_item_max_states(const String &menu_root, int32_t idx) const;
	Ref<Texture2D> global_menu_get_item_icon(const String &menu_root, int32_t idx) const;
	int32_t global_menu_get_item_indentation_level(const String &menu_root, int32_t idx) const;
	void global_menu_set_item_checked(const String &menu_root, int32_t idx, bool checked);
	void global_menu_set_item_checkable(const String &menu_root, int32_t idx, bool checkable);
	void global_menu_set_item_radio_checkable(const String &menu_root, int32_t idx, bool checkable);
	void global_menu_set_item_callback(const String &menu_root, int32_t idx, const Callable &callback);
	void global_menu_set_item_hover_callbacks(const String &menu_root, int32_t idx, const Callable &callback);
	void global_menu_set_item_key_callback(const String &menu_root, int32_t idx, const Callable &key_callback);
	void global_menu_set_item_tag(const String &menu_root, int32_t idx, const Variant &tag);
	void global_menu_set_item_text(const String &menu_root, int32_t idx, const String &text);
	void global_menu_set_item_submenu(const String &menu_root, int32_t idx, const String &submenu);
	void global_menu_set_item_accelerator(const String &menu_root, int32_t idx, Key keycode);
	void global_menu_set_item_disabled(const String &menu_root, int32_t idx, bool disabled);
	void global_menu_set_item_hidden(const String &menu_root, int32_t idx, bool hidden);
	void global_menu_set_item_tooltip(const String &menu_root, int32_t idx, const String &tooltip);
	void global_menu_set_item_state(const String &menu_root, int32_t idx, int32_t state);
	void global_menu_set_item_max_states(const String &menu_root, int32_t idx, int32_t max_states);
	void global_menu_set_item_icon(const String &menu_root, int32_t idx, const Ref<Texture2D> &icon);
	void global_menu_set_item_indentation_level(const String &menu_root, int32_t idx, int32_t level);
	int32_t global_menu_get_item_count(const String &menu_root) const;
	void global_menu_remove_item(const String &menu_root, int32_t idx);
	void global_menu_clear(const String &menu_root);
	Dictionary global_menu_get_system_menu_roots() const;
	bool tts_is_speaking() const;
	bool tts_is_paused() const;
	TypedArray<Dictionary> tts_get_voices() const;
	PackedStringArray tts_get_voices_for_language(const String &language) const;
	void tts_speak(const String &text, const String &voice, int32_t volume = 50, double pitch = 1.0, double rate = 1.0, int32_t utterance_id = 0, bool interrupt = false);
	void tts_pause();
	void tts_resume();
	void tts_stop();
	void tts_set_utterance_callback(DisplayServer::TTSUtteranceEvent event, const Callable &callable);
	bool is_dark_mode_supported() const;
	bool is_dark_mode() const;
	Color get_accent_color() const;
	Color get_base_color() const;
	void set_system_theme_change_callback(const Callable &callable);
	void mouse_set_mode(DisplayServer::MouseMode mouse_mode);
	DisplayServer::MouseMode mouse_get_mode() const;
	void warp_mouse(const Vector2i &position);
	Vector2i mouse_get_position() const;
	BitField<MouseButtonMask> mouse_get_button_state() const;
	void clipboard_set(const String &clipboard);
	String clipboard_get() const;
	Ref<Image> clipboard_get_image() const;
	bool clipboard_has() const;
	bool clipboard_has_image() const;
	void clipboard_set_primary(const String &clipboard_primary);
	String clipboard_get_primary() const;
	TypedArray<Rect2> get_display_cutouts() const;
	Rect2i get_display_safe_area() const;
	int32_t get_screen_count() const;
	int32_t get_primary_screen() const;
	int32_t get_keyboard_focus_screen() const;
	int32_t get_screen_from_rect(const Rect2 &rect) const;
	Vector2i screen_get_position(int32_t screen = -1) const;
	Vector2i screen_get_size(int32_t screen = -1) const;
	Rect2i screen_get_usable_rect(int32_t screen = -1) const;
	int32_t screen_get_dpi(int32_t screen = -1) const;
	double screen_get_scale(int32_t screen = -1) const;
	bool is_touchscreen_available() const;
	double screen_get_max_scale() const;
	double screen_get_refresh_rate(int32_t screen = -1) const;
	Color screen_get_pixel(const Vector2i &position) const;
	Ref<Image> screen_get_image(int32_t screen = -1) const;
	void screen_set_orientation(DisplayServer::ScreenOrientation orientation, int32_t screen = -1);
	DisplayServer::ScreenOrientation screen_get_orientation(int32_t screen = -1) const;
	void screen_set_keep_on(bool enable);
	bool screen_is_kept_on() const;
	PackedInt32Array get_window_list() const;
	int32_t get_window_at_screen_position(const Vector2i &position) const;
	int64_t window_get_native_handle(DisplayServer::HandleType handle_type, int32_t window_id = 0) const;
	int32_t window_get_active_popup() const;
	void window_set_popup_safe_rect(int32_t window, const Rect2i &rect);
	Rect2i window_get_popup_safe_rect(int32_t window) const;
	void window_set_title(const String &title, int32_t window_id = 0);
	Vector2i window_get_title_size(const String &title, int32_t window_id = 0) const;
	void window_set_mouse_passthrough(const PackedVector2Array &region, int32_t window_id = 0);
	int32_t window_get_current_screen(int32_t window_id = 0) const;
	void window_set_current_screen(int32_t screen, int32_t window_id = 0);
	Vector2i window_get_position(int32_t window_id = 0) const;
	Vector2i window_get_position_with_decorations(int32_t window_id = 0) const;
	void window_set_position(const Vector2i &position, int32_t window_id = 0);
	Vector2i window_get_size(int32_t window_id = 0) const;
	void window_set_size(const Vector2i &size, int32_t window_id = 0);
	void window_set_rect_changed_callback(const Callable &callback, int32_t window_id = 0);
	void window_set_window_event_callback(const Callable &callback, int32_t window_id = 0);
	void window_set_input_event_callback(const Callable &callback, int32_t window_id = 0);
	void window_set_input_text_callback(const Callable &callback, int32_t window_id = 0);
	void window_set_drop_files_callback(const Callable &callback, int32_t window_id = 0);
	uint64_t window_get_attached_instance_id(int32_t window_id = 0) const;
	Vector2i window_get_max_size(int32_t window_id = 0) const;
	void window_set_max_size(const Vector2i &max_size, int32_t window_id = 0);
	Vector2i window_get_min_size(int32_t window_id = 0) const;
	void window_set_min_size(const Vector2i &min_size, int32_t window_id = 0);
	Vector2i window_get_size_with_decorations(int32_t window_id = 0) const;
	DisplayServer::WindowMode window_get_mode(int32_t window_id = 0) const;
	void window_set_mode(DisplayServer::WindowMode mode, int32_t window_id = 0);
	void window_set_flag(DisplayServer::WindowFlags flag, bool enabled, int32_t window_id = 0);
	bool window_get_flag(DisplayServer::WindowFlags flag, int32_t window_id = 0) const;
	void window_set_window_buttons_offset(const Vector2i &offset, int32_t window_id = 0);
	Vector3i window_get_safe_title_margins(int32_t window_id = 0) const;
	void window_request_attention(int32_t window_id = 0);
	void window_move_to_foreground(int32_t window_id = 0);
	bool window_is_focused(int32_t window_id = 0) const;
	bool window_can_draw(int32_t window_id = 0) const;
	void window_set_transient(int32_t window_id, int32_t parent_window_id);
	void window_set_exclusive(int32_t window_id, bool exclusive);
	void window_set_ime_active(bool active, int32_t window_id = 0);
	void window_set_ime_position(const Vector2i &position, int32_t window_id = 0);
	void window_set_vsync_mode(DisplayServer::VSyncMode vsync_mode, int32_t window_id = 0);
	DisplayServer::VSyncMode window_get_vsync_mode(int32_t window_id = 0) const;
	bool window_is_maximize_allowed(int32_t window_id = 0) const;
	bool window_maximize_on_title_dbl_click() const;
	bool window_minimize_on_title_dbl_click() const;
	Vector2i ime_get_selection() const;
	String ime_get_text() const;
	void virtual_keyboard_show(const String &existing_text, const Rect2 &position = Rect2(0, 0, 0, 0), DisplayServer::VirtualKeyboardType type = (DisplayServer::VirtualKeyboardType)0, int32_t max_length = -1, int32_t cursor_start = -1, int32_t cursor_end = -1);
	void virtual_keyboard_hide();
	int32_t virtual_keyboard_get_height() const;
	void cursor_set_shape(DisplayServer::CursorShape shape);
	DisplayServer::CursorShape cursor_get_shape() const;
	void cursor_set_custom_image(const Ref<Resource> &cursor, DisplayServer::CursorShape shape = (DisplayServer::CursorShape)0, const Vector2 &hotspot = Vector2(0, 0));
	bool get_swap_cancel_ok();
	void enable_for_stealing_focus(int64_t process_id);
	Error dialog_show(const String &title, const String &description, const PackedStringArray &buttons, const Callable &callback);
	Error dialog_input_text(const String &title, const String &description, const String &existing_text, const Callable &callback);
	Error file_dialog_show(const String &title, const String &current_directory, const String &filename, bool show_hidden, DisplayServer::FileDialogMode mode, const PackedStringArray &filters, const Callable &callback);
	Error file_dialog_with_options_show(const String &title, const String &current_directory, const String &root, const String &filename, bool show_hidden, DisplayServer::FileDialogMode mode, const PackedStringArray &filters, const TypedArray<Dictionary> &options, const Callable &callback);
	int32_t keyboard_get_layout_count() const;
	int32_t keyboard_get_current_layout() const;
	void keyboard_set_current_layout(int32_t index);
	String keyboard_get_layout_language(int32_t index) const;
	String keyboard_get_layout_name(int32_t index) const;
	Key keyboard_get_keycode_from_physical(Key keycode) const;
	Key keyboard_get_label_from_physical(Key keycode) const;
	void process_events();
	void force_process_and_drop_events();
	void set_native_icon(const String &filename);
	void set_icon(const Ref<Image> &image);
	int32_t create_status_indicator(const Ref<Texture2D> &icon, const String &tooltip, const Callable &callback);
	void status_indicator_set_icon(int32_t id, const Ref<Texture2D> &icon);
	void status_indicator_set_tooltip(int32_t id, const String &tooltip);
	void status_indicator_set_menu(int32_t id, const RID &menu_rid);
	void status_indicator_set_callback(int32_t id, const Callable &callback);
	Rect2 status_indicator_get_rect(int32_t id) const;
	void delete_status_indicator(int32_t id);
	int32_t tablet_get_driver_count() const;
	String tablet_get_driver_name(int32_t idx) const;
	String tablet_get_current_driver() const;
	void tablet_set_current_driver(const String &name);
	bool is_window_transparency_available() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

	~DisplayServer();

public:

};

} // namespace godot

VARIANT_ENUM_CAST(DisplayServer::Feature);
VARIANT_ENUM_CAST(DisplayServer::MouseMode);
VARIANT_ENUM_CAST(DisplayServer::ScreenOrientation);
VARIANT_ENUM_CAST(DisplayServer::VirtualKeyboardType);
VARIANT_ENUM_CAST(DisplayServer::CursorShape);
VARIANT_ENUM_CAST(DisplayServer::FileDialogMode);
VARIANT_ENUM_CAST(DisplayServer::WindowMode);
VARIANT_ENUM_CAST(DisplayServer::WindowFlags);
VARIANT_ENUM_CAST(DisplayServer::WindowEvent);
VARIANT_ENUM_CAST(DisplayServer::VSyncMode);
VARIANT_ENUM_CAST(DisplayServer::HandleType);
VARIANT_ENUM_CAST(DisplayServer::TTSUtteranceEvent);

#endif // ! GODOT_CPP_DISPLAY_SERVER_HPP