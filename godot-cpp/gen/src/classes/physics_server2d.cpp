/**************************************************************************/
/*  physics_server2d.cpp                                                  */
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

#include <godot_cpp/classes/physics_server2d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/physics_test_motion_parameters2d.hpp>

namespace godot {

PhysicsServer2D *PhysicsServer2D::singleton = nullptr;

PhysicsServer2D *PhysicsServer2D::get_singleton() {
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(PhysicsServer2D::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<PhysicsServer2D *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &PhysicsServer2D::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
		if (likely(singleton)) {
			ClassDB::_register_engine_singleton(PhysicsServer2D::get_class_static(), singleton);
		}
	}
	return singleton;
}

PhysicsServer2D::~PhysicsServer2D() {
	if (singleton == this) {
		ClassDB::_unregister_engine_singleton(PhysicsServer2D::get_class_static());
		singleton = nullptr;
	}
}

RID PhysicsServer2D::world_boundary_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("world_boundary_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer2D::separation_ray_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("separation_ray_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer2D::segment_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("segment_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer2D::circle_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("circle_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer2D::rectangle_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("rectangle_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer2D::capsule_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("capsule_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer2D::convex_polygon_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("convex_polygon_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer2D::concave_polygon_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("concave_polygon_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void PhysicsServer2D::shape_set_data(const RID &shape, const Variant &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("shape_set_data")._native_ptr(), 3175752987);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape, &data);
}

PhysicsServer2D::ShapeType PhysicsServer2D::shape_get_type(const RID &shape) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("shape_get_type")._native_ptr(), 1240598777);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PhysicsServer2D::ShapeType(0));
	return (PhysicsServer2D::ShapeType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shape);
}

Variant PhysicsServer2D::shape_get_data(const RID &shape) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("shape_get_data")._native_ptr(), 4171304767);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &shape);
}

RID PhysicsServer2D::space_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("space_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void PhysicsServer2D::space_set_active(const RID &space, bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("space_set_active")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &space, &active_encoded);
}

bool PhysicsServer2D::space_is_active(const RID &space) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("space_is_active")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &space);
}

void PhysicsServer2D::space_set_param(const RID &space, PhysicsServer2D::SpaceParameter param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("space_set_param")._native_ptr(), 949194586);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &space, &param, &value_encoded);
}

double PhysicsServer2D::space_get_param(const RID &space, PhysicsServer2D::SpaceParameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("space_get_param")._native_ptr(), 874111783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &space, &param);
}

PhysicsDirectSpaceState2D *PhysicsServer2D::space_get_direct_state(const RID &space) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("space_get_direct_state")._native_ptr(), 3160173886);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<PhysicsDirectSpaceState2D>(_gde_method_bind, _owner, &space);
}

RID PhysicsServer2D::area_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void PhysicsServer2D::area_set_space(const RID &area, const RID &space) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_set_space")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &space);
}

RID PhysicsServer2D::area_get_space(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_get_space")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &area);
}

void PhysicsServer2D::area_add_shape(const RID &area, const RID &shape, const Transform2D &transform, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_add_shape")._native_ptr(), 339056240);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &shape, &transform, &disabled_encoded);
}

void PhysicsServer2D::area_set_shape(const RID &area, int32_t shape_idx, const RID &shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_set_shape")._native_ptr(), 2310537182);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &shape_idx_encoded, &shape);
}

void PhysicsServer2D::area_set_shape_transform(const RID &area, int32_t shape_idx, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_set_shape_transform")._native_ptr(), 736082694);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &shape_idx_encoded, &transform);
}

void PhysicsServer2D::area_set_shape_disabled(const RID &area, int32_t shape_idx, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_set_shape_disabled")._native_ptr(), 2658558584);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &shape_idx_encoded, &disabled_encoded);
}

int32_t PhysicsServer2D::area_get_shape_count(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_get_shape_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &area);
}

RID PhysicsServer2D::area_get_shape(const RID &area, int32_t shape_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_get_shape")._native_ptr(), 1066463050);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &area, &shape_idx_encoded);
}

Transform2D PhysicsServer2D::area_get_shape_transform(const RID &area, int32_t shape_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_get_shape_transform")._native_ptr(), 1324854622);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner, &area, &shape_idx_encoded);
}

void PhysicsServer2D::area_remove_shape(const RID &area, int32_t shape_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_remove_shape")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &shape_idx_encoded);
}

void PhysicsServer2D::area_clear_shapes(const RID &area) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_clear_shapes")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area);
}

void PhysicsServer2D::area_set_collision_layer(const RID &area, uint32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_set_collision_layer")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &layer_encoded);
}

uint32_t PhysicsServer2D::area_get_collision_layer(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_get_collision_layer")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &area);
}

void PhysicsServer2D::area_set_collision_mask(const RID &area, uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_set_collision_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &mask_encoded);
}

uint32_t PhysicsServer2D::area_get_collision_mask(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_get_collision_mask")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &area);
}

void PhysicsServer2D::area_set_param(const RID &area, PhysicsServer2D::AreaParameter param, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_set_param")._native_ptr(), 1257146028);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &param, &value);
}

void PhysicsServer2D::area_set_transform(const RID &area, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_set_transform")._native_ptr(), 1246044741);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &transform);
}

Variant PhysicsServer2D::area_get_param(const RID &area, PhysicsServer2D::AreaParameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_get_param")._native_ptr(), 3047435120);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &area, &param);
}

Transform2D PhysicsServer2D::area_get_transform(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_get_transform")._native_ptr(), 213527486);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner, &area);
}

void PhysicsServer2D::area_attach_object_instance_id(const RID &area, uint64_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_attach_object_instance_id")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &id_encoded);
}

uint64_t PhysicsServer2D::area_get_object_instance_id(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_get_object_instance_id")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &area);
}

void PhysicsServer2D::area_attach_canvas_instance_id(const RID &area, uint64_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_attach_canvas_instance_id")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &id_encoded);
}

uint64_t PhysicsServer2D::area_get_canvas_instance_id(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_get_canvas_instance_id")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &area);
}

void PhysicsServer2D::area_set_monitor_callback(const RID &area, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_set_monitor_callback")._native_ptr(), 3379118538);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &callback);
}

void PhysicsServer2D::area_set_area_monitor_callback(const RID &area, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_set_area_monitor_callback")._native_ptr(), 3379118538);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &callback);
}

void PhysicsServer2D::area_set_monitorable(const RID &area, bool monitorable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("area_set_monitorable")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t monitorable_encoded;
	PtrToArg<bool>::encode(monitorable, &monitorable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &monitorable_encoded);
}

RID PhysicsServer2D::body_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void PhysicsServer2D::body_set_space(const RID &body, const RID &space) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_space")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &space);
}

RID PhysicsServer2D::body_get_space(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_space")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_set_mode(const RID &body, PhysicsServer2D::BodyMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_mode")._native_ptr(), 1658067650);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &mode);
}

PhysicsServer2D::BodyMode PhysicsServer2D::body_get_mode(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_mode")._native_ptr(), 3261702585);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PhysicsServer2D::BodyMode(0));
	return (PhysicsServer2D::BodyMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_add_shape(const RID &body, const RID &shape, const Transform2D &transform, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_add_shape")._native_ptr(), 339056240);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &shape, &transform, &disabled_encoded);
}

void PhysicsServer2D::body_set_shape(const RID &body, int32_t shape_idx, const RID &shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_shape")._native_ptr(), 2310537182);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &shape_idx_encoded, &shape);
}

void PhysicsServer2D::body_set_shape_transform(const RID &body, int32_t shape_idx, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_shape_transform")._native_ptr(), 736082694);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &shape_idx_encoded, &transform);
}

int32_t PhysicsServer2D::body_get_shape_count(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_shape_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

RID PhysicsServer2D::body_get_shape(const RID &body, int32_t shape_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_shape")._native_ptr(), 1066463050);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &body, &shape_idx_encoded);
}

Transform2D PhysicsServer2D::body_get_shape_transform(const RID &body, int32_t shape_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_shape_transform")._native_ptr(), 1324854622);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner, &body, &shape_idx_encoded);
}

void PhysicsServer2D::body_remove_shape(const RID &body, int32_t shape_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_remove_shape")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &shape_idx_encoded);
}

void PhysicsServer2D::body_clear_shapes(const RID &body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_clear_shapes")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_set_shape_disabled(const RID &body, int32_t shape_idx, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_shape_disabled")._native_ptr(), 2658558584);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &shape_idx_encoded, &disabled_encoded);
}

void PhysicsServer2D::body_set_shape_as_one_way_collision(const RID &body, int32_t shape_idx, bool enable, double margin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_shape_as_one_way_collision")._native_ptr(), 2556489974);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	double margin_encoded;
	PtrToArg<double>::encode(margin, &margin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &shape_idx_encoded, &enable_encoded, &margin_encoded);
}

void PhysicsServer2D::body_attach_object_instance_id(const RID &body, uint64_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_attach_object_instance_id")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &id_encoded);
}

uint64_t PhysicsServer2D::body_get_object_instance_id(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_object_instance_id")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_attach_canvas_instance_id(const RID &body, uint64_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_attach_canvas_instance_id")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &id_encoded);
}

uint64_t PhysicsServer2D::body_get_canvas_instance_id(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_canvas_instance_id")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_set_continuous_collision_detection_mode(const RID &body, PhysicsServer2D::CCDMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_continuous_collision_detection_mode")._native_ptr(), 1882257015);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &mode);
}

PhysicsServer2D::CCDMode PhysicsServer2D::body_get_continuous_collision_detection_mode(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_continuous_collision_detection_mode")._native_ptr(), 2661282217);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PhysicsServer2D::CCDMode(0));
	return (PhysicsServer2D::CCDMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_set_collision_layer(const RID &body, uint32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_collision_layer")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &layer_encoded);
}

uint32_t PhysicsServer2D::body_get_collision_layer(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_collision_layer")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_set_collision_mask(const RID &body, uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_collision_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &mask_encoded);
}

uint32_t PhysicsServer2D::body_get_collision_mask(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_collision_mask")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_set_collision_priority(const RID &body, double priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_collision_priority")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double priority_encoded;
	PtrToArg<double>::encode(priority, &priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &priority_encoded);
}

double PhysicsServer2D::body_get_collision_priority(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_collision_priority")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_set_param(const RID &body, PhysicsServer2D::BodyParameter param, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_param")._native_ptr(), 2715630609);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &param, &value);
}

Variant PhysicsServer2D::body_get_param(const RID &body, PhysicsServer2D::BodyParameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_param")._native_ptr(), 3208033526);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &body, &param);
}

void PhysicsServer2D::body_reset_mass_properties(const RID &body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_reset_mass_properties")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_set_state(const RID &body, PhysicsServer2D::BodyState state, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_state")._native_ptr(), 1706355209);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &state, &value);
}

Variant PhysicsServer2D::body_get_state(const RID &body, PhysicsServer2D::BodyState state) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_state")._native_ptr(), 4036367961);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &body, &state);
}

void PhysicsServer2D::body_apply_central_impulse(const RID &body, const Vector2 &impulse) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_apply_central_impulse")._native_ptr(), 3201125042);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &impulse);
}

void PhysicsServer2D::body_apply_torque_impulse(const RID &body, double impulse) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_apply_torque_impulse")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double impulse_encoded;
	PtrToArg<double>::encode(impulse, &impulse_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &impulse_encoded);
}

void PhysicsServer2D::body_apply_impulse(const RID &body, const Vector2 &impulse, const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_apply_impulse")._native_ptr(), 205485391);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &impulse, &position);
}

void PhysicsServer2D::body_apply_central_force(const RID &body, const Vector2 &force) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_apply_central_force")._native_ptr(), 3201125042);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &force);
}

void PhysicsServer2D::body_apply_force(const RID &body, const Vector2 &force, const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_apply_force")._native_ptr(), 205485391);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &force, &position);
}

void PhysicsServer2D::body_apply_torque(const RID &body, double torque) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_apply_torque")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double torque_encoded;
	PtrToArg<double>::encode(torque, &torque_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &torque_encoded);
}

void PhysicsServer2D::body_add_constant_central_force(const RID &body, const Vector2 &force) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_add_constant_central_force")._native_ptr(), 3201125042);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &force);
}

void PhysicsServer2D::body_add_constant_force(const RID &body, const Vector2 &force, const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_add_constant_force")._native_ptr(), 205485391);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &force, &position);
}

void PhysicsServer2D::body_add_constant_torque(const RID &body, double torque) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_add_constant_torque")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double torque_encoded;
	PtrToArg<double>::encode(torque, &torque_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &torque_encoded);
}

void PhysicsServer2D::body_set_constant_force(const RID &body, const Vector2 &force) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_constant_force")._native_ptr(), 3201125042);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &force);
}

Vector2 PhysicsServer2D::body_get_constant_force(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_constant_force")._native_ptr(), 2440833711);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_set_constant_torque(const RID &body, double torque) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_constant_torque")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double torque_encoded;
	PtrToArg<double>::encode(torque, &torque_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &torque_encoded);
}

double PhysicsServer2D::body_get_constant_torque(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_constant_torque")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_set_axis_velocity(const RID &body, const Vector2 &axis_velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_axis_velocity")._native_ptr(), 3201125042);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &axis_velocity);
}

void PhysicsServer2D::body_add_collision_exception(const RID &body, const RID &excepted_body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_add_collision_exception")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &excepted_body);
}

void PhysicsServer2D::body_remove_collision_exception(const RID &body, const RID &excepted_body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_remove_collision_exception")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &excepted_body);
}

void PhysicsServer2D::body_set_max_contacts_reported(const RID &body, int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_max_contacts_reported")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &amount_encoded);
}

int32_t PhysicsServer2D::body_get_max_contacts_reported(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_max_contacts_reported")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_set_omit_force_integration(const RID &body, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_omit_force_integration")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &enable_encoded);
}

bool PhysicsServer2D::body_is_omitting_force_integration(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_is_omitting_force_integration")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer2D::body_set_force_integration_callback(const RID &body, const Callable &callable, const Variant &userdata) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_set_force_integration_callback")._native_ptr(), 3059434249);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &callable, &userdata);
}

bool PhysicsServer2D::body_test_motion(const RID &body, const Ref<PhysicsTestMotionParameters2D> &parameters, const Ref<PhysicsTestMotionResult2D> &result) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_test_motion")._native_ptr(), 1699844009);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &body, (parameters != nullptr ? &parameters->_owner : nullptr), (result != nullptr ? &result->_owner : nullptr));
}

PhysicsDirectBodyState2D *PhysicsServer2D::body_get_direct_state(const RID &body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("body_get_direct_state")._native_ptr(), 1191931871);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<PhysicsDirectBodyState2D>(_gde_method_bind, _owner, &body);
}

RID PhysicsServer2D::joint_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("joint_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void PhysicsServer2D::joint_clear(const RID &joint) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("joint_clear")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint);
}

void PhysicsServer2D::joint_set_param(const RID &joint, PhysicsServer2D::JointParam param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("joint_set_param")._native_ptr(), 3972556514);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &param, &value_encoded);
}

double PhysicsServer2D::joint_get_param(const RID &joint, PhysicsServer2D::JointParam param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("joint_get_param")._native_ptr(), 4016448949);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &joint, &param);
}

void PhysicsServer2D::joint_disable_collisions_between_bodies(const RID &joint, bool disable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("joint_disable_collisions_between_bodies")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disable_encoded;
	PtrToArg<bool>::encode(disable, &disable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &disable_encoded);
}

bool PhysicsServer2D::joint_is_disabled_collisions_between_bodies(const RID &joint) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("joint_is_disabled_collisions_between_bodies")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &joint);
}

void PhysicsServer2D::joint_make_pin(const RID &joint, const Vector2 &anchor, const RID &body_a, const RID &body_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("joint_make_pin")._native_ptr(), 1612646186);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &anchor, &body_a, &body_b);
}

void PhysicsServer2D::joint_make_groove(const RID &joint, const Vector2 &groove1_a, const Vector2 &groove2_a, const Vector2 &anchor_b, const RID &body_a, const RID &body_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("joint_make_groove")._native_ptr(), 481430435);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &groove1_a, &groove2_a, &anchor_b, &body_a, &body_b);
}

void PhysicsServer2D::joint_make_damped_spring(const RID &joint, const Vector2 &anchor_a, const Vector2 &anchor_b, const RID &body_a, const RID &body_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("joint_make_damped_spring")._native_ptr(), 1994657646);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &anchor_a, &anchor_b, &body_a, &body_b);
}

void PhysicsServer2D::pin_joint_set_flag(const RID &joint, PhysicsServer2D::PinJointFlag flag, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("pin_joint_set_flag")._native_ptr(), 3520002352);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &flag, &enabled_encoded);
}

bool PhysicsServer2D::pin_joint_get_flag(const RID &joint, PhysicsServer2D::PinJointFlag flag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("pin_joint_get_flag")._native_ptr(), 2647867364);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &joint, &flag);
}

void PhysicsServer2D::pin_joint_set_param(const RID &joint, PhysicsServer2D::PinJointParam param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("pin_joint_set_param")._native_ptr(), 550574241);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &param, &value_encoded);
}

double PhysicsServer2D::pin_joint_get_param(const RID &joint, PhysicsServer2D::PinJointParam param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("pin_joint_get_param")._native_ptr(), 348281383);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &joint, &param);
}

void PhysicsServer2D::damped_spring_joint_set_param(const RID &joint, PhysicsServer2D::DampedSpringParam param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("damped_spring_joint_set_param")._native_ptr(), 220564071);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &param, &value_encoded);
}

double PhysicsServer2D::damped_spring_joint_get_param(const RID &joint, PhysicsServer2D::DampedSpringParam param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("damped_spring_joint_get_param")._native_ptr(), 2075871277);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &joint, &param);
}

PhysicsServer2D::JointType PhysicsServer2D::joint_get_type(const RID &joint) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("joint_get_type")._native_ptr(), 4262502231);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PhysicsServer2D::JointType(0));
	return (PhysicsServer2D::JointType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &joint);
}

void PhysicsServer2D::free_rid(const RID &rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("free_rid")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid);
}

void PhysicsServer2D::set_active(bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("set_active")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &active_encoded);
}

int32_t PhysicsServer2D::get_process_info(PhysicsServer2D::ProcessInfo process_info) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2D::get_class_static()._native_ptr(), StringName("get_process_info")._native_ptr(), 576496006);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &process_info);
}


} // namespace godot 