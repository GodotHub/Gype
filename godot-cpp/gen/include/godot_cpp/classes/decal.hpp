/**************************************************************************/
/*  decal.hpp                                                             */
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

#ifndef GODOT_CPP_DECAL_HPP
#define GODOT_CPP_DECAL_HPP

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Texture2D;

class Decal : public VisualInstance3D {
	GDEXTENSION_CLASS(Decal, VisualInstance3D)

public:

	enum DecalTexture {
		TEXTURE_ALBEDO = 0,
		TEXTURE_NORMAL = 1,
		TEXTURE_ORM = 2,
		TEXTURE_EMISSION = 3,
		TEXTURE_MAX = 4,
	};

	void set_size(const Vector3 &size);
	Vector3 get_size() const;
	void set_texture(Decal::DecalTexture type, const Ref<Texture2D> &texture);
	Ref<Texture2D> get_texture(Decal::DecalTexture type) const;
	void set_emission_energy(double energy);
	double get_emission_energy() const;
	void set_albedo_mix(double energy);
	double get_albedo_mix() const;
	void set_modulate(const Color &color);
	Color get_modulate() const;
	void set_upper_fade(double fade);
	double get_upper_fade() const;
	void set_lower_fade(double fade);
	double get_lower_fade() const;
	void set_normal_fade(double fade);
	double get_normal_fade() const;
	void set_enable_distance_fade(bool enable);
	bool is_distance_fade_enabled() const;
	void set_distance_fade_begin(double distance);
	double get_distance_fade_begin() const;
	void set_distance_fade_length(double distance);
	double get_distance_fade_length() const;
	void set_cull_mask(uint32_t mask);
	uint32_t get_cull_mask() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		VisualInstance3D::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(Decal::DecalTexture);

#endif // ! GODOT_CPP_DECAL_HPP