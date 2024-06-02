/**************************************************************************/
/*  multiplayer_synchronizer.hpp                                          */
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

#ifndef GODOT_CPP_MULTIPLAYER_SYNCHRONIZER_HPP
#define GODOT_CPP_MULTIPLAYER_SYNCHRONIZER_HPP

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/node_path.hpp>


#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Callable;
class SceneReplicationConfig;

class MultiplayerSynchronizer : public Node {
	GDEXTENSION_CLASS(MultiplayerSynchronizer, Node)

public:
	enum VisibilityUpdateMode {
		VISIBILITY_PROCESS_IDLE = 0,
		VISIBILITY_PROCESS_PHYSICS = 1,
		VISIBILITY_PROCESS_NONE = 2,
	};

	void set_root_path(const NodePath &path);
	NodePath get_root_path() const;
	void set_replication_interval(double milliseconds);
	double get_replication_interval() const;
	void set_delta_interval(double milliseconds);
	double get_delta_interval() const;
	void set_replication_config(const Ref<SceneReplicationConfig> &config);
	Ref<SceneReplicationConfig> get_replication_config();
	void set_visibility_update_mode(MultiplayerSynchronizer::VisibilityUpdateMode mode);
	MultiplayerSynchronizer::VisibilityUpdateMode get_visibility_update_mode() const;
	void update_visibility(int32_t for_peer = 0);
	void set_visibility_public(bool visible);
	bool is_visibility_public() const;
	void add_visibility_filter(const Callable &filter);
	void remove_visibility_filter(const Callable &filter);
	void set_visibility_for(int32_t peer, bool visible);
	bool get_visibility_for(int32_t peer) const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Node::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

VARIANT_ENUM_CAST(MultiplayerSynchronizer::VisibilityUpdateMode);

#endif // ! GODOT_CPP_MULTIPLAYER_SYNCHRONIZER_HPP