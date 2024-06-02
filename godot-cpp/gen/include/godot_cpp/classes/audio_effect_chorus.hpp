/**************************************************************************/
/*  audio_effect_chorus.hpp                                               */
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

#ifndef GODOT_CPP_AUDIO_EFFECT_CHORUS_HPP
#define GODOT_CPP_AUDIO_EFFECT_CHORUS_HPP

#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/ref.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class AudioEffectChorus : public AudioEffect {
	GDEXTENSION_CLASS(AudioEffectChorus, AudioEffect)

public:
	void set_voice_count(int32_t voices);
	int32_t get_voice_count() const;
	void set_voice_delay_ms(int32_t voice_idx, double delay_ms);
	double get_voice_delay_ms(int32_t voice_idx) const;
	void set_voice_rate_hz(int32_t voice_idx, double rate_hz);
	double get_voice_rate_hz(int32_t voice_idx) const;
	void set_voice_depth_ms(int32_t voice_idx, double depth_ms);
	double get_voice_depth_ms(int32_t voice_idx) const;
	void set_voice_level_db(int32_t voice_idx, double level_db);
	double get_voice_level_db(int32_t voice_idx) const;
	void set_voice_cutoff_hz(int32_t voice_idx, double cutoff_hz);
	double get_voice_cutoff_hz(int32_t voice_idx) const;
	void set_voice_pan(int32_t voice_idx, double pan);
	double get_voice_pan(int32_t voice_idx) const;
	void set_wet(double amount);
	double get_wet() const;
	void set_dry(double amount);
	double get_dry() const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		AudioEffect::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

#endif // ! GODOT_CPP_AUDIO_EFFECT_CHORUS_HPP