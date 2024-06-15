#include <godot_cpp/classes/canvas_item_material.hpp>
#include <godot_cpp/classes/material.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CanvasItemMaterial() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CanvasItemMaterial>("CanvasItemMaterial")
            .constructor<>()
            .base<Material>()
            .property<static_cast<CanvasItemMaterial::BlendMode(CanvasItemMaterial::*)()const>(&CanvasItemMaterial::get_blend_mode),static_cast<void(CanvasItemMaterial::*)(CanvasItemMaterial::BlendMode)>(&CanvasItemMaterial::set_blend_mode)>("blend_mode")
            .property<static_cast<CanvasItemMaterial::LightMode(CanvasItemMaterial::*)()const>(&CanvasItemMaterial::get_light_mode),static_cast<void(CanvasItemMaterial::*)(CanvasItemMaterial::LightMode)>(&CanvasItemMaterial::set_light_mode)>("light_mode")
            .property<static_cast<bool(CanvasItemMaterial::*)()const>(&CanvasItemMaterial::get_particles_animation),static_cast<void(CanvasItemMaterial::*)(bool)>(&CanvasItemMaterial::set_particles_animation)>("particles_animation")
            .property<static_cast<int32_t(CanvasItemMaterial::*)()const>(&CanvasItemMaterial::get_particles_anim_h_frames),static_cast<void(CanvasItemMaterial::*)(int32_t)>(&CanvasItemMaterial::set_particles_anim_h_frames)>("particles_anim_h_frames")
            .property<static_cast<int32_t(CanvasItemMaterial::*)()const>(&CanvasItemMaterial::get_particles_anim_v_frames),static_cast<void(CanvasItemMaterial::*)(int32_t)>(&CanvasItemMaterial::set_particles_anim_v_frames)>("particles_anim_v_frames")
            .property<static_cast<bool(CanvasItemMaterial::*)()const>(&CanvasItemMaterial::get_particles_anim_loop),static_cast<void(CanvasItemMaterial::*)(bool)>(&CanvasItemMaterial::set_particles_anim_loop)>("particles_anim_loop")
;    qjs::Value _BlendMode = context->newObject();
    _BlendMode["BLEND_MODE_MIX"] = CanvasItemMaterial::BlendMode::BLEND_MODE_MIX;
    _BlendMode["BLEND_MODE_ADD"] = CanvasItemMaterial::BlendMode::BLEND_MODE_ADD;
    _BlendMode["BLEND_MODE_SUB"] = CanvasItemMaterial::BlendMode::BLEND_MODE_SUB;
    _BlendMode["BLEND_MODE_MUL"] = CanvasItemMaterial::BlendMode::BLEND_MODE_MUL;
    _BlendMode["BLEND_MODE_PREMULT_ALPHA"] = CanvasItemMaterial::BlendMode::BLEND_MODE_PREMULT_ALPHA;
    _module.add("BlendMode", std::move(_BlendMode));
    qjs::Value _LightMode = context->newObject();
    _LightMode["LIGHT_MODE_NORMAL"] = CanvasItemMaterial::LightMode::LIGHT_MODE_NORMAL;
    _LightMode["LIGHT_MODE_UNSHADED"] = CanvasItemMaterial::LightMode::LIGHT_MODE_UNSHADED;
    _LightMode["LIGHT_MODE_LIGHT_ONLY"] = CanvasItemMaterial::LightMode::LIGHT_MODE_LIGHT_ONLY;
    _module.add("LightMode", std::move(_LightMode));
}