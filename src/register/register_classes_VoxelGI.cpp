#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/voxel_gi.hpp>
#include <godot_cpp/classes/voxel_gi_data.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VoxelGI() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<VoxelGI>("VoxelGI")
			.constructor<>()
			.base<VisualInstance3D>()
			.property<static_cast<VoxelGI::Subdiv (VoxelGI::*)() const>(&VoxelGI::get_subdiv), static_cast<void (VoxelGI::*)(VoxelGI::Subdiv)>(&VoxelGI::set_subdiv)>((new std::string("subdiv"))->c_str())
			.property<static_cast<Vector3 (VoxelGI::*)() const>(&VoxelGI::get_size), static_cast<void (VoxelGI::*)(const Vector3 &)>(&VoxelGI::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<Ref<CameraAttributes> (VoxelGI::*)() const>(&VoxelGI::get_camera_attributes), static_cast<void (VoxelGI::*)(const Ref<CameraAttributes> &)>(&VoxelGI::set_camera_attributes)>((new std::string("camera_attributes"))->c_str())
			.property<static_cast<Ref<VoxelGIData> (VoxelGI::*)() const>(&VoxelGI::get_probe_data), static_cast<void (VoxelGI::*)(const Ref<VoxelGIData> &)>(&VoxelGI::set_probe_data)>((new std::string("data"))->c_str())
			.fun<static_cast<void (VoxelGI::*)(Node *, bool)>(&VoxelGI::bake)>((new std::string("bake"))->c_str())
			.fun<static_cast<void (VoxelGI::*)()>(&VoxelGI::debug_bake)>((new std::string("debug_bake"))->c_str());
	qjs::Value _Subdiv = context->newObject();
	_Subdiv[(new std::string("SUBDIV_64"))->c_str()] = VoxelGI::Subdiv::SUBDIV_64;
	_Subdiv[(new std::string("SUBDIV_128"))->c_str()] = VoxelGI::Subdiv::SUBDIV_128;
	_Subdiv[(new std::string("SUBDIV_256"))->c_str()] = VoxelGI::Subdiv::SUBDIV_256;
	_Subdiv[(new std::string("SUBDIV_512"))->c_str()] = VoxelGI::Subdiv::SUBDIV_512;
	_Subdiv[(new std::string("SUBDIV_MAX"))->c_str()] = VoxelGI::Subdiv::SUBDIV_MAX;
	_module.add("Subdiv", std::move(_Subdiv));
}