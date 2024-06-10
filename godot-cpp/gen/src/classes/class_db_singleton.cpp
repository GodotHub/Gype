/**************************************************************************/
/*  class_db_singleton.cpp                                                */
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

#include <godot_cpp/classes/class_db_singleton.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

ClassDBSingleton *ClassDBSingleton::singleton = nullptr;

ClassDBSingleton *ClassDBSingleton::get_singleton() {
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(ClassDBSingleton::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<ClassDBSingleton *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &ClassDBSingleton::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
		if (likely(singleton)) {
			ClassDB::_register_engine_singleton(ClassDBSingleton::get_class_static(), singleton);
		}
	}
	return singleton;
}

ClassDBSingleton::~ClassDBSingleton() {
	if (singleton == this) {
		ClassDB::_unregister_engine_singleton(ClassDBSingleton::get_class_static());
		singleton = nullptr;
	}
}

PackedStringArray ClassDBSingleton::get_class_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("get_class_list")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

PackedStringArray ClassDBSingleton::get_inheriters_from_class(const StringName &_class) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("get_inheriters_from_class")._native_ptr(), 1761182771);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &_class);
}

StringName ClassDBSingleton::get_parent_class(const StringName &_class) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("get_parent_class")._native_ptr(), 1965194235);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, &_class);
}

bool ClassDBSingleton::class_exists(const StringName &_class) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_exists")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &_class);
}

bool ClassDBSingleton::is_parent_class(const StringName &_class, const StringName &inherits) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("is_parent_class")._native_ptr(), 471820014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &_class, &inherits);
}

bool ClassDBSingleton::can_instantiate(const StringName &_class) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("can_instantiate")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &_class);
}

Variant ClassDBSingleton::instantiate(const StringName &_class) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("instantiate")._native_ptr(), 2760726917);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &_class);
}

bool ClassDBSingleton::class_has_signal(const StringName &_class, const StringName &signal) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_has_signal")._native_ptr(), 471820014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &_class, &signal);
}

Dictionary ClassDBSingleton::class_get_signal(const StringName &_class, const StringName &signal) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_get_signal")._native_ptr(), 3061114238);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &_class, &signal);
}

TypedArray<Dictionary> ClassDBSingleton::class_get_signal_list(const StringName &_class, bool no_inheritance) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_get_signal_list")._native_ptr(), 3504980660);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	int8_t no_inheritance_encoded;
	PtrToArg<bool>::encode(no_inheritance, &no_inheritance_encoded);
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner, &_class, &no_inheritance_encoded);
}

TypedArray<Dictionary> ClassDBSingleton::class_get_property_list(const StringName &_class, bool no_inheritance) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_get_property_list")._native_ptr(), 3504980660);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	int8_t no_inheritance_encoded;
	PtrToArg<bool>::encode(no_inheritance, &no_inheritance_encoded);
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner, &_class, &no_inheritance_encoded);
}

Variant ClassDBSingleton::class_get_property(Object *object, const StringName &property) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_get_property")._native_ptr(), 2498641674);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr), &property);
}

Error ClassDBSingleton::class_set_property(Object *object, const StringName &property, const Variant &value) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_set_property")._native_ptr(), 1690314931);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr), &property, &value);
}

Variant ClassDBSingleton::class_get_property_default_value(const StringName &_class, const StringName &property) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_get_property_default_value")._native_ptr(), 2718203076);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &_class, &property);
}

bool ClassDBSingleton::class_has_method(const StringName &_class, const StringName &method, bool no_inheritance) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_has_method")._native_ptr(), 3860701026);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int8_t no_inheritance_encoded;
	PtrToArg<bool>::encode(no_inheritance, &no_inheritance_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &_class, &method, &no_inheritance_encoded);
}

int32_t ClassDBSingleton::class_get_method_argument_count(const StringName &_class, const StringName &method, bool no_inheritance) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_get_method_argument_count")._native_ptr(), 3885694822);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int8_t no_inheritance_encoded;
	PtrToArg<bool>::encode(no_inheritance, &no_inheritance_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &_class, &method, &no_inheritance_encoded);
}

TypedArray<Dictionary> ClassDBSingleton::class_get_method_list(const StringName &_class, bool no_inheritance) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_get_method_list")._native_ptr(), 3504980660);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	int8_t no_inheritance_encoded;
	PtrToArg<bool>::encode(no_inheritance, &no_inheritance_encoded);
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner, &_class, &no_inheritance_encoded);
}

PackedStringArray ClassDBSingleton::class_get_integer_constant_list(const StringName &_class, bool no_inheritance) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_get_integer_constant_list")._native_ptr(), 3031669221);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	int8_t no_inheritance_encoded;
	PtrToArg<bool>::encode(no_inheritance, &no_inheritance_encoded);
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &_class, &no_inheritance_encoded);
}

bool ClassDBSingleton::class_has_integer_constant(const StringName &_class, const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_has_integer_constant")._native_ptr(), 471820014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &_class, &name);
}

int64_t ClassDBSingleton::class_get_integer_constant(const StringName &_class, const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_get_integer_constant")._native_ptr(), 2419549490);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &_class, &name);
}

bool ClassDBSingleton::class_has_enum(const StringName &_class, const StringName &name, bool no_inheritance) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_has_enum")._native_ptr(), 3860701026);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int8_t no_inheritance_encoded;
	PtrToArg<bool>::encode(no_inheritance, &no_inheritance_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &_class, &name, &no_inheritance_encoded);
}

PackedStringArray ClassDBSingleton::class_get_enum_list(const StringName &_class, bool no_inheritance) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_get_enum_list")._native_ptr(), 3031669221);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	int8_t no_inheritance_encoded;
	PtrToArg<bool>::encode(no_inheritance, &no_inheritance_encoded);
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &_class, &no_inheritance_encoded);
}

PackedStringArray ClassDBSingleton::class_get_enum_constants(const StringName &_class, const StringName &_enum, bool no_inheritance) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_get_enum_constants")._native_ptr(), 661528303);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	int8_t no_inheritance_encoded;
	PtrToArg<bool>::encode(no_inheritance, &no_inheritance_encoded);
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &_class, &_enum, &no_inheritance_encoded);
}

StringName ClassDBSingleton::class_get_integer_constant_enum(const StringName &_class, const StringName &name, bool no_inheritance) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("class_get_integer_constant_enum")._native_ptr(), 2457504236);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	int8_t no_inheritance_encoded;
	PtrToArg<bool>::encode(no_inheritance, &no_inheritance_encoded);
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, &_class, &name, &no_inheritance_encoded);
}

bool ClassDBSingleton::is_class_enum_bitfield(const StringName &_class, const StringName &_enum, bool no_inheritance) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("is_class_enum_bitfield")._native_ptr(), 3860701026);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int8_t no_inheritance_encoded;
	PtrToArg<bool>::encode(no_inheritance, &no_inheritance_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &_class, &_enum, &no_inheritance_encoded);
}

bool ClassDBSingleton::is_class_enabled(const StringName &_class) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ClassDBSingleton::get_class_static()._native_ptr(), StringName("is_class_enabled")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &_class);
}


} // namespace godot 