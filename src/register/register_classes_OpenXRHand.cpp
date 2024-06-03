#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/open_xr_hand.hpp>

using namespace godot;

void register_classes_OpenXRHand() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<OpenXRHand>("OpenXRHand")
           .constructor<>()
           .property<OpenXRHand::get_hand, OpenXRHand::set_hand>("hand")
           .property<OpenXRHand::get_motion_range, OpenXRHand::set_motion_range>("motion_range")
           .property<OpenXRHand::get_hand_skeleton, OpenXRHand::set_hand_skeleton>("hand_skeleton")
;}