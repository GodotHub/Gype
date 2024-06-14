
#include <godot_cpp/classes/compositor_effect.hpp>
#include <godot_cpp/classes/render_data.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CompositorEffect() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CompositorEffect>("CompositorEffect")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<bool (CompositorEffect::*)() const>(&CompositorEffect::get_enabled), static_cast<void (CompositorEffect::*)(bool)>(&CompositorEffect::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<CompositorEffect::EffectCallbackType (CompositorEffect::*)() const>(&CompositorEffect::get_effect_callback_type), static_cast<void (CompositorEffect::*)(CompositorEffect::EffectCallbackType)>(&CompositorEffect::set_effect_callback_type)>((new std::string("effect_callback_type"))->c_str())
			.property<static_cast<bool (CompositorEffect::*)() const>(&CompositorEffect::get_access_resolved_color), static_cast<void (CompositorEffect::*)(bool)>(&CompositorEffect::set_access_resolved_color)>((new std::string("access_resolved_color"))->c_str())
			.property<static_cast<bool (CompositorEffect::*)() const>(&CompositorEffect::get_access_resolved_depth), static_cast<void (CompositorEffect::*)(bool)>(&CompositorEffect::set_access_resolved_depth)>((new std::string("access_resolved_depth"))->c_str())
			.property<static_cast<bool (CompositorEffect::*)() const>(&CompositorEffect::get_needs_motion_vectors), static_cast<void (CompositorEffect::*)(bool)>(&CompositorEffect::set_needs_motion_vectors)>((new std::string("needs_motion_vectors"))->c_str())
			.property<static_cast<bool (CompositorEffect::*)() const>(&CompositorEffect::get_needs_normal_roughness), static_cast<void (CompositorEffect::*)(bool)>(&CompositorEffect::set_needs_normal_roughness)>((new std::string("needs_normal_roughness"))->c_str())
			.property<static_cast<bool (CompositorEffect::*)() const>(&CompositorEffect::get_needs_separate_specular), static_cast<void (CompositorEffect::*)(bool)>(&CompositorEffect::set_needs_separate_specular)>((new std::string("needs_separate_specular"))->c_str())
			.fun<static_cast<void (CompositorEffect::*)(int32_t, RenderData *)>(&CompositorEffect::_render_callback)>((new std::string("_render_callback"))->c_str());
	qjs::Value _EffectCallbackType = context->newObject();
	_EffectCallbackType[(new std::string("EFFECT_CALLBACK_TYPE_PRE_OPAQUE"))->c_str()] = CompositorEffect::EffectCallbackType::EFFECT_CALLBACK_TYPE_PRE_OPAQUE;
	_EffectCallbackType[(new std::string("EFFECT_CALLBACK_TYPE_POST_OPAQUE"))->c_str()] = CompositorEffect::EffectCallbackType::EFFECT_CALLBACK_TYPE_POST_OPAQUE;
	_EffectCallbackType[(new std::string("EFFECT_CALLBACK_TYPE_POST_SKY"))->c_str()] = CompositorEffect::EffectCallbackType::EFFECT_CALLBACK_TYPE_POST_SKY;
	_EffectCallbackType[(new std::string("EFFECT_CALLBACK_TYPE_PRE_TRANSPARENT"))->c_str()] = CompositorEffect::EffectCallbackType::EFFECT_CALLBACK_TYPE_PRE_TRANSPARENT;
	_EffectCallbackType[(new std::string("EFFECT_CALLBACK_TYPE_POST_TRANSPARENT"))->c_str()] = CompositorEffect::EffectCallbackType::EFFECT_CALLBACK_TYPE_POST_TRANSPARENT;
	_EffectCallbackType[(new std::string("EFFECT_CALLBACK_TYPE_MAX"))->c_str()] = CompositorEffect::EffectCallbackType::EFFECT_CALLBACK_TYPE_MAX;
	_module.add("EffectCallbackType", std::move(_EffectCallbackType));
}