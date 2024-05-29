/**************************************************************************/
/*  animation_node.hpp                                                    */
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

#ifndef GODOT_CPP_ANIMATION_NODE_HPP
#define GODOT_CPP_ANIMATION_NODE_HPP

#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class NodePath;
class StringName;

class AnimationNode : public Resource {
	GDEXTENSION_CLASS(AnimationNode, Resource)

public:

	enum FilterAction {
		FILTER_IGNORE = 0,
		FILTER_PASS = 1,
		FILTER_STOP = 2,
		FILTER_BLEND = 3,
	};

	bool add_input(const String &name);
	void remove_input(int32_t index);
	bool set_input_name(int32_t input, const String &name);
	String get_input_name(int32_t input) const;
	int32_t get_input_count() const;
	int32_t find_input(const String &name) const;
	void set_filter_path(const NodePath &path, bool enable);
	bool is_path_filtered(const NodePath &path) const;
	void set_filter_enabled(bool enable);
	bool is_filter_enabled() const;
	void blend_animation(const StringName &animation, double time, double delta, bool seeked, bool is_external_seeking, double blend, Animation::LoopedFlag looped_flag = (Animation::LoopedFlag)0);
	double blend_node(const StringName &name, const Ref<AnimationNode> &node, double time, bool seek, bool is_external_seeking, double blend, AnimationNode::FilterAction filter = (AnimationNode::FilterAction)0, bool sync = true, bool test_only = false);
	double blend_input(int32_t input_index, double time, bool seek, bool is_external_seeking, double blend, AnimationNode::FilterAction filter = (AnimationNode::FilterAction)0, bool sync = true, bool test_only = false);
	void set_parameter(const StringName &name, const Variant &value);
	Variant get_parameter(const StringName &name) const;
	virtual Dictionary _get_child_nodes() const;
	virtual Array _get_parameter_list() const;
	virtual Ref<AnimationNode> _get_child_by_name(const StringName &name) const;
	virtual Variant _get_parameter_default_value(const StringName &parameter) const;
	virtual bool _is_parameter_read_only(const StringName &parameter) const;
	virtual double _process(double time, bool seek, bool is_external_seeking, bool test_only) const;
	virtual String _get_caption() const;
	virtual bool _has_filter() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Resource::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_get_child_nodes),decltype(&T::_get_child_nodes)>) {
			BIND_VIRTUAL_METHOD(T, _get_child_nodes);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_parameter_list),decltype(&T::_get_parameter_list)>) {
			BIND_VIRTUAL_METHOD(T, _get_parameter_list);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_child_by_name),decltype(&T::_get_child_by_name)>) {
			BIND_VIRTUAL_METHOD(T, _get_child_by_name);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_parameter_default_value),decltype(&T::_get_parameter_default_value)>) {
			BIND_VIRTUAL_METHOD(T, _get_parameter_default_value);
		}
		if constexpr (!std::is_same_v<decltype(&B::_is_parameter_read_only),decltype(&T::_is_parameter_read_only)>) {
			BIND_VIRTUAL_METHOD(T, _is_parameter_read_only);
		}
		if constexpr (!std::is_same_v<decltype(&B::_process),decltype(&T::_process)>) {
			BIND_VIRTUAL_METHOD(T, _process);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_caption),decltype(&T::_get_caption)>) {
			BIND_VIRTUAL_METHOD(T, _get_caption);
		}
		if constexpr (!std::is_same_v<decltype(&B::_has_filter),decltype(&T::_has_filter)>) {
			BIND_VIRTUAL_METHOD(T, _has_filter);
		}
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(AnimationNode::FilterAction);

#endif // ! GODOT_CPP_ANIMATION_NODE_HPP