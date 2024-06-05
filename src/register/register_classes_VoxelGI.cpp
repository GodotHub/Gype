#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/voxel_gi.hpp>
#include <godot_cpp/classes/voxel_gi_data.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VoxelGI() {
	qjs::Context::Module &_module = _Node3D;
	_module.class_<VoxelGI>("VoxelGI")
			.constructor<>()
			.property<&VoxelGI::get_subdiv, &VoxelGI::set_subdiv>("subdiv")
			.property<&VoxelGI::get_size, &VoxelGI::set_size>("size")
			.property<&VoxelGI::get_camera_attributes, &VoxelGI::set_camera_attributes>("camera_attributes")
			.property<&VoxelGI::get_probe_data, &VoxelGI::set_probe_data>("data")
			.fun<static_cast<void (VoxelGI::*)(Node *, bool)>(&VoxelGI::bake)>("bake")
			.fun<static_cast<void (VoxelGI::*)()>(&VoxelGI::debug_bake)>("debug_bake");
}