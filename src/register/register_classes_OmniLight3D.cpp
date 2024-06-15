#include <godot_cpp/classes/omni_light3d.hpp>
#include <godot_cpp/classes/light3d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OmniLight3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<OmniLight3D>("OmniLight3D")
            .constructor<>()
            .base<Light3D>()
            .property<static_cast<OmniLight3D::ShadowMode(OmniLight3D::*)()const>(&OmniLight3D::get_shadow_mode),static_cast<void(OmniLight3D::*)(OmniLight3D::ShadowMode)>(&OmniLight3D::set_shadow_mode)>("omni_shadow_mode")
;    qjs::Value _ShadowMode = context->newObject();
    _ShadowMode["SHADOW_DUAL_PARABOLOID"] = OmniLight3D::ShadowMode::SHADOW_DUAL_PARABOLOID;
    _ShadowMode["SHADOW_CUBE"] = OmniLight3D::ShadowMode::SHADOW_CUBE;
    _module.add("ShadowMode", std::move(_ShadowMode));
}