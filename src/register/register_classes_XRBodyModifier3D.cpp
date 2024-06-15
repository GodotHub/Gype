#include <godot_cpp/classes/xr_body_modifier3d.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XRBodyModifier3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<XRBodyModifier3D>("XRBodyModifier3D")
            .constructor<>()
            .base<SkeletonModifier3D>()
            .property<static_cast<StringName(XRBodyModifier3D::*)()const>(&XRBodyModifier3D::get_body_tracker),static_cast<void(XRBodyModifier3D::*)(const StringName &)>(&XRBodyModifier3D::set_body_tracker)>("body_tracker")
            .property<static_cast<BitField<XRBodyModifier3D::BodyUpdate>(XRBodyModifier3D::*)()const>(&XRBodyModifier3D::get_body_update),static_cast<void(XRBodyModifier3D::*)(BitField<XRBodyModifier3D::BodyUpdate>)>(&XRBodyModifier3D::set_body_update)>("body_update")
            .property<static_cast<XRBodyModifier3D::BoneUpdate(XRBodyModifier3D::*)()const>(&XRBodyModifier3D::get_bone_update),static_cast<void(XRBodyModifier3D::*)(XRBodyModifier3D::BoneUpdate)>(&XRBodyModifier3D::set_bone_update)>("bone_update")
;    qjs::Value _BodyUpdate = context->newObject();
    _BodyUpdate["BODY_UPDATE_UPPER_BODY"] = XRBodyModifier3D::BodyUpdate::BODY_UPDATE_UPPER_BODY;
    _BodyUpdate["BODY_UPDATE_LOWER_BODY"] = XRBodyModifier3D::BodyUpdate::BODY_UPDATE_LOWER_BODY;
    _BodyUpdate["BODY_UPDATE_HANDS"] = XRBodyModifier3D::BodyUpdate::BODY_UPDATE_HANDS;
    _module.add("BodyUpdate", std::move(_BodyUpdate));
    qjs::Value _BoneUpdate = context->newObject();
    _BoneUpdate["BONE_UPDATE_FULL"] = XRBodyModifier3D::BoneUpdate::BONE_UPDATE_FULL;
    _BoneUpdate["BONE_UPDATE_ROTATION_ONLY"] = XRBodyModifier3D::BoneUpdate::BONE_UPDATE_ROTATION_ONLY;
    _BoneUpdate["BONE_UPDATE_MAX"] = XRBodyModifier3D::BoneUpdate::BONE_UPDATE_MAX;
    _module.add("BoneUpdate", std::move(_BoneUpdate));
}