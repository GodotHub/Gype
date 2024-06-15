#include <godot_cpp/classes/light_occluder2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/occluder_polygon2d.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_LightOccluder2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<LightOccluder2D>("LightOccluder2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Ref<OccluderPolygon2D>(LightOccluder2D::*)()const>(&LightOccluder2D::get_occluder_polygon),static_cast<void(LightOccluder2D::*)(const Ref<OccluderPolygon2D> &)>(&LightOccluder2D::set_occluder_polygon)>("occluder")
            .property<static_cast<bool(LightOccluder2D::*)()const>(&LightOccluder2D::is_set_as_sdf_collision),static_cast<void(LightOccluder2D::*)(bool)>(&LightOccluder2D::set_as_sdf_collision)>("sdf_collision")
            .property<static_cast<int32_t(LightOccluder2D::*)()const>(&LightOccluder2D::get_occluder_light_mask),static_cast<void(LightOccluder2D::*)(int32_t)>(&LightOccluder2D::set_occluder_light_mask)>("occluder_light_mask")
;}