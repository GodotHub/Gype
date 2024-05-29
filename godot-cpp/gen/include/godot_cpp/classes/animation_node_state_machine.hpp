/**************************************************************************/
/*  animation_node_state_machine.hpp                                      */
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

#ifndef GODOT_CPP_ANIMATION_NODE_STATE_MACHINE_HPP
#define GODOT_CPP_ANIMATION_NODE_STATE_MACHINE_HPP

#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class AnimationNode;
class AnimationNodeStateMachineTransition;

class AnimationNodeStateMachine : public AnimationRootNode {
	GDEXTENSION_CLASS(AnimationNodeStateMachine, AnimationRootNode)

public:

	enum StateMachineType {
		STATE_MACHINE_TYPE_ROOT = 0,
		STATE_MACHINE_TYPE_NESTED = 1,
		STATE_MACHINE_TYPE_GROUPED = 2,
	};

	void add_node(const StringName &name, const Ref<AnimationNode> &node, const Vector2 &position = Vector2(0, 0));
	void replace_node(const StringName &name, const Ref<AnimationNode> &node);
	Ref<AnimationNode> get_node(const StringName &name) const;
	void remove_node(const StringName &name);
	void rename_node(const StringName &name, const StringName &new_name);
	bool has_node(const StringName &name) const;
	StringName get_node_name(const Ref<AnimationNode> &node) const;
	void set_node_position(const StringName &name, const Vector2 &position);
	Vector2 get_node_position(const StringName &name) const;
	bool has_transition(const StringName &from, const StringName &to) const;
	void add_transition(const StringName &from, const StringName &to, const Ref<AnimationNodeStateMachineTransition> &transition);
	Ref<AnimationNodeStateMachineTransition> get_transition(int32_t idx) const;
	StringName get_transition_from(int32_t idx) const;
	StringName get_transition_to(int32_t idx) const;
	int32_t get_transition_count() const;
	void remove_transition_by_index(int32_t idx);
	void remove_transition(const StringName &from, const StringName &to);
	void set_graph_offset(const Vector2 &offset);
	Vector2 get_graph_offset() const;
	void set_state_machine_type(AnimationNodeStateMachine::StateMachineType state_machine_type);
	AnimationNodeStateMachine::StateMachineType get_state_machine_type() const;
	void set_allow_transition_to_self(bool enable);
	bool is_allow_transition_to_self() const;
	void set_reset_ends(bool enable);
	bool are_ends_reset() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		AnimationRootNode::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(AnimationNodeStateMachine::StateMachineType);

#endif // ! GODOT_CPP_ANIMATION_NODE_STATE_MACHINE_HPP