/**************************************************************************/
/*  physics_server3d.cpp                                                  */
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

#include <godot_cpp/classes/physics_server3d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d.hpp>
#include <godot_cpp/classes/physics_direct_space_state3d.hpp>
#include <godot_cpp/classes/physics_server3d_rendering_server_handler.hpp>
#include <godot_cpp/classes/physics_test_motion_parameters3d.hpp>

namespace godot {


PhysicsServer3D *PhysicsServer3D::singleton = nullptr;

PhysicsServer3D *PhysicsServer3D::get_singleton() {
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(PhysicsServer3D::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<PhysicsServer3D *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &PhysicsServer3D::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
		if (likely(singleton)) {
			ClassDB::_register_engine_singleton(PhysicsServer3D::get_class_static(), singleton);
		}
	}
	return singleton;
}

PhysicsServer3D::~PhysicsServer3D() {
	if (singleton == this) {
		ClassDB::_unregister_engine_singleton(PhysicsServer3D::get_class_static());
		singleton = nullptr;
	}
}

RID PhysicsServer3D::world_boundary_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("world_boundary_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer3D::separation_ray_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("separation_ray_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer3D::sphere_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("sphere_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer3D::box_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("box_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer3D::capsule_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("capsule_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer3D::cylinder_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("cylinder_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer3D::convex_polygon_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("convex_polygon_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer3D::concave_polygon_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("concave_polygon_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer3D::heightmap_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("heightmap_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID PhysicsServer3D::custom_shape_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("custom_shape_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void PhysicsServer3D::shape_set_data(const RID &shape, const Variant &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("shape_set_data")._native_ptr(), 3175752987);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape, &data);
}

void PhysicsServer3D::shape_set_margin(const RID &shape, double margin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("shape_set_margin")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double margin_encoded;
	PtrToArg<double>::encode(margin, &margin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape, &margin_encoded);
}

PhysicsServer3D::ShapeType PhysicsServer3D::shape_get_type(const RID &shape) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("shape_get_type")._native_ptr(), 3418923367);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PhysicsServer3D::ShapeType(0));
	return (PhysicsServer3D::ShapeType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shape);
}

Variant PhysicsServer3D::shape_get_data(const RID &shape) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("shape_get_data")._native_ptr(), 4171304767);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &shape);
}

double PhysicsServer3D::shape_get_margin(const RID &shape) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("shape_get_margin")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &shape);
}

RID PhysicsServer3D::space_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("space_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void PhysicsServer3D::space_set_active(const RID &space, bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("space_set_active")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &space, &active_encoded);
}

bool PhysicsServer3D::space_is_active(const RID &space) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("space_is_active")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &space);
}

void PhysicsServer3D::space_set_param(const RID &space, PhysicsServer3D::SpaceParameter param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("space_set_param")._native_ptr(), 2406017470);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &space, &param, &value_encoded);
}

double PhysicsServer3D::space_get_param(const RID &space, PhysicsServer3D::SpaceParameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("space_get_param")._native_ptr(), 1523206731);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &space, &param);
}

PhysicsDirectSpaceState3D *PhysicsServer3D::space_get_direct_state(const RID &space) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("space_get_direct_state")._native_ptr(), 2048616813);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<PhysicsDirectSpaceState3D>(_gde_method_bind, _owner, &space);
}

RID PhysicsServer3D::area_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void PhysicsServer3D::area_set_space(const RID &area, const RID &space) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_set_space")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &space);
}

RID PhysicsServer3D::area_get_space(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_get_space")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &area);
}

void PhysicsServer3D::area_add_shape(const RID &area, const RID &shape, const Transform3D &transform, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_add_shape")._native_ptr(), 3711419014);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &shape, &transform, &disabled_encoded);
}

void PhysicsServer3D::area_set_shape(const RID &area, int32_t shape_idx, const RID &shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_set_shape")._native_ptr(), 2310537182);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &shape_idx_encoded, &shape);
}

void PhysicsServer3D::area_set_shape_transform(const RID &area, int32_t shape_idx, const Transform3D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_set_shape_transform")._native_ptr(), 675327471);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &shape_idx_encoded, &transform);
}

void PhysicsServer3D::area_set_shape_disabled(const RID &area, int32_t shape_idx, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_set_shape_disabled")._native_ptr(), 2658558584);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &shape_idx_encoded, &disabled_encoded);
}

int32_t PhysicsServer3D::area_get_shape_count(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_get_shape_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &area);
}

RID PhysicsServer3D::area_get_shape(const RID &area, int32_t shape_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_get_shape")._native_ptr(), 1066463050);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &area, &shape_idx_encoded);
}

Transform3D PhysicsServer3D::area_get_shape_transform(const RID &area, int32_t shape_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_get_shape_transform")._native_ptr(), 1050775521);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &area, &shape_idx_encoded);
}

void PhysicsServer3D::area_remove_shape(const RID &area, int32_t shape_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_remove_shape")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &shape_idx_encoded);
}

void PhysicsServer3D::area_clear_shapes(const RID &area) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_clear_shapes")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area);
}

void PhysicsServer3D::area_set_collision_layer(const RID &area, uint32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_set_collision_layer")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &layer_encoded);
}

uint32_t PhysicsServer3D::area_get_collision_layer(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_get_collision_layer")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &area);
}

void PhysicsServer3D::area_set_collision_mask(const RID &area, uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_set_collision_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &mask_encoded);
}

uint32_t PhysicsServer3D::area_get_collision_mask(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_get_collision_mask")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &area);
}

void PhysicsServer3D::area_set_param(const RID &area, PhysicsServer3D::AreaParameter param, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_set_param")._native_ptr(), 2980114638);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &param, &value);
}

void PhysicsServer3D::area_set_transform(const RID &area, const Transform3D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_set_transform")._native_ptr(), 3935195649);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &transform);
}

Variant PhysicsServer3D::area_get_param(const RID &area, PhysicsServer3D::AreaParameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_get_param")._native_ptr(), 890056067);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &area, &param);
}

Transform3D PhysicsServer3D::area_get_transform(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_get_transform")._native_ptr(), 1128465797);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &area);
}

void PhysicsServer3D::area_attach_object_instance_id(const RID &area, uint64_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_attach_object_instance_id")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &id_encoded);
}

uint64_t PhysicsServer3D::area_get_object_instance_id(const RID &area) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_get_object_instance_id")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &area);
}

void PhysicsServer3D::area_set_monitor_callback(const RID &area, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_set_monitor_callback")._native_ptr(), 3379118538);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &callback);
}

void PhysicsServer3D::area_set_area_monitor_callback(const RID &area, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_set_area_monitor_callback")._native_ptr(), 3379118538);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &callback);
}

void PhysicsServer3D::area_set_monitorable(const RID &area, bool monitorable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_set_monitorable")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t monitorable_encoded;
	PtrToArg<bool>::encode(monitorable, &monitorable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &monitorable_encoded);
}

void PhysicsServer3D::area_set_ray_pickable(const RID &area, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("area_set_ray_pickable")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &area, &enable_encoded);
}

RID PhysicsServer3D::body_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void PhysicsServer3D::body_set_space(const RID &body, const RID &space) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_space")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &space);
}

RID PhysicsServer3D::body_get_space(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_space")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_set_mode(const RID &body, PhysicsServer3D::BodyMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_mode")._native_ptr(), 606803466);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &mode);
}

PhysicsServer3D::BodyMode PhysicsServer3D::body_get_mode(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_mode")._native_ptr(), 2488819728);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PhysicsServer3D::BodyMode(0));
	return (PhysicsServer3D::BodyMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_set_collision_layer(const RID &body, uint32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_collision_layer")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &layer_encoded);
}

uint32_t PhysicsServer3D::body_get_collision_layer(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_collision_layer")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_set_collision_mask(const RID &body, uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_collision_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &mask_encoded);
}

uint32_t PhysicsServer3D::body_get_collision_mask(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_collision_mask")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_set_collision_priority(const RID &body, double priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_collision_priority")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double priority_encoded;
	PtrToArg<double>::encode(priority, &priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &priority_encoded);
}

double PhysicsServer3D::body_get_collision_priority(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_collision_priority")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_add_shape(const RID &body, const RID &shape, const Transform3D &transform, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_add_shape")._native_ptr(), 3711419014);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &shape, &transform, &disabled_encoded);
}

void PhysicsServer3D::body_set_shape(const RID &body, int32_t shape_idx, const RID &shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_shape")._native_ptr(), 2310537182);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &shape_idx_encoded, &shape);
}

void PhysicsServer3D::body_set_shape_transform(const RID &body, int32_t shape_idx, const Transform3D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_shape_transform")._native_ptr(), 675327471);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &shape_idx_encoded, &transform);
}

void PhysicsServer3D::body_set_shape_disabled(const RID &body, int32_t shape_idx, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_shape_disabled")._native_ptr(), 2658558584);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &shape_idx_encoded, &disabled_encoded);
}

int32_t PhysicsServer3D::body_get_shape_count(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_shape_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

RID PhysicsServer3D::body_get_shape(const RID &body, int32_t shape_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_shape")._native_ptr(), 1066463050);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &body, &shape_idx_encoded);
}

Transform3D PhysicsServer3D::body_get_shape_transform(const RID &body, int32_t shape_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_shape_transform")._native_ptr(), 1050775521);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &body, &shape_idx_encoded);
}

void PhysicsServer3D::body_remove_shape(const RID &body, int32_t shape_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_remove_shape")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_idx_encoded;
	PtrToArg<int64_t>::encode(shape_idx, &shape_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &shape_idx_encoded);
}

void PhysicsServer3D::body_clear_shapes(const RID &body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_clear_shapes")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_attach_object_instance_id(const RID &body, uint64_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_attach_object_instance_id")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &id_encoded);
}

uint64_t PhysicsServer3D::body_get_object_instance_id(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_object_instance_id")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_set_enable_continuous_collision_detection(const RID &body, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_enable_continuous_collision_detection")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &enable_encoded);
}

bool PhysicsServer3D::body_is_continuous_collision_detection_enabled(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_is_continuous_collision_detection_enabled")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_set_param(const RID &body, PhysicsServer3D::BodyParameter param, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_param")._native_ptr(), 910941953);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &param, &value);
}

Variant PhysicsServer3D::body_get_param(const RID &body, PhysicsServer3D::BodyParameter param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_param")._native_ptr(), 3385027841);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &body, &param);
}

void PhysicsServer3D::body_reset_mass_properties(const RID &body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_reset_mass_properties")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_set_state(const RID &body, PhysicsServer3D::BodyState state, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_state")._native_ptr(), 599977762);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &state, &value);
}

Variant PhysicsServer3D::body_get_state(const RID &body, PhysicsServer3D::BodyState state) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_state")._native_ptr(), 1850449534);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &body, &state);
}

void PhysicsServer3D::body_apply_central_impulse(const RID &body, const Vector3 &impulse) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_apply_central_impulse")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &impulse);
}

void PhysicsServer3D::body_apply_impulse(const RID &body, const Vector3 &impulse, const Vector3 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_apply_impulse")._native_ptr(), 390416203);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &impulse, &position);
}

void PhysicsServer3D::body_apply_torque_impulse(const RID &body, const Vector3 &impulse) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_apply_torque_impulse")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &impulse);
}

void PhysicsServer3D::body_apply_central_force(const RID &body, const Vector3 &force) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_apply_central_force")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &force);
}

void PhysicsServer3D::body_apply_force(const RID &body, const Vector3 &force, const Vector3 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_apply_force")._native_ptr(), 390416203);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &force, &position);
}

void PhysicsServer3D::body_apply_torque(const RID &body, const Vector3 &torque) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_apply_torque")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &torque);
}

void PhysicsServer3D::body_add_constant_central_force(const RID &body, const Vector3 &force) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_add_constant_central_force")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &force);
}

void PhysicsServer3D::body_add_constant_force(const RID &body, const Vector3 &force, const Vector3 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_add_constant_force")._native_ptr(), 390416203);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &force, &position);
}

void PhysicsServer3D::body_add_constant_torque(const RID &body, const Vector3 &torque) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_add_constant_torque")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &torque);
}

void PhysicsServer3D::body_set_constant_force(const RID &body, const Vector3 &force) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_constant_force")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &force);
}

Vector3 PhysicsServer3D::body_get_constant_force(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_constant_force")._native_ptr(), 531438156);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_set_constant_torque(const RID &body, const Vector3 &torque) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_constant_torque")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &torque);
}

Vector3 PhysicsServer3D::body_get_constant_torque(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_constant_torque")._native_ptr(), 531438156);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_set_axis_velocity(const RID &body, const Vector3 &axis_velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_axis_velocity")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &axis_velocity);
}

void PhysicsServer3D::body_set_axis_lock(const RID &body, PhysicsServer3D::BodyAxis axis, bool lock) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_axis_lock")._native_ptr(), 2020836892);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t lock_encoded;
	PtrToArg<bool>::encode(lock, &lock_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &axis, &lock_encoded);
}

bool PhysicsServer3D::body_is_axis_locked(const RID &body, PhysicsServer3D::BodyAxis axis) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_is_axis_locked")._native_ptr(), 587853580);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &body, &axis);
}

void PhysicsServer3D::body_add_collision_exception(const RID &body, const RID &excepted_body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_add_collision_exception")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &excepted_body);
}

void PhysicsServer3D::body_remove_collision_exception(const RID &body, const RID &excepted_body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_remove_collision_exception")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &excepted_body);
}

void PhysicsServer3D::body_set_max_contacts_reported(const RID &body, int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_max_contacts_reported")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &amount_encoded);
}

int32_t PhysicsServer3D::body_get_max_contacts_reported(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_max_contacts_reported")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_set_omit_force_integration(const RID &body, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_omit_force_integration")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &enable_encoded);
}

bool PhysicsServer3D::body_is_omitting_force_integration(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_is_omitting_force_integration")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::body_set_force_integration_callback(const RID &body, const Callable &callable, const Variant &userdata) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_force_integration_callback")._native_ptr(), 3059434249);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &callable, &userdata);
}

void PhysicsServer3D::body_set_ray_pickable(const RID &body, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_set_ray_pickable")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &enable_encoded);
}

bool PhysicsServer3D::body_test_motion(const RID &body, const Ref<PhysicsTestMotionParameters3D> &parameters, const Ref<PhysicsTestMotionResult3D> &result) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_test_motion")._native_ptr(), 1944921792);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &body, (parameters != nullptr ? &parameters->_owner : nullptr), (result != nullptr ? &result->_owner : nullptr));
}

PhysicsDirectBodyState3D *PhysicsServer3D::body_get_direct_state(const RID &body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("body_get_direct_state")._native_ptr(), 3029727957);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<PhysicsDirectBodyState3D>(_gde_method_bind, _owner, &body);
}

RID PhysicsServer3D::soft_body_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void PhysicsServer3D::soft_body_update_rendering_server(const RID &body, PhysicsServer3DRenderingServerHandler *rendering_server_handler) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_update_rendering_server")._native_ptr(), 2218179753);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, (rendering_server_handler != nullptr ? &rendering_server_handler->_owner : nullptr));
}

void PhysicsServer3D::soft_body_set_space(const RID &body, const RID &space) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_space")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &space);
}

RID PhysicsServer3D::soft_body_get_space(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_get_space")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::soft_body_set_mesh(const RID &body, const RID &mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_mesh")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &mesh);
}

AABB PhysicsServer3D::soft_body_get_bounds(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_get_bounds")._native_ptr(), 974181306);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AABB());
	return internal::_call_native_mb_ret<AABB>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::soft_body_set_collision_layer(const RID &body, uint32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_collision_layer")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &layer_encoded);
}

uint32_t PhysicsServer3D::soft_body_get_collision_layer(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_get_collision_layer")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::soft_body_set_collision_mask(const RID &body, uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_collision_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &mask_encoded);
}

uint32_t PhysicsServer3D::soft_body_get_collision_mask(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_get_collision_mask")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::soft_body_add_collision_exception(const RID &body, const RID &body_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_add_collision_exception")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &body_b);
}

void PhysicsServer3D::soft_body_remove_collision_exception(const RID &body, const RID &body_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_remove_collision_exception")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &body_b);
}

void PhysicsServer3D::soft_body_set_state(const RID &body, PhysicsServer3D::BodyState state, const Variant &variant) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_state")._native_ptr(), 599977762);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &state, &variant);
}

Variant PhysicsServer3D::soft_body_get_state(const RID &body, PhysicsServer3D::BodyState state) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_get_state")._native_ptr(), 1850449534);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &body, &state);
}

void PhysicsServer3D::soft_body_set_transform(const RID &body, const Transform3D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_transform")._native_ptr(), 3935195649);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &transform);
}

void PhysicsServer3D::soft_body_set_ray_pickable(const RID &body, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_ray_pickable")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &enable_encoded);
}

void PhysicsServer3D::soft_body_set_simulation_precision(const RID &body, int32_t simulation_precision) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_simulation_precision")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t simulation_precision_encoded;
	PtrToArg<int64_t>::encode(simulation_precision, &simulation_precision_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &simulation_precision_encoded);
}

int32_t PhysicsServer3D::soft_body_get_simulation_precision(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_get_simulation_precision")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::soft_body_set_total_mass(const RID &body, double total_mass) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_total_mass")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double total_mass_encoded;
	PtrToArg<double>::encode(total_mass, &total_mass_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &total_mass_encoded);
}

double PhysicsServer3D::soft_body_get_total_mass(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_get_total_mass")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::soft_body_set_linear_stiffness(const RID &body, double stiffness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_linear_stiffness")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double stiffness_encoded;
	PtrToArg<double>::encode(stiffness, &stiffness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &stiffness_encoded);
}

double PhysicsServer3D::soft_body_get_linear_stiffness(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_get_linear_stiffness")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::soft_body_set_pressure_coefficient(const RID &body, double pressure_coefficient) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_pressure_coefficient")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double pressure_coefficient_encoded;
	PtrToArg<double>::encode(pressure_coefficient, &pressure_coefficient_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &pressure_coefficient_encoded);
}

double PhysicsServer3D::soft_body_get_pressure_coefficient(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_get_pressure_coefficient")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::soft_body_set_damping_coefficient(const RID &body, double damping_coefficient) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_damping_coefficient")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double damping_coefficient_encoded;
	PtrToArg<double>::encode(damping_coefficient, &damping_coefficient_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &damping_coefficient_encoded);
}

double PhysicsServer3D::soft_body_get_damping_coefficient(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_get_damping_coefficient")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::soft_body_set_drag_coefficient(const RID &body, double drag_coefficient) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_set_drag_coefficient")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double drag_coefficient_encoded;
	PtrToArg<double>::encode(drag_coefficient, &drag_coefficient_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &drag_coefficient_encoded);
}

double PhysicsServer3D::soft_body_get_drag_coefficient(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_get_drag_coefficient")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::soft_body_move_point(const RID &body, int32_t point_index, const Vector3 &global_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_move_point")._native_ptr(), 831953689);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_index_encoded;
	PtrToArg<int64_t>::encode(point_index, &point_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &point_index_encoded, &global_position);
}

Vector3 PhysicsServer3D::soft_body_get_point_global_position(const RID &body, int32_t point_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_get_point_global_position")._native_ptr(), 3440143363);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t point_index_encoded;
	PtrToArg<int64_t>::encode(point_index, &point_index_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &body, &point_index_encoded);
}

void PhysicsServer3D::soft_body_remove_all_pinned_points(const RID &body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_remove_all_pinned_points")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body);
}

void PhysicsServer3D::soft_body_pin_point(const RID &body, int32_t point_index, bool pin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_pin_point")._native_ptr(), 2658558584);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_index_encoded;
	PtrToArg<int64_t>::encode(point_index, &point_index_encoded);
	int8_t pin_encoded;
	PtrToArg<bool>::encode(pin, &pin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &body, &point_index_encoded, &pin_encoded);
}

bool PhysicsServer3D::soft_body_is_point_pinned(const RID &body, int32_t point_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("soft_body_is_point_pinned")._native_ptr(), 3120086654);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t point_index_encoded;
	PtrToArg<int64_t>::encode(point_index, &point_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &body, &point_index_encoded);
}

RID PhysicsServer3D::joint_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("joint_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void PhysicsServer3D::joint_clear(const RID &joint) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("joint_clear")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint);
}

void PhysicsServer3D::joint_make_pin(const RID &joint, const RID &body_A, const Vector3 &local_A, const RID &body_B, const Vector3 &local_B) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("joint_make_pin")._native_ptr(), 4280171926);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &body_A, &local_A, &body_B, &local_B);
}

void PhysicsServer3D::pin_joint_set_param(const RID &joint, PhysicsServer3D::PinJointParam param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("pin_joint_set_param")._native_ptr(), 810685294);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &param, &value_encoded);
}

double PhysicsServer3D::pin_joint_get_param(const RID &joint, PhysicsServer3D::PinJointParam param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("pin_joint_get_param")._native_ptr(), 2817972347);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &joint, &param);
}

void PhysicsServer3D::pin_joint_set_local_a(const RID &joint, const Vector3 &local_A) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("pin_joint_set_local_a")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &local_A);
}

Vector3 PhysicsServer3D::pin_joint_get_local_a(const RID &joint) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("pin_joint_get_local_a")._native_ptr(), 531438156);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &joint);
}

void PhysicsServer3D::pin_joint_set_local_b(const RID &joint, const Vector3 &local_B) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("pin_joint_set_local_b")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &local_B);
}

Vector3 PhysicsServer3D::pin_joint_get_local_b(const RID &joint) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("pin_joint_get_local_b")._native_ptr(), 531438156);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &joint);
}

void PhysicsServer3D::joint_make_hinge(const RID &joint, const RID &body_A, const Transform3D &hinge_A, const RID &body_B, const Transform3D &hinge_B) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("joint_make_hinge")._native_ptr(), 1684107643);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &body_A, &hinge_A, &body_B, &hinge_B);
}

void PhysicsServer3D::hinge_joint_set_param(const RID &joint, PhysicsServer3D::HingeJointParam param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("hinge_joint_set_param")._native_ptr(), 3165502333);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &param, &value_encoded);
}

double PhysicsServer3D::hinge_joint_get_param(const RID &joint, PhysicsServer3D::HingeJointParam param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("hinge_joint_get_param")._native_ptr(), 2129207581);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &joint, &param);
}

void PhysicsServer3D::hinge_joint_set_flag(const RID &joint, PhysicsServer3D::HingeJointFlag flag, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("hinge_joint_set_flag")._native_ptr(), 1601626188);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &flag, &enabled_encoded);
}

bool PhysicsServer3D::hinge_joint_get_flag(const RID &joint, PhysicsServer3D::HingeJointFlag flag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("hinge_joint_get_flag")._native_ptr(), 4165147865);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &joint, &flag);
}

void PhysicsServer3D::joint_make_slider(const RID &joint, const RID &body_A, const Transform3D &local_ref_A, const RID &body_B, const Transform3D &local_ref_B) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("joint_make_slider")._native_ptr(), 1684107643);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &body_A, &local_ref_A, &body_B, &local_ref_B);
}

void PhysicsServer3D::slider_joint_set_param(const RID &joint, PhysicsServer3D::SliderJointParam param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("slider_joint_set_param")._native_ptr(), 2264833593);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &param, &value_encoded);
}

double PhysicsServer3D::slider_joint_get_param(const RID &joint, PhysicsServer3D::SliderJointParam param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("slider_joint_get_param")._native_ptr(), 3498644957);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &joint, &param);
}

void PhysicsServer3D::joint_make_cone_twist(const RID &joint, const RID &body_A, const Transform3D &local_ref_A, const RID &body_B, const Transform3D &local_ref_B) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("joint_make_cone_twist")._native_ptr(), 1684107643);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &body_A, &local_ref_A, &body_B, &local_ref_B);
}

void PhysicsServer3D::cone_twist_joint_set_param(const RID &joint, PhysicsServer3D::ConeTwistJointParam param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("cone_twist_joint_set_param")._native_ptr(), 808587618);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &param, &value_encoded);
}

double PhysicsServer3D::cone_twist_joint_get_param(const RID &joint, PhysicsServer3D::ConeTwistJointParam param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("cone_twist_joint_get_param")._native_ptr(), 1134789658);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &joint, &param);
}

PhysicsServer3D::JointType PhysicsServer3D::joint_get_type(const RID &joint) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("joint_get_type")._native_ptr(), 4290791900);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PhysicsServer3D::JointType(0));
	return (PhysicsServer3D::JointType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &joint);
}

void PhysicsServer3D::joint_set_solver_priority(const RID &joint, int32_t priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("joint_set_solver_priority")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t priority_encoded;
	PtrToArg<int64_t>::encode(priority, &priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &priority_encoded);
}

int32_t PhysicsServer3D::joint_get_solver_priority(const RID &joint) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("joint_get_solver_priority")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &joint);
}

void PhysicsServer3D::joint_disable_collisions_between_bodies(const RID &joint, bool disable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("joint_disable_collisions_between_bodies")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disable_encoded;
	PtrToArg<bool>::encode(disable, &disable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &disable_encoded);
}

bool PhysicsServer3D::joint_is_disabled_collisions_between_bodies(const RID &joint) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("joint_is_disabled_collisions_between_bodies")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &joint);
}

void PhysicsServer3D::joint_make_generic_6dof(const RID &joint, const RID &body_A, const Transform3D &local_ref_A, const RID &body_B, const Transform3D &local_ref_B) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("joint_make_generic_6dof")._native_ptr(), 1684107643);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &body_A, &local_ref_A, &body_B, &local_ref_B);
}

void PhysicsServer3D::generic_6dof_joint_set_param(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisParam param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("generic_6dof_joint_set_param")._native_ptr(), 2600081391);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &axis, &param, &value_encoded);
}

double PhysicsServer3D::generic_6dof_joint_get_param(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisParam param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("generic_6dof_joint_get_param")._native_ptr(), 467122058);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &joint, &axis, &param);
}

void PhysicsServer3D::generic_6dof_joint_set_flag(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisFlag flag, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("generic_6dof_joint_set_flag")._native_ptr(), 3570926903);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint, &axis, &flag, &enable_encoded);
}

bool PhysicsServer3D::generic_6dof_joint_get_flag(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisFlag flag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("generic_6dof_joint_get_flag")._native_ptr(), 4158090196);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &joint, &axis, &flag);
}

void PhysicsServer3D::free_rid(const RID &rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("free_rid")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid);
}

void PhysicsServer3D::set_active(bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("set_active")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &active_encoded);
}

int32_t PhysicsServer3D::get_process_info(PhysicsServer3D::ProcessInfo process_info) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3D::get_class_static()._native_ptr(), StringName("get_process_info")._native_ptr(), 1332958745);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &process_info);
}


} // namespace godot 