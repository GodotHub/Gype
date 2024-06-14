#include <godot_cpp/classes/fog_volume.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/rendering_server.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FogVolume() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<FogVolume>("FogVolume")
			.constructor<>()
			.base<VisualInstance3D>()
			.property<static_cast<Vector3 (FogVolume::*)() const>(&FogVolume::get_size), static_cast<void (FogVolume::*)(const Vector3 &)>(&FogVolume::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<RenderingServer::FogVolumeShape (FogVolume::*)() const>(&FogVolume::get_shape), static_cast<void (FogVolume::*)(RenderingServer::FogVolumeShape)>(&FogVolume::set_shape)>((new std::string("shape"))->c_str())
			.property<static_cast<Ref<Material> (FogVolume::*)() const>(&FogVolume::get_material), static_cast<void (FogVolume::*)(const Ref<Material> &)>(&FogVolume::set_material)>((new std::string("material"))->c_str());
}