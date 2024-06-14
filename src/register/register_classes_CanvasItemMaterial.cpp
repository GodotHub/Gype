
#include <godot_cpp/classes/canvas_item_material.hpp>
#include <godot_cpp/classes/material.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CanvasItemMaterial() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CanvasItemMaterial>("CanvasItemMaterial")
			.constructor<>()
			.base<Material>()
			.property<static_cast<CanvasItemMaterial::BlendMode (CanvasItemMaterial::*)() const>(&CanvasItemMaterial::get_blend_mode), static_cast<void (CanvasItemMaterial::*)(CanvasItemMaterial::BlendMode)>(&CanvasItemMaterial::set_blend_mode)>((new std::string("blend_mode"))->c_str())
			.property<static_cast<CanvasItemMaterial::LightMode (CanvasItemMaterial::*)() const>(&CanvasItemMaterial::get_light_mode), static_cast<void (CanvasItemMaterial::*)(CanvasItemMaterial::LightMode)>(&CanvasItemMaterial::set_light_mode)>((new std::string("light_mode"))->c_str())
			.property<static_cast<bool (CanvasItemMaterial::*)() const>(&CanvasItemMaterial::get_particles_animation), static_cast<void (CanvasItemMaterial::*)(bool)>(&CanvasItemMaterial::set_particles_animation)>((new std::string("particles_animation"))->c_str())
			.property<static_cast<int32_t (CanvasItemMaterial::*)() const>(&CanvasItemMaterial::get_particles_anim_h_frames), static_cast<void (CanvasItemMaterial::*)(int32_t)>(&CanvasItemMaterial::set_particles_anim_h_frames)>((new std::string("particles_anim_h_frames"))->c_str())
			.property<static_cast<int32_t (CanvasItemMaterial::*)() const>(&CanvasItemMaterial::get_particles_anim_v_frames), static_cast<void (CanvasItemMaterial::*)(int32_t)>(&CanvasItemMaterial::set_particles_anim_v_frames)>((new std::string("particles_anim_v_frames"))->c_str())
			.property<static_cast<bool (CanvasItemMaterial::*)() const>(&CanvasItemMaterial::get_particles_anim_loop), static_cast<void (CanvasItemMaterial::*)(bool)>(&CanvasItemMaterial::set_particles_anim_loop)>((new std::string("particles_anim_loop"))->c_str());
	qjs::Value _BlendMode = context->newObject();
	_BlendMode[(new std::string("BLEND_MODE_MIX"))->c_str()] = CanvasItemMaterial::BlendMode::BLEND_MODE_MIX;
	_BlendMode[(new std::string("BLEND_MODE_ADD"))->c_str()] = CanvasItemMaterial::BlendMode::BLEND_MODE_ADD;
	_BlendMode[(new std::string("BLEND_MODE_SUB"))->c_str()] = CanvasItemMaterial::BlendMode::BLEND_MODE_SUB;
	_BlendMode[(new std::string("BLEND_MODE_MUL"))->c_str()] = CanvasItemMaterial::BlendMode::BLEND_MODE_MUL;
	_BlendMode[(new std::string("BLEND_MODE_PREMULT_ALPHA"))->c_str()] = CanvasItemMaterial::BlendMode::BLEND_MODE_PREMULT_ALPHA;
	_module.add("BlendMode", std::move(_BlendMode));
	qjs::Value _LightMode = context->newObject();
	_LightMode[(new std::string("LIGHT_MODE_NORMAL"))->c_str()] = CanvasItemMaterial::LightMode::LIGHT_MODE_NORMAL;
	_LightMode[(new std::string("LIGHT_MODE_UNSHADED"))->c_str()] = CanvasItemMaterial::LightMode::LIGHT_MODE_UNSHADED;
	_LightMode[(new std::string("LIGHT_MODE_LIGHT_ONLY"))->c_str()] = CanvasItemMaterial::LightMode::LIGHT_MODE_LIGHT_ONLY;
	_module.add("LightMode", std::move(_LightMode));
}