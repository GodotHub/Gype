#include <godot_cpp/classes/animation_node_blend_space2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationNodeBlendSpace2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimationNodeBlendSpace2D>("AnimationNodeBlendSpace2D")
            .constructor<>()
            .base<AnimationRootNode>()
            .property<static_cast<bool(AnimationNodeBlendSpace2D::*)()const>(&AnimationNodeBlendSpace2D::get_auto_triangles),static_cast<void(AnimationNodeBlendSpace2D::*)(bool)>(&AnimationNodeBlendSpace2D::set_auto_triangles)>("auto_triangles")
            .property<static_cast<Vector2(AnimationNodeBlendSpace2D::*)()const>(&AnimationNodeBlendSpace2D::get_min_space),static_cast<void(AnimationNodeBlendSpace2D::*)(const Vector2 &)>(&AnimationNodeBlendSpace2D::set_min_space)>("min_space")
            .property<static_cast<Vector2(AnimationNodeBlendSpace2D::*)()const>(&AnimationNodeBlendSpace2D::get_max_space),static_cast<void(AnimationNodeBlendSpace2D::*)(const Vector2 &)>(&AnimationNodeBlendSpace2D::set_max_space)>("max_space")
            .property<static_cast<Vector2(AnimationNodeBlendSpace2D::*)()const>(&AnimationNodeBlendSpace2D::get_snap),static_cast<void(AnimationNodeBlendSpace2D::*)(const Vector2 &)>(&AnimationNodeBlendSpace2D::set_snap)>("snap")
            .property<static_cast<String(AnimationNodeBlendSpace2D::*)()const>(&AnimationNodeBlendSpace2D::get_x_label),static_cast<void(AnimationNodeBlendSpace2D::*)(const String &)>(&AnimationNodeBlendSpace2D::set_x_label)>("x_label")
            .property<static_cast<String(AnimationNodeBlendSpace2D::*)()const>(&AnimationNodeBlendSpace2D::get_y_label),static_cast<void(AnimationNodeBlendSpace2D::*)(const String &)>(&AnimationNodeBlendSpace2D::set_y_label)>("y_label")
            .property<static_cast<AnimationNodeBlendSpace2D::BlendMode(AnimationNodeBlendSpace2D::*)()const>(&AnimationNodeBlendSpace2D::get_blend_mode),static_cast<void(AnimationNodeBlendSpace2D::*)(AnimationNodeBlendSpace2D::BlendMode)>(&AnimationNodeBlendSpace2D::set_blend_mode)>("blend_mode")
            .property<static_cast<bool(AnimationNodeBlendSpace2D::*)()const>(&AnimationNodeBlendSpace2D::is_using_sync),static_cast<void(AnimationNodeBlendSpace2D::*)(bool)>(&AnimationNodeBlendSpace2D::set_use_sync)>("sync")
            .fun<static_cast<void(AnimationNodeBlendSpace2D::*)(const Ref<AnimationRootNode> &,const Vector2 &,int32_t)>(&AnimationNodeBlendSpace2D::add_blend_point)>("add_blend_point")
            .fun<static_cast<void(AnimationNodeBlendSpace2D::*)(int32_t,const Vector2 &)>(&AnimationNodeBlendSpace2D::set_blend_point_position)>("set_blend_point_position")
            .fun<static_cast<Vector2(AnimationNodeBlendSpace2D::*)(int32_t)const>(&AnimationNodeBlendSpace2D::get_blend_point_position)>("get_blend_point_position")
            .fun<static_cast<void(AnimationNodeBlendSpace2D::*)(int32_t,const Ref<AnimationRootNode> &)>(&AnimationNodeBlendSpace2D::set_blend_point_node)>("set_blend_point_node")
            .fun<static_cast<Ref<AnimationRootNode>(AnimationNodeBlendSpace2D::*)(int32_t)const>(&AnimationNodeBlendSpace2D::get_blend_point_node)>("get_blend_point_node")
            .fun<static_cast<void(AnimationNodeBlendSpace2D::*)(int32_t)>(&AnimationNodeBlendSpace2D::remove_blend_point)>("remove_blend_point")
            .fun<static_cast<int32_t(AnimationNodeBlendSpace2D::*)()const>(&AnimationNodeBlendSpace2D::get_blend_point_count)>("get_blend_point_count")
            .fun<static_cast<void(AnimationNodeBlendSpace2D::*)(int32_t,int32_t,int32_t,int32_t)>(&AnimationNodeBlendSpace2D::add_triangle)>("add_triangle")
            .fun<static_cast<int32_t(AnimationNodeBlendSpace2D::*)(int32_t,int32_t)>(&AnimationNodeBlendSpace2D::get_triangle_point)>("get_triangle_point")
            .fun<static_cast<void(AnimationNodeBlendSpace2D::*)(int32_t)>(&AnimationNodeBlendSpace2D::remove_triangle)>("remove_triangle")
            .fun<static_cast<int32_t(AnimationNodeBlendSpace2D::*)()const>(&AnimationNodeBlendSpace2D::get_triangle_count)>("get_triangle_count")
;    qjs::Value _BlendMode = context->newObject();
    _BlendMode["BLEND_MODE_INTERPOLATED"] = AnimationNodeBlendSpace2D::BlendMode::BLEND_MODE_INTERPOLATED;
    _BlendMode["BLEND_MODE_DISCRETE"] = AnimationNodeBlendSpace2D::BlendMode::BLEND_MODE_DISCRETE;
    _BlendMode["BLEND_MODE_DISCRETE_CARRY"] = AnimationNodeBlendSpace2D::BlendMode::BLEND_MODE_DISCRETE_CARRY;
    _module.add("BlendMode", std::move(_BlendMode));
}