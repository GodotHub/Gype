#include <godot_cpp/classes/xr_server.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_XRServer() {
	qjs::Value js_singleton = context->newObject();
    XRServer *singleton = XRServer::get_singleton();
    js_singleton.add("get_world_scale", [singleton]()->double{return singleton->get_world_scale();});
    js_singleton.add("set_world_scale", [singleton](double scale)->void{singleton->set_world_scale(scale);});
    js_singleton.add("get_world_origin", [singleton]()->Transform3D{return singleton->get_world_origin();});
    js_singleton.add("set_world_origin", [singleton](const Transform3D & world_origin)->void{singleton->set_world_origin(world_origin);});
    js_singleton.add("get_reference_frame", [singleton]()->Transform3D{return singleton->get_reference_frame();});
    js_singleton.add("clear_reference_frame", [singleton]()->void{singleton->clear_reference_frame();});
    js_singleton.add("center_on_hmd", [singleton](XRServer::RotationMode rotation_mode,bool keep_height)->void{singleton->center_on_hmd(rotation_mode,keep_height);});
    js_singleton.add("get_hmd_transform", [singleton]()->Transform3D{return singleton->get_hmd_transform();});
    js_singleton.add("add_interface", [singleton](const Ref<XRInterface> & interface)->void{singleton->add_interface(interface);});
    js_singleton.add("get_interface_count", [singleton]()->int64_t{return singleton->get_interface_count();});
    js_singleton.add("remove_interface", [singleton](const Ref<XRInterface> & interface)->void{singleton->remove_interface(interface);});
    js_singleton.add("get_interface", [singleton](int32_t idx)->Ref<XRInterface>{return singleton->get_interface(idx);});
    js_singleton.add("get_interfaces", [singleton]()->TypedArray<Dictionary>{return singleton->get_interfaces();});
    js_singleton.add("find_interface", [singleton](const String & name)->Ref<XRInterface>{return singleton->find_interface(name);});
    js_singleton.add("add_tracker", [singleton](const Ref<XRTracker> & tracker)->void{singleton->add_tracker(tracker);});
    js_singleton.add("remove_tracker", [singleton](const Ref<XRTracker> & tracker)->void{singleton->remove_tracker(tracker);});
    js_singleton.add("get_trackers", [singleton](int32_t tracker_types)->Dictionary{return singleton->get_trackers(tracker_types);});
    js_singleton.add("get_tracker", [singleton](const StringName & tracker_name)->Ref<XRTracker>{return singleton->get_tracker(tracker_name);});
    js_singleton.add("get_primary_interface", [singleton]()->Ref<XRInterface>{return singleton->get_primary_interface();});
    js_singleton.add("set_primary_interface", [singleton](const Ref<XRInterface> & interface)->void{singleton->set_primary_interface(interface);});
    context->global()["XRServer"] = js_singleton;

    qjs::Value _TrackerType = context->newObject();
    _TrackerType["TRACKER_HEAD"] = XRServer::TrackerType::TRACKER_HEAD;
    _TrackerType["TRACKER_CONTROLLER"] = XRServer::TrackerType::TRACKER_CONTROLLER;
    _TrackerType["TRACKER_BASESTATION"] = XRServer::TrackerType::TRACKER_BASESTATION;
    _TrackerType["TRACKER_ANCHOR"] = XRServer::TrackerType::TRACKER_ANCHOR;
    _TrackerType["TRACKER_HAND"] = XRServer::TrackerType::TRACKER_HAND;
    _TrackerType["TRACKER_BODY"] = XRServer::TrackerType::TRACKER_BODY;
    _TrackerType["TRACKER_FACE"] = XRServer::TrackerType::TRACKER_FACE;
    _TrackerType["TRACKER_ANY_KNOWN"] = XRServer::TrackerType::TRACKER_ANY_KNOWN;
    _TrackerType["TRACKER_UNKNOWN"] = XRServer::TrackerType::TRACKER_UNKNOWN;
    _TrackerType["TRACKER_ANY"] = XRServer::TrackerType::TRACKER_ANY;
    js_singleton["TrackerType"] = _TrackerType;
    qjs::Value _RotationMode = context->newObject();
    _RotationMode["RESET_FULL_ROTATION"] = XRServer::RotationMode::RESET_FULL_ROTATION;
    _RotationMode["RESET_BUT_KEEP_TILT"] = XRServer::RotationMode::RESET_BUT_KEEP_TILT;
    _RotationMode["DONT_RESET_ROTATION"] = XRServer::RotationMode::DONT_RESET_ROTATION;
    js_singleton["RotationMode"] = _RotationMode;
}