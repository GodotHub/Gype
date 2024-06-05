#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/classes/xr_interface_extension.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_float64_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRInterfaceExtension() {
	qjs::Context::Module &_module = _General;
	_module.class_<XRInterfaceExtension>("XRInterfaceExtension")
			.constructor<>()
			.fun<static_cast<StringName (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_name)>("_get_name")
			.fun<static_cast<uint32_t (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_capabilities)>("_get_capabilities")
			.fun<static_cast<bool (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_is_initialized)>("_is_initialized")
			.fun<static_cast<bool (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_initialize)>("_initialize")
			.fun<static_cast<void (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_uninitialize)>("_uninitialize")
			.fun<static_cast<Dictionary (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_system_info)>("_get_system_info")
			.fun<static_cast<bool (XRInterfaceExtension::*)(XRInterface::PlayAreaMode) const>(&XRInterfaceExtension::_supports_play_area_mode)>("_supports_play_area_mode")
			.fun<static_cast<XRInterface::PlayAreaMode (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_play_area_mode)>("_get_play_area_mode")
			.fun<static_cast<bool (XRInterfaceExtension::*)(XRInterface::PlayAreaMode) const>(&XRInterfaceExtension::_set_play_area_mode)>("_set_play_area_mode")
			.fun<static_cast<PackedVector3Array (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_play_area)>("_get_play_area")
			.fun<static_cast<Vector2 (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_render_target_size)>("_get_render_target_size")
			.fun<static_cast<uint32_t (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_view_count)>("_get_view_count")
			.fun<static_cast<Transform3D (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_camera_transform)>("_get_camera_transform")
			.fun<static_cast<Transform3D (XRInterfaceExtension::*)(uint32_t, const Transform3D &)>(&XRInterfaceExtension::_get_transform_for_view)>("_get_transform_for_view")
			.fun<static_cast<PackedFloat64Array (XRInterfaceExtension::*)(uint32_t, double, double, double)>(&XRInterfaceExtension::_get_projection_for_view)>("_get_projection_for_view")
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_vrs_texture)>("_get_vrs_texture")
			.fun<static_cast<void (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_process)>("_process")
			.fun<static_cast<void (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_pre_render)>("_pre_render")
			.fun<static_cast<bool (XRInterfaceExtension::*)(const RID &)>(&XRInterfaceExtension::_pre_draw_viewport)>("_pre_draw_viewport")
			.fun<static_cast<void (XRInterfaceExtension::*)(const RID &, const Rect2 &)>(&XRInterfaceExtension::_post_draw_viewport)>("_post_draw_viewport")
			.fun<static_cast<void (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_end_frame)>("_end_frame")
			.fun<static_cast<PackedStringArray (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_suggested_tracker_names)>("_get_suggested_tracker_names")
			.fun<static_cast<PackedStringArray (XRInterfaceExtension::*)(const StringName &) const>(&XRInterfaceExtension::_get_suggested_pose_names)>("_get_suggested_pose_names")
			.fun<static_cast<XRInterface::TrackingStatus (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_tracking_status)>("_get_tracking_status")
			.fun<static_cast<void (XRInterfaceExtension::*)(const String &, const StringName &, double, double, double, double)>(&XRInterfaceExtension::_trigger_haptic_pulse)>("_trigger_haptic_pulse")
			.fun<static_cast<bool (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_anchor_detection_is_enabled)>("_get_anchor_detection_is_enabled")
			.fun<static_cast<void (XRInterfaceExtension::*)(bool)>(&XRInterfaceExtension::_set_anchor_detection_is_enabled)>("_set_anchor_detection_is_enabled")
			.fun<static_cast<int32_t (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_camera_feed_id)>("_get_camera_feed_id")
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_color_texture)>("_get_color_texture")
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_depth_texture)>("_get_depth_texture")
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_velocity_texture)>("_get_velocity_texture")
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::get_color_texture)>("get_color_texture")
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::get_depth_texture)>("get_depth_texture")
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::get_velocity_texture)>("get_velocity_texture")
			.fun<static_cast<void (XRInterfaceExtension::*)(const RID &, const Rect2 &, const Rect2i &, bool, uint32_t, bool, const Vector2 &, double, double, double, double)>(&XRInterfaceExtension::add_blit)>("add_blit")
			.fun<static_cast<RID (XRInterfaceExtension::*)(const RID &)>(&XRInterfaceExtension::get_render_target_texture)>("get_render_target_texture");
}