#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/xr_server.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XRTracker() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<XRTracker>("XRTracker")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<XRServer::TrackerType(XRTracker::*)()const>(&XRTracker::get_tracker_type),static_cast<void(XRTracker::*)(XRServer::TrackerType)>(&XRTracker::set_tracker_type)>("type")
            .property<static_cast<StringName(XRTracker::*)()const>(&XRTracker::get_tracker_name),static_cast<void(XRTracker::*)(const StringName &)>(&XRTracker::set_tracker_name)>("name")
            .property<static_cast<String(XRTracker::*)()const>(&XRTracker::get_tracker_desc),static_cast<void(XRTracker::*)(const String &)>(&XRTracker::set_tracker_desc)>("description")
;}