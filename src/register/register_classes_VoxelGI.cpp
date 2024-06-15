#include <godot_cpp/classes/voxel_gi.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/voxel_gi_data.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VoxelGI() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<VoxelGI>("VoxelGI")
            .constructor<>()
            .base<VisualInstance3D>()
            .property<static_cast<VoxelGI::Subdiv(VoxelGI::*)()const>(&VoxelGI::get_subdiv),static_cast<void(VoxelGI::*)(VoxelGI::Subdiv)>(&VoxelGI::set_subdiv)>("subdiv")
            .property<static_cast<Vector3(VoxelGI::*)()const>(&VoxelGI::get_size),static_cast<void(VoxelGI::*)(const Vector3 &)>(&VoxelGI::set_size)>("size")
            .property<static_cast<Ref<CameraAttributes>(VoxelGI::*)()const>(&VoxelGI::get_camera_attributes),static_cast<void(VoxelGI::*)(const Ref<CameraAttributes> &)>(&VoxelGI::set_camera_attributes)>("camera_attributes")
            .property<static_cast<Ref<VoxelGIData>(VoxelGI::*)()const>(&VoxelGI::get_probe_data),static_cast<void(VoxelGI::*)(const Ref<VoxelGIData> &)>(&VoxelGI::set_probe_data)>("data")
            .fun<static_cast<void(VoxelGI::*)(Node *,bool)>(&VoxelGI::bake)>("bake")
            .fun<static_cast<void(VoxelGI::*)()>(&VoxelGI::debug_bake)>("debug_bake")
;    qjs::Value _Subdiv = context->newObject();
    _Subdiv["SUBDIV_64"] = VoxelGI::Subdiv::SUBDIV_64;
    _Subdiv["SUBDIV_128"] = VoxelGI::Subdiv::SUBDIV_128;
    _Subdiv["SUBDIV_256"] = VoxelGI::Subdiv::SUBDIV_256;
    _Subdiv["SUBDIV_512"] = VoxelGI::Subdiv::SUBDIV_512;
    _Subdiv["SUBDIV_MAX"] = VoxelGI::Subdiv::SUBDIV_MAX;
    _module.add("Subdiv", std::move(_Subdiv));
}