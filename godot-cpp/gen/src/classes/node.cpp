/**************************************************************************/
/*  node.cpp                                                              */
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

#include <godot_cpp/classes/node.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/scene_tree.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/window.hpp>

namespace godot {

const int Node::NOTIFICATION_ENTER_TREE = 10;
const int Node::NOTIFICATION_EXIT_TREE = 11;
const int Node::NOTIFICATION_MOVED_IN_PARENT = 12;
const int Node::NOTIFICATION_READY = 13;
const int Node::NOTIFICATION_PAUSED = 14;
const int Node::NOTIFICATION_UNPAUSED = 15;
const int Node::NOTIFICATION_PHYSICS_PROCESS = 16;
const int Node::NOTIFICATION_PROCESS = 17;
const int Node::NOTIFICATION_PARENTED = 18;
const int Node::NOTIFICATION_UNPARENTED = 19;
const int Node::NOTIFICATION_SCENE_INSTANTIATED = 20;
const int Node::NOTIFICATION_DRAG_BEGIN = 21;
const int Node::NOTIFICATION_DRAG_END = 22;
const int Node::NOTIFICATION_PATH_RENAMED = 23;
const int Node::NOTIFICATION_CHILD_ORDER_CHANGED = 24;
const int Node::NOTIFICATION_INTERNAL_PROCESS = 25;
const int Node::NOTIFICATION_INTERNAL_PHYSICS_PROCESS = 26;
const int Node::NOTIFICATION_POST_ENTER_TREE = 27;
const int Node::NOTIFICATION_DISABLED = 28;
const int Node::NOTIFICATION_ENABLED = 29;
const int Node::NOTIFICATION_RESET_PHYSICS_INTERPOLATION = 2001;
const int Node::NOTIFICATION_EDITOR_PRE_SAVE = 9001;
const int Node::NOTIFICATION_EDITOR_POST_SAVE = 9002;
const int Node::NOTIFICATION_WM_MOUSE_ENTER = 1002;
const int Node::NOTIFICATION_WM_MOUSE_EXIT = 1003;
const int Node::NOTIFICATION_WM_WINDOW_FOCUS_IN = 1004;
const int Node::NOTIFICATION_WM_WINDOW_FOCUS_OUT = 1005;
const int Node::NOTIFICATION_WM_CLOSE_REQUEST = 1006;
const int Node::NOTIFICATION_WM_GO_BACK_REQUEST = 1007;
const int Node::NOTIFICATION_WM_SIZE_CHANGED = 1008;
const int Node::NOTIFICATION_WM_DPI_CHANGE = 1009;
const int Node::NOTIFICATION_VP_MOUSE_ENTER = 1010;
const int Node::NOTIFICATION_VP_MOUSE_EXIT = 1011;
const int Node::NOTIFICATION_OS_MEMORY_WARNING = 2009;
const int Node::NOTIFICATION_TRANSLATION_CHANGED = 2010;
const int Node::NOTIFICATION_WM_ABOUT = 2011;
const int Node::NOTIFICATION_CRASH = 2012;
const int Node::NOTIFICATION_OS_IME_UPDATE = 2013;
const int Node::NOTIFICATION_APPLICATION_RESUMED = 2014;
const int Node::NOTIFICATION_APPLICATION_PAUSED = 2015;
const int Node::NOTIFICATION_APPLICATION_FOCUS_IN = 2016;
const int Node::NOTIFICATION_APPLICATION_FOCUS_OUT = 2017;
const int Node::NOTIFICATION_TEXT_SERVER_CHANGED = 2018;

void Node::print_orphan_nodes() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("print_orphan_nodes")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, nullptr);
}

void Node::add_sibling(Node *sibling, bool force_readable_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("add_sibling")._native_ptr(), 2570952461);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t force_readable_name_encoded;
	PtrToArg<bool>::encode(force_readable_name, &force_readable_name_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (sibling != nullptr ? &sibling->_owner : nullptr), &force_readable_name_encoded);
}

void Node::set_name(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_name")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

StringName Node::get_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_name")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void Node::add_child(Node *node, bool force_readable_name, Node::InternalMode internal) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("add_child")._native_ptr(), 3863233950);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t force_readable_name_encoded;
	PtrToArg<bool>::encode(force_readable_name, &force_readable_name_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr), &force_readable_name_encoded, &internal);
}

void Node::remove_child(Node *node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("remove_child")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr));
}

void Node::reparent(Node *new_parent, bool keep_global_transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("reparent")._native_ptr(), 3685795103);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t keep_global_transform_encoded;
	PtrToArg<bool>::encode(keep_global_transform, &keep_global_transform_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (new_parent != nullptr ? &new_parent->_owner : nullptr), &keep_global_transform_encoded);
}

int32_t Node::get_child_count(bool include_internal) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_child_count")._native_ptr(), 894402480);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int8_t include_internal_encoded;
	PtrToArg<bool>::encode(include_internal, &include_internal_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &include_internal_encoded);
}

TypedArray<Node> Node::get_children(bool include_internal) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_children")._native_ptr(), 873284517);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Node>());
	int8_t include_internal_encoded;
	PtrToArg<bool>::encode(include_internal, &include_internal_encoded);
	return internal::_call_native_mb_ret<TypedArray<Node>>(_gde_method_bind, _owner, &include_internal_encoded);
}

Node *Node::get_child(int32_t idx, bool include_internal) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_child")._native_ptr(), 541253412);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t include_internal_encoded;
	PtrToArg<bool>::encode(include_internal, &include_internal_encoded);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner, &idx_encoded, &include_internal_encoded);
}

bool Node::has_node(const NodePath &path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("has_node")._native_ptr(), 861721659);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &path);
}

Node *Node::get_node(const NodePath &path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_node")._native_ptr(), 2734337346);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner, &path);
}

Node *Node::get_node_or_null(const NodePath &path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_node_or_null")._native_ptr(), 2734337346);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner, &path);
}

Node *Node::get_parent() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_parent")._native_ptr(), 3160264692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner);
}

Node *Node::find_child(const String &pattern, bool recursive, bool owned) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("find_child")._native_ptr(), 2008217037);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int8_t recursive_encoded;
	PtrToArg<bool>::encode(recursive, &recursive_encoded);
	int8_t owned_encoded;
	PtrToArg<bool>::encode(owned, &owned_encoded);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner, &pattern, &recursive_encoded, &owned_encoded);
}

TypedArray<Node> Node::find_children(const String &pattern, const String &type, bool recursive, bool owned) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("find_children")._native_ptr(), 2560337219);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Node>());
	int8_t recursive_encoded;
	PtrToArg<bool>::encode(recursive, &recursive_encoded);
	int8_t owned_encoded;
	PtrToArg<bool>::encode(owned, &owned_encoded);
	return internal::_call_native_mb_ret<TypedArray<Node>>(_gde_method_bind, _owner, &pattern, &type, &recursive_encoded, &owned_encoded);
}

Node *Node::find_parent(const String &pattern) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("find_parent")._native_ptr(), 1140089439);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner, &pattern);
}

bool Node::has_node_and_resource(const NodePath &path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("has_node_and_resource")._native_ptr(), 861721659);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &path);
}

Array Node::get_node_and_resource(const NodePath &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_node_and_resource")._native_ptr(), 502563882);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &path);
}

bool Node::is_inside_tree() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_inside_tree")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool Node::is_part_of_edited_scene() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_part_of_edited_scene")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool Node::is_ancestor_of(Node *node) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_ancestor_of")._native_ptr(), 3093956946);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr));
}

bool Node::is_greater_than(Node *node) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_greater_than")._native_ptr(), 3093956946);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr));
}

NodePath Node::get_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_path")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

NodePath Node::get_path_to(Node *node, bool use_unique_path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_path_to")._native_ptr(), 498846349);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	int8_t use_unique_path_encoded;
	PtrToArg<bool>::encode(use_unique_path, &use_unique_path_encoded);
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr), &use_unique_path_encoded);
}

void Node::add_to_group(const StringName &group, bool persistent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("add_to_group")._native_ptr(), 3683006648);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t persistent_encoded;
	PtrToArg<bool>::encode(persistent, &persistent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &group, &persistent_encoded);
}

void Node::remove_from_group(const StringName &group) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("remove_from_group")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &group);
}

bool Node::is_in_group(const StringName &group) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_in_group")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &group);
}

void Node::move_child(Node *child_node, int32_t to_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("move_child")._native_ptr(), 3315886247);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t to_index_encoded;
	PtrToArg<int64_t>::encode(to_index, &to_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (child_node != nullptr ? &child_node->_owner : nullptr), &to_index_encoded);
}

TypedArray<StringName> Node::get_groups() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_groups")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<StringName>());
	return internal::_call_native_mb_ret<TypedArray<StringName>>(_gde_method_bind, _owner);
}

void Node::set_owner(Node *owner) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_owner")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (owner != nullptr ? &owner->_owner : nullptr));
}

Node *Node::get_owner() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_owner")._native_ptr(), 3160264692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner);
}

int32_t Node::get_index(bool include_internal) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_index")._native_ptr(), 894402480);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int8_t include_internal_encoded;
	PtrToArg<bool>::encode(include_internal, &include_internal_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &include_internal_encoded);
}

void Node::print_tree() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("print_tree")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Node::print_tree_pretty() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("print_tree_pretty")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

String Node::get_tree_string() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_tree_string")._native_ptr(), 2841200299);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String Node::get_tree_string_pretty() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_tree_string_pretty")._native_ptr(), 2841200299);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void Node::set_scene_file_path(const String &scene_file_path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_scene_file_path")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scene_file_path);
}

String Node::get_scene_file_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_scene_file_path")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void Node::propagate_notification(int32_t what) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("propagate_notification")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t what_encoded;
	PtrToArg<int64_t>::encode(what, &what_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &what_encoded);
}

void Node::propagate_call(const StringName &method, const Array &args, bool parent_first) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("propagate_call")._native_ptr(), 1871007965);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t parent_first_encoded;
	PtrToArg<bool>::encode(parent_first, &parent_first_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &method, &args, &parent_first_encoded);
}

void Node::set_physics_process(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_physics_process")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

double Node::get_physics_process_delta_time() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_physics_process_delta_time")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

bool Node::is_physics_processing() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_physics_processing")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double Node::get_process_delta_time() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_process_delta_time")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Node::set_process(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_process")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void Node::set_process_priority(int32_t priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_process_priority")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t priority_encoded;
	PtrToArg<int64_t>::encode(priority, &priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &priority_encoded);
}

int32_t Node::get_process_priority() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_process_priority")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Node::set_physics_process_priority(int32_t priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_physics_process_priority")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t priority_encoded;
	PtrToArg<int64_t>::encode(priority, &priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &priority_encoded);
}

int32_t Node::get_physics_process_priority() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_physics_process_priority")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool Node::is_processing() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_processing")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Node::set_process_input(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_process_input")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Node::is_processing_input() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_processing_input")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Node::set_process_shortcut_input(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_process_shortcut_input")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Node::is_processing_shortcut_input() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_processing_shortcut_input")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Node::set_process_unhandled_input(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_process_unhandled_input")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Node::is_processing_unhandled_input() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_processing_unhandled_input")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Node::set_process_unhandled_key_input(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_process_unhandled_key_input")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Node::is_processing_unhandled_key_input() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_processing_unhandled_key_input")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Node::set_process_mode(Node::ProcessMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_process_mode")._native_ptr(), 1841290486);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Node::ProcessMode Node::get_process_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_process_mode")._native_ptr(), 739966102);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Node::ProcessMode(0));
	return (Node::ProcessMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool Node::can_process() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("can_process")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Node::set_process_thread_group(Node::ProcessThreadGroup mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_process_thread_group")._native_ptr(), 2275442745);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Node::ProcessThreadGroup Node::get_process_thread_group() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_process_thread_group")._native_ptr(), 1866404740);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Node::ProcessThreadGroup(0));
	return (Node::ProcessThreadGroup)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Node::set_process_thread_messages(BitField<Node::ProcessThreadMessages> flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_process_thread_messages")._native_ptr(), 1357280998);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flags);
}

BitField<Node::ProcessThreadMessages> Node::get_process_thread_messages() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_process_thread_messages")._native_ptr(), 4228993612);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<Node::ProcessThreadMessages>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Node::set_process_thread_group_order(int32_t order) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_process_thread_group_order")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t order_encoded;
	PtrToArg<int64_t>::encode(order, &order_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &order_encoded);
}

int32_t Node::get_process_thread_group_order() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_process_thread_group_order")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Node::set_display_folded(bool fold) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_display_folded")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t fold_encoded;
	PtrToArg<bool>::encode(fold, &fold_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fold_encoded);
}

bool Node::is_displayed_folded() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_displayed_folded")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Node::set_process_internal(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_process_internal")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Node::is_processing_internal() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_processing_internal")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Node::set_physics_process_internal(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_physics_process_internal")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Node::is_physics_processing_internal() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_physics_processing_internal")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Node::set_physics_interpolation_mode(Node::PhysicsInterpolationMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_physics_interpolation_mode")._native_ptr(), 3202404928);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Node::PhysicsInterpolationMode Node::get_physics_interpolation_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_physics_interpolation_mode")._native_ptr(), 2920385216);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Node::PhysicsInterpolationMode(0));
	return (Node::PhysicsInterpolationMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool Node::is_physics_interpolated() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_physics_interpolated")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool Node::is_physics_interpolated_and_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_physics_interpolated_and_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Node::reset_physics_interpolation() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("reset_physics_interpolation")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Node::set_auto_translate_mode(Node::AutoTranslateMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_auto_translate_mode")._native_ptr(), 776149714);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Node::AutoTranslateMode Node::get_auto_translate_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_auto_translate_mode")._native_ptr(), 2498906432);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Node::AutoTranslateMode(0));
	return (Node::AutoTranslateMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Window *Node::get_window() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_window")._native_ptr(), 1757182445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Window>(_gde_method_bind, _owner);
}

Window *Node::get_last_exclusive_window() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_last_exclusive_window")._native_ptr(), 1757182445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Window>(_gde_method_bind, _owner);
}

SceneTree *Node::get_tree() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_tree")._native_ptr(), 2958820483);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<SceneTree>(_gde_method_bind, _owner);
}

Ref<Tween> Node::create_tween() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("create_tween")._native_ptr(), 3426978995);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Tween>());
	return Ref<Tween>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Tween>(_gde_method_bind, _owner));
}

Node *Node::duplicate(int32_t flags) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("duplicate")._native_ptr(), 3511555459);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner, &flags_encoded);
}

void Node::replace_by(Node *node, bool keep_groups) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("replace_by")._native_ptr(), 2570952461);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t keep_groups_encoded;
	PtrToArg<bool>::encode(keep_groups, &keep_groups_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr), &keep_groups_encoded);
}

void Node::set_scene_instance_load_placeholder(bool load_placeholder) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_scene_instance_load_placeholder")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t load_placeholder_encoded;
	PtrToArg<bool>::encode(load_placeholder, &load_placeholder_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &load_placeholder_encoded);
}

bool Node::get_scene_instance_load_placeholder() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_scene_instance_load_placeholder")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Node::set_editable_instance(Node *node, bool is_editable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_editable_instance")._native_ptr(), 2731852923);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t is_editable_encoded;
	PtrToArg<bool>::encode(is_editable, &is_editable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr), &is_editable_encoded);
}

bool Node::is_editable_instance(Node *node) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_editable_instance")._native_ptr(), 3093956946);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr));
}

Viewport *Node::get_viewport() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_viewport")._native_ptr(), 3596683776);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Viewport>(_gde_method_bind, _owner);
}

void Node::queue_free() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("queue_free")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Node::request_ready() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("request_ready")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool Node::is_node_ready() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_node_ready")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Node::set_multiplayer_authority(int32_t id, bool recursive) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_multiplayer_authority")._native_ptr(), 972357352);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int8_t recursive_encoded;
	PtrToArg<bool>::encode(recursive, &recursive_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded, &recursive_encoded);
}

int32_t Node::get_multiplayer_authority() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_multiplayer_authority")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool Node::is_multiplayer_authority() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_multiplayer_authority")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Ref<MultiplayerAPI> Node::get_multiplayer() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_multiplayer")._native_ptr(), 406750475);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<MultiplayerAPI>());
	return Ref<MultiplayerAPI>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<MultiplayerAPI>(_gde_method_bind, _owner));
}

void Node::rpc_config(const StringName &method, const Variant &config) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("rpc_config")._native_ptr(), 3776071444);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &method, &config);
}

void Node::set_editor_description(const String &editor_description) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_editor_description")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &editor_description);
}

String Node::get_editor_description() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("get_editor_description")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void Node::set_unique_name_in_owner(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_unique_name_in_owner")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Node::is_unique_name_in_owner() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("is_unique_name_in_owner")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

String Node::atr(const String &message, const StringName &context) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("atr")._native_ptr(), 3344478075);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &message, &context);
}

String Node::atr_n(const String &message, const StringName &plural_message, int32_t n, const StringName &context) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("atr_n")._native_ptr(), 259354841);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t n_encoded;
	PtrToArg<int64_t>::encode(n, &n_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &message, &plural_message, &n_encoded, &context);
}

Error Node::rpc_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("rpc")._native_ptr(), 4047867050);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
	return VariantCaster<Error>::cast(ret);
}

Error Node::rpc_id_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("rpc_id")._native_ptr(), 361499283);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
	return VariantCaster<Error>::cast(ret);
}

void Node::update_configuration_warnings() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("update_configuration_warnings")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Variant Node::call_deferred_thread_group_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("call_deferred_thread_group")._native_ptr(), 3400424181);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
	return ret;
}

void Node::set_deferred_thread_group(const StringName &property, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_deferred_thread_group")._native_ptr(), 3776071444);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &property, &value);
}

void Node::notify_deferred_thread_group(int32_t what) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("notify_deferred_thread_group")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t what_encoded;
	PtrToArg<int64_t>::encode(what, &what_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &what_encoded);
}

Variant Node::call_thread_safe_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("call_thread_safe")._native_ptr(), 3400424181);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
	return ret;
}

void Node::set_thread_safe(const StringName &property, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("set_thread_safe")._native_ptr(), 3776071444);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &property, &value);
}

void Node::notify_thread_safe(int32_t what) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Node::get_class_static()._native_ptr(), StringName("notify_thread_safe")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t what_encoded;
	PtrToArg<int64_t>::encode(what, &what_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &what_encoded);
}

void Node::_process(double delta) {}

void Node::_physics_process(double delta) {}

void Node::_enter_tree() {}

void Node::_exit_tree() {}

void Node::_ready() {}

PackedStringArray Node::_get_configuration_warnings() const {
	return PackedStringArray();
}

void Node::_input(const Ref<InputEvent> &event) {}

void Node::_shortcut_input(const Ref<InputEvent> &event) {}

void Node::_unhandled_input(const Ref<InputEvent> &event) {}

void Node::_unhandled_key_input(const Ref<InputEvent> &event) {}


} // namespace godot 