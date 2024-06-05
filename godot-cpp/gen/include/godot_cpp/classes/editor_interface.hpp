/**************************************************************************/
/*  editor_interface.hpp                                                  */
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

#ifndef GODOT_CPP_EDITOR_INTERFACE_HPP
#define GODOT_CPP_EDITOR_INTERFACE_HPP

#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Control;
class EditorCommandPalette;
class EditorFileSystem;
class EditorInspector;
class EditorPaths;
class EditorResourcePreview;
class EditorSelection;
class EditorSettings;
class FileSystemDock;
class Mesh;
class Node;
class Resource;
class Script;
class ScriptEditor;
class SubViewport;
class Texture2D;
class Theme;
class VBoxContainer;
class Window;

class EditorInterface : public Object {
	GDEXTENSION_CLASS(EditorInterface, Object)

public:

	static EditorInterface *get_singleton();

	void restart_editor(bool save = true);
	EditorCommandPalette *get_command_palette() const;
	EditorFileSystem *get_resource_filesystem() const;
	EditorPaths *get_editor_paths() const;
	EditorResourcePreview *get_resource_previewer() const;
	EditorSelection *get_selection() const;
	Ref<EditorSettings> get_editor_settings() const;
	TypedArray<Texture2D> make_mesh_previews(const TypedArray<Mesh> &meshes, int32_t preview_size);
	void set_plugin_enabled(const String &plugin, bool enabled);
	bool is_plugin_enabled(const String &plugin) const;
	Ref<Theme> get_editor_theme() const;
	Control *get_base_control() const;
	VBoxContainer *get_editor_main_screen() const;
	ScriptEditor *get_script_editor() const;
	SubViewport *get_editor_viewport_2d() const;
	SubViewport *get_editor_viewport_3d(int32_t idx = 0) const;
	void set_main_screen_editor(const String &name);
	void set_distraction_free_mode(bool enter);
	bool is_distraction_free_mode_enabled() const;
	double get_editor_scale() const;
	void popup_dialog(Window *dialog, const Rect2i &rect = Rect2i(0, 0, 0, 0));
	void popup_dialog_centered(Window *dialog, const Vector2i &minsize = Vector2i(0, 0));
	void popup_dialog_centered_ratio(Window *dialog, double ratio = 0.8);
	void popup_dialog_centered_clamped(Window *dialog, const Vector2i &minsize = Vector2i(0, 0), double fallback_ratio = 0.75);
	String get_current_feature_profile() const;
	void set_current_feature_profile(const String &profile_name);
	FileSystemDock *get_file_system_dock() const;
	void select_file(const String &file);
	PackedStringArray get_selected_paths() const;
	String get_current_path() const;
	String get_current_directory() const;
	EditorInspector *get_inspector() const;
	void inspect_object(Object *object, const String &for_property = String(), bool inspector_only = false);
	void edit_resource(const Ref<Resource> &resource);
	void edit_node(Node *node);
	void edit_script(const Ref<Script> &script, int32_t line = -1, int32_t column = 0, bool grab_focus = true);
	void open_scene_from_path(const String &scene_filepath);
	void reload_scene_from_path(const String &scene_filepath);
	PackedStringArray get_open_scenes() const;
	Node *get_edited_scene_root() const;
	Error save_scene();
	void save_scene_as(const String &path, bool with_preview = true);
	void save_all_scenes();
	void mark_scene_as_unsaved();
	void play_main_scene();
	void play_current_scene();
	void play_custom_scene(const String &scene_filepath);
	void stop_playing_scene();
	bool is_playing_scene() const;
	String get_playing_scene() const;
	void set_movie_maker_enabled(bool enabled);
	bool is_movie_maker_enabled() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_EDITOR_INTERFACE_HPP