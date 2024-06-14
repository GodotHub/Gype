
#include <godot_cpp/classes/animation_node_blend_space2d.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeBlendSpace2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeBlendSpace2D>("AnimationNodeBlendSpace2D")
			.constructor<>()
			.base<AnimationRootNode>()
			.property<static_cast<bool (AnimationNodeBlendSpace2D::*)() const>(&AnimationNodeBlendSpace2D::get_auto_triangles), static_cast<void (AnimationNodeBlendSpace2D::*)(bool)>(&AnimationNodeBlendSpace2D::set_auto_triangles)>((new std::string("auto_triangles"))->c_str())
			.property<static_cast<Vector2 (AnimationNodeBlendSpace2D::*)() const>(&AnimationNodeBlendSpace2D::get_min_space), static_cast<void (AnimationNodeBlendSpace2D::*)(const Vector2 &)>(&AnimationNodeBlendSpace2D::set_min_space)>((new std::string("min_space"))->c_str())
			.property<static_cast<Vector2 (AnimationNodeBlendSpace2D::*)() const>(&AnimationNodeBlendSpace2D::get_max_space), static_cast<void (AnimationNodeBlendSpace2D::*)(const Vector2 &)>(&AnimationNodeBlendSpace2D::set_max_space)>((new std::string("max_space"))->c_str())
			.property<static_cast<Vector2 (AnimationNodeBlendSpace2D::*)() const>(&AnimationNodeBlendSpace2D::get_snap), static_cast<void (AnimationNodeBlendSpace2D::*)(const Vector2 &)>(&AnimationNodeBlendSpace2D::set_snap)>((new std::string("snap"))->c_str())
			.property<static_cast<String (AnimationNodeBlendSpace2D::*)() const>(&AnimationNodeBlendSpace2D::get_x_label), static_cast<void (AnimationNodeBlendSpace2D::*)(const String &)>(&AnimationNodeBlendSpace2D::set_x_label)>((new std::string("x_label"))->c_str())
			.property<static_cast<String (AnimationNodeBlendSpace2D::*)() const>(&AnimationNodeBlendSpace2D::get_y_label), static_cast<void (AnimationNodeBlendSpace2D::*)(const String &)>(&AnimationNodeBlendSpace2D::set_y_label)>((new std::string("y_label"))->c_str())
			.property<static_cast<AnimationNodeBlendSpace2D::BlendMode (AnimationNodeBlendSpace2D::*)() const>(&AnimationNodeBlendSpace2D::get_blend_mode), static_cast<void (AnimationNodeBlendSpace2D::*)(AnimationNodeBlendSpace2D::BlendMode)>(&AnimationNodeBlendSpace2D::set_blend_mode)>((new std::string("blend_mode"))->c_str())
			.property<static_cast<bool (AnimationNodeBlendSpace2D::*)() const>(&AnimationNodeBlendSpace2D::is_using_sync), static_cast<void (AnimationNodeBlendSpace2D::*)(bool)>(&AnimationNodeBlendSpace2D::set_use_sync)>((new std::string("sync"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendSpace2D::*)(const Ref<AnimationRootNode> &, const Vector2 &, int32_t)>(&AnimationNodeBlendSpace2D::add_blend_point)>((new std::string("add_blend_point"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendSpace2D::*)(int32_t, const Vector2 &)>(&AnimationNodeBlendSpace2D::set_blend_point_position)>((new std::string("set_blend_point_position"))->c_str())
			.fun<static_cast<Vector2 (AnimationNodeBlendSpace2D::*)(int32_t) const>(&AnimationNodeBlendSpace2D::get_blend_point_position)>((new std::string("get_blend_point_position"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendSpace2D::*)(int32_t, const Ref<AnimationRootNode> &)>(&AnimationNodeBlendSpace2D::set_blend_point_node)>((new std::string("set_blend_point_node"))->c_str())
			.fun<static_cast<Ref<AnimationRootNode> (AnimationNodeBlendSpace2D::*)(int32_t) const>(&AnimationNodeBlendSpace2D::get_blend_point_node)>((new std::string("get_blend_point_node"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendSpace2D::*)(int32_t)>(&AnimationNodeBlendSpace2D::remove_blend_point)>((new std::string("remove_blend_point"))->c_str())
			.fun<static_cast<int32_t (AnimationNodeBlendSpace2D::*)() const>(&AnimationNodeBlendSpace2D::get_blend_point_count)>((new std::string("get_blend_point_count"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendSpace2D::*)(int32_t, int32_t, int32_t, int32_t)>(&AnimationNodeBlendSpace2D::add_triangle)>((new std::string("add_triangle"))->c_str())
			.fun<static_cast<int32_t (AnimationNodeBlendSpace2D::*)(int32_t, int32_t)>(&AnimationNodeBlendSpace2D::get_triangle_point)>((new std::string("get_triangle_point"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendSpace2D::*)(int32_t)>(&AnimationNodeBlendSpace2D::remove_triangle)>((new std::string("remove_triangle"))->c_str())
			.fun<static_cast<int32_t (AnimationNodeBlendSpace2D::*)() const>(&AnimationNodeBlendSpace2D::get_triangle_count)>((new std::string("get_triangle_count"))->c_str());
	qjs::Value _BlendMode = context->newObject();
	_BlendMode[(new std::string("BLEND_MODE_INTERPOLATED"))->c_str()] = AnimationNodeBlendSpace2D::BlendMode::BLEND_MODE_INTERPOLATED;
	_BlendMode[(new std::string("BLEND_MODE_DISCRETE"))->c_str()] = AnimationNodeBlendSpace2D::BlendMode::BLEND_MODE_DISCRETE;
	_BlendMode[(new std::string("BLEND_MODE_DISCRETE_CARRY"))->c_str()] = AnimationNodeBlendSpace2D::BlendMode::BLEND_MODE_DISCRETE_CARRY;
	_module.add("BlendMode", std::move(_BlendMode));
}