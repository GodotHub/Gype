/**************************************************************************/
/*  navigation_mesh.cpp                                                   */
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

#include <godot_cpp/classes/navigation_mesh.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/mesh.hpp>

namespace godot {


void NavigationMesh::set_sample_partition_type(NavigationMesh::SamplePartitionType sample_partition_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_sample_partition_type")._native_ptr(), 2472437533);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sample_partition_type);
}

NavigationMesh::SamplePartitionType NavigationMesh::get_sample_partition_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_sample_partition_type")._native_ptr(), 833513918);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NavigationMesh::SamplePartitionType(0));
	return (NavigationMesh::SamplePartitionType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationMesh::set_parsed_geometry_type(NavigationMesh::ParsedGeometryType geometry_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_parsed_geometry_type")._native_ptr(), 3064713163);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &geometry_type);
}

NavigationMesh::ParsedGeometryType NavigationMesh::get_parsed_geometry_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_parsed_geometry_type")._native_ptr(), 3928011953);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NavigationMesh::ParsedGeometryType(0));
	return (NavigationMesh::ParsedGeometryType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationMesh::set_collision_mask(uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_collision_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask_encoded);
}

uint32_t NavigationMesh::get_collision_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_collision_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationMesh::set_collision_mask_value(int32_t layer_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_collision_mask_value")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_number_encoded, &value_encoded);
}

bool NavigationMesh::get_collision_mask_value(int32_t layer_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_collision_mask_value")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_number_encoded);
}

void NavigationMesh::set_source_geometry_mode(NavigationMesh::SourceGeometryMode mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_source_geometry_mode")._native_ptr(), 2700825194);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask);
}

NavigationMesh::SourceGeometryMode NavigationMesh::get_source_geometry_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_source_geometry_mode")._native_ptr(), 2770484141);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NavigationMesh::SourceGeometryMode(0));
	return (NavigationMesh::SourceGeometryMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationMesh::set_source_group_name(const StringName &mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_source_group_name")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask);
}

StringName NavigationMesh::get_source_group_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_source_group_name")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void NavigationMesh::set_cell_size(double cell_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_cell_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double cell_size_encoded;
	PtrToArg<double>::encode(cell_size, &cell_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cell_size_encoded);
}

double NavigationMesh::get_cell_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_cell_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_cell_height(double cell_height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_cell_height")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double cell_height_encoded;
	PtrToArg<double>::encode(cell_height, &cell_height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cell_height_encoded);
}

double NavigationMesh::get_cell_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_cell_height")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_border_size(double border_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_border_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double border_size_encoded;
	PtrToArg<double>::encode(border_size, &border_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &border_size_encoded);
}

double NavigationMesh::get_border_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_border_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_agent_height(double agent_height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_agent_height")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double agent_height_encoded;
	PtrToArg<double>::encode(agent_height, &agent_height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent_height_encoded);
}

double NavigationMesh::get_agent_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_agent_height")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_agent_radius(double agent_radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_agent_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double agent_radius_encoded;
	PtrToArg<double>::encode(agent_radius, &agent_radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent_radius_encoded);
}

double NavigationMesh::get_agent_radius() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_agent_radius")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_agent_max_climb(double agent_max_climb) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_agent_max_climb")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double agent_max_climb_encoded;
	PtrToArg<double>::encode(agent_max_climb, &agent_max_climb_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent_max_climb_encoded);
}

double NavigationMesh::get_agent_max_climb() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_agent_max_climb")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_agent_max_slope(double agent_max_slope) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_agent_max_slope")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double agent_max_slope_encoded;
	PtrToArg<double>::encode(agent_max_slope, &agent_max_slope_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent_max_slope_encoded);
}

double NavigationMesh::get_agent_max_slope() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_agent_max_slope")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_region_min_size(double region_min_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_region_min_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double region_min_size_encoded;
	PtrToArg<double>::encode(region_min_size, &region_min_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region_min_size_encoded);
}

double NavigationMesh::get_region_min_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_region_min_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_region_merge_size(double region_merge_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_region_merge_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double region_merge_size_encoded;
	PtrToArg<double>::encode(region_merge_size, &region_merge_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region_merge_size_encoded);
}

double NavigationMesh::get_region_merge_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_region_merge_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_edge_max_length(double edge_max_length) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_edge_max_length")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double edge_max_length_encoded;
	PtrToArg<double>::encode(edge_max_length, &edge_max_length_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &edge_max_length_encoded);
}

double NavigationMesh::get_edge_max_length() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_edge_max_length")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_edge_max_error(double edge_max_error) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_edge_max_error")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double edge_max_error_encoded;
	PtrToArg<double>::encode(edge_max_error, &edge_max_error_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &edge_max_error_encoded);
}

double NavigationMesh::get_edge_max_error() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_edge_max_error")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_vertices_per_polygon(double vertices_per_polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_vertices_per_polygon")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double vertices_per_polygon_encoded;
	PtrToArg<double>::encode(vertices_per_polygon, &vertices_per_polygon_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &vertices_per_polygon_encoded);
}

double NavigationMesh::get_vertices_per_polygon() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_vertices_per_polygon")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_detail_sample_distance(double detail_sample_dist) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_detail_sample_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double detail_sample_dist_encoded;
	PtrToArg<double>::encode(detail_sample_dist, &detail_sample_dist_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &detail_sample_dist_encoded);
}

double NavigationMesh::get_detail_sample_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_detail_sample_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_detail_sample_max_error(double detail_sample_max_error) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_detail_sample_max_error")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double detail_sample_max_error_encoded;
	PtrToArg<double>::encode(detail_sample_max_error, &detail_sample_max_error_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &detail_sample_max_error_encoded);
}

double NavigationMesh::get_detail_sample_max_error() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_detail_sample_max_error")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationMesh::set_filter_low_hanging_obstacles(bool filter_low_hanging_obstacles) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_filter_low_hanging_obstacles")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t filter_low_hanging_obstacles_encoded;
	PtrToArg<bool>::encode(filter_low_hanging_obstacles, &filter_low_hanging_obstacles_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &filter_low_hanging_obstacles_encoded);
}

bool NavigationMesh::get_filter_low_hanging_obstacles() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_filter_low_hanging_obstacles")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void NavigationMesh::set_filter_ledge_spans(bool filter_ledge_spans) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_filter_ledge_spans")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t filter_ledge_spans_encoded;
	PtrToArg<bool>::encode(filter_ledge_spans, &filter_ledge_spans_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &filter_ledge_spans_encoded);
}

bool NavigationMesh::get_filter_ledge_spans() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_filter_ledge_spans")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void NavigationMesh::set_filter_walkable_low_height_spans(bool filter_walkable_low_height_spans) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_filter_walkable_low_height_spans")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t filter_walkable_low_height_spans_encoded;
	PtrToArg<bool>::encode(filter_walkable_low_height_spans, &filter_walkable_low_height_spans_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &filter_walkable_low_height_spans_encoded);
}

bool NavigationMesh::get_filter_walkable_low_height_spans() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_filter_walkable_low_height_spans")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void NavigationMesh::set_filter_baking_aabb(const AABB &baking_aabb) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_filter_baking_aabb")._native_ptr(), 259215842);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &baking_aabb);
}

AABB NavigationMesh::get_filter_baking_aabb() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_filter_baking_aabb")._native_ptr(), 1068685055);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AABB());
	return internal::_call_native_mb_ret<AABB>(_gde_method_bind, _owner);
}

void NavigationMesh::set_filter_baking_aabb_offset(const Vector3 &baking_aabb_offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_filter_baking_aabb_offset")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &baking_aabb_offset);
}

Vector3 NavigationMesh::get_filter_baking_aabb_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_filter_baking_aabb_offset")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void NavigationMesh::set_vertices(const PackedVector3Array &vertices) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("set_vertices")._native_ptr(), 334873810);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &vertices);
}

PackedVector3Array NavigationMesh::get_vertices() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_vertices")._native_ptr(), 497664490);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner);
}

void NavigationMesh::add_polygon(const PackedInt32Array &polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("add_polygon")._native_ptr(), 3614634198);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &polygon);
}

int32_t NavigationMesh::get_polygon_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_polygon_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

PackedInt32Array NavigationMesh::get_polygon(int32_t idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("get_polygon")._native_ptr(), 3668444399);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &idx_encoded);
}

void NavigationMesh::clear_polygons() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("clear_polygons")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void NavigationMesh::create_from_mesh(const Ref<Mesh> &mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("create_from_mesh")._native_ptr(), 194775623);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (mesh != nullptr ? &mesh->_owner : nullptr));
}

void NavigationMesh::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMesh::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}


} // namespace godot 