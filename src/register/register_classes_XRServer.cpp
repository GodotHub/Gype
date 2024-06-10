#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/classes/xr_server.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRServer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<XRServer>("XRServer")
			.property<&XRServer::get_world_scale, &XRServer::set_world_scale>("world_scale")
			.property<&XRServer::get_world_origin, &XRServer::set_world_origin>("world_origin")
			.property<&XRServer::get_primary_interface, &XRServer::set_primary_interface>("primary_interface")
			.fun<static_cast<Transform3D (XRServer::*)() const>(&XRServer::get_reference_frame)>("get_reference_frame")
			.fun<static_cast<void (XRServer::*)(XRServer::RotationMode, bool)>(&XRServer::center_on_hmd)>("center_on_hmd")
			.fun<static_cast<Transform3D (XRServer::*)()>(&XRServer::get_hmd_transform)>("get_hmd_transform")
			.fun<static_cast<void (XRServer::*)(const Ref<XRInterface> &)>(&XRServer::add_interface)>("add_interface")
			.fun<static_cast<int32_t (XRServer::*)() const>(&XRServer::get_interface_count)>("get_interface_count")
			.fun<static_cast<void (XRServer::*)(const Ref<XRInterface> &)>(&XRServer::remove_interface)>("remove_interface")
			.fun<static_cast<Ref<XRInterface> (XRServer::*)(int32_t) const>(&XRServer::get_interface)>("get_interface")
			.fun<static_cast<TypedArray<Dictionary> (XRServer::*)() const>(&XRServer::get_interfaces)>("get_interfaces")
			.fun<static_cast<Ref<XRInterface> (XRServer::*)(const String &) const>(&XRServer::find_interface)>("find_interface")
			.fun<static_cast<void (XRServer::*)(const Ref<XRTracker> &)>(&XRServer::add_tracker)>("add_tracker")
			.fun<static_cast<void (XRServer::*)(const Ref<XRTracker> &)>(&XRServer::remove_tracker)>("remove_tracker")
			.fun<static_cast<Dictionary (XRServer::*)(int32_t)>(&XRServer::get_trackers)>("get_trackers")
			.fun<static_cast<Ref<XRTracker> (XRServer::*)(const StringName &) const>(&XRServer::get_tracker)>("get_tracker");
}