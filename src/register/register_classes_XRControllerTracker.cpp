#include <godot_cpp/classes/xr_controller_tracker.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XRControllerTracker() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<XRControllerTracker>("XRControllerTracker")
            .constructor<>()
            .base<XRPositionalTracker>()
;}