#include <godot_cpp/classes/open_xr_composition_layer.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/sub_viewport.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OpenXRCompositionLayer() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<OpenXRCompositionLayer>("OpenXRCompositionLayer")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<SubViewport *(OpenXRCompositionLayer::*)()const>(&OpenXRCompositionLayer::get_layer_viewport),static_cast<void(OpenXRCompositionLayer::*)(SubViewport *)>(&OpenXRCompositionLayer::set_layer_viewport)>("layer_viewport")
            .property<static_cast<int32_t(OpenXRCompositionLayer::*)()const>(&OpenXRCompositionLayer::get_sort_order),static_cast<void(OpenXRCompositionLayer::*)(int32_t)>(&OpenXRCompositionLayer::set_sort_order)>("sort_order")
            .property<static_cast<bool(OpenXRCompositionLayer::*)()const>(&OpenXRCompositionLayer::get_alpha_blend),static_cast<void(OpenXRCompositionLayer::*)(bool)>(&OpenXRCompositionLayer::set_alpha_blend)>("alpha_blend")
            .property<static_cast<bool(OpenXRCompositionLayer::*)()const>(&OpenXRCompositionLayer::get_enable_hole_punch),static_cast<void(OpenXRCompositionLayer::*)(bool)>(&OpenXRCompositionLayer::set_enable_hole_punch)>("enable_hole_punch")
            .fun<static_cast<bool(OpenXRCompositionLayer::*)()const>(&OpenXRCompositionLayer::is_natively_supported)>("is_natively_supported")
            .fun<static_cast<Vector2(OpenXRCompositionLayer::*)(const Vector3 &,const Vector3 &)const>(&OpenXRCompositionLayer::intersects_ray)>("intersects_ray")
;}