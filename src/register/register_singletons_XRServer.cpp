#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/classes/xr_server.hpp>
#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

using namespace godot;

void register_singletons_XRServer() {
	qjs::Value js_singleton = context->newObject();
	XRServer *singleton = XRServer::get_singleton();
	js_singleton.add((new std::string("get_world_scale"))->c_str(), [singleton]() -> double { return singleton->get_world_scale(); });
	js_singleton.add((new std::string("set_world_scale"))->c_str(), [singleton](double scale) -> void { singleton->set_world_scale(scale); });
	js_singleton.add((new std::string("get_world_origin"))->c_str(), [singleton]() -> Transform3D { return singleton->get_world_origin(); });
	js_singleton.add((new std::string("set_world_origin"))->c_str(), [singleton](const Transform3D &world_origin) -> void { singleton->set_world_origin(world_origin); });
	js_singleton.add((new std::string("get_reference_frame"))->c_str(), [singleton]() -> Transform3D { return singleton->get_reference_frame(); });
	js_singleton.add((new std::string("clear_reference_frame"))->c_str(), [singleton]() -> void { singleton->clear_reference_frame(); });
	js_singleton.add((new std::string("center_on_hmd"))->c_str(), [singleton](XRServer::RotationMode rotation_mode, bool keep_height) -> void { singleton->center_on_hmd(rotation_mode, keep_height); });
	js_singleton.add((new std::string("get_hmd_transform"))->c_str(), [singleton]() -> Transform3D { return singleton->get_hmd_transform(); });
	js_singleton.add((new std::string("add_interface"))->c_str(), [singleton](const Ref<XRInterface> &interface) -> void { singleton->add_interface(interface); });
	js_singleton.add((new std::string("get_interface_count"))->c_str(), [singleton]() -> int64_t { return singleton->get_interface_count(); });
	js_singleton.add((new std::string("remove_interface"))->c_str(), [singleton](const Ref<XRInterface> &interface) -> void { singleton->remove_interface(interface); });
	js_singleton.add((new std::string("get_interface"))->c_str(), [singleton](int32_t idx) -> Ref<XRInterface> { return singleton->get_interface(idx); });
	js_singleton.add((new std::string("get_interfaces"))->c_str(), [singleton]() -> TypedArray<Dictionary> { return singleton->get_interfaces(); });
	js_singleton.add((new std::string("find_interface"))->c_str(), [singleton](const String &name) -> Ref<XRInterface> { return singleton->find_interface(name); });
	js_singleton.add((new std::string("add_tracker"))->c_str(), [singleton](const Ref<XRTracker> &tracker) -> void { singleton->add_tracker(tracker); });
	js_singleton.add((new std::string("remove_tracker"))->c_str(), [singleton](const Ref<XRTracker> &tracker) -> void { singleton->remove_tracker(tracker); });
	js_singleton.add((new std::string("get_trackers"))->c_str(), [singleton](int32_t tracker_types) -> Dictionary { return singleton->get_trackers(tracker_types); });
	js_singleton.add((new std::string("get_tracker"))->c_str(), [singleton](const StringName &tracker_name) -> Ref<XRTracker> { return singleton->get_tracker(tracker_name); });
	js_singleton.add((new std::string("get_primary_interface"))->c_str(), [singleton]() -> Ref<XRInterface> { return singleton->get_primary_interface(); });
	js_singleton.add((new std::string("set_primary_interface"))->c_str(), [singleton](const Ref<XRInterface> &interface) -> void { singleton->set_primary_interface(interface); });
	context->global()[(new std::string("XRServer"))->c_str()] = js_singleton;

	qjs::Value _TrackerType = context->newObject();
	_TrackerType[(new std::string("TRACKER_HEAD"))->c_str()] = XRServer::TrackerType::TRACKER_HEAD;
	_TrackerType[(new std::string("TRACKER_CONTROLLER"))->c_str()] = XRServer::TrackerType::TRACKER_CONTROLLER;
	_TrackerType[(new std::string("TRACKER_BASESTATION"))->c_str()] = XRServer::TrackerType::TRACKER_BASESTATION;
	_TrackerType[(new std::string("TRACKER_ANCHOR"))->c_str()] = XRServer::TrackerType::TRACKER_ANCHOR;
	_TrackerType[(new std::string("TRACKER_HAND"))->c_str()] = XRServer::TrackerType::TRACKER_HAND;
	_TrackerType[(new std::string("TRACKER_BODY"))->c_str()] = XRServer::TrackerType::TRACKER_BODY;
	_TrackerType[(new std::string("TRACKER_FACE"))->c_str()] = XRServer::TrackerType::TRACKER_FACE;
	_TrackerType[(new std::string("TRACKER_ANY_KNOWN"))->c_str()] = XRServer::TrackerType::TRACKER_ANY_KNOWN;
	_TrackerType[(new std::string("TRACKER_UNKNOWN"))->c_str()] = XRServer::TrackerType::TRACKER_UNKNOWN;
	_TrackerType[(new std::string("TRACKER_ANY"))->c_str()] = XRServer::TrackerType::TRACKER_ANY;
	js_singleton[(new std::string("TrackerType"))->c_str()] = _TrackerType;
	qjs::Value _RotationMode = context->newObject();
	_RotationMode[(new std::string("RESET_FULL_ROTATION"))->c_str()] = XRServer::RotationMode::RESET_FULL_ROTATION;
	_RotationMode[(new std::string("RESET_BUT_KEEP_TILT"))->c_str()] = XRServer::RotationMode::RESET_BUT_KEEP_TILT;
	_RotationMode[(new std::string("DONT_RESET_ROTATION"))->c_str()] = XRServer::RotationMode::DONT_RESET_ROTATION;
	js_singleton[(new std::string("RotationMode"))->c_str()] = _RotationMode;
}