#include <godot_cpp/classes/animation_node_blend_space1d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationNodeBlendSpace1D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimationNodeBlendSpace1D>("AnimationNodeBlendSpace1D")
            .constructor<>()
            .base<AnimationRootNode>()
            .property<static_cast<double(AnimationNodeBlendSpace1D::*)()const>(&AnimationNodeBlendSpace1D::get_min_space),static_cast<void(AnimationNodeBlendSpace1D::*)(double)>(&AnimationNodeBlendSpace1D::set_min_space)>("min_space")
            .property<static_cast<double(AnimationNodeBlendSpace1D::*)()const>(&AnimationNodeBlendSpace1D::get_max_space),static_cast<void(AnimationNodeBlendSpace1D::*)(double)>(&AnimationNodeBlendSpace1D::set_max_space)>("max_space")
            .property<static_cast<double(AnimationNodeBlendSpace1D::*)()const>(&AnimationNodeBlendSpace1D::get_snap),static_cast<void(AnimationNodeBlendSpace1D::*)(double)>(&AnimationNodeBlendSpace1D::set_snap)>("snap")
            .property<static_cast<String(AnimationNodeBlendSpace1D::*)()const>(&AnimationNodeBlendSpace1D::get_value_label),static_cast<void(AnimationNodeBlendSpace1D::*)(const String &)>(&AnimationNodeBlendSpace1D::set_value_label)>("value_label")
            .property<static_cast<AnimationNodeBlendSpace1D::BlendMode(AnimationNodeBlendSpace1D::*)()const>(&AnimationNodeBlendSpace1D::get_blend_mode),static_cast<void(AnimationNodeBlendSpace1D::*)(AnimationNodeBlendSpace1D::BlendMode)>(&AnimationNodeBlendSpace1D::set_blend_mode)>("blend_mode")
            .property<static_cast<bool(AnimationNodeBlendSpace1D::*)()const>(&AnimationNodeBlendSpace1D::is_using_sync),static_cast<void(AnimationNodeBlendSpace1D::*)(bool)>(&AnimationNodeBlendSpace1D::set_use_sync)>("sync")
            .fun<static_cast<void(AnimationNodeBlendSpace1D::*)(const Ref<AnimationRootNode> &,double,int32_t)>(&AnimationNodeBlendSpace1D::add_blend_point)>("add_blend_point")
            .fun<static_cast<void(AnimationNodeBlendSpace1D::*)(int32_t,double)>(&AnimationNodeBlendSpace1D::set_blend_point_position)>("set_blend_point_position")
            .fun<static_cast<double(AnimationNodeBlendSpace1D::*)(int32_t)const>(&AnimationNodeBlendSpace1D::get_blend_point_position)>("get_blend_point_position")
            .fun<static_cast<void(AnimationNodeBlendSpace1D::*)(int32_t,const Ref<AnimationRootNode> &)>(&AnimationNodeBlendSpace1D::set_blend_point_node)>("set_blend_point_node")
            .fun<static_cast<Ref<AnimationRootNode>(AnimationNodeBlendSpace1D::*)(int32_t)const>(&AnimationNodeBlendSpace1D::get_blend_point_node)>("get_blend_point_node")
            .fun<static_cast<void(AnimationNodeBlendSpace1D::*)(int32_t)>(&AnimationNodeBlendSpace1D::remove_blend_point)>("remove_blend_point")
            .fun<static_cast<int32_t(AnimationNodeBlendSpace1D::*)()const>(&AnimationNodeBlendSpace1D::get_blend_point_count)>("get_blend_point_count")
;    qjs::Value _BlendMode = context->newObject();
    _BlendMode["BLEND_MODE_INTERPOLATED"] = AnimationNodeBlendSpace1D::BlendMode::BLEND_MODE_INTERPOLATED;
    _BlendMode["BLEND_MODE_DISCRETE"] = AnimationNodeBlendSpace1D::BlendMode::BLEND_MODE_DISCRETE;
    _BlendMode["BLEND_MODE_DISCRETE_CARRY"] = AnimationNodeBlendSpace1D::BlendMode::BLEND_MODE_DISCRETE_CARRY;
    _module.add("BlendMode", std::move(_BlendMode));
}