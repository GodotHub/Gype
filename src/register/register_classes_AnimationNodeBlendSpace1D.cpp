
#include <godot_cpp/classes/animation_node_blend_space1d.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeBlendSpace1D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeBlendSpace1D>("AnimationNodeBlendSpace1D")
			.constructor<>()
			.base<AnimationRootNode>()
			.property<static_cast<double (AnimationNodeBlendSpace1D::*)() const>(&AnimationNodeBlendSpace1D::get_min_space), static_cast<void (AnimationNodeBlendSpace1D::*)(double)>(&AnimationNodeBlendSpace1D::set_min_space)>((new std::string("min_space"))->c_str())
			.property<static_cast<double (AnimationNodeBlendSpace1D::*)() const>(&AnimationNodeBlendSpace1D::get_max_space), static_cast<void (AnimationNodeBlendSpace1D::*)(double)>(&AnimationNodeBlendSpace1D::set_max_space)>((new std::string("max_space"))->c_str())
			.property<static_cast<double (AnimationNodeBlendSpace1D::*)() const>(&AnimationNodeBlendSpace1D::get_snap), static_cast<void (AnimationNodeBlendSpace1D::*)(double)>(&AnimationNodeBlendSpace1D::set_snap)>((new std::string("snap"))->c_str())
			.property<static_cast<String (AnimationNodeBlendSpace1D::*)() const>(&AnimationNodeBlendSpace1D::get_value_label), static_cast<void (AnimationNodeBlendSpace1D::*)(const String &)>(&AnimationNodeBlendSpace1D::set_value_label)>((new std::string("value_label"))->c_str())
			.property<static_cast<AnimationNodeBlendSpace1D::BlendMode (AnimationNodeBlendSpace1D::*)() const>(&AnimationNodeBlendSpace1D::get_blend_mode), static_cast<void (AnimationNodeBlendSpace1D::*)(AnimationNodeBlendSpace1D::BlendMode)>(&AnimationNodeBlendSpace1D::set_blend_mode)>((new std::string("blend_mode"))->c_str())
			.property<static_cast<bool (AnimationNodeBlendSpace1D::*)() const>(&AnimationNodeBlendSpace1D::is_using_sync), static_cast<void (AnimationNodeBlendSpace1D::*)(bool)>(&AnimationNodeBlendSpace1D::set_use_sync)>((new std::string("sync"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendSpace1D::*)(const Ref<AnimationRootNode> &, double, int32_t)>(&AnimationNodeBlendSpace1D::add_blend_point)>((new std::string("add_blend_point"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendSpace1D::*)(int32_t, double)>(&AnimationNodeBlendSpace1D::set_blend_point_position)>((new std::string("set_blend_point_position"))->c_str())
			.fun<static_cast<double (AnimationNodeBlendSpace1D::*)(int32_t) const>(&AnimationNodeBlendSpace1D::get_blend_point_position)>((new std::string("get_blend_point_position"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendSpace1D::*)(int32_t, const Ref<AnimationRootNode> &)>(&AnimationNodeBlendSpace1D::set_blend_point_node)>((new std::string("set_blend_point_node"))->c_str())
			.fun<static_cast<Ref<AnimationRootNode> (AnimationNodeBlendSpace1D::*)(int32_t) const>(&AnimationNodeBlendSpace1D::get_blend_point_node)>((new std::string("get_blend_point_node"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendSpace1D::*)(int32_t)>(&AnimationNodeBlendSpace1D::remove_blend_point)>((new std::string("remove_blend_point"))->c_str())
			.fun<static_cast<int32_t (AnimationNodeBlendSpace1D::*)() const>(&AnimationNodeBlendSpace1D::get_blend_point_count)>((new std::string("get_blend_point_count"))->c_str());
	qjs::Value _BlendMode = context->newObject();
	_BlendMode[(new std::string("BLEND_MODE_INTERPOLATED"))->c_str()] = AnimationNodeBlendSpace1D::BlendMode::BLEND_MODE_INTERPOLATED;
	_BlendMode[(new std::string("BLEND_MODE_DISCRETE"))->c_str()] = AnimationNodeBlendSpace1D::BlendMode::BLEND_MODE_DISCRETE;
	_BlendMode[(new std::string("BLEND_MODE_DISCRETE_CARRY"))->c_str()] = AnimationNodeBlendSpace1D::BlendMode::BLEND_MODE_DISCRETE_CARRY;
	_module.add("BlendMode", std::move(_BlendMode));
}