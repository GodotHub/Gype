#include <godot_cpp/classes/compositor_effect.hpp>
#include <godot_cpp/classes/render_data.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CompositorEffect() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CompositorEffect>("CompositorEffect")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<bool(CompositorEffect::*)()const>(&CompositorEffect::get_enabled),static_cast<void(CompositorEffect::*)(bool)>(&CompositorEffect::set_enabled)>("enabled")
            .property<static_cast<CompositorEffect::EffectCallbackType(CompositorEffect::*)()const>(&CompositorEffect::get_effect_callback_type),static_cast<void(CompositorEffect::*)(CompositorEffect::EffectCallbackType)>(&CompositorEffect::set_effect_callback_type)>("effect_callback_type")
            .property<static_cast<bool(CompositorEffect::*)()const>(&CompositorEffect::get_access_resolved_color),static_cast<void(CompositorEffect::*)(bool)>(&CompositorEffect::set_access_resolved_color)>("access_resolved_color")
            .property<static_cast<bool(CompositorEffect::*)()const>(&CompositorEffect::get_access_resolved_depth),static_cast<void(CompositorEffect::*)(bool)>(&CompositorEffect::set_access_resolved_depth)>("access_resolved_depth")
            .property<static_cast<bool(CompositorEffect::*)()const>(&CompositorEffect::get_needs_motion_vectors),static_cast<void(CompositorEffect::*)(bool)>(&CompositorEffect::set_needs_motion_vectors)>("needs_motion_vectors")
            .property<static_cast<bool(CompositorEffect::*)()const>(&CompositorEffect::get_needs_normal_roughness),static_cast<void(CompositorEffect::*)(bool)>(&CompositorEffect::set_needs_normal_roughness)>("needs_normal_roughness")
            .property<static_cast<bool(CompositorEffect::*)()const>(&CompositorEffect::get_needs_separate_specular),static_cast<void(CompositorEffect::*)(bool)>(&CompositorEffect::set_needs_separate_specular)>("needs_separate_specular")
            .fun<static_cast<void(CompositorEffect::*)(int32_t,RenderData *)>(&CompositorEffect::_render_callback)>("_render_callback")
;    qjs::Value _EffectCallbackType = context->newObject();
    _EffectCallbackType["EFFECT_CALLBACK_TYPE_PRE_OPAQUE"] = CompositorEffect::EffectCallbackType::EFFECT_CALLBACK_TYPE_PRE_OPAQUE;
    _EffectCallbackType["EFFECT_CALLBACK_TYPE_POST_OPAQUE"] = CompositorEffect::EffectCallbackType::EFFECT_CALLBACK_TYPE_POST_OPAQUE;
    _EffectCallbackType["EFFECT_CALLBACK_TYPE_POST_SKY"] = CompositorEffect::EffectCallbackType::EFFECT_CALLBACK_TYPE_POST_SKY;
    _EffectCallbackType["EFFECT_CALLBACK_TYPE_PRE_TRANSPARENT"] = CompositorEffect::EffectCallbackType::EFFECT_CALLBACK_TYPE_PRE_TRANSPARENT;
    _EffectCallbackType["EFFECT_CALLBACK_TYPE_POST_TRANSPARENT"] = CompositorEffect::EffectCallbackType::EFFECT_CALLBACK_TYPE_POST_TRANSPARENT;
    _EffectCallbackType["EFFECT_CALLBACK_TYPE_MAX"] = CompositorEffect::EffectCallbackType::EFFECT_CALLBACK_TYPE_MAX;
    _module.add("EffectCallbackType", std::move(_EffectCallbackType));
}