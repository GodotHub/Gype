#include "register/register_classes.h"
#include <godot_cpp/classes/xr_positional_tracker.hpp>

using namespace godot;

void register_classes_XRPositionalTrackerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<XRPositionalTracker>>("XRPositionalTrackerRef").constructor<XRPositionalTracker *>();
}