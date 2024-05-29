/**************************************************************************/
/*  resource_preloader.cpp                                                */
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

#include <godot_cpp/classes/resource_preloader.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string_name.hpp>

namespace godot {

void ResourcePreloader::add_resource(const StringName &name, const Ref<Resource> &resource) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourcePreloader::get_class_static()._native_ptr(), StringName("add_resource")._native_ptr(), 1168801743);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, (resource != nullptr ? &resource->_owner : nullptr));
}

void ResourcePreloader::remove_resource(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourcePreloader::get_class_static()._native_ptr(), StringName("remove_resource")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void ResourcePreloader::rename_resource(const StringName &name, const StringName &newname) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourcePreloader::get_class_static()._native_ptr(), StringName("rename_resource")._native_ptr(), 3740211285);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &newname);
}

bool ResourcePreloader::has_resource(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourcePreloader::get_class_static()._native_ptr(), StringName("has_resource")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

Ref<Resource> ResourcePreloader::get_resource(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourcePreloader::get_class_static()._native_ptr(), StringName("get_resource")._native_ptr(), 3742749261);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Resource>());
	return Ref<Resource>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Resource>(_gde_method_bind, _owner, &name));
}

PackedStringArray ResourcePreloader::get_resource_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourcePreloader::get_class_static()._native_ptr(), StringName("get_resource_list")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}


} // namespace godot 