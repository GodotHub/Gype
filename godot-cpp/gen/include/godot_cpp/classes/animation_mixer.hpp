/**************************************************************************/
/*  animation_mixer.hpp                                                   */
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

#ifndef GODOT_CPP_ANIMATION_MIXER_HPP
#define GODOT_CPP_ANIMATION_MIXER_HPP

#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3.hpp>


#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Animation;
class AnimationLibrary;
class Object;

class AnimationMixer : public Node {
	GDEXTENSION_CLASS(AnimationMixer, Node)

public:
	enum AnimationCallbackModeProcess {
		ANIMATION_CALLBACK_MODE_PROCESS_PHYSICS = 0,
		ANIMATION_CALLBACK_MODE_PROCESS_IDLE = 1,
		ANIMATION_CALLBACK_MODE_PROCESS_MANUAL = 2,
	};

	enum AnimationCallbackModeMethod {
		ANIMATION_CALLBACK_MODE_METHOD_DEFERRED = 0,
		ANIMATION_CALLBACK_MODE_METHOD_IMMEDIATE = 1,
	};

	Error add_animation_library(const StringName &name, const Ref<AnimationLibrary> &library);
	void remove_animation_library(const StringName &name);
	void rename_animation_library(const StringName &name, const StringName &newname);
	bool has_animation_library(const StringName &name) const;
	Ref<AnimationLibrary> get_animation_library(const StringName &name) const;
	TypedArray<StringName> get_animation_library_list() const;
	bool has_animation(const StringName &name) const;
	Ref<Animation> get_animation(const StringName &name) const;
	PackedStringArray get_animation_list() const;
	void set_active(bool active);
	bool is_active() const;
	void set_deterministic(bool deterministic);
	bool is_deterministic() const;
	void set_root_node(const NodePath &path);
	NodePath get_root_node() const;
	void set_callback_mode_process(AnimationMixer::AnimationCallbackModeProcess mode);
	AnimationMixer::AnimationCallbackModeProcess get_callback_mode_process() const;
	void set_callback_mode_method(AnimationMixer::AnimationCallbackModeMethod mode);
	AnimationMixer::AnimationCallbackModeMethod get_callback_mode_method() const;
	void set_audio_max_polyphony(int32_t max_polyphony);
	int32_t get_audio_max_polyphony() const;
	void set_root_motion_track(const NodePath &path);
	NodePath get_root_motion_track() const;
	Vector3 get_root_motion_position() const;
	Quaternion get_root_motion_rotation() const;
	Vector3 get_root_motion_scale() const;
	Vector3 get_root_motion_position_accumulator() const;
	Quaternion get_root_motion_rotation_accumulator() const;
	Vector3 get_root_motion_scale_accumulator() const;
	void clear_caches();
	void advance(double delta);
	void set_reset_on_save_enabled(bool enabled);
	bool is_reset_on_save_enabled() const;
	StringName find_animation(const Ref<Animation> &animation) const;
	StringName find_animation_library(const Ref<Animation> &animation) const;
	virtual Variant _post_process_key_value(const Ref<Animation> &animation, int32_t track, const Variant &value, Object *object, int32_t object_idx) const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Node::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_post_process_key_value), decltype(&T::_post_process_key_value)>) {
			BIND_VIRTUAL_METHOD(T, _post_process_key_value);
		}
	}

public:
};

} // namespace godot

VARIANT_ENUM_CAST(AnimationMixer::AnimationCallbackModeProcess);
VARIANT_ENUM_CAST(AnimationMixer::AnimationCallbackModeMethod);

#endif // ! GODOT_CPP_ANIMATION_MIXER_HPP