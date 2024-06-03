#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/mobile_vr_interface.hpp>

using namespace godot;

void register_classes_MobileVRInterface() {
    qjs::Context::Module &_module = _General;
    _module.class_<MobileVRInterface>("MobileVRInterface")
           .constructor<>()
           .property<MobileVRInterface::get_eye_height, MobileVRInterface::set_eye_height>("eye_height")
           .property<MobileVRInterface::get_iod, MobileVRInterface::set_iod>("iod")
           .property<MobileVRInterface::get_display_width, MobileVRInterface::set_display_width>("display_width")
           .property<MobileVRInterface::get_display_to_lens, MobileVRInterface::set_display_to_lens>("display_to_lens")
           .property<MobileVRInterface::get_oversample, MobileVRInterface::set_oversample>("oversample")
           .property<MobileVRInterface::get_k1, MobileVRInterface::set_k1>("k1")
           .property<MobileVRInterface::get_k2, MobileVRInterface::set_k2>("k2")
;}