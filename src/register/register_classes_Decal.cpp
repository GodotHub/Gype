#include <godot_cpp/classes/decal.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Decal() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<Decal>("Decal")
            .constructor<>()
            .base<VisualInstance3D>()
            .property<static_cast<Vector3(Decal::*)()const>(&Decal::get_size),static_cast<void(Decal::*)(const Vector3 &)>(&Decal::set_size)>("size")
            .property<static_cast<Ref<Texture2D>(Decal::*)(Decal::DecalTexture)const>(&Decal::get_texture),static_cast<void(Decal::*)(Decal::DecalTexture,const Ref<Texture2D> &)>(&Decal::set_texture)>("texture_albedo")
            .property<static_cast<Ref<Texture2D>(Decal::*)(Decal::DecalTexture)const>(&Decal::get_texture),static_cast<void(Decal::*)(Decal::DecalTexture,const Ref<Texture2D> &)>(&Decal::set_texture)>("texture_normal")
            .property<static_cast<Ref<Texture2D>(Decal::*)(Decal::DecalTexture)const>(&Decal::get_texture),static_cast<void(Decal::*)(Decal::DecalTexture,const Ref<Texture2D> &)>(&Decal::set_texture)>("texture_orm")
            .property<static_cast<Ref<Texture2D>(Decal::*)(Decal::DecalTexture)const>(&Decal::get_texture),static_cast<void(Decal::*)(Decal::DecalTexture,const Ref<Texture2D> &)>(&Decal::set_texture)>("texture_emission")
            .property<static_cast<double(Decal::*)()const>(&Decal::get_emission_energy),static_cast<void(Decal::*)(double)>(&Decal::set_emission_energy)>("emission_energy")
            .property<static_cast<Color(Decal::*)()const>(&Decal::get_modulate),static_cast<void(Decal::*)(const Color &)>(&Decal::set_modulate)>("modulate")
            .property<static_cast<double(Decal::*)()const>(&Decal::get_albedo_mix),static_cast<void(Decal::*)(double)>(&Decal::set_albedo_mix)>("albedo_mix")
            .property<static_cast<double(Decal::*)()const>(&Decal::get_normal_fade),static_cast<void(Decal::*)(double)>(&Decal::set_normal_fade)>("normal_fade")
            .property<static_cast<double(Decal::*)()const>(&Decal::get_upper_fade),static_cast<void(Decal::*)(double)>(&Decal::set_upper_fade)>("upper_fade")
            .property<static_cast<double(Decal::*)()const>(&Decal::get_lower_fade),static_cast<void(Decal::*)(double)>(&Decal::set_lower_fade)>("lower_fade")
            .property<static_cast<bool(Decal::*)()const>(&Decal::is_distance_fade_enabled),static_cast<void(Decal::*)(bool)>(&Decal::set_enable_distance_fade)>("distance_fade_enabled")
            .property<static_cast<double(Decal::*)()const>(&Decal::get_distance_fade_begin),static_cast<void(Decal::*)(double)>(&Decal::set_distance_fade_begin)>("distance_fade_begin")
            .property<static_cast<double(Decal::*)()const>(&Decal::get_distance_fade_length),static_cast<void(Decal::*)(double)>(&Decal::set_distance_fade_length)>("distance_fade_length")
            .property<static_cast<uint32_t(Decal::*)()const>(&Decal::get_cull_mask),static_cast<void(Decal::*)(uint32_t)>(&Decal::set_cull_mask)>("cull_mask")
;    qjs::Value _DecalTexture = context->newObject();
    _DecalTexture["TEXTURE_ALBEDO"] = Decal::DecalTexture::TEXTURE_ALBEDO;
    _DecalTexture["TEXTURE_NORMAL"] = Decal::DecalTexture::TEXTURE_NORMAL;
    _DecalTexture["TEXTURE_ORM"] = Decal::DecalTexture::TEXTURE_ORM;
    _DecalTexture["TEXTURE_EMISSION"] = Decal::DecalTexture::TEXTURE_EMISSION;
    _DecalTexture["TEXTURE_MAX"] = Decal::DecalTexture::TEXTURE_MAX;
    _module.add("DecalTexture", std::move(_DecalTexture));
}