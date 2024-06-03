#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_Decal() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<Decal>("Decal")
           .constructor<>()
           .property<Decal::get_size, Decal::set_size>("size")
           .property<Decal::get_texture, Decal::set_texture>("texture_albedo")
           .property<Decal::get_texture, Decal::set_texture>("texture_normal")
           .property<Decal::get_texture, Decal::set_texture>("texture_orm")
           .property<Decal::get_texture, Decal::set_texture>("texture_emission")
           .property<Decal::get_emission_energy, Decal::set_emission_energy>("emission_energy")
           .property<Decal::get_modulate, Decal::set_modulate>("modulate")
           .property<Decal::get_albedo_mix, Decal::set_albedo_mix>("albedo_mix")
           .property<Decal::get_normal_fade, Decal::set_normal_fade>("normal_fade")
           .property<Decal::get_upper_fade, Decal::set_upper_fade>("upper_fade")
           .property<Decal::get_lower_fade, Decal::set_lower_fade>("lower_fade")
           .property<Decal::is_distance_fade_enabled, Decal::set_enable_distance_fade>("distance_fade_enabled")
           .property<Decal::get_distance_fade_begin, Decal::set_distance_fade_begin>("distance_fade_begin")
           .property<Decal::get_distance_fade_length, Decal::set_distance_fade_length>("distance_fade_length")
           .property<Decal::get_cull_mask, Decal::set_cull_mask>("cull_mask")
;}