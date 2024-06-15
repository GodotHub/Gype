#include <godot_cpp/classes/editor_interface.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_command_palette.hpp>
#include <godot_cpp/classes/editor_file_system.hpp>
#include <godot_cpp/classes/editor_inspector.hpp>
#include <godot_cpp/classes/editor_paths.hpp>
#include <godot_cpp/classes/editor_resource_preview.hpp>
#include <godot_cpp/classes/editor_selection.hpp>
#include <godot_cpp/classes/editor_settings.hpp>
#include <godot_cpp/classes/file_system_dock.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_editor.hpp>
#include <godot_cpp/classes/sub_viewport.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_EditorInterface() {
	qjs::Value js_singleton = context->newObject();
    EditorInterface *singleton = EditorInterface::get_singleton();
    js_singleton.add("restart_editor", [singleton](bool save)->void{singleton->restart_editor(save);});
    js_singleton.add("get_command_palette", [singleton]()->EditorCommandPalette *{return singleton->get_command_palette();});
    js_singleton.add("get_resource_filesystem", [singleton]()->EditorFileSystem *{return singleton->get_resource_filesystem();});
    js_singleton.add("get_editor_paths", [singleton]()->EditorPaths *{return singleton->get_editor_paths();});
    js_singleton.add("get_resource_previewer", [singleton]()->EditorResourcePreview *{return singleton->get_resource_previewer();});
    js_singleton.add("get_selection", [singleton]()->EditorSelection *{return singleton->get_selection();});
    js_singleton.add("get_editor_settings", [singleton]()->Ref<EditorSettings>{return singleton->get_editor_settings();});
    js_singleton.add("make_mesh_previews", [singleton](const TypedArray<Mesh> & meshes,int32_t preview_size)->TypedArray<Texture2D>{return singleton->make_mesh_previews(meshes,preview_size);});
    js_singleton.add("set_plugin_enabled", [singleton](const String & plugin,bool enabled)->void{singleton->set_plugin_enabled(plugin,enabled);});
    js_singleton.add("is_plugin_enabled", [singleton](const String & plugin)->bool{return singleton->is_plugin_enabled(plugin);});
    js_singleton.add("get_editor_theme", [singleton]()->Ref<Theme>{return singleton->get_editor_theme();});
    js_singleton.add("get_base_control", [singleton]()->Control *{return singleton->get_base_control();});
    js_singleton.add("get_editor_main_screen", [singleton]()->VBoxContainer *{return singleton->get_editor_main_screen();});
    js_singleton.add("get_script_editor", [singleton]()->ScriptEditor *{return singleton->get_script_editor();});
    js_singleton.add("get_editor_viewport_2d", [singleton]()->SubViewport *{return singleton->get_editor_viewport_2d();});
    js_singleton.add("get_editor_viewport_3d", [singleton](int32_t idx)->SubViewport *{return singleton->get_editor_viewport_3d(idx);});
    js_singleton.add("set_main_screen_editor", [singleton](const String & name)->void{singleton->set_main_screen_editor(name);});
    js_singleton.add("set_distraction_free_mode", [singleton](bool enter)->void{singleton->set_distraction_free_mode(enter);});
    js_singleton.add("is_distraction_free_mode_enabled", [singleton]()->bool{return singleton->is_distraction_free_mode_enabled();});
    js_singleton.add("is_multi_window_enabled", [singleton]()->bool{return singleton->is_multi_window_enabled();});
    js_singleton.add("get_editor_scale", [singleton]()->double{return singleton->get_editor_scale();});
    js_singleton.add("popup_dialog", [singleton](Window * dialog,const Rect2i & rect)->void{singleton->popup_dialog(dialog,rect);});
    js_singleton.add("popup_dialog_centered", [singleton](Window * dialog,const Vector2i & minsize)->void{singleton->popup_dialog_centered(dialog,minsize);});
    js_singleton.add("popup_dialog_centered_ratio", [singleton](Window * dialog,double ratio)->void{singleton->popup_dialog_centered_ratio(dialog,ratio);});
    js_singleton.add("popup_dialog_centered_clamped", [singleton](Window * dialog,const Vector2i & minsize,double fallback_ratio)->void{singleton->popup_dialog_centered_clamped(dialog,minsize,fallback_ratio);});
    js_singleton.add("get_current_feature_profile", [singleton]()->String{return singleton->get_current_feature_profile();});
    js_singleton.add("set_current_feature_profile", [singleton](const String & profile_name)->void{singleton->set_current_feature_profile(profile_name);});
    js_singleton.add("popup_node_selector", [singleton](const Callable & callback,const TypedArray<StringName> & valid_types)->void{singleton->popup_node_selector(callback,valid_types);});
    js_singleton.add("popup_property_selector", [singleton](Object * object,const Callable & callback,const PackedInt32Array & type_filter)->void{singleton->popup_property_selector(object,callback,type_filter);});
    js_singleton.add("get_file_system_dock", [singleton]()->FileSystemDock *{return singleton->get_file_system_dock();});
    js_singleton.add("select_file", [singleton](const String & file)->void{singleton->select_file(file);});
    js_singleton.add("get_selected_paths", [singleton]()->PackedStringArray{return singleton->get_selected_paths();});
    js_singleton.add("get_current_path", [singleton]()->String{return singleton->get_current_path();});
    js_singleton.add("get_current_directory", [singleton]()->String{return singleton->get_current_directory();});
    js_singleton.add("get_inspector", [singleton]()->EditorInspector *{return singleton->get_inspector();});
    js_singleton.add("inspect_object", [singleton](Object * object,const String & for_property,bool inspector_only)->void{singleton->inspect_object(object,for_property,inspector_only);});
    js_singleton.add("edit_resource", [singleton](const Ref<Resource> & resource)->void{singleton->edit_resource(resource);});
    js_singleton.add("edit_node", [singleton](Node * node)->void{singleton->edit_node(node);});
    js_singleton.add("edit_script", [singleton](const Ref<Script> & script,int32_t line,int32_t column,bool grab_focus)->void{singleton->edit_script(script,line,column,grab_focus);});
    js_singleton.add("open_scene_from_path", [singleton](const String & scene_filepath)->void{singleton->open_scene_from_path(scene_filepath);});
    js_singleton.add("reload_scene_from_path", [singleton](const String & scene_filepath)->void{singleton->reload_scene_from_path(scene_filepath);});
    js_singleton.add("get_open_scenes", [singleton]()->PackedStringArray{return singleton->get_open_scenes();});
    js_singleton.add("get_edited_scene_root", [singleton]()->Node *{return singleton->get_edited_scene_root();});
    js_singleton.add("save_scene", [singleton]()->Error{return singleton->save_scene();});
    js_singleton.add("save_scene_as", [singleton](const String & path,bool with_preview)->void{singleton->save_scene_as(path,with_preview);});
    js_singleton.add("save_all_scenes", [singleton]()->void{singleton->save_all_scenes();});
    js_singleton.add("mark_scene_as_unsaved", [singleton]()->void{singleton->mark_scene_as_unsaved();});
    js_singleton.add("play_main_scene", [singleton]()->void{singleton->play_main_scene();});
    js_singleton.add("play_current_scene", [singleton]()->void{singleton->play_current_scene();});
    js_singleton.add("play_custom_scene", [singleton](const String & scene_filepath)->void{singleton->play_custom_scene(scene_filepath);});
    js_singleton.add("stop_playing_scene", [singleton]()->void{singleton->stop_playing_scene();});
    js_singleton.add("is_playing_scene", [singleton]()->bool{return singleton->is_playing_scene();});
    js_singleton.add("get_playing_scene", [singleton]()->String{return singleton->get_playing_scene();});
    js_singleton.add("set_movie_maker_enabled", [singleton](bool enabled)->void{singleton->set_movie_maker_enabled(enabled);});
    js_singleton.add("is_movie_maker_enabled", [singleton]()->bool{return singleton->is_movie_maker_enabled();});
    context->global()["EditorInterface"] = js_singleton;

}