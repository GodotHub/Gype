/**************************************************************************/
/*  open_xr_interaction_profile_metadata.cpp                              */
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

#include <godot_cpp/classes/open_xr_interaction_profile_metadata.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/string.hpp>

namespace godot {


void OpenXRInteractionProfileMetadata::register_profile_rename(const String &old_name, const String &new_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRInteractionProfileMetadata::get_class_static()._native_ptr(), StringName("register_profile_rename")._native_ptr(), 3186203200);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &old_name, &new_name);
}

void OpenXRInteractionProfileMetadata::register_top_level_path(const String &display_name, const String &openxr_path, const String &openxr_extension_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRInteractionProfileMetadata::get_class_static()._native_ptr(), StringName("register_top_level_path")._native_ptr(), 254767734);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &display_name, &openxr_path, &openxr_extension_name);
}

void OpenXRInteractionProfileMetadata::register_interaction_profile(const String &display_name, const String &openxr_path, const String &openxr_extension_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRInteractionProfileMetadata::get_class_static()._native_ptr(), StringName("register_interaction_profile")._native_ptr(), 254767734);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &display_name, &openxr_path, &openxr_extension_name);
}

void OpenXRInteractionProfileMetadata::register_io_path(const String &interaction_profile, const String &display_name, const String &toplevel_path, const String &openxr_path, const String &openxr_extension_name, OpenXRAction::ActionType action_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRInteractionProfileMetadata::get_class_static()._native_ptr(), StringName("register_io_path")._native_ptr(), 3443511926);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &interaction_profile, &display_name, &toplevel_path, &openxr_path, &openxr_extension_name, &action_type);
}


} // namespace godot 