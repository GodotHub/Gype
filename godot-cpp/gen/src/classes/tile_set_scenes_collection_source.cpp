/**************************************************************************/
/*  tile_set_scenes_collection_source.cpp                                 */
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

#include <godot_cpp/classes/tile_set_scenes_collection_source.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/packed_scene.hpp>

namespace godot {


int32_t TileSetScenesCollectionSource::get_scene_tiles_count() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetScenesCollectionSource::get_class_static()._native_ptr(), StringName("get_scene_tiles_count")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t TileSetScenesCollectionSource::get_scene_tile_id(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetScenesCollectionSource::get_class_static()._native_ptr(), StringName("get_scene_tile_id")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded);
}

bool TileSetScenesCollectionSource::has_scene_tile_id(int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetScenesCollectionSource::get_class_static()._native_ptr(), StringName("has_scene_tile_id")._native_ptr(), 3067735520);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &id_encoded);
}

int32_t TileSetScenesCollectionSource::create_scene_tile(const Ref<PackedScene> &packed_scene, int32_t id_override) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetScenesCollectionSource::get_class_static()._native_ptr(), StringName("create_scene_tile")._native_ptr(), 1117465415);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t id_override_encoded;
	PtrToArg<int64_t>::encode(id_override, &id_override_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (packed_scene != nullptr ? &packed_scene->_owner : nullptr), &id_override_encoded);
}

void TileSetScenesCollectionSource::set_scene_tile_id(int32_t id, int32_t new_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetScenesCollectionSource::get_class_static()._native_ptr(), StringName("set_scene_tile_id")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int64_t new_id_encoded;
	PtrToArg<int64_t>::encode(new_id, &new_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded, &new_id_encoded);
}

void TileSetScenesCollectionSource::set_scene_tile_scene(int32_t id, const Ref<PackedScene> &packed_scene) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetScenesCollectionSource::get_class_static()._native_ptr(), StringName("set_scene_tile_scene")._native_ptr(), 3435852839);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded, (packed_scene != nullptr ? &packed_scene->_owner : nullptr));
}

Ref<PackedScene> TileSetScenesCollectionSource::get_scene_tile_scene(int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetScenesCollectionSource::get_class_static()._native_ptr(), StringName("get_scene_tile_scene")._native_ptr(), 511017218);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<PackedScene>());
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return Ref<PackedScene>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<PackedScene>(_gde_method_bind, _owner, &id_encoded));
}

void TileSetScenesCollectionSource::set_scene_tile_display_placeholder(int32_t id, bool display_placeholder) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetScenesCollectionSource::get_class_static()._native_ptr(), StringName("set_scene_tile_display_placeholder")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int8_t display_placeholder_encoded;
	PtrToArg<bool>::encode(display_placeholder, &display_placeholder_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded, &display_placeholder_encoded);
}

bool TileSetScenesCollectionSource::get_scene_tile_display_placeholder(int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetScenesCollectionSource::get_class_static()._native_ptr(), StringName("get_scene_tile_display_placeholder")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &id_encoded);
}

void TileSetScenesCollectionSource::remove_scene_tile(int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetScenesCollectionSource::get_class_static()._native_ptr(), StringName("remove_scene_tile")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded);
}

int32_t TileSetScenesCollectionSource::get_next_scene_tile_id() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetScenesCollectionSource::get_class_static()._native_ptr(), StringName("get_next_scene_tile_id")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 