/**************************************************************************/
/*  scene_tree.hpp                                                        */
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

#ifndef GODOT_CPP_SCENE_TREE_HPP
#define GODOT_CPP_SCENE_TREE_HPP

#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class MultiplayerAPI;
class Node;
class Object;
class PackedScene;
class SceneTreeTimer;
class String;
class StringName;
class Tween;
class Variant;
class Window;

class SceneTree : public MainLoop {
	GDEXTENSION_CLASS(SceneTree, MainLoop)

public:

	enum GroupCallFlags {
		GROUP_CALL_DEFAULT = 0,
		GROUP_CALL_REVERSE = 1,
		GROUP_CALL_DEFERRED = 2,
		GROUP_CALL_UNIQUE = 4,
	};

	Window *get_root() const;
	bool has_group(const StringName &name) const;
	bool is_auto_accept_quit() const;
	void set_auto_accept_quit(bool enabled);
	bool is_quit_on_go_back() const;
	void set_quit_on_go_back(bool enabled);
	void set_debug_collisions_hint(bool enable);
	bool is_debugging_collisions_hint() const;
	void set_debug_paths_hint(bool enable);
	bool is_debugging_paths_hint() const;
	void set_debug_navigation_hint(bool enable);
	bool is_debugging_navigation_hint() const;
	void set_edited_scene_root(Node *scene);
	Node *get_edited_scene_root() const;
	void set_pause(bool enable);
	bool is_paused() const;
	Ref<SceneTreeTimer> create_timer(double time_sec, bool process_always = true, bool process_in_physics = false, bool ignore_time_scale = false);
	Ref<Tween> create_tween();
	TypedArray<Tween> get_processed_tweens();
	int32_t get_node_count() const;
	int64_t get_frame() const;
	void quit(int32_t exit_code = 0);
	void set_physics_interpolation_enabled(bool enabled);
	bool is_physics_interpolation_enabled() const;
	void queue_delete(Object *obj);
	private: private: void call_group_flags_internal(const Variant **args, GDExtensionInt arg_count);
	public: void call_group_flags(int64_t flags, const StringName &group, const StringName &method, rest<Variant> args) {
		std::vector<Variant> variant_args;
		variant_args.push_back(Variant(flags));
		variant_args.push_back(Variant(group));
		variant_args.push_back(Variant(method));
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		call_group_flags_internal(call_args.data(), variant_args.size());
	}
	void notify_group_flags(uint32_t call_flags, const StringName &group, int32_t notification);
	void set_group_flags(uint32_t call_flags, const StringName &group, const String &property, const Variant &value);
	private: private: void call_group_internal(const Variant **args, GDExtensionInt arg_count);
	public: void call_group(const StringName &group, const StringName &method, rest<Variant> args) {
		std::vector<Variant> variant_args;
		variant_args.push_back(Variant(group));
		variant_args.push_back(Variant(method));
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		call_group_internal(call_args.data(), variant_args.size());
	}
	void notify_group(const StringName &group, int32_t notification);
	void set_group(const StringName &group, const String &property, const Variant &value);
	TypedArray<Node> get_nodes_in_group(const StringName &group);
	Node *get_first_node_in_group(const StringName &group);
	int32_t get_node_count_in_group(const StringName &group) const;
	void set_current_scene(Node *child_node);
	Node *get_current_scene() const;
	Error change_scene_to_file(const String &path);
	Error change_scene_to_packed(const Ref<PackedScene> &packed_scene);
	Error reload_current_scene();
	void unload_current_scene();
	void set_multiplayer(const Ref<MultiplayerAPI> &multiplayer, const NodePath &root_path = NodePath(""));
	Ref<MultiplayerAPI> get_multiplayer(const NodePath &for_path = NodePath("")) const;
	void set_multiplayer_poll_enabled(bool enabled);
	bool is_multiplayer_poll_enabled() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		MainLoop::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(SceneTree::GroupCallFlags);

#endif // ! GODOT_CPP_SCENE_TREE_HPP