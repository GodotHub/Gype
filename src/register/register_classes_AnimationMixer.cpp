
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_library.hpp>
#include <godot_cpp/classes/animation_mixer.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationMixer() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<AnimationMixer>("AnimationMixer")
			.constructor<>()
			.base<Node>()
			.property<static_cast<bool (AnimationMixer::*)() const>(&AnimationMixer::is_active), static_cast<void (AnimationMixer::*)(bool)>(&AnimationMixer::set_active)>((new std::string("active"))->c_str())
			.property<static_cast<bool (AnimationMixer::*)() const>(&AnimationMixer::is_deterministic), static_cast<void (AnimationMixer::*)(bool)>(&AnimationMixer::set_deterministic)>((new std::string("deterministic"))->c_str())
			.property<static_cast<bool (AnimationMixer::*)() const>(&AnimationMixer::is_reset_on_save_enabled), static_cast<void (AnimationMixer::*)(bool)>(&AnimationMixer::set_reset_on_save_enabled)>((new std::string("reset_on_save"))->c_str())
			.property<static_cast<NodePath (AnimationMixer::*)() const>(&AnimationMixer::get_root_node), static_cast<void (AnimationMixer::*)(const NodePath &)>(&AnimationMixer::set_root_node)>((new std::string("root_node"))->c_str())
			.property<static_cast<NodePath (AnimationMixer::*)() const>(&AnimationMixer::get_root_motion_track), static_cast<void (AnimationMixer::*)(const NodePath &)>(&AnimationMixer::set_root_motion_track)>((new std::string("root_motion_track"))->c_str())
			.property<static_cast<int32_t (AnimationMixer::*)() const>(&AnimationMixer::get_audio_max_polyphony), static_cast<void (AnimationMixer::*)(int32_t)>(&AnimationMixer::set_audio_max_polyphony)>((new std::string("audio_max_polyphony"))->c_str())
			.property<static_cast<AnimationMixer::AnimationCallbackModeProcess (AnimationMixer::*)() const>(&AnimationMixer::get_callback_mode_process), static_cast<void (AnimationMixer::*)(AnimationMixer::AnimationCallbackModeProcess)>(&AnimationMixer::set_callback_mode_process)>((new std::string("callback_mode_process"))->c_str())
			.property<static_cast<AnimationMixer::AnimationCallbackModeMethod (AnimationMixer::*)() const>(&AnimationMixer::get_callback_mode_method), static_cast<void (AnimationMixer::*)(AnimationMixer::AnimationCallbackModeMethod)>(&AnimationMixer::set_callback_mode_method)>((new std::string("callback_mode_method"))->c_str())
			.property<static_cast<AnimationMixer::AnimationCallbackModeDiscrete (AnimationMixer::*)() const>(&AnimationMixer::get_callback_mode_discrete), static_cast<void (AnimationMixer::*)(AnimationMixer::AnimationCallbackModeDiscrete)>(&AnimationMixer::set_callback_mode_discrete)>((new std::string("callback_mode_discrete"))->c_str())
			.fun<static_cast<Variant (AnimationMixer::*)(const Ref<Animation> &, int32_t, const Variant &, uint64_t, int32_t) const>(&AnimationMixer::_post_process_key_value)>((new std::string("_post_process_key_value"))->c_str())
			.fun<static_cast<Error (AnimationMixer::*)(const StringName &, const Ref<AnimationLibrary> &)>(&AnimationMixer::add_animation_library)>((new std::string("add_animation_library"))->c_str())
			.fun<static_cast<void (AnimationMixer::*)(const StringName &)>(&AnimationMixer::remove_animation_library)>((new std::string("remove_animation_library"))->c_str())
			.fun<static_cast<void (AnimationMixer::*)(const StringName &, const StringName &)>(&AnimationMixer::rename_animation_library)>((new std::string("rename_animation_library"))->c_str())
			.fun<static_cast<bool (AnimationMixer::*)(const StringName &) const>(&AnimationMixer::has_animation_library)>((new std::string("has_animation_library"))->c_str())
			.fun<static_cast<Ref<AnimationLibrary> (AnimationMixer::*)(const StringName &) const>(&AnimationMixer::get_animation_library)>((new std::string("get_animation_library"))->c_str())
			.fun<static_cast<TypedArray<StringName> (AnimationMixer::*)() const>(&AnimationMixer::get_animation_library_list)>((new std::string("get_animation_library_list"))->c_str())
			.fun<static_cast<bool (AnimationMixer::*)(const StringName &) const>(&AnimationMixer::has_animation)>((new std::string("has_animation"))->c_str())
			.fun<static_cast<Ref<Animation> (AnimationMixer::*)(const StringName &) const>(&AnimationMixer::get_animation)>((new std::string("get_animation"))->c_str())
			.fun<static_cast<PackedStringArray (AnimationMixer::*)() const>(&AnimationMixer::get_animation_list)>((new std::string("get_animation_list"))->c_str())
			.fun<static_cast<Vector3 (AnimationMixer::*)() const>(&AnimationMixer::get_root_motion_position)>((new std::string("get_root_motion_position"))->c_str())
			.fun<static_cast<Quaternion (AnimationMixer::*)() const>(&AnimationMixer::get_root_motion_rotation)>((new std::string("get_root_motion_rotation"))->c_str())
			.fun<static_cast<Vector3 (AnimationMixer::*)() const>(&AnimationMixer::get_root_motion_scale)>((new std::string("get_root_motion_scale"))->c_str())
			.fun<static_cast<Vector3 (AnimationMixer::*)() const>(&AnimationMixer::get_root_motion_position_accumulator)>((new std::string("get_root_motion_position_accumulator"))->c_str())
			.fun<static_cast<Quaternion (AnimationMixer::*)() const>(&AnimationMixer::get_root_motion_rotation_accumulator)>((new std::string("get_root_motion_rotation_accumulator"))->c_str())
			.fun<static_cast<Vector3 (AnimationMixer::*)() const>(&AnimationMixer::get_root_motion_scale_accumulator)>((new std::string("get_root_motion_scale_accumulator"))->c_str())
			.fun<static_cast<void (AnimationMixer::*)()>(&AnimationMixer::clear_caches)>((new std::string("clear_caches"))->c_str())
			.fun<static_cast<void (AnimationMixer::*)(double)>(&AnimationMixer::advance)>((new std::string("advance"))->c_str())
			.fun<static_cast<void (AnimationMixer::*)(const StringName &, double, Tween::TransitionType, Tween::EaseType)>(&AnimationMixer::capture)>((new std::string("capture"))->c_str())
			.fun<static_cast<StringName (AnimationMixer::*)(const Ref<Animation> &) const>(&AnimationMixer::find_animation)>((new std::string("find_animation"))->c_str())
			.fun<static_cast<StringName (AnimationMixer::*)(const Ref<Animation> &) const>(&AnimationMixer::find_animation_library)>((new std::string("find_animation_library"))->c_str());
	qjs::Value _AnimationCallbackModeProcess = context->newObject();
	_AnimationCallbackModeProcess[(new std::string("ANIMATION_CALLBACK_MODE_PROCESS_PHYSICS"))->c_str()] = AnimationMixer::AnimationCallbackModeProcess::ANIMATION_CALLBACK_MODE_PROCESS_PHYSICS;
	_AnimationCallbackModeProcess[(new std::string("ANIMATION_CALLBACK_MODE_PROCESS_IDLE"))->c_str()] = AnimationMixer::AnimationCallbackModeProcess::ANIMATION_CALLBACK_MODE_PROCESS_IDLE;
	_AnimationCallbackModeProcess[(new std::string("ANIMATION_CALLBACK_MODE_PROCESS_MANUAL"))->c_str()] = AnimationMixer::AnimationCallbackModeProcess::ANIMATION_CALLBACK_MODE_PROCESS_MANUAL;
	_module.add("AnimationCallbackModeProcess", std::move(_AnimationCallbackModeProcess));
	qjs::Value _AnimationCallbackModeMethod = context->newObject();
	_AnimationCallbackModeMethod[(new std::string("ANIMATION_CALLBACK_MODE_METHOD_DEFERRED"))->c_str()] = AnimationMixer::AnimationCallbackModeMethod::ANIMATION_CALLBACK_MODE_METHOD_DEFERRED;
	_AnimationCallbackModeMethod[(new std::string("ANIMATION_CALLBACK_MODE_METHOD_IMMEDIATE"))->c_str()] = AnimationMixer::AnimationCallbackModeMethod::ANIMATION_CALLBACK_MODE_METHOD_IMMEDIATE;
	_module.add("AnimationCallbackModeMethod", std::move(_AnimationCallbackModeMethod));
	qjs::Value _AnimationCallbackModeDiscrete = context->newObject();
	_AnimationCallbackModeDiscrete[(new std::string("ANIMATION_CALLBACK_MODE_DISCRETE_DOMINANT"))->c_str()] = AnimationMixer::AnimationCallbackModeDiscrete::ANIMATION_CALLBACK_MODE_DISCRETE_DOMINANT;
	_AnimationCallbackModeDiscrete[(new std::string("ANIMATION_CALLBACK_MODE_DISCRETE_RECESSIVE"))->c_str()] = AnimationMixer::AnimationCallbackModeDiscrete::ANIMATION_CALLBACK_MODE_DISCRETE_RECESSIVE;
	_AnimationCallbackModeDiscrete[(new std::string("ANIMATION_CALLBACK_MODE_DISCRETE_FORCE_CONTINUOUS"))->c_str()] = AnimationMixer::AnimationCallbackModeDiscrete::ANIMATION_CALLBACK_MODE_DISCRETE_FORCE_CONTINUOUS;
	_module.add("AnimationCallbackModeDiscrete", std::move(_AnimationCallbackModeDiscrete));
}