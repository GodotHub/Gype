
#include <godot_cpp/classes/light2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Light2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Light2D>("Light2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<bool (Light2D::*)() const>(&Light2D::is_enabled), static_cast<void (Light2D::*)(bool)>(&Light2D::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<bool (Light2D::*)() const>(&Light2D::is_editor_only), static_cast<void (Light2D::*)(bool)>(&Light2D::set_editor_only)>((new std::string("editor_only"))->c_str())
			.property<static_cast<Color (Light2D::*)() const>(&Light2D::get_color), static_cast<void (Light2D::*)(const Color &)>(&Light2D::set_color)>((new std::string("color"))->c_str())
			.property<static_cast<double (Light2D::*)() const>(&Light2D::get_energy), static_cast<void (Light2D::*)(double)>(&Light2D::set_energy)>((new std::string("energy"))->c_str())
			.property<static_cast<Light2D::BlendMode (Light2D::*)() const>(&Light2D::get_blend_mode), static_cast<void (Light2D::*)(Light2D::BlendMode)>(&Light2D::set_blend_mode)>((new std::string("blend_mode"))->c_str())
			.property<static_cast<int32_t (Light2D::*)() const>(&Light2D::get_z_range_min), static_cast<void (Light2D::*)(int32_t)>(&Light2D::set_z_range_min)>((new std::string("range_z_min"))->c_str())
			.property<static_cast<int32_t (Light2D::*)() const>(&Light2D::get_z_range_max), static_cast<void (Light2D::*)(int32_t)>(&Light2D::set_z_range_max)>((new std::string("range_z_max"))->c_str())
			.property<static_cast<int32_t (Light2D::*)() const>(&Light2D::get_layer_range_min), static_cast<void (Light2D::*)(int32_t)>(&Light2D::set_layer_range_min)>((new std::string("range_layer_min"))->c_str())
			.property<static_cast<int32_t (Light2D::*)() const>(&Light2D::get_layer_range_max), static_cast<void (Light2D::*)(int32_t)>(&Light2D::set_layer_range_max)>((new std::string("range_layer_max"))->c_str())
			.property<static_cast<int32_t (Light2D::*)() const>(&Light2D::get_item_cull_mask), static_cast<void (Light2D::*)(int32_t)>(&Light2D::set_item_cull_mask)>((new std::string("range_item_cull_mask"))->c_str())
			.property<static_cast<bool (Light2D::*)() const>(&Light2D::is_shadow_enabled), static_cast<void (Light2D::*)(bool)>(&Light2D::set_shadow_enabled)>((new std::string("shadow_enabled"))->c_str())
			.property<static_cast<Color (Light2D::*)() const>(&Light2D::get_shadow_color), static_cast<void (Light2D::*)(const Color &)>(&Light2D::set_shadow_color)>((new std::string("shadow_color"))->c_str())
			.property<static_cast<Light2D::ShadowFilter (Light2D::*)() const>(&Light2D::get_shadow_filter), static_cast<void (Light2D::*)(Light2D::ShadowFilter)>(&Light2D::set_shadow_filter)>((new std::string("shadow_filter"))->c_str())
			.property<static_cast<double (Light2D::*)() const>(&Light2D::get_shadow_smooth), static_cast<void (Light2D::*)(double)>(&Light2D::set_shadow_smooth)>((new std::string("shadow_filter_smooth"))->c_str())
			.property<static_cast<int32_t (Light2D::*)() const>(&Light2D::get_item_shadow_cull_mask), static_cast<void (Light2D::*)(int32_t)>(&Light2D::set_item_shadow_cull_mask)>((new std::string("shadow_item_cull_mask"))->c_str())
			.fun<static_cast<void (Light2D::*)(double)>(&Light2D::set_height)>((new std::string("set_height"))->c_str())
			.fun<static_cast<double (Light2D::*)() const>(&Light2D::get_height)>((new std::string("get_height"))->c_str());
	qjs::Value _ShadowFilter = context->newObject();
	_ShadowFilter[(new std::string("SHADOW_FILTER_NONE"))->c_str()] = Light2D::ShadowFilter::SHADOW_FILTER_NONE;
	_ShadowFilter[(new std::string("SHADOW_FILTER_PCF5"))->c_str()] = Light2D::ShadowFilter::SHADOW_FILTER_PCF5;
	_ShadowFilter[(new std::string("SHADOW_FILTER_PCF13"))->c_str()] = Light2D::ShadowFilter::SHADOW_FILTER_PCF13;
	_module.add("ShadowFilter", std::move(_ShadowFilter));
	qjs::Value _BlendMode = context->newObject();
	_BlendMode[(new std::string("BLEND_MODE_ADD"))->c_str()] = Light2D::BlendMode::BLEND_MODE_ADD;
	_BlendMode[(new std::string("BLEND_MODE_SUB"))->c_str()] = Light2D::BlendMode::BLEND_MODE_SUB;
	_BlendMode[(new std::string("BLEND_MODE_MIX"))->c_str()] = Light2D::BlendMode::BLEND_MODE_MIX;
	_module.add("BlendMode", std::move(_BlendMode));
}