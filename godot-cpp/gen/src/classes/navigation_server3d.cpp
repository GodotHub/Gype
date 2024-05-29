/**************************************************************************/
/*  navigation_server3d.cpp                                               */
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

#include <godot_cpp/classes/navigation_server3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/navigation_path_query_parameters3d.hpp>
#include <godot_cpp/classes/navigation_path_query_result3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/transform3d.hpp>

namespace godot {

NavigationServer3D *NavigationServer3D::get_singleton() {
	static NavigationServer3D *singleton = nullptr;
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(NavigationServer3D::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<NavigationServer3D *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &NavigationServer3D::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
	}
	return singleton;
}

TypedArray<RID> NavigationServer3D::get_maps() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("get_maps")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<RID>());
	return internal::_call_native_mb_ret<TypedArray<RID>>(_gde_method_bind, _owner);
}

RID NavigationServer3D::map_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void NavigationServer3D::map_set_active(const RID &map, bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_set_active")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &map, &active_encoded);
}

bool NavigationServer3D::map_is_active(const RID &map) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_is_active")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &map);
}

void NavigationServer3D::map_set_up(const RID &map, const Vector3 &up) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_set_up")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &map, &up);
}

Vector3 NavigationServer3D::map_get_up(const RID &map) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_up")._native_ptr(), 531438156);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &map);
}

void NavigationServer3D::map_set_cell_size(const RID &map, double cell_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_set_cell_size")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double cell_size_encoded;
	PtrToArg<double>::encode(cell_size, &cell_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &map, &cell_size_encoded);
}

double NavigationServer3D::map_get_cell_size(const RID &map) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_cell_size")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &map);
}

void NavigationServer3D::map_set_cell_height(const RID &map, double cell_height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_set_cell_height")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double cell_height_encoded;
	PtrToArg<double>::encode(cell_height, &cell_height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &map, &cell_height_encoded);
}

double NavigationServer3D::map_get_cell_height(const RID &map) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_cell_height")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &map);
}

void NavigationServer3D::map_set_use_edge_connections(const RID &map, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_set_use_edge_connections")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &map, &enabled_encoded);
}

bool NavigationServer3D::map_get_use_edge_connections(const RID &map) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_use_edge_connections")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &map);
}

void NavigationServer3D::map_set_edge_connection_margin(const RID &map, double margin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_set_edge_connection_margin")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double margin_encoded;
	PtrToArg<double>::encode(margin, &margin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &map, &margin_encoded);
}

double NavigationServer3D::map_get_edge_connection_margin(const RID &map) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_edge_connection_margin")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &map);
}

void NavigationServer3D::map_set_link_connection_radius(const RID &map, double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_set_link_connection_radius")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &map, &radius_encoded);
}

double NavigationServer3D::map_get_link_connection_radius(const RID &map) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_link_connection_radius")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &map);
}

PackedVector3Array NavigationServer3D::map_get_path(const RID &map, const Vector3 &origin, const Vector3 &destination, bool optimize, uint32_t navigation_layers) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_path")._native_ptr(), 1187418690);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	int8_t optimize_encoded;
	PtrToArg<bool>::encode(optimize, &optimize_encoded);
	int64_t navigation_layers_encoded;
	PtrToArg<int64_t>::encode(navigation_layers, &navigation_layers_encoded);
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner, &map, &origin, &destination, &optimize_encoded, &navigation_layers_encoded);
}

Vector3 NavigationServer3D::map_get_closest_point_to_segment(const RID &map, const Vector3 &start, const Vector3 &end, bool use_collision) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_closest_point_to_segment")._native_ptr(), 3830095642);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int8_t use_collision_encoded;
	PtrToArg<bool>::encode(use_collision, &use_collision_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &map, &start, &end, &use_collision_encoded);
}

Vector3 NavigationServer3D::map_get_closest_point(const RID &map, const Vector3 &to_point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_closest_point")._native_ptr(), 2056183332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &map, &to_point);
}

Vector3 NavigationServer3D::map_get_closest_point_normal(const RID &map, const Vector3 &to_point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_closest_point_normal")._native_ptr(), 2056183332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &map, &to_point);
}

RID NavigationServer3D::map_get_closest_point_owner(const RID &map, const Vector3 &to_point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_closest_point_owner")._native_ptr(), 553364610);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &map, &to_point);
}

TypedArray<RID> NavigationServer3D::map_get_links(const RID &map) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_links")._native_ptr(), 2684255073);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<RID>());
	return internal::_call_native_mb_ret<TypedArray<RID>>(_gde_method_bind, _owner, &map);
}

TypedArray<RID> NavigationServer3D::map_get_regions(const RID &map) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_regions")._native_ptr(), 2684255073);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<RID>());
	return internal::_call_native_mb_ret<TypedArray<RID>>(_gde_method_bind, _owner, &map);
}

TypedArray<RID> NavigationServer3D::map_get_agents(const RID &map) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_agents")._native_ptr(), 2684255073);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<RID>());
	return internal::_call_native_mb_ret<TypedArray<RID>>(_gde_method_bind, _owner, &map);
}

TypedArray<RID> NavigationServer3D::map_get_obstacles(const RID &map) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_get_obstacles")._native_ptr(), 2684255073);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<RID>());
	return internal::_call_native_mb_ret<TypedArray<RID>>(_gde_method_bind, _owner, &map);
}

void NavigationServer3D::map_force_update(const RID &map) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("map_force_update")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &map);
}

void NavigationServer3D::query_path(const Ref<NavigationPathQueryParameters3D> &parameters, const Ref<NavigationPathQueryResult3D> &result) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("query_path")._native_ptr(), 3415008901);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (parameters != nullptr ? &parameters->_owner : nullptr), (result != nullptr ? &result->_owner : nullptr));
}

RID NavigationServer3D::region_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void NavigationServer3D::region_set_enabled(const RID &region, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_set_enabled")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region, &enabled_encoded);
}

bool NavigationServer3D::region_get_enabled(const RID &region) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_get_enabled")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &region);
}

void NavigationServer3D::region_set_use_edge_connections(const RID &region, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_set_use_edge_connections")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region, &enabled_encoded);
}

bool NavigationServer3D::region_get_use_edge_connections(const RID &region) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_get_use_edge_connections")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &region);
}

void NavigationServer3D::region_set_enter_cost(const RID &region, double enter_cost) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_set_enter_cost")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double enter_cost_encoded;
	PtrToArg<double>::encode(enter_cost, &enter_cost_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region, &enter_cost_encoded);
}

double NavigationServer3D::region_get_enter_cost(const RID &region) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_get_enter_cost")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &region);
}

void NavigationServer3D::region_set_travel_cost(const RID &region, double travel_cost) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_set_travel_cost")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double travel_cost_encoded;
	PtrToArg<double>::encode(travel_cost, &travel_cost_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region, &travel_cost_encoded);
}

double NavigationServer3D::region_get_travel_cost(const RID &region) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_get_travel_cost")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &region);
}

void NavigationServer3D::region_set_owner_id(const RID &region, uint64_t owner_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_set_owner_id")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t owner_id_encoded;
	PtrToArg<int64_t>::encode(owner_id, &owner_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region, &owner_id_encoded);
}

uint64_t NavigationServer3D::region_get_owner_id(const RID &region) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_get_owner_id")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &region);
}

bool NavigationServer3D::region_owns_point(const RID &region, const Vector3 &point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_owns_point")._native_ptr(), 2360011153);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &region, &point);
}

void NavigationServer3D::region_set_map(const RID &region, const RID &map) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_set_map")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region, &map);
}

RID NavigationServer3D::region_get_map(const RID &region) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_get_map")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &region);
}

void NavigationServer3D::region_set_navigation_layers(const RID &region, uint32_t navigation_layers) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_set_navigation_layers")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t navigation_layers_encoded;
	PtrToArg<int64_t>::encode(navigation_layers, &navigation_layers_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region, &navigation_layers_encoded);
}

uint32_t NavigationServer3D::region_get_navigation_layers(const RID &region) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_get_navigation_layers")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &region);
}

void NavigationServer3D::region_set_transform(const RID &region, const Transform3D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_set_transform")._native_ptr(), 3935195649);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region, &transform);
}

void NavigationServer3D::region_set_navigation_mesh(const RID &region, const Ref<NavigationMesh> &navigation_mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_set_navigation_mesh")._native_ptr(), 2764952978);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region, (navigation_mesh != nullptr ? &navigation_mesh->_owner : nullptr));
}

void NavigationServer3D::region_bake_navigation_mesh(const Ref<NavigationMesh> &navigation_mesh, Node *root_node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_bake_navigation_mesh")._native_ptr(), 1401173477);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (navigation_mesh != nullptr ? &navigation_mesh->_owner : nullptr), (root_node != nullptr ? &root_node->_owner : nullptr));
}

int32_t NavigationServer3D::region_get_connections_count(const RID &region) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_get_connections_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &region);
}

Vector3 NavigationServer3D::region_get_connection_pathway_start(const RID &region, int32_t connection) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_get_connection_pathway_start")._native_ptr(), 3440143363);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t connection_encoded;
	PtrToArg<int64_t>::encode(connection, &connection_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &region, &connection_encoded);
}

Vector3 NavigationServer3D::region_get_connection_pathway_end(const RID &region, int32_t connection) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("region_get_connection_pathway_end")._native_ptr(), 3440143363);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t connection_encoded;
	PtrToArg<int64_t>::encode(connection, &connection_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &region, &connection_encoded);
}

RID NavigationServer3D::link_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void NavigationServer3D::link_set_map(const RID &link, const RID &map) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_set_map")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &link, &map);
}

RID NavigationServer3D::link_get_map(const RID &link) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_get_map")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &link);
}

void NavigationServer3D::link_set_enabled(const RID &link, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_set_enabled")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &link, &enabled_encoded);
}

bool NavigationServer3D::link_get_enabled(const RID &link) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_get_enabled")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &link);
}

void NavigationServer3D::link_set_bidirectional(const RID &link, bool bidirectional) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_set_bidirectional")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t bidirectional_encoded;
	PtrToArg<bool>::encode(bidirectional, &bidirectional_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &link, &bidirectional_encoded);
}

bool NavigationServer3D::link_is_bidirectional(const RID &link) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_is_bidirectional")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &link);
}

void NavigationServer3D::link_set_navigation_layers(const RID &link, uint32_t navigation_layers) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_set_navigation_layers")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t navigation_layers_encoded;
	PtrToArg<int64_t>::encode(navigation_layers, &navigation_layers_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &link, &navigation_layers_encoded);
}

uint32_t NavigationServer3D::link_get_navigation_layers(const RID &link) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_get_navigation_layers")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &link);
}

void NavigationServer3D::link_set_start_position(const RID &link, const Vector3 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_set_start_position")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &link, &position);
}

Vector3 NavigationServer3D::link_get_start_position(const RID &link) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_get_start_position")._native_ptr(), 531438156);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &link);
}

void NavigationServer3D::link_set_end_position(const RID &link, const Vector3 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_set_end_position")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &link, &position);
}

Vector3 NavigationServer3D::link_get_end_position(const RID &link) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_get_end_position")._native_ptr(), 531438156);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &link);
}

void NavigationServer3D::link_set_enter_cost(const RID &link, double enter_cost) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_set_enter_cost")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double enter_cost_encoded;
	PtrToArg<double>::encode(enter_cost, &enter_cost_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &link, &enter_cost_encoded);
}

double NavigationServer3D::link_get_enter_cost(const RID &link) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_get_enter_cost")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &link);
}

void NavigationServer3D::link_set_travel_cost(const RID &link, double travel_cost) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_set_travel_cost")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double travel_cost_encoded;
	PtrToArg<double>::encode(travel_cost, &travel_cost_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &link, &travel_cost_encoded);
}

double NavigationServer3D::link_get_travel_cost(const RID &link) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_get_travel_cost")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &link);
}

void NavigationServer3D::link_set_owner_id(const RID &link, uint64_t owner_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_set_owner_id")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t owner_id_encoded;
	PtrToArg<int64_t>::encode(owner_id, &owner_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &link, &owner_id_encoded);
}

uint64_t NavigationServer3D::link_get_owner_id(const RID &link) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("link_get_owner_id")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &link);
}

RID NavigationServer3D::agent_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void NavigationServer3D::agent_set_avoidance_enabled(const RID &agent, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_avoidance_enabled")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &enabled_encoded);
}

bool NavigationServer3D::agent_get_avoidance_enabled(const RID &agent) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_get_avoidance_enabled")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &agent);
}

void NavigationServer3D::agent_set_use_3d_avoidance(const RID &agent, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_use_3d_avoidance")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &enabled_encoded);
}

bool NavigationServer3D::agent_get_use_3d_avoidance(const RID &agent) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_get_use_3d_avoidance")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &agent);
}

void NavigationServer3D::agent_set_map(const RID &agent, const RID &map) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_map")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &map);
}

RID NavigationServer3D::agent_get_map(const RID &agent) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_get_map")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &agent);
}

void NavigationServer3D::agent_set_paused(const RID &agent, bool paused) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_paused")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t paused_encoded;
	PtrToArg<bool>::encode(paused, &paused_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &paused_encoded);
}

bool NavigationServer3D::agent_get_paused(const RID &agent) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_get_paused")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &agent);
}

void NavigationServer3D::agent_set_neighbor_distance(const RID &agent, double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_neighbor_distance")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &distance_encoded);
}

void NavigationServer3D::agent_set_max_neighbors(const RID &agent, int32_t count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_max_neighbors")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t count_encoded;
	PtrToArg<int64_t>::encode(count, &count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &count_encoded);
}

void NavigationServer3D::agent_set_time_horizon_agents(const RID &agent, double time_horizon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_time_horizon_agents")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double time_horizon_encoded;
	PtrToArg<double>::encode(time_horizon, &time_horizon_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &time_horizon_encoded);
}

void NavigationServer3D::agent_set_time_horizon_obstacles(const RID &agent, double time_horizon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_time_horizon_obstacles")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double time_horizon_encoded;
	PtrToArg<double>::encode(time_horizon, &time_horizon_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &time_horizon_encoded);
}

void NavigationServer3D::agent_set_radius(const RID &agent, double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_radius")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &radius_encoded);
}

void NavigationServer3D::agent_set_height(const RID &agent, double height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_height")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double height_encoded;
	PtrToArg<double>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &height_encoded);
}

void NavigationServer3D::agent_set_max_speed(const RID &agent, double max_speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_max_speed")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double max_speed_encoded;
	PtrToArg<double>::encode(max_speed, &max_speed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &max_speed_encoded);
}

void NavigationServer3D::agent_set_velocity_forced(const RID &agent, const Vector3 &velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_velocity_forced")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &velocity);
}

void NavigationServer3D::agent_set_velocity(const RID &agent, const Vector3 &velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_velocity")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &velocity);
}

void NavigationServer3D::agent_set_position(const RID &agent, const Vector3 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_position")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &position);
}

bool NavigationServer3D::agent_is_map_changed(const RID &agent) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_is_map_changed")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &agent);
}

void NavigationServer3D::agent_set_avoidance_callback(const RID &agent, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_avoidance_callback")._native_ptr(), 3379118538);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &callback);
}

void NavigationServer3D::agent_set_avoidance_layers(const RID &agent, uint32_t layers) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_avoidance_layers")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layers_encoded;
	PtrToArg<int64_t>::encode(layers, &layers_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &layers_encoded);
}

void NavigationServer3D::agent_set_avoidance_mask(const RID &agent, uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_avoidance_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &mask_encoded);
}

void NavigationServer3D::agent_set_avoidance_priority(const RID &agent, double priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("agent_set_avoidance_priority")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double priority_encoded;
	PtrToArg<double>::encode(priority, &priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent, &priority_encoded);
}

RID NavigationServer3D::obstacle_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void NavigationServer3D::obstacle_set_avoidance_enabled(const RID &obstacle, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_set_avoidance_enabled")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &obstacle, &enabled_encoded);
}

bool NavigationServer3D::obstacle_get_avoidance_enabled(const RID &obstacle) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_get_avoidance_enabled")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &obstacle);
}

void NavigationServer3D::obstacle_set_use_3d_avoidance(const RID &obstacle, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_set_use_3d_avoidance")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &obstacle, &enabled_encoded);
}

bool NavigationServer3D::obstacle_get_use_3d_avoidance(const RID &obstacle) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_get_use_3d_avoidance")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &obstacle);
}

void NavigationServer3D::obstacle_set_map(const RID &obstacle, const RID &map) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_set_map")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &obstacle, &map);
}

RID NavigationServer3D::obstacle_get_map(const RID &obstacle) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_get_map")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &obstacle);
}

void NavigationServer3D::obstacle_set_paused(const RID &obstacle, bool paused) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_set_paused")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t paused_encoded;
	PtrToArg<bool>::encode(paused, &paused_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &obstacle, &paused_encoded);
}

bool NavigationServer3D::obstacle_get_paused(const RID &obstacle) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_get_paused")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &obstacle);
}

void NavigationServer3D::obstacle_set_radius(const RID &obstacle, double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_set_radius")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &obstacle, &radius_encoded);
}

void NavigationServer3D::obstacle_set_height(const RID &obstacle, double height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_set_height")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double height_encoded;
	PtrToArg<double>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &obstacle, &height_encoded);
}

void NavigationServer3D::obstacle_set_velocity(const RID &obstacle, const Vector3 &velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_set_velocity")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &obstacle, &velocity);
}

void NavigationServer3D::obstacle_set_position(const RID &obstacle, const Vector3 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_set_position")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &obstacle, &position);
}

void NavigationServer3D::obstacle_set_vertices(const RID &obstacle, const PackedVector3Array &vertices) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_set_vertices")._native_ptr(), 4030257846);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &obstacle, &vertices);
}

void NavigationServer3D::obstacle_set_avoidance_layers(const RID &obstacle, uint32_t layers) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("obstacle_set_avoidance_layers")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layers_encoded;
	PtrToArg<int64_t>::encode(layers, &layers_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &obstacle, &layers_encoded);
}

void NavigationServer3D::parse_source_geometry_data(const Ref<NavigationMesh> &navigation_mesh, const Ref<NavigationMeshSourceGeometryData3D> &source_geometry_data, Node *root_node, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("parse_source_geometry_data")._native_ptr(), 685862123);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (navigation_mesh != nullptr ? &navigation_mesh->_owner : nullptr), (source_geometry_data != nullptr ? &source_geometry_data->_owner : nullptr), (root_node != nullptr ? &root_node->_owner : nullptr), &callback);
}

void NavigationServer3D::bake_from_source_geometry_data(const Ref<NavigationMesh> &navigation_mesh, const Ref<NavigationMeshSourceGeometryData3D> &source_geometry_data, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("bake_from_source_geometry_data")._native_ptr(), 2469318639);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (navigation_mesh != nullptr ? &navigation_mesh->_owner : nullptr), (source_geometry_data != nullptr ? &source_geometry_data->_owner : nullptr), &callback);
}

void NavigationServer3D::bake_from_source_geometry_data_async(const Ref<NavigationMesh> &navigation_mesh, const Ref<NavigationMeshSourceGeometryData3D> &source_geometry_data, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("bake_from_source_geometry_data_async")._native_ptr(), 2469318639);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (navigation_mesh != nullptr ? &navigation_mesh->_owner : nullptr), (source_geometry_data != nullptr ? &source_geometry_data->_owner : nullptr), &callback);
}

void NavigationServer3D::free_rid(const RID &rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("free_rid")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid);
}

void NavigationServer3D::set_active(bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("set_active")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &active_encoded);
}

void NavigationServer3D::set_debug_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("set_debug_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool NavigationServer3D::get_debug_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("get_debug_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t NavigationServer3D::get_process_info(NavigationServer3D::ProcessInfo process_info) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationServer3D::get_class_static()._native_ptr(), StringName("get_process_info")._native_ptr(), 1938440894);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &process_info);
}


} // namespace godot 