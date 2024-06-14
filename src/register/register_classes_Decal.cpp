
#include <godot_cpp/classes/decal.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Decal() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Decal>("Decal")
			.constructor<>()
			.base<VisualInstance3D>()
			.property<static_cast<Vector3 (Decal::*)() const>(&Decal::get_size), static_cast<void (Decal::*)(const Vector3 &)>(&Decal::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<Ref<Texture2D> (Decal::*)(Decal::DecalTexture) const>(&Decal::get_texture), static_cast<void (Decal::*)(Decal::DecalTexture, const Ref<Texture2D> &)>(&Decal::set_texture)>((new std::string("texture_albedo"))->c_str())
			.property<static_cast<Ref<Texture2D> (Decal::*)(Decal::DecalTexture) const>(&Decal::get_texture), static_cast<void (Decal::*)(Decal::DecalTexture, const Ref<Texture2D> &)>(&Decal::set_texture)>((new std::string("texture_normal"))->c_str())
			.property<static_cast<Ref<Texture2D> (Decal::*)(Decal::DecalTexture) const>(&Decal::get_texture), static_cast<void (Decal::*)(Decal::DecalTexture, const Ref<Texture2D> &)>(&Decal::set_texture)>((new std::string("texture_orm"))->c_str())
			.property<static_cast<Ref<Texture2D> (Decal::*)(Decal::DecalTexture) const>(&Decal::get_texture), static_cast<void (Decal::*)(Decal::DecalTexture, const Ref<Texture2D> &)>(&Decal::set_texture)>((new std::string("texture_emission"))->c_str())
			.property<static_cast<double (Decal::*)() const>(&Decal::get_emission_energy), static_cast<void (Decal::*)(double)>(&Decal::set_emission_energy)>((new std::string("emission_energy"))->c_str())
			.property<static_cast<Color (Decal::*)() const>(&Decal::get_modulate), static_cast<void (Decal::*)(const Color &)>(&Decal::set_modulate)>((new std::string("modulate"))->c_str())
			.property<static_cast<double (Decal::*)() const>(&Decal::get_albedo_mix), static_cast<void (Decal::*)(double)>(&Decal::set_albedo_mix)>((new std::string("albedo_mix"))->c_str())
			.property<static_cast<double (Decal::*)() const>(&Decal::get_normal_fade), static_cast<void (Decal::*)(double)>(&Decal::set_normal_fade)>((new std::string("normal_fade"))->c_str())
			.property<static_cast<double (Decal::*)() const>(&Decal::get_upper_fade), static_cast<void (Decal::*)(double)>(&Decal::set_upper_fade)>((new std::string("upper_fade"))->c_str())
			.property<static_cast<double (Decal::*)() const>(&Decal::get_lower_fade), static_cast<void (Decal::*)(double)>(&Decal::set_lower_fade)>((new std::string("lower_fade"))->c_str())
			.property<static_cast<bool (Decal::*)() const>(&Decal::is_distance_fade_enabled), static_cast<void (Decal::*)(bool)>(&Decal::set_enable_distance_fade)>((new std::string("distance_fade_enabled"))->c_str())
			.property<static_cast<double (Decal::*)() const>(&Decal::get_distance_fade_begin), static_cast<void (Decal::*)(double)>(&Decal::set_distance_fade_begin)>((new std::string("distance_fade_begin"))->c_str())
			.property<static_cast<double (Decal::*)() const>(&Decal::get_distance_fade_length), static_cast<void (Decal::*)(double)>(&Decal::set_distance_fade_length)>((new std::string("distance_fade_length"))->c_str())
			.property<static_cast<uint32_t (Decal::*)() const>(&Decal::get_cull_mask), static_cast<void (Decal::*)(uint32_t)>(&Decal::set_cull_mask)>((new std::string("cull_mask"))->c_str());
	qjs::Value _DecalTexture = context->newObject();
	_DecalTexture[(new std::string("TEXTURE_ALBEDO"))->c_str()] = Decal::DecalTexture::TEXTURE_ALBEDO;
	_DecalTexture[(new std::string("TEXTURE_NORMAL"))->c_str()] = Decal::DecalTexture::TEXTURE_NORMAL;
	_DecalTexture[(new std::string("TEXTURE_ORM"))->c_str()] = Decal::DecalTexture::TEXTURE_ORM;
	_DecalTexture[(new std::string("TEXTURE_EMISSION"))->c_str()] = Decal::DecalTexture::TEXTURE_EMISSION;
	_DecalTexture[(new std::string("TEXTURE_MAX"))->c_str()] = Decal::DecalTexture::TEXTURE_MAX;
	_module.add("DecalTexture", std::move(_DecalTexture));
}