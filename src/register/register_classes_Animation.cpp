
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Animation() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Animation>("Animation")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<double (Animation::*)() const>(&Animation::get_length), static_cast<void (Animation::*)(double)>(&Animation::set_length)>((new std::string("length"))->c_str())
			.property<static_cast<Animation::LoopMode (Animation::*)() const>(&Animation::get_loop_mode), static_cast<void (Animation::*)(Animation::LoopMode)>(&Animation::set_loop_mode)>((new std::string("loop_mode"))->c_str())
			.property<static_cast<double (Animation::*)() const>(&Animation::get_step), static_cast<void (Animation::*)(double)>(&Animation::set_step)>((new std::string("step"))->c_str())
			.property<static_cast<bool (Animation::*)() const>(&Animation::is_capture_included)>((new std::string("capture_included"))->c_str())
			.fun<static_cast<int32_t (Animation::*)(Animation::TrackType, int32_t)>(&Animation::add_track)>((new std::string("add_track"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t)>(&Animation::remove_track)>((new std::string("remove_track"))->c_str())
			.fun<static_cast<int32_t (Animation::*)() const>(&Animation::get_track_count)>((new std::string("get_track_count"))->c_str())
			.fun<static_cast<Animation::TrackType (Animation::*)(int32_t) const>(&Animation::track_get_type)>((new std::string("track_get_type"))->c_str())
			.fun<static_cast<NodePath (Animation::*)(int32_t) const>(&Animation::track_get_path)>((new std::string("track_get_path"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, const NodePath &)>(&Animation::track_set_path)>((new std::string("track_set_path"))->c_str())
			.fun<static_cast<int32_t (Animation::*)(const NodePath &, Animation::TrackType) const>(&Animation::find_track)>((new std::string("find_track"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t)>(&Animation::track_move_up)>((new std::string("track_move_up"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t)>(&Animation::track_move_down)>((new std::string("track_move_down"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t)>(&Animation::track_move_to)>((new std::string("track_move_to"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t)>(&Animation::track_swap)>((new std::string("track_swap"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, bool)>(&Animation::track_set_imported)>((new std::string("track_set_imported"))->c_str())
			.fun<static_cast<bool (Animation::*)(int32_t) const>(&Animation::track_is_imported)>((new std::string("track_is_imported"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, bool)>(&Animation::track_set_enabled)>((new std::string("track_set_enabled"))->c_str())
			.fun<static_cast<bool (Animation::*)(int32_t) const>(&Animation::track_is_enabled)>((new std::string("track_is_enabled"))->c_str())
			.fun<static_cast<int32_t (Animation::*)(int32_t, double, const Vector3 &)>(&Animation::position_track_insert_key)>((new std::string("position_track_insert_key"))->c_str())
			.fun<static_cast<int32_t (Animation::*)(int32_t, double, const Quaternion &)>(&Animation::rotation_track_insert_key)>((new std::string("rotation_track_insert_key"))->c_str())
			.fun<static_cast<int32_t (Animation::*)(int32_t, double, const Vector3 &)>(&Animation::scale_track_insert_key)>((new std::string("scale_track_insert_key"))->c_str())
			.fun<static_cast<int32_t (Animation::*)(int32_t, double, double)>(&Animation::blend_shape_track_insert_key)>((new std::string("blend_shape_track_insert_key"))->c_str())
			.fun<static_cast<Vector3 (Animation::*)(int32_t, double, bool) const>(&Animation::position_track_interpolate)>((new std::string("position_track_interpolate"))->c_str())
			.fun<static_cast<Quaternion (Animation::*)(int32_t, double, bool) const>(&Animation::rotation_track_interpolate)>((new std::string("rotation_track_interpolate"))->c_str())
			.fun<static_cast<Vector3 (Animation::*)(int32_t, double, bool) const>(&Animation::scale_track_interpolate)>((new std::string("scale_track_interpolate"))->c_str())
			.fun<static_cast<double (Animation::*)(int32_t, double, bool) const>(&Animation::blend_shape_track_interpolate)>((new std::string("blend_shape_track_interpolate"))->c_str())
			.fun<static_cast<int32_t (Animation::*)(int32_t, double, const Variant &, double)>(&Animation::track_insert_key)>((new std::string("track_insert_key"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t)>(&Animation::track_remove_key)>((new std::string("track_remove_key"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, double)>(&Animation::track_remove_key_at_time)>((new std::string("track_remove_key_at_time"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t, const Variant &)>(&Animation::track_set_key_value)>((new std::string("track_set_key_value"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t, double)>(&Animation::track_set_key_transition)>((new std::string("track_set_key_transition"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t, double)>(&Animation::track_set_key_time)>((new std::string("track_set_key_time"))->c_str())
			.fun<static_cast<double (Animation::*)(int32_t, int32_t) const>(&Animation::track_get_key_transition)>((new std::string("track_get_key_transition"))->c_str())
			.fun<static_cast<int32_t (Animation::*)(int32_t) const>(&Animation::track_get_key_count)>((new std::string("track_get_key_count"))->c_str())
			.fun<static_cast<Variant (Animation::*)(int32_t, int32_t) const>(&Animation::track_get_key_value)>((new std::string("track_get_key_value"))->c_str())
			.fun<static_cast<double (Animation::*)(int32_t, int32_t) const>(&Animation::track_get_key_time)>((new std::string("track_get_key_time"))->c_str())
			.fun<static_cast<int32_t (Animation::*)(int32_t, double, Animation::FindMode, bool) const>(&Animation::track_find_key)>((new std::string("track_find_key"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, Animation::InterpolationType)>(&Animation::track_set_interpolation_type)>((new std::string("track_set_interpolation_type"))->c_str())
			.fun<static_cast<Animation::InterpolationType (Animation::*)(int32_t) const>(&Animation::track_get_interpolation_type)>((new std::string("track_get_interpolation_type"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, bool)>(&Animation::track_set_interpolation_loop_wrap)>((new std::string("track_set_interpolation_loop_wrap"))->c_str())
			.fun<static_cast<bool (Animation::*)(int32_t) const>(&Animation::track_get_interpolation_loop_wrap)>((new std::string("track_get_interpolation_loop_wrap"))->c_str())
			.fun<static_cast<bool (Animation::*)(int32_t) const>(&Animation::track_is_compressed)>((new std::string("track_is_compressed"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, Animation::UpdateMode)>(&Animation::value_track_set_update_mode)>((new std::string("value_track_set_update_mode"))->c_str())
			.fun<static_cast<Animation::UpdateMode (Animation::*)(int32_t) const>(&Animation::value_track_get_update_mode)>((new std::string("value_track_get_update_mode"))->c_str())
			.fun<static_cast<Variant (Animation::*)(int32_t, double, bool) const>(&Animation::value_track_interpolate)>((new std::string("value_track_interpolate"))->c_str())
			.fun<static_cast<StringName (Animation::*)(int32_t, int32_t) const>(&Animation::method_track_get_name)>((new std::string("method_track_get_name"))->c_str())
			.fun<static_cast<Array (Animation::*)(int32_t, int32_t) const>(&Animation::method_track_get_params)>((new std::string("method_track_get_params"))->c_str())
			.fun<static_cast<int32_t (Animation::*)(int32_t, double, double, const Vector2 &, const Vector2 &)>(&Animation::bezier_track_insert_key)>((new std::string("bezier_track_insert_key"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t, double)>(&Animation::bezier_track_set_key_value)>((new std::string("bezier_track_set_key_value"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t, const Vector2 &, double)>(&Animation::bezier_track_set_key_in_handle)>((new std::string("bezier_track_set_key_in_handle"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t, const Vector2 &, double)>(&Animation::bezier_track_set_key_out_handle)>((new std::string("bezier_track_set_key_out_handle"))->c_str())
			.fun<static_cast<double (Animation::*)(int32_t, int32_t) const>(&Animation::bezier_track_get_key_value)>((new std::string("bezier_track_get_key_value"))->c_str())
			.fun<static_cast<Vector2 (Animation::*)(int32_t, int32_t) const>(&Animation::bezier_track_get_key_in_handle)>((new std::string("bezier_track_get_key_in_handle"))->c_str())
			.fun<static_cast<Vector2 (Animation::*)(int32_t, int32_t) const>(&Animation::bezier_track_get_key_out_handle)>((new std::string("bezier_track_get_key_out_handle"))->c_str())
			.fun<static_cast<double (Animation::*)(int32_t, double) const>(&Animation::bezier_track_interpolate)>((new std::string("bezier_track_interpolate"))->c_str())
			.fun<static_cast<int32_t (Animation::*)(int32_t, double, const Ref<Resource> &, double, double)>(&Animation::audio_track_insert_key)>((new std::string("audio_track_insert_key"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t, const Ref<Resource> &)>(&Animation::audio_track_set_key_stream)>((new std::string("audio_track_set_key_stream"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t, double)>(&Animation::audio_track_set_key_start_offset)>((new std::string("audio_track_set_key_start_offset"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t, double)>(&Animation::audio_track_set_key_end_offset)>((new std::string("audio_track_set_key_end_offset"))->c_str())
			.fun<static_cast<Ref<Resource> (Animation::*)(int32_t, int32_t) const>(&Animation::audio_track_get_key_stream)>((new std::string("audio_track_get_key_stream"))->c_str())
			.fun<static_cast<double (Animation::*)(int32_t, int32_t) const>(&Animation::audio_track_get_key_start_offset)>((new std::string("audio_track_get_key_start_offset"))->c_str())
			.fun<static_cast<double (Animation::*)(int32_t, int32_t) const>(&Animation::audio_track_get_key_end_offset)>((new std::string("audio_track_get_key_end_offset"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, bool)>(&Animation::audio_track_set_use_blend)>((new std::string("audio_track_set_use_blend"))->c_str())
			.fun<static_cast<bool (Animation::*)(int32_t) const>(&Animation::audio_track_is_use_blend)>((new std::string("audio_track_is_use_blend"))->c_str())
			.fun<static_cast<int32_t (Animation::*)(int32_t, double, const StringName &)>(&Animation::animation_track_insert_key)>((new std::string("animation_track_insert_key"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, int32_t, const StringName &)>(&Animation::animation_track_set_key_animation)>((new std::string("animation_track_set_key_animation"))->c_str())
			.fun<static_cast<StringName (Animation::*)(int32_t, int32_t) const>(&Animation::animation_track_get_key_animation)>((new std::string("animation_track_get_key_animation"))->c_str())
			.fun<static_cast<void (Animation::*)()>(&Animation::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (Animation::*)(int32_t, const Ref<Animation> &)>(&Animation::copy_track)>((new std::string("copy_track"))->c_str())
			.fun<static_cast<void (Animation::*)(uint32_t, uint32_t, double)>(&Animation::compress)>((new std::string("compress"))->c_str());
	qjs::Value _TrackType = context->newObject();
	_TrackType[(new std::string("TYPE_VALUE"))->c_str()] = Animation::TrackType::TYPE_VALUE;
	_TrackType[(new std::string("TYPE_POSITION_3D"))->c_str()] = Animation::TrackType::TYPE_POSITION_3D;
	_TrackType[(new std::string("TYPE_ROTATION_3D"))->c_str()] = Animation::TrackType::TYPE_ROTATION_3D;
	_TrackType[(new std::string("TYPE_SCALE_3D"))->c_str()] = Animation::TrackType::TYPE_SCALE_3D;
	_TrackType[(new std::string("TYPE_BLEND_SHAPE"))->c_str()] = Animation::TrackType::TYPE_BLEND_SHAPE;
	_TrackType[(new std::string("TYPE_METHOD"))->c_str()] = Animation::TrackType::TYPE_METHOD;
	_TrackType[(new std::string("TYPE_BEZIER"))->c_str()] = Animation::TrackType::TYPE_BEZIER;
	_TrackType[(new std::string("TYPE_AUDIO"))->c_str()] = Animation::TrackType::TYPE_AUDIO;
	_TrackType[(new std::string("TYPE_ANIMATION"))->c_str()] = Animation::TrackType::TYPE_ANIMATION;
	_module.add("TrackType", std::move(_TrackType));
	qjs::Value _InterpolationType = context->newObject();
	_InterpolationType[(new std::string("INTERPOLATION_NEAREST"))->c_str()] = Animation::InterpolationType::INTERPOLATION_NEAREST;
	_InterpolationType[(new std::string("INTERPOLATION_LINEAR"))->c_str()] = Animation::InterpolationType::INTERPOLATION_LINEAR;
	_InterpolationType[(new std::string("INTERPOLATION_CUBIC"))->c_str()] = Animation::InterpolationType::INTERPOLATION_CUBIC;
	_InterpolationType[(new std::string("INTERPOLATION_LINEAR_ANGLE"))->c_str()] = Animation::InterpolationType::INTERPOLATION_LINEAR_ANGLE;
	_InterpolationType[(new std::string("INTERPOLATION_CUBIC_ANGLE"))->c_str()] = Animation::InterpolationType::INTERPOLATION_CUBIC_ANGLE;
	_module.add("InterpolationType", std::move(_InterpolationType));
	qjs::Value _UpdateMode = context->newObject();
	_UpdateMode[(new std::string("UPDATE_CONTINUOUS"))->c_str()] = Animation::UpdateMode::UPDATE_CONTINUOUS;
	_UpdateMode[(new std::string("UPDATE_DISCRETE"))->c_str()] = Animation::UpdateMode::UPDATE_DISCRETE;
	_UpdateMode[(new std::string("UPDATE_CAPTURE"))->c_str()] = Animation::UpdateMode::UPDATE_CAPTURE;
	_module.add("UpdateMode", std::move(_UpdateMode));
	qjs::Value _LoopMode = context->newObject();
	_LoopMode[(new std::string("LOOP_NONE"))->c_str()] = Animation::LoopMode::LOOP_NONE;
	_LoopMode[(new std::string("LOOP_LINEAR"))->c_str()] = Animation::LoopMode::LOOP_LINEAR;
	_LoopMode[(new std::string("LOOP_PINGPONG"))->c_str()] = Animation::LoopMode::LOOP_PINGPONG;
	_module.add("LoopMode", std::move(_LoopMode));
	qjs::Value _LoopedFlag = context->newObject();
	_LoopedFlag[(new std::string("LOOPED_FLAG_NONE"))->c_str()] = Animation::LoopedFlag::LOOPED_FLAG_NONE;
	_LoopedFlag[(new std::string("LOOPED_FLAG_END"))->c_str()] = Animation::LoopedFlag::LOOPED_FLAG_END;
	_LoopedFlag[(new std::string("LOOPED_FLAG_START"))->c_str()] = Animation::LoopedFlag::LOOPED_FLAG_START;
	_module.add("LoopedFlag", std::move(_LoopedFlag));
	qjs::Value _FindMode = context->newObject();
	_FindMode[(new std::string("FIND_MODE_NEAREST"))->c_str()] = Animation::FindMode::FIND_MODE_NEAREST;
	_FindMode[(new std::string("FIND_MODE_APPROX"))->c_str()] = Animation::FindMode::FIND_MODE_APPROX;
	_FindMode[(new std::string("FIND_MODE_EXACT"))->c_str()] = Animation::FindMode::FIND_MODE_EXACT;
	_module.add("FindMode", std::move(_FindMode));
}