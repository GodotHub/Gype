/**************************************************************************/
/*  animation_node_blend_space1d.hpp                                      */
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

#ifndef GODOT_CPP_ANIMATION_NODE_BLEND_SPACE1D_HPP
#define GODOT_CPP_ANIMATION_NODE_BLEND_SPACE1D_HPP

#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class AnimationNodeBlendSpace1D : public AnimationRootNode {
	GDEXTENSION_CLASS(AnimationNodeBlendSpace1D, AnimationRootNode)

public:

	enum BlendMode {
		BLEND_MODE_INTERPOLATED = 0,
		BLEND_MODE_DISCRETE = 1,
		BLEND_MODE_DISCRETE_CARRY = 2,
	};

	void add_blend_point(const Ref<AnimationRootNode> &node, double pos, int32_t at_index = -1);
	void set_blend_point_position(int32_t point, double pos);
	double get_blend_point_position(int32_t point) const;
	void set_blend_point_node(int32_t point, const Ref<AnimationRootNode> &node);
	Ref<AnimationRootNode> get_blend_point_node(int32_t point) const;
	void remove_blend_point(int32_t point);
	int32_t get_blend_point_count() const;
	void set_min_space(double min_space);
	double get_min_space() const;
	void set_max_space(double max_space);
	double get_max_space() const;
	void set_snap(double snap);
	double get_snap() const;
	void set_value_label(const String &text);
	String get_value_label() const;
	void set_blend_mode(AnimationNodeBlendSpace1D::BlendMode mode);
	AnimationNodeBlendSpace1D::BlendMode get_blend_mode() const;
	void set_use_sync(bool enable);
	bool is_using_sync() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		AnimationRootNode::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(AnimationNodeBlendSpace1D::BlendMode);

#endif // ! GODOT_CPP_ANIMATION_NODE_BLEND_SPACE1D_HPP