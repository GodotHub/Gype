/**************************************************************************/
/*  animation_player.hpp                                                  */
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

#ifndef GODOT_CPP_ANIMATION_PLAYER_HPP
#define GODOT_CPP_ANIMATION_PLAYER_HPP

#include <godot_cpp/classes/animation_mixer.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class AnimationPlayer : public AnimationMixer {
	GDEXTENSION_CLASS(AnimationPlayer, AnimationMixer)

public:

	enum AnimationProcessCallback {
		ANIMATION_PROCESS_PHYSICS = 0,
		ANIMATION_PROCESS_IDLE = 1,
		ANIMATION_PROCESS_MANUAL = 2,
	};

	enum AnimationMethodCallMode {
		ANIMATION_METHOD_CALL_DEFERRED = 0,
		ANIMATION_METHOD_CALL_IMMEDIATE = 1,
	};

	void animation_set_next(const StringName &animation_from, const StringName &animation_to);
	StringName animation_get_next(const StringName &animation_from) const;
	void set_blend_time(const StringName &animation_from, const StringName &animation_to, double sec);
	double get_blend_time(const StringName &animation_from, const StringName &animation_to) const;
	void set_default_blend_time(double sec);
	double get_default_blend_time() const;
	void play(const StringName &name = String(), double custom_blend = -1, double custom_speed = 1.0, bool from_end = false);
	void play_backwards(const StringName &name = String(), double custom_blend = -1);
	void pause();
	void stop(bool keep_state = false);
	bool is_playing() const;
	void set_current_animation(const String &animation);
	String get_current_animation() const;
	void set_assigned_animation(const String &animation);
	String get_assigned_animation() const;
	void queue(const StringName &name);
	PackedStringArray get_queue();
	void clear_queue();
	void set_speed_scale(double speed);
	double get_speed_scale() const;
	double get_playing_speed() const;
	void set_autoplay(const String &name);
	String get_autoplay() const;
	void set_movie_quit_on_finish_enabled(bool enabled);
	bool is_movie_quit_on_finish_enabled() const;
	double get_current_animation_position() const;
	double get_current_animation_length() const;
	void seek(double seconds, bool update = false, bool update_only = false);
	void set_process_callback(AnimationPlayer::AnimationProcessCallback mode);
	AnimationPlayer::AnimationProcessCallback get_process_callback() const;
	void set_method_call_mode(AnimationPlayer::AnimationMethodCallMode mode);
	AnimationPlayer::AnimationMethodCallMode get_method_call_mode() const;
	void set_root(const NodePath &path);
	NodePath get_root() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		AnimationMixer::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(AnimationPlayer::AnimationProcessCallback);
VARIANT_ENUM_CAST(AnimationPlayer::AnimationMethodCallMode);

#endif // ! GODOT_CPP_ANIMATION_PLAYER_HPP