#include <godot_cpp/classes/directional_light3d.hpp>
#include <godot_cpp/classes/light3d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_DirectionalLight3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<DirectionalLight3D>("DirectionalLight3D")
            .constructor<>()
            .base<Light3D>()
            .property<static_cast<DirectionalLight3D::ShadowMode(DirectionalLight3D::*)()const>(&DirectionalLight3D::get_shadow_mode),static_cast<void(DirectionalLight3D::*)(DirectionalLight3D::ShadowMode)>(&DirectionalLight3D::set_shadow_mode)>("directional_shadow_mode")
            .property<static_cast<bool(DirectionalLight3D::*)()const>(&DirectionalLight3D::is_blend_splits_enabled),static_cast<void(DirectionalLight3D::*)(bool)>(&DirectionalLight3D::set_blend_splits)>("directional_shadow_blend_splits")
            .property<static_cast<DirectionalLight3D::SkyMode(DirectionalLight3D::*)()const>(&DirectionalLight3D::get_sky_mode),static_cast<void(DirectionalLight3D::*)(DirectionalLight3D::SkyMode)>(&DirectionalLight3D::set_sky_mode)>("sky_mode")
;    qjs::Value _ShadowMode = context->newObject();
    _ShadowMode["SHADOW_ORTHOGONAL"] = DirectionalLight3D::ShadowMode::SHADOW_ORTHOGONAL;
    _ShadowMode["SHADOW_PARALLEL_2_SPLITS"] = DirectionalLight3D::ShadowMode::SHADOW_PARALLEL_2_SPLITS;
    _ShadowMode["SHADOW_PARALLEL_4_SPLITS"] = DirectionalLight3D::ShadowMode::SHADOW_PARALLEL_4_SPLITS;
    _module.add("ShadowMode", std::move(_ShadowMode));
    qjs::Value _SkyMode = context->newObject();
    _SkyMode["SKY_MODE_LIGHT_AND_SKY"] = DirectionalLight3D::SkyMode::SKY_MODE_LIGHT_AND_SKY;
    _SkyMode["SKY_MODE_LIGHT_ONLY"] = DirectionalLight3D::SkyMode::SKY_MODE_LIGHT_ONLY;
    _SkyMode["SKY_MODE_SKY_ONLY"] = DirectionalLight3D::SkyMode::SKY_MODE_SKY_ONLY;
    _module.add("SkyMode", std::move(_SkyMode));
}