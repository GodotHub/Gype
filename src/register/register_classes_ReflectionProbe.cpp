#include <godot_cpp/classes/reflection_probe.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ReflectionProbe() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<ReflectionProbe>("ReflectionProbe")
            .constructor<>()
            .base<VisualInstance3D>()
            .property<static_cast<ReflectionProbe::UpdateMode(ReflectionProbe::*)()const>(&ReflectionProbe::get_update_mode),static_cast<void(ReflectionProbe::*)(ReflectionProbe::UpdateMode)>(&ReflectionProbe::set_update_mode)>("update_mode")
            .property<static_cast<double(ReflectionProbe::*)()const>(&ReflectionProbe::get_intensity),static_cast<void(ReflectionProbe::*)(double)>(&ReflectionProbe::set_intensity)>("intensity")
            .property<static_cast<double(ReflectionProbe::*)()const>(&ReflectionProbe::get_max_distance),static_cast<void(ReflectionProbe::*)(double)>(&ReflectionProbe::set_max_distance)>("max_distance")
            .property<static_cast<Vector3(ReflectionProbe::*)()const>(&ReflectionProbe::get_size),static_cast<void(ReflectionProbe::*)(const Vector3 &)>(&ReflectionProbe::set_size)>("size")
            .property<static_cast<Vector3(ReflectionProbe::*)()const>(&ReflectionProbe::get_origin_offset),static_cast<void(ReflectionProbe::*)(const Vector3 &)>(&ReflectionProbe::set_origin_offset)>("origin_offset")
            .property<static_cast<bool(ReflectionProbe::*)()const>(&ReflectionProbe::is_box_projection_enabled),static_cast<void(ReflectionProbe::*)(bool)>(&ReflectionProbe::set_enable_box_projection)>("box_projection")
            .property<static_cast<bool(ReflectionProbe::*)()const>(&ReflectionProbe::is_set_as_interior),static_cast<void(ReflectionProbe::*)(bool)>(&ReflectionProbe::set_as_interior)>("interior")
            .property<static_cast<bool(ReflectionProbe::*)()const>(&ReflectionProbe::are_shadows_enabled),static_cast<void(ReflectionProbe::*)(bool)>(&ReflectionProbe::set_enable_shadows)>("enable_shadows")
            .property<static_cast<uint32_t(ReflectionProbe::*)()const>(&ReflectionProbe::get_cull_mask),static_cast<void(ReflectionProbe::*)(uint32_t)>(&ReflectionProbe::set_cull_mask)>("cull_mask")
            .property<static_cast<uint32_t(ReflectionProbe::*)()const>(&ReflectionProbe::get_reflection_mask),static_cast<void(ReflectionProbe::*)(uint32_t)>(&ReflectionProbe::set_reflection_mask)>("reflection_mask")
            .property<static_cast<double(ReflectionProbe::*)()const>(&ReflectionProbe::get_mesh_lod_threshold),static_cast<void(ReflectionProbe::*)(double)>(&ReflectionProbe::set_mesh_lod_threshold)>("mesh_lod_threshold")
            .property<static_cast<ReflectionProbe::AmbientMode(ReflectionProbe::*)()const>(&ReflectionProbe::get_ambient_mode),static_cast<void(ReflectionProbe::*)(ReflectionProbe::AmbientMode)>(&ReflectionProbe::set_ambient_mode)>("ambient_mode")
            .property<static_cast<Color(ReflectionProbe::*)()const>(&ReflectionProbe::get_ambient_color),static_cast<void(ReflectionProbe::*)(const Color &)>(&ReflectionProbe::set_ambient_color)>("ambient_color")
            .property<static_cast<double(ReflectionProbe::*)()const>(&ReflectionProbe::get_ambient_color_energy),static_cast<void(ReflectionProbe::*)(double)>(&ReflectionProbe::set_ambient_color_energy)>("ambient_color_energy")
;    qjs::Value _UpdateMode = context->newObject();
    _UpdateMode["UPDATE_ONCE"] = ReflectionProbe::UpdateMode::UPDATE_ONCE;
    _UpdateMode["UPDATE_ALWAYS"] = ReflectionProbe::UpdateMode::UPDATE_ALWAYS;
    _module.add("UpdateMode", std::move(_UpdateMode));
    qjs::Value _AmbientMode = context->newObject();
    _AmbientMode["AMBIENT_DISABLED"] = ReflectionProbe::AmbientMode::AMBIENT_DISABLED;
    _AmbientMode["AMBIENT_ENVIRONMENT"] = ReflectionProbe::AmbientMode::AMBIENT_ENVIRONMENT;
    _AmbientMode["AMBIENT_COLOR"] = ReflectionProbe::AmbientMode::AMBIENT_COLOR;
    _module.add("AmbientMode", std::move(_AmbientMode));
}