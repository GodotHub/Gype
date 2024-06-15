#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Animation() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Animation>("Animation")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<double(Animation::*)()const>(&Animation::get_length),static_cast<void(Animation::*)(double)>(&Animation::set_length)>("length")
            .property<static_cast<Animation::LoopMode(Animation::*)()const>(&Animation::get_loop_mode),static_cast<void(Animation::*)(Animation::LoopMode)>(&Animation::set_loop_mode)>("loop_mode")
            .property<static_cast<double(Animation::*)()const>(&Animation::get_step),static_cast<void(Animation::*)(double)>(&Animation::set_step)>("step")
            .property<static_cast<bool(Animation::*)()const>(&Animation::is_capture_included)>("capture_included")
            .fun<static_cast<int32_t(Animation::*)(Animation::TrackType,int32_t)>(&Animation::add_track)>("add_track")
            .fun<static_cast<void(Animation::*)(int32_t)>(&Animation::remove_track)>("remove_track")
            .fun<static_cast<int32_t(Animation::*)()const>(&Animation::get_track_count)>("get_track_count")
            .fun<static_cast<Animation::TrackType(Animation::*)(int32_t)const>(&Animation::track_get_type)>("track_get_type")
            .fun<static_cast<NodePath(Animation::*)(int32_t)const>(&Animation::track_get_path)>("track_get_path")
            .fun<static_cast<void(Animation::*)(int32_t,const NodePath &)>(&Animation::track_set_path)>("track_set_path")
            .fun<static_cast<int32_t(Animation::*)(const NodePath &,Animation::TrackType)const>(&Animation::find_track)>("find_track")
            .fun<static_cast<void(Animation::*)(int32_t)>(&Animation::track_move_up)>("track_move_up")
            .fun<static_cast<void(Animation::*)(int32_t)>(&Animation::track_move_down)>("track_move_down")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t)>(&Animation::track_move_to)>("track_move_to")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t)>(&Animation::track_swap)>("track_swap")
            .fun<static_cast<void(Animation::*)(int32_t,bool)>(&Animation::track_set_imported)>("track_set_imported")
            .fun<static_cast<bool(Animation::*)(int32_t)const>(&Animation::track_is_imported)>("track_is_imported")
            .fun<static_cast<void(Animation::*)(int32_t,bool)>(&Animation::track_set_enabled)>("track_set_enabled")
            .fun<static_cast<bool(Animation::*)(int32_t)const>(&Animation::track_is_enabled)>("track_is_enabled")
            .fun<static_cast<int32_t(Animation::*)(int32_t,double,const Vector3 &)>(&Animation::position_track_insert_key)>("position_track_insert_key")
            .fun<static_cast<int32_t(Animation::*)(int32_t,double,const Quaternion &)>(&Animation::rotation_track_insert_key)>("rotation_track_insert_key")
            .fun<static_cast<int32_t(Animation::*)(int32_t,double,const Vector3 &)>(&Animation::scale_track_insert_key)>("scale_track_insert_key")
            .fun<static_cast<int32_t(Animation::*)(int32_t,double,double)>(&Animation::blend_shape_track_insert_key)>("blend_shape_track_insert_key")
            .fun<static_cast<Vector3(Animation::*)(int32_t,double,bool)const>(&Animation::position_track_interpolate)>("position_track_interpolate")
            .fun<static_cast<Quaternion(Animation::*)(int32_t,double,bool)const>(&Animation::rotation_track_interpolate)>("rotation_track_interpolate")
            .fun<static_cast<Vector3(Animation::*)(int32_t,double,bool)const>(&Animation::scale_track_interpolate)>("scale_track_interpolate")
            .fun<static_cast<double(Animation::*)(int32_t,double,bool)const>(&Animation::blend_shape_track_interpolate)>("blend_shape_track_interpolate")
            .fun<static_cast<int32_t(Animation::*)(int32_t,double,const Variant &,double)>(&Animation::track_insert_key)>("track_insert_key")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t)>(&Animation::track_remove_key)>("track_remove_key")
            .fun<static_cast<void(Animation::*)(int32_t,double)>(&Animation::track_remove_key_at_time)>("track_remove_key_at_time")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t,const Variant &)>(&Animation::track_set_key_value)>("track_set_key_value")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t,double)>(&Animation::track_set_key_transition)>("track_set_key_transition")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t,double)>(&Animation::track_set_key_time)>("track_set_key_time")
            .fun<static_cast<double(Animation::*)(int32_t,int32_t)const>(&Animation::track_get_key_transition)>("track_get_key_transition")
            .fun<static_cast<int32_t(Animation::*)(int32_t)const>(&Animation::track_get_key_count)>("track_get_key_count")
            .fun<static_cast<Variant(Animation::*)(int32_t,int32_t)const>(&Animation::track_get_key_value)>("track_get_key_value")
            .fun<static_cast<double(Animation::*)(int32_t,int32_t)const>(&Animation::track_get_key_time)>("track_get_key_time")
            .fun<static_cast<int32_t(Animation::*)(int32_t,double,Animation::FindMode,bool)const>(&Animation::track_find_key)>("track_find_key")
            .fun<static_cast<void(Animation::*)(int32_t,Animation::InterpolationType)>(&Animation::track_set_interpolation_type)>("track_set_interpolation_type")
            .fun<static_cast<Animation::InterpolationType(Animation::*)(int32_t)const>(&Animation::track_get_interpolation_type)>("track_get_interpolation_type")
            .fun<static_cast<void(Animation::*)(int32_t,bool)>(&Animation::track_set_interpolation_loop_wrap)>("track_set_interpolation_loop_wrap")
            .fun<static_cast<bool(Animation::*)(int32_t)const>(&Animation::track_get_interpolation_loop_wrap)>("track_get_interpolation_loop_wrap")
            .fun<static_cast<bool(Animation::*)(int32_t)const>(&Animation::track_is_compressed)>("track_is_compressed")
            .fun<static_cast<void(Animation::*)(int32_t,Animation::UpdateMode)>(&Animation::value_track_set_update_mode)>("value_track_set_update_mode")
            .fun<static_cast<Animation::UpdateMode(Animation::*)(int32_t)const>(&Animation::value_track_get_update_mode)>("value_track_get_update_mode")
            .fun<static_cast<Variant(Animation::*)(int32_t,double,bool)const>(&Animation::value_track_interpolate)>("value_track_interpolate")
            .fun<static_cast<StringName(Animation::*)(int32_t,int32_t)const>(&Animation::method_track_get_name)>("method_track_get_name")
            .fun<static_cast<Array(Animation::*)(int32_t,int32_t)const>(&Animation::method_track_get_params)>("method_track_get_params")
            .fun<static_cast<int32_t(Animation::*)(int32_t,double,double,const Vector2 &,const Vector2 &)>(&Animation::bezier_track_insert_key)>("bezier_track_insert_key")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t,double)>(&Animation::bezier_track_set_key_value)>("bezier_track_set_key_value")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t,const Vector2 &,double)>(&Animation::bezier_track_set_key_in_handle)>("bezier_track_set_key_in_handle")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t,const Vector2 &,double)>(&Animation::bezier_track_set_key_out_handle)>("bezier_track_set_key_out_handle")
            .fun<static_cast<double(Animation::*)(int32_t,int32_t)const>(&Animation::bezier_track_get_key_value)>("bezier_track_get_key_value")
            .fun<static_cast<Vector2(Animation::*)(int32_t,int32_t)const>(&Animation::bezier_track_get_key_in_handle)>("bezier_track_get_key_in_handle")
            .fun<static_cast<Vector2(Animation::*)(int32_t,int32_t)const>(&Animation::bezier_track_get_key_out_handle)>("bezier_track_get_key_out_handle")
            .fun<static_cast<double(Animation::*)(int32_t,double)const>(&Animation::bezier_track_interpolate)>("bezier_track_interpolate")
            .fun<static_cast<int32_t(Animation::*)(int32_t,double,const Ref<Resource> &,double,double)>(&Animation::audio_track_insert_key)>("audio_track_insert_key")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t,const Ref<Resource> &)>(&Animation::audio_track_set_key_stream)>("audio_track_set_key_stream")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t,double)>(&Animation::audio_track_set_key_start_offset)>("audio_track_set_key_start_offset")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t,double)>(&Animation::audio_track_set_key_end_offset)>("audio_track_set_key_end_offset")
            .fun<static_cast<Ref<Resource>(Animation::*)(int32_t,int32_t)const>(&Animation::audio_track_get_key_stream)>("audio_track_get_key_stream")
            .fun<static_cast<double(Animation::*)(int32_t,int32_t)const>(&Animation::audio_track_get_key_start_offset)>("audio_track_get_key_start_offset")
            .fun<static_cast<double(Animation::*)(int32_t,int32_t)const>(&Animation::audio_track_get_key_end_offset)>("audio_track_get_key_end_offset")
            .fun<static_cast<void(Animation::*)(int32_t,bool)>(&Animation::audio_track_set_use_blend)>("audio_track_set_use_blend")
            .fun<static_cast<bool(Animation::*)(int32_t)const>(&Animation::audio_track_is_use_blend)>("audio_track_is_use_blend")
            .fun<static_cast<int32_t(Animation::*)(int32_t,double,const StringName &)>(&Animation::animation_track_insert_key)>("animation_track_insert_key")
            .fun<static_cast<void(Animation::*)(int32_t,int32_t,const StringName &)>(&Animation::animation_track_set_key_animation)>("animation_track_set_key_animation")
            .fun<static_cast<StringName(Animation::*)(int32_t,int32_t)const>(&Animation::animation_track_get_key_animation)>("animation_track_get_key_animation")
            .fun<static_cast<void(Animation::*)()>(&Animation::clear)>("clear")
            .fun<static_cast<void(Animation::*)(int32_t,const Ref<Animation> &)>(&Animation::copy_track)>("copy_track")
            .fun<static_cast<void(Animation::*)(uint32_t,uint32_t,double)>(&Animation::compress)>("compress")
;    qjs::Value _TrackType = context->newObject();
    _TrackType["TYPE_VALUE"] = Animation::TrackType::TYPE_VALUE;
    _TrackType["TYPE_POSITION_3D"] = Animation::TrackType::TYPE_POSITION_3D;
    _TrackType["TYPE_ROTATION_3D"] = Animation::TrackType::TYPE_ROTATION_3D;
    _TrackType["TYPE_SCALE_3D"] = Animation::TrackType::TYPE_SCALE_3D;
    _TrackType["TYPE_BLEND_SHAPE"] = Animation::TrackType::TYPE_BLEND_SHAPE;
    _TrackType["TYPE_METHOD"] = Animation::TrackType::TYPE_METHOD;
    _TrackType["TYPE_BEZIER"] = Animation::TrackType::TYPE_BEZIER;
    _TrackType["TYPE_AUDIO"] = Animation::TrackType::TYPE_AUDIO;
    _TrackType["TYPE_ANIMATION"] = Animation::TrackType::TYPE_ANIMATION;
    _module.add("TrackType", std::move(_TrackType));
    qjs::Value _InterpolationType = context->newObject();
    _InterpolationType["INTERPOLATION_NEAREST"] = Animation::InterpolationType::INTERPOLATION_NEAREST;
    _InterpolationType["INTERPOLATION_LINEAR"] = Animation::InterpolationType::INTERPOLATION_LINEAR;
    _InterpolationType["INTERPOLATION_CUBIC"] = Animation::InterpolationType::INTERPOLATION_CUBIC;
    _InterpolationType["INTERPOLATION_LINEAR_ANGLE"] = Animation::InterpolationType::INTERPOLATION_LINEAR_ANGLE;
    _InterpolationType["INTERPOLATION_CUBIC_ANGLE"] = Animation::InterpolationType::INTERPOLATION_CUBIC_ANGLE;
    _module.add("InterpolationType", std::move(_InterpolationType));
    qjs::Value _UpdateMode = context->newObject();
    _UpdateMode["UPDATE_CONTINUOUS"] = Animation::UpdateMode::UPDATE_CONTINUOUS;
    _UpdateMode["UPDATE_DISCRETE"] = Animation::UpdateMode::UPDATE_DISCRETE;
    _UpdateMode["UPDATE_CAPTURE"] = Animation::UpdateMode::UPDATE_CAPTURE;
    _module.add("UpdateMode", std::move(_UpdateMode));
    qjs::Value _LoopMode = context->newObject();
    _LoopMode["LOOP_NONE"] = Animation::LoopMode::LOOP_NONE;
    _LoopMode["LOOP_LINEAR"] = Animation::LoopMode::LOOP_LINEAR;
    _LoopMode["LOOP_PINGPONG"] = Animation::LoopMode::LOOP_PINGPONG;
    _module.add("LoopMode", std::move(_LoopMode));
    qjs::Value _LoopedFlag = context->newObject();
    _LoopedFlag["LOOPED_FLAG_NONE"] = Animation::LoopedFlag::LOOPED_FLAG_NONE;
    _LoopedFlag["LOOPED_FLAG_END"] = Animation::LoopedFlag::LOOPED_FLAG_END;
    _LoopedFlag["LOOPED_FLAG_START"] = Animation::LoopedFlag::LOOPED_FLAG_START;
    _module.add("LoopedFlag", std::move(_LoopedFlag));
    qjs::Value _FindMode = context->newObject();
    _FindMode["FIND_MODE_NEAREST"] = Animation::FindMode::FIND_MODE_NEAREST;
    _FindMode["FIND_MODE_APPROX"] = Animation::FindMode::FIND_MODE_APPROX;
    _FindMode["FIND_MODE_EXACT"] = Animation::FindMode::FIND_MODE_EXACT;
    _module.add("FindMode", std::move(_FindMode));
}