#include <godot_cpp/classes/xr_hand_modifier3d.hpp>
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XRHandModifier3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<XRHandModifier3D>("XRHandModifier3D")
            .constructor<>()
            .base<SkeletonModifier3D>()
            .property<static_cast<StringName(XRHandModifier3D::*)()const>(&XRHandModifier3D::get_hand_tracker),static_cast<void(XRHandModifier3D::*)(const StringName &)>(&XRHandModifier3D::set_hand_tracker)>("hand_tracker")
            .property<static_cast<XRHandModifier3D::BoneUpdate(XRHandModifier3D::*)()const>(&XRHandModifier3D::get_bone_update),static_cast<void(XRHandModifier3D::*)(XRHandModifier3D::BoneUpdate)>(&XRHandModifier3D::set_bone_update)>("bone_update")
;    qjs::Value _BoneUpdate = context->newObject();
    _BoneUpdate["BONE_UPDATE_FULL"] = XRHandModifier3D::BoneUpdate::BONE_UPDATE_FULL;
    _BoneUpdate["BONE_UPDATE_ROTATION_ONLY"] = XRHandModifier3D::BoneUpdate::BONE_UPDATE_ROTATION_ONLY;
    _BoneUpdate["BONE_UPDATE_MAX"] = XRHandModifier3D::BoneUpdate::BONE_UPDATE_MAX;
    _module.add("BoneUpdate", std::move(_BoneUpdate));
}