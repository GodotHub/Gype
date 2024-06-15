#include <godot_cpp/classes/mobile_vr_interface.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/xr_interface.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MobileVRInterface() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<MobileVRInterface>("MobileVRInterface")
            .constructor<>()
            .base<XRInterface>()
            .property<static_cast<double(MobileVRInterface::*)()const>(&MobileVRInterface::get_eye_height),static_cast<void(MobileVRInterface::*)(double)>(&MobileVRInterface::set_eye_height)>("eye_height")
            .property<static_cast<double(MobileVRInterface::*)()const>(&MobileVRInterface::get_iod),static_cast<void(MobileVRInterface::*)(double)>(&MobileVRInterface::set_iod)>("iod")
            .property<static_cast<double(MobileVRInterface::*)()const>(&MobileVRInterface::get_display_width),static_cast<void(MobileVRInterface::*)(double)>(&MobileVRInterface::set_display_width)>("display_width")
            .property<static_cast<double(MobileVRInterface::*)()const>(&MobileVRInterface::get_display_to_lens),static_cast<void(MobileVRInterface::*)(double)>(&MobileVRInterface::set_display_to_lens)>("display_to_lens")
            .property<static_cast<Rect2(MobileVRInterface::*)()const>(&MobileVRInterface::get_offset_rect),static_cast<void(MobileVRInterface::*)(const Rect2 &)>(&MobileVRInterface::set_offset_rect)>("offset_rect")
            .property<static_cast<double(MobileVRInterface::*)()const>(&MobileVRInterface::get_oversample),static_cast<void(MobileVRInterface::*)(double)>(&MobileVRInterface::set_oversample)>("oversample")
            .property<static_cast<double(MobileVRInterface::*)()const>(&MobileVRInterface::get_k1),static_cast<void(MobileVRInterface::*)(double)>(&MobileVRInterface::set_k1)>("k1")
            .property<static_cast<double(MobileVRInterface::*)()const>(&MobileVRInterface::get_k2),static_cast<void(MobileVRInterface::*)(double)>(&MobileVRInterface::set_k2)>("k2")
            .property<static_cast<double(MobileVRInterface::*)()const>(&MobileVRInterface::get_vrs_min_radius),static_cast<void(MobileVRInterface::*)(double)>(&MobileVRInterface::set_vrs_min_radius)>("vrs_min_radius")
            .property<static_cast<double(MobileVRInterface::*)()const>(&MobileVRInterface::get_vrs_strength),static_cast<void(MobileVRInterface::*)(double)>(&MobileVRInterface::set_vrs_strength)>("vrs_strength")
;}