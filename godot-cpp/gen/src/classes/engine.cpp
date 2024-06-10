/**************************************************************************/
/*  engine.cpp                                                            */
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

#include <godot_cpp/classes/engine.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/variant/string_name.hpp>

namespace godot {

Engine *Engine::singleton = nullptr;

Engine *Engine::get_singleton() {
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(Engine::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<Engine *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &Engine::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
		if (likely(singleton)) {
			ClassDB::_register_engine_singleton(Engine::get_class_static(), singleton);
		}
	}
	return singleton;
}

Engine::~Engine() {
	if (singleton == this) {
		ClassDB::_unregister_engine_singleton(Engine::get_class_static());
		singleton = nullptr;
	}
}

void Engine::set_physics_ticks_per_second(int32_t physics_ticks_per_second) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("set_physics_ticks_per_second")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t physics_ticks_per_second_encoded;
	PtrToArg<int64_t>::encode(physics_ticks_per_second, &physics_ticks_per_second_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &physics_ticks_per_second_encoded);
}

int32_t Engine::get_physics_ticks_per_second() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_physics_ticks_per_second")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Engine::set_max_physics_steps_per_frame(int32_t max_physics_steps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("set_max_physics_steps_per_frame")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_physics_steps_encoded;
	PtrToArg<int64_t>::encode(max_physics_steps, &max_physics_steps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_physics_steps_encoded);
}

int32_t Engine::get_max_physics_steps_per_frame() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_max_physics_steps_per_frame")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Engine::set_physics_jitter_fix(double physics_jitter_fix) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("set_physics_jitter_fix")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double physics_jitter_fix_encoded;
	PtrToArg<double>::encode(physics_jitter_fix, &physics_jitter_fix_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &physics_jitter_fix_encoded);
}

double Engine::get_physics_jitter_fix() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_physics_jitter_fix")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double Engine::get_physics_interpolation_fraction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_physics_interpolation_fraction")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Engine::set_max_fps(int32_t max_fps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("set_max_fps")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_fps_encoded;
	PtrToArg<int64_t>::encode(max_fps, &max_fps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_fps_encoded);
}

int32_t Engine::get_max_fps() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_max_fps")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Engine::set_time_scale(double time_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("set_time_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double time_scale_encoded;
	PtrToArg<double>::encode(time_scale, &time_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &time_scale_encoded);
}

double Engine::get_time_scale() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_time_scale")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

int32_t Engine::get_frames_drawn() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_frames_drawn")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

double Engine::get_frames_per_second() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_frames_per_second")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

uint64_t Engine::get_physics_frames() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_physics_frames")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

uint64_t Engine::get_process_frames() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_process_frames")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

MainLoop *Engine::get_main_loop() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_main_loop")._native_ptr(), 1016888095);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<MainLoop>(_gde_method_bind, _owner);
}

Dictionary Engine::get_version_info() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_version_info")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

Dictionary Engine::get_author_info() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_author_info")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

TypedArray<Dictionary> Engine::get_copyright_info() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_copyright_info")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner);
}

Dictionary Engine::get_donor_info() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_donor_info")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

Dictionary Engine::get_license_info() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_license_info")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

String Engine::get_license_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_license_text")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String Engine::get_architecture_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_architecture_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

bool Engine::is_in_physics_frame() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("is_in_physics_frame")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool Engine::has_singleton(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("has_singleton")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

Object *Engine::get_singleton(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_singleton")._native_ptr(), 1371597918);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Object>(_gde_method_bind, _owner, &name);
}

void Engine::register_singleton(const StringName &name, Object *instance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("register_singleton")._native_ptr(), 965313290);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, (instance != nullptr ? &instance->_owner : nullptr));
}

void Engine::unregister_singleton(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("unregister_singleton")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

PackedStringArray Engine::get_singleton_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_singleton_list")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

Error Engine::register_script_language(ScriptLanguage *language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("register_script_language")._native_ptr(), 1850254898);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (language != nullptr ? &language->_owner : nullptr));
}

Error Engine::unregister_script_language(ScriptLanguage *language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("unregister_script_language")._native_ptr(), 1850254898);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (language != nullptr ? &language->_owner : nullptr));
}

int32_t Engine::get_script_language_count() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_script_language_count")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

ScriptLanguage *Engine::get_script_language(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_script_language")._native_ptr(), 2151255799);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret_obj<ScriptLanguage>(_gde_method_bind, _owner, &index_encoded);
}

bool Engine::is_editor_hint() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("is_editor_hint")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

String Engine::get_write_movie_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("get_write_movie_path")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void Engine::set_print_error_messages(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("set_print_error_messages")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Engine::is_printing_error_messages() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Engine::get_class_static()._native_ptr(), StringName("is_printing_error_messages")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 