#include <godot_cpp/classes/animation_node_blend_space1d.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/ref.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeBlendSpace1D() {
	qjs::Context::Module &_module = _General;
	_module.class_<AnimationNodeBlendSpace1D>("AnimationNodeBlendSpace1D")
			.constructor<>()
			.property<&AnimationNodeBlendSpace1D::get_min_space, &AnimationNodeBlendSpace1D::set_min_space>("min_space")
			.property<&AnimationNodeBlendSpace1D::get_max_space, &AnimationNodeBlendSpace1D::set_max_space>("max_space")
			.property<&AnimationNodeBlendSpace1D::get_snap, &AnimationNodeBlendSpace1D::set_snap>("snap")
			.property<&AnimationNodeBlendSpace1D::get_value_label, &AnimationNodeBlendSpace1D::set_value_label>("value_label")
			.property<&AnimationNodeBlendSpace1D::get_blend_mode, &AnimationNodeBlendSpace1D::set_blend_mode>("blend_mode")
			.property<&AnimationNodeBlendSpace1D::is_using_sync, &AnimationNodeBlendSpace1D::set_use_sync>("sync")
			.fun<static_cast<void (AnimationNodeBlendSpace1D::*)(const Ref<AnimationRootNode> &, double, int32_t)>(&AnimationNodeBlendSpace1D::add_blend_point)>("add_blend_point")
			.fun<static_cast<void (AnimationNodeBlendSpace1D::*)(int32_t, double)>(&AnimationNodeBlendSpace1D::set_blend_point_position)>("set_blend_point_position")
			.fun<static_cast<double (AnimationNodeBlendSpace1D::*)(int32_t) const>(&AnimationNodeBlendSpace1D::get_blend_point_position)>("get_blend_point_position")
			.fun<static_cast<void (AnimationNodeBlendSpace1D::*)(int32_t, const Ref<AnimationRootNode> &)>(&AnimationNodeBlendSpace1D::set_blend_point_node)>("set_blend_point_node")
			.fun<static_cast<Ref<AnimationRootNode> (AnimationNodeBlendSpace1D::*)(int32_t) const>(&AnimationNodeBlendSpace1D::get_blend_point_node)>("get_blend_point_node")
			.fun<static_cast<void (AnimationNodeBlendSpace1D::*)(int32_t)>(&AnimationNodeBlendSpace1D::remove_blend_point)>("remove_blend_point")
			.fun<static_cast<int32_t (AnimationNodeBlendSpace1D::*)() const>(&AnimationNodeBlendSpace1D::get_blend_point_count)>("get_blend_point_count");
}