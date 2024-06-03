#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/xr_controller3d.hpp>

using namespace godot;

void register_classes_XRController3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<XRController3D>("XRController3D")
           .constructor<>()
		    .fun<static_cast<bool(XRController3D::*)(const StringName &)const>(&XRController3D::is_button_pressed)>("is_button_pressed")
		    .fun<static_cast<Variant(XRController3D::*)(const StringName &)const>(&XRController3D::get_input)>("get_input")
		    .fun<static_cast<double(XRController3D::*)(const StringName &)const>(&XRController3D::get_float)>("get_float")
		    .fun<static_cast<Vector2(XRController3D::*)(const StringName &)const>(&XRController3D::get_vector2)>("get_vector2")
		    .fun<static_cast<XRPositionalTracker::TrackerHand(XRController3D::*)()const>(&XRController3D::get_tracker_hand)>("get_tracker_hand")
;}