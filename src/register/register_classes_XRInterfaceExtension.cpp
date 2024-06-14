
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
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRInterfaceExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<XRInterfaceExtension>("XRInterfaceExtension")
			.constructor<>()
			.base<XRInterface>()
			.fun<static_cast<StringName (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_name)>((new std::string("_get_name"))->c_str())
			.fun<static_cast<uint32_t (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_capabilities)>((new std::string("_get_capabilities"))->c_str())
			.fun<static_cast<bool (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_is_initialized)>((new std::string("_is_initialized"))->c_str())
			.fun<static_cast<bool (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_initialize)>((new std::string("_initialize"))->c_str())
			.fun<static_cast<void (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_uninitialize)>((new std::string("_uninitialize"))->c_str())
			.fun<static_cast<Dictionary (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_system_info)>((new std::string("_get_system_info"))->c_str())
			.fun<static_cast<bool (XRInterfaceExtension::*)(XRInterface::PlayAreaMode) const>(&XRInterfaceExtension::_supports_play_area_mode)>((new std::string("_supports_play_area_mode"))->c_str())
			.fun<static_cast<XRInterface::PlayAreaMode (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_play_area_mode)>((new std::string("_get_play_area_mode"))->c_str())
			.fun<static_cast<bool (XRInterfaceExtension::*)(XRInterface::PlayAreaMode) const>(&XRInterfaceExtension::_set_play_area_mode)>((new std::string("_set_play_area_mode"))->c_str())
			.fun<static_cast<PackedVector3Array (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_play_area)>((new std::string("_get_play_area"))->c_str())
			.fun<static_cast<Vector2 (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_render_target_size)>((new std::string("_get_render_target_size"))->c_str())
			.fun<static_cast<uint32_t (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_view_count)>((new std::string("_get_view_count"))->c_str())
			.fun<static_cast<Transform3D (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_camera_transform)>((new std::string("_get_camera_transform"))->c_str())
			.fun<static_cast<Transform3D (XRInterfaceExtension::*)(uint32_t, const Transform3D &)>(&XRInterfaceExtension::_get_transform_for_view)>((new std::string("_get_transform_for_view"))->c_str())
			.fun<static_cast<PackedFloat64Array (XRInterfaceExtension::*)(uint32_t, double, double, double)>(&XRInterfaceExtension::_get_projection_for_view)>((new std::string("_get_projection_for_view"))->c_str())
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_vrs_texture)>((new std::string("_get_vrs_texture"))->c_str())
			.fun<static_cast<void (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_process)>((new std::string("_process"))->c_str())
			.fun<static_cast<void (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_pre_render)>((new std::string("_pre_render"))->c_str())
			.fun<static_cast<bool (XRInterfaceExtension::*)(const RID &)>(&XRInterfaceExtension::_pre_draw_viewport)>((new std::string("_pre_draw_viewport"))->c_str())
			.fun<static_cast<void (XRInterfaceExtension::*)(const RID &, const Rect2 &)>(&XRInterfaceExtension::_post_draw_viewport)>((new std::string("_post_draw_viewport"))->c_str())
			.fun<static_cast<void (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_end_frame)>((new std::string("_end_frame"))->c_str())
			.fun<static_cast<PackedStringArray (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_suggested_tracker_names)>((new std::string("_get_suggested_tracker_names"))->c_str())
			.fun<static_cast<PackedStringArray (XRInterfaceExtension::*)(const StringName &) const>(&XRInterfaceExtension::_get_suggested_pose_names)>((new std::string("_get_suggested_pose_names"))->c_str())
			.fun<static_cast<XRInterface::TrackingStatus (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_tracking_status)>((new std::string("_get_tracking_status"))->c_str())
			.fun<static_cast<void (XRInterfaceExtension::*)(const String &, const StringName &, double, double, double, double)>(&XRInterfaceExtension::_trigger_haptic_pulse)>((new std::string("_trigger_haptic_pulse"))->c_str())
			.fun<static_cast<bool (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_anchor_detection_is_enabled)>((new std::string("_get_anchor_detection_is_enabled"))->c_str())
			.fun<static_cast<void (XRInterfaceExtension::*)(bool)>(&XRInterfaceExtension::_set_anchor_detection_is_enabled)>((new std::string("_set_anchor_detection_is_enabled"))->c_str())
			.fun<static_cast<int32_t (XRInterfaceExtension::*)() const>(&XRInterfaceExtension::_get_camera_feed_id)>((new std::string("_get_camera_feed_id"))->c_str())
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_color_texture)>((new std::string("_get_color_texture"))->c_str())
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_depth_texture)>((new std::string("_get_depth_texture"))->c_str())
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::_get_velocity_texture)>((new std::string("_get_velocity_texture"))->c_str())
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::get_color_texture)>((new std::string("get_color_texture"))->c_str())
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::get_depth_texture)>((new std::string("get_depth_texture"))->c_str())
			.fun<static_cast<RID (XRInterfaceExtension::*)()>(&XRInterfaceExtension::get_velocity_texture)>((new std::string("get_velocity_texture"))->c_str())
			.fun<static_cast<void (XRInterfaceExtension::*)(const RID &, const Rect2 &, const Rect2i &, bool, uint32_t, bool, const Vector2 &, double, double, double, double)>(&XRInterfaceExtension::add_blit)>((new std::string("add_blit"))->c_str())
			.fun<static_cast<RID (XRInterfaceExtension::*)(const RID &)>(&XRInterfaceExtension::get_render_target_texture)>((new std::string("get_render_target_texture"))->c_str());
}