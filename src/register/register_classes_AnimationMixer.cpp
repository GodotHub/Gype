#include <godot_cpp/classes/animation_mixer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_library.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationMixer() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<AnimationMixer>("AnimationMixer")
            .constructor<>()
            .base<Node>()
            .property<static_cast<bool(AnimationMixer::*)()const>(&AnimationMixer::is_active),static_cast<void(AnimationMixer::*)(bool)>(&AnimationMixer::set_active)>("active")
            .property<static_cast<bool(AnimationMixer::*)()const>(&AnimationMixer::is_deterministic),static_cast<void(AnimationMixer::*)(bool)>(&AnimationMixer::set_deterministic)>("deterministic")
            .property<static_cast<bool(AnimationMixer::*)()const>(&AnimationMixer::is_reset_on_save_enabled),static_cast<void(AnimationMixer::*)(bool)>(&AnimationMixer::set_reset_on_save_enabled)>("reset_on_save")
            .property<static_cast<NodePath(AnimationMixer::*)()const>(&AnimationMixer::get_root_node),static_cast<void(AnimationMixer::*)(const NodePath &)>(&AnimationMixer::set_root_node)>("root_node")
            .property<static_cast<NodePath(AnimationMixer::*)()const>(&AnimationMixer::get_root_motion_track),static_cast<void(AnimationMixer::*)(const NodePath &)>(&AnimationMixer::set_root_motion_track)>("root_motion_track")
            .property<static_cast<int32_t(AnimationMixer::*)()const>(&AnimationMixer::get_audio_max_polyphony),static_cast<void(AnimationMixer::*)(int32_t)>(&AnimationMixer::set_audio_max_polyphony)>("audio_max_polyphony")
            .property<static_cast<AnimationMixer::AnimationCallbackModeProcess(AnimationMixer::*)()const>(&AnimationMixer::get_callback_mode_process),static_cast<void(AnimationMixer::*)(AnimationMixer::AnimationCallbackModeProcess)>(&AnimationMixer::set_callback_mode_process)>("callback_mode_process")
            .property<static_cast<AnimationMixer::AnimationCallbackModeMethod(AnimationMixer::*)()const>(&AnimationMixer::get_callback_mode_method),static_cast<void(AnimationMixer::*)(AnimationMixer::AnimationCallbackModeMethod)>(&AnimationMixer::set_callback_mode_method)>("callback_mode_method")
            .property<static_cast<AnimationMixer::AnimationCallbackModeDiscrete(AnimationMixer::*)()const>(&AnimationMixer::get_callback_mode_discrete),static_cast<void(AnimationMixer::*)(AnimationMixer::AnimationCallbackModeDiscrete)>(&AnimationMixer::set_callback_mode_discrete)>("callback_mode_discrete")
            .fun<static_cast<Variant(AnimationMixer::*)(const Ref<Animation> &,int32_t,const Variant &,uint64_t,int32_t)const>(&AnimationMixer::_post_process_key_value)>("_post_process_key_value")
            .fun<static_cast<Error(AnimationMixer::*)(const StringName &,const Ref<AnimationLibrary> &)>(&AnimationMixer::add_animation_library)>("add_animation_library")
            .fun<static_cast<void(AnimationMixer::*)(const StringName &)>(&AnimationMixer::remove_animation_library)>("remove_animation_library")
            .fun<static_cast<void(AnimationMixer::*)(const StringName &,const StringName &)>(&AnimationMixer::rename_animation_library)>("rename_animation_library")
            .fun<static_cast<bool(AnimationMixer::*)(const StringName &)const>(&AnimationMixer::has_animation_library)>("has_animation_library")
            .fun<static_cast<Ref<AnimationLibrary>(AnimationMixer::*)(const StringName &)const>(&AnimationMixer::get_animation_library)>("get_animation_library")
            .fun<static_cast<TypedArray<StringName>(AnimationMixer::*)()const>(&AnimationMixer::get_animation_library_list)>("get_animation_library_list")
            .fun<static_cast<bool(AnimationMixer::*)(const StringName &)const>(&AnimationMixer::has_animation)>("has_animation")
            .fun<static_cast<Ref<Animation>(AnimationMixer::*)(const StringName &)const>(&AnimationMixer::get_animation)>("get_animation")
            .fun<static_cast<PackedStringArray(AnimationMixer::*)()const>(&AnimationMixer::get_animation_list)>("get_animation_list")
            .fun<static_cast<Vector3(AnimationMixer::*)()const>(&AnimationMixer::get_root_motion_position)>("get_root_motion_position")
            .fun<static_cast<Quaternion(AnimationMixer::*)()const>(&AnimationMixer::get_root_motion_rotation)>("get_root_motion_rotation")
            .fun<static_cast<Vector3(AnimationMixer::*)()const>(&AnimationMixer::get_root_motion_scale)>("get_root_motion_scale")
            .fun<static_cast<Vector3(AnimationMixer::*)()const>(&AnimationMixer::get_root_motion_position_accumulator)>("get_root_motion_position_accumulator")
            .fun<static_cast<Quaternion(AnimationMixer::*)()const>(&AnimationMixer::get_root_motion_rotation_accumulator)>("get_root_motion_rotation_accumulator")
            .fun<static_cast<Vector3(AnimationMixer::*)()const>(&AnimationMixer::get_root_motion_scale_accumulator)>("get_root_motion_scale_accumulator")
            .fun<static_cast<void(AnimationMixer::*)()>(&AnimationMixer::clear_caches)>("clear_caches")
            .fun<static_cast<void(AnimationMixer::*)(double)>(&AnimationMixer::advance)>("advance")
            .fun<static_cast<void(AnimationMixer::*)(const StringName &,double,Tween::TransitionType,Tween::EaseType)>(&AnimationMixer::capture)>("capture")
            .fun<static_cast<StringName(AnimationMixer::*)(const Ref<Animation> &)const>(&AnimationMixer::find_animation)>("find_animation")
            .fun<static_cast<StringName(AnimationMixer::*)(const Ref<Animation> &)const>(&AnimationMixer::find_animation_library)>("find_animation_library")
;    qjs::Value _AnimationCallbackModeProcess = context->newObject();
    _AnimationCallbackModeProcess["ANIMATION_CALLBACK_MODE_PROCESS_PHYSICS"] = AnimationMixer::AnimationCallbackModeProcess::ANIMATION_CALLBACK_MODE_PROCESS_PHYSICS;
    _AnimationCallbackModeProcess["ANIMATION_CALLBACK_MODE_PROCESS_IDLE"] = AnimationMixer::AnimationCallbackModeProcess::ANIMATION_CALLBACK_MODE_PROCESS_IDLE;
    _AnimationCallbackModeProcess["ANIMATION_CALLBACK_MODE_PROCESS_MANUAL"] = AnimationMixer::AnimationCallbackModeProcess::ANIMATION_CALLBACK_MODE_PROCESS_MANUAL;
    _module.add("AnimationCallbackModeProcess", std::move(_AnimationCallbackModeProcess));
    qjs::Value _AnimationCallbackModeMethod = context->newObject();
    _AnimationCallbackModeMethod["ANIMATION_CALLBACK_MODE_METHOD_DEFERRED"] = AnimationMixer::AnimationCallbackModeMethod::ANIMATION_CALLBACK_MODE_METHOD_DEFERRED;
    _AnimationCallbackModeMethod["ANIMATION_CALLBACK_MODE_METHOD_IMMEDIATE"] = AnimationMixer::AnimationCallbackModeMethod::ANIMATION_CALLBACK_MODE_METHOD_IMMEDIATE;
    _module.add("AnimationCallbackModeMethod", std::move(_AnimationCallbackModeMethod));
    qjs::Value _AnimationCallbackModeDiscrete = context->newObject();
    _AnimationCallbackModeDiscrete["ANIMATION_CALLBACK_MODE_DISCRETE_DOMINANT"] = AnimationMixer::AnimationCallbackModeDiscrete::ANIMATION_CALLBACK_MODE_DISCRETE_DOMINANT;
    _AnimationCallbackModeDiscrete["ANIMATION_CALLBACK_MODE_DISCRETE_RECESSIVE"] = AnimationMixer::AnimationCallbackModeDiscrete::ANIMATION_CALLBACK_MODE_DISCRETE_RECESSIVE;
    _AnimationCallbackModeDiscrete["ANIMATION_CALLBACK_MODE_DISCRETE_FORCE_CONTINUOUS"] = AnimationMixer::AnimationCallbackModeDiscrete::ANIMATION_CALLBACK_MODE_DISCRETE_FORCE_CONTINUOUS;
    _module.add("AnimationCallbackModeDiscrete", std::move(_AnimationCallbackModeDiscrete));
}