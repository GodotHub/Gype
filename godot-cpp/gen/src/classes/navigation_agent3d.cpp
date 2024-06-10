/**************************************************************************/
/*  navigation_agent3d.cpp                                                */
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

#include <godot_cpp/classes/navigation_agent3d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/navigation_path_query_result3d.hpp>

namespace godot {

RID NavigationAgent3D::get_rid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_rid")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_avoidance_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_avoidance_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool NavigationAgent3D::get_avoidance_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_avoidance_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_path_desired_distance(double desired_distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_path_desired_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double desired_distance_encoded;
	PtrToArg<double>::encode(desired_distance, &desired_distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &desired_distance_encoded);
}

double NavigationAgent3D::get_path_desired_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_path_desired_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_target_desired_distance(double desired_distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_target_desired_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double desired_distance_encoded;
	PtrToArg<double>::encode(desired_distance, &desired_distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &desired_distance_encoded);
}

double NavigationAgent3D::get_target_desired_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_target_desired_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_radius(double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

double NavigationAgent3D::get_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_height(double height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_height")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double height_encoded;
	PtrToArg<double>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &height_encoded);
}

double NavigationAgent3D::get_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_height")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_path_height_offset(double path_height_offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_path_height_offset")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double path_height_offset_encoded;
	PtrToArg<double>::encode(path_height_offset, &path_height_offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path_height_offset_encoded);
}

double NavigationAgent3D::get_path_height_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_path_height_offset")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_use_3d_avoidance(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_use_3d_avoidance")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool NavigationAgent3D::get_use_3d_avoidance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_use_3d_avoidance")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_keep_y_velocity(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_keep_y_velocity")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool NavigationAgent3D::get_keep_y_velocity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_keep_y_velocity")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_neighbor_distance(double neighbor_distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_neighbor_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double neighbor_distance_encoded;
	PtrToArg<double>::encode(neighbor_distance, &neighbor_distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &neighbor_distance_encoded);
}

double NavigationAgent3D::get_neighbor_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_neighbor_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_max_neighbors(int32_t max_neighbors) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_max_neighbors")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_neighbors_encoded;
	PtrToArg<int64_t>::encode(max_neighbors, &max_neighbors_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_neighbors_encoded);
}

int32_t NavigationAgent3D::get_max_neighbors() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_max_neighbors")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_time_horizon_agents(double time_horizon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_time_horizon_agents")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double time_horizon_encoded;
	PtrToArg<double>::encode(time_horizon, &time_horizon_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &time_horizon_encoded);
}

double NavigationAgent3D::get_time_horizon_agents() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_time_horizon_agents")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_time_horizon_obstacles(double time_horizon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_time_horizon_obstacles")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double time_horizon_encoded;
	PtrToArg<double>::encode(time_horizon, &time_horizon_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &time_horizon_encoded);
}

double NavigationAgent3D::get_time_horizon_obstacles() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_time_horizon_obstacles")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_max_speed(double max_speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_max_speed")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double max_speed_encoded;
	PtrToArg<double>::encode(max_speed, &max_speed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_speed_encoded);
}

double NavigationAgent3D::get_max_speed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_max_speed")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_path_max_distance(double max_speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_path_max_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double max_speed_encoded;
	PtrToArg<double>::encode(max_speed, &max_speed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_speed_encoded);
}

double NavigationAgent3D::get_path_max_distance() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_path_max_distance")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_navigation_layers(uint32_t navigation_layers) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_navigation_layers")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t navigation_layers_encoded;
	PtrToArg<int64_t>::encode(navigation_layers, &navigation_layers_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &navigation_layers_encoded);
}

uint32_t NavigationAgent3D::get_navigation_layers() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_navigation_layers")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_navigation_layer_value(int32_t layer_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_navigation_layer_value")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_number_encoded, &value_encoded);
}

bool NavigationAgent3D::get_navigation_layer_value(int32_t layer_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_navigation_layer_value")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_number_encoded);
}

void NavigationAgent3D::set_pathfinding_algorithm(NavigationPathQueryParameters3D::PathfindingAlgorithm pathfinding_algorithm) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_pathfinding_algorithm")._native_ptr(), 394560454);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pathfinding_algorithm);
}

NavigationPathQueryParameters3D::PathfindingAlgorithm NavigationAgent3D::get_pathfinding_algorithm() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_pathfinding_algorithm")._native_ptr(), 3398491350);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NavigationPathQueryParameters3D::PathfindingAlgorithm(0));
	return (NavigationPathQueryParameters3D::PathfindingAlgorithm)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_path_postprocessing(NavigationPathQueryParameters3D::PathPostProcessing path_postprocessing) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_path_postprocessing")._native_ptr(), 2267362344);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path_postprocessing);
}

NavigationPathQueryParameters3D::PathPostProcessing NavigationAgent3D::get_path_postprocessing() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_path_postprocessing")._native_ptr(), 3883858360);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NavigationPathQueryParameters3D::PathPostProcessing(0));
	return (NavigationPathQueryParameters3D::PathPostProcessing)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_path_metadata_flags(BitField<NavigationPathQueryParameters3D::PathMetadataFlags> flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_path_metadata_flags")._native_ptr(), 2713846708);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flags);
}

BitField<NavigationPathQueryParameters3D::PathMetadataFlags> NavigationAgent3D::get_path_metadata_flags() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_path_metadata_flags")._native_ptr(), 1582332802);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<NavigationPathQueryParameters3D::PathMetadataFlags>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_navigation_map(const RID &navigation_map) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_navigation_map")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &navigation_map);
}

RID NavigationAgent3D::get_navigation_map() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_navigation_map")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_target_position(const Vector3 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_target_position")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position);
}

Vector3 NavigationAgent3D::get_target_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_target_position")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_simplify_path(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_simplify_path")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool NavigationAgent3D::get_simplify_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_simplify_path")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_simplify_epsilon(double epsilon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_simplify_epsilon")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double epsilon_encoded;
	PtrToArg<double>::encode(epsilon, &epsilon_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &epsilon_encoded);
}

double NavigationAgent3D::get_simplify_epsilon() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_simplify_epsilon")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

Vector3 NavigationAgent3D::get_next_path_position() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_next_path_position")._native_ptr(), 3783033775);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_velocity_forced(const Vector3 &velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_velocity_forced")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &velocity);
}

void NavigationAgent3D::set_velocity(const Vector3 &velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_velocity")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &velocity);
}

Vector3 NavigationAgent3D::get_velocity() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_velocity")._native_ptr(), 3783033775);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

double NavigationAgent3D::distance_to_target() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("distance_to_target")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

Ref<NavigationPathQueryResult3D> NavigationAgent3D::get_current_navigation_result() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_current_navigation_result")._native_ptr(), 728825684);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<NavigationPathQueryResult3D>());
	return Ref<NavigationPathQueryResult3D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<NavigationPathQueryResult3D>(_gde_method_bind, _owner));
}

PackedVector3Array NavigationAgent3D::get_current_navigation_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_current_navigation_path")._native_ptr(), 497664490);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner);
}

int32_t NavigationAgent3D::get_current_navigation_path_index() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_current_navigation_path_index")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool NavigationAgent3D::is_target_reached() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("is_target_reached")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool NavigationAgent3D::is_target_reachable() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("is_target_reachable")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool NavigationAgent3D::is_navigation_finished() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("is_navigation_finished")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Vector3 NavigationAgent3D::get_final_position() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_final_position")._native_ptr(), 3783033775);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_avoidance_layers(uint32_t layers) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_avoidance_layers")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layers_encoded;
	PtrToArg<int64_t>::encode(layers, &layers_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layers_encoded);
}

uint32_t NavigationAgent3D::get_avoidance_layers() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_avoidance_layers")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_avoidance_mask(uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_avoidance_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask_encoded);
}

uint32_t NavigationAgent3D::get_avoidance_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_avoidance_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_avoidance_layer_value(int32_t layer_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_avoidance_layer_value")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_number_encoded, &value_encoded);
}

bool NavigationAgent3D::get_avoidance_layer_value(int32_t layer_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_avoidance_layer_value")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_number_encoded);
}

void NavigationAgent3D::set_avoidance_mask_value(int32_t mask_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_avoidance_mask_value")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_number_encoded;
	PtrToArg<int64_t>::encode(mask_number, &mask_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask_number_encoded, &value_encoded);
}

bool NavigationAgent3D::get_avoidance_mask_value(int32_t mask_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_avoidance_mask_value")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t mask_number_encoded;
	PtrToArg<int64_t>::encode(mask_number, &mask_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &mask_number_encoded);
}

void NavigationAgent3D::set_avoidance_priority(double priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_avoidance_priority")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double priority_encoded;
	PtrToArg<double>::encode(priority, &priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &priority_encoded);
}

double NavigationAgent3D::get_avoidance_priority() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_avoidance_priority")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_debug_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_debug_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool NavigationAgent3D::get_debug_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_debug_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_debug_use_custom(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_debug_use_custom")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool NavigationAgent3D::get_debug_use_custom() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_debug_use_custom")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_debug_path_custom_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_debug_path_custom_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color NavigationAgent3D::get_debug_path_custom_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_debug_path_custom_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void NavigationAgent3D::set_debug_path_custom_point_size(double point_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("set_debug_path_custom_point_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double point_size_encoded;
	PtrToArg<double>::encode(point_size, &point_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_size_encoded);
}

double NavigationAgent3D::get_debug_path_custom_point_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationAgent3D::get_class_static()._native_ptr(), StringName("get_debug_path_custom_point_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 