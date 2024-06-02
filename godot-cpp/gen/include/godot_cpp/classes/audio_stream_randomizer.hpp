/**************************************************************************/
/*  audio_stream_randomizer.hpp                                           */
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

#ifndef GODOT_CPP_AUDIO_STREAM_RANDOMIZER_HPP
#define GODOT_CPP_AUDIO_STREAM_RANDOMIZER_HPP

#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/ref.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class AudioStreamRandomizer : public AudioStream {
	GDEXTENSION_CLASS(AudioStreamRandomizer, AudioStream)

public:
	enum PlaybackMode {
		PLAYBACK_RANDOM_NO_REPEATS = 0,
		PLAYBACK_RANDOM = 1,
		PLAYBACK_SEQUENTIAL = 2,
	};

	void add_stream(int32_t index, const Ref<AudioStream> &stream, double weight = 1.0);
	void move_stream(int32_t index_from, int32_t index_to);
	void remove_stream(int32_t index);
	void set_stream(int32_t index, const Ref<AudioStream> &stream);
	Ref<AudioStream> get_stream(int32_t index) const;
	void set_stream_probability_weight(int32_t index, double weight);
	double get_stream_probability_weight(int32_t index) const;
	void set_streams_count(int32_t count);
	int32_t get_streams_count() const;
	void set_random_pitch(double scale);
	double get_random_pitch() const;
	void set_random_volume_offset_db(double db_offset);
	double get_random_volume_offset_db() const;
	void set_playback_mode(AudioStreamRandomizer::PlaybackMode mode);
	AudioStreamRandomizer::PlaybackMode get_playback_mode() const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		AudioStream::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

VARIANT_ENUM_CAST(AudioStreamRandomizer::PlaybackMode);

#endif // ! GODOT_CPP_AUDIO_STREAM_RANDOMIZER_HPP