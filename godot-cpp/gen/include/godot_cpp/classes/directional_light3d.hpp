/**************************************************************************/
/*  directional_light3d.hpp                                               */
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

#ifndef GODOT_CPP_DIRECTIONAL_LIGHT3D_HPP
#define GODOT_CPP_DIRECTIONAL_LIGHT3D_HPP

#include <godot_cpp/classes/light3d.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class DirectionalLight3D : public Light3D {
	GDEXTENSION_CLASS(DirectionalLight3D, Light3D)

public:
	enum ShadowMode {
		SHADOW_ORTHOGONAL = 0,
		SHADOW_PARALLEL_2_SPLITS = 1,
		SHADOW_PARALLEL_4_SPLITS = 2,
	};

	enum SkyMode {
		SKY_MODE_LIGHT_AND_SKY = 0,
		SKY_MODE_LIGHT_ONLY = 1,
		SKY_MODE_SKY_ONLY = 2,
	};

	void set_shadow_mode(DirectionalLight3D::ShadowMode mode);
	DirectionalLight3D::ShadowMode get_shadow_mode() const;
	void set_blend_splits(bool enabled);
	bool is_blend_splits_enabled() const;
	void set_sky_mode(DirectionalLight3D::SkyMode mode);
	DirectionalLight3D::SkyMode get_sky_mode() const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Light3D::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

VARIANT_ENUM_CAST(DirectionalLight3D::ShadowMode);
VARIANT_ENUM_CAST(DirectionalLight3D::SkyMode);

#endif // ! GODOT_CPP_DIRECTIONAL_LIGHT3D_HPP