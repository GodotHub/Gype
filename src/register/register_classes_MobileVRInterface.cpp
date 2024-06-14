#include <godot_cpp/classes/mobile_vr_interface.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MobileVRInterface() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MobileVRInterface>("MobileVRInterface")
			.constructor<>()
			.base<XRInterface>()
			.property<static_cast<double (MobileVRInterface::*)() const>(&MobileVRInterface::get_eye_height), static_cast<void (MobileVRInterface::*)(double)>(&MobileVRInterface::set_eye_height)>((new std::string("eye_height"))->c_str())
			.property<static_cast<double (MobileVRInterface::*)() const>(&MobileVRInterface::get_iod), static_cast<void (MobileVRInterface::*)(double)>(&MobileVRInterface::set_iod)>((new std::string("iod"))->c_str())
			.property<static_cast<double (MobileVRInterface::*)() const>(&MobileVRInterface::get_display_width), static_cast<void (MobileVRInterface::*)(double)>(&MobileVRInterface::set_display_width)>((new std::string("display_width"))->c_str())
			.property<static_cast<double (MobileVRInterface::*)() const>(&MobileVRInterface::get_display_to_lens), static_cast<void (MobileVRInterface::*)(double)>(&MobileVRInterface::set_display_to_lens)>((new std::string("display_to_lens"))->c_str())
			.property<static_cast<Rect2 (MobileVRInterface::*)() const>(&MobileVRInterface::get_offset_rect), static_cast<void (MobileVRInterface::*)(const Rect2 &)>(&MobileVRInterface::set_offset_rect)>((new std::string("offset_rect"))->c_str())
			.property<static_cast<double (MobileVRInterface::*)() const>(&MobileVRInterface::get_oversample), static_cast<void (MobileVRInterface::*)(double)>(&MobileVRInterface::set_oversample)>((new std::string("oversample"))->c_str())
			.property<static_cast<double (MobileVRInterface::*)() const>(&MobileVRInterface::get_k1), static_cast<void (MobileVRInterface::*)(double)>(&MobileVRInterface::set_k1)>((new std::string("k1"))->c_str())
			.property<static_cast<double (MobileVRInterface::*)() const>(&MobileVRInterface::get_k2), static_cast<void (MobileVRInterface::*)(double)>(&MobileVRInterface::set_k2)>((new std::string("k2"))->c_str())
			.property<static_cast<double (MobileVRInterface::*)() const>(&MobileVRInterface::get_vrs_min_radius), static_cast<void (MobileVRInterface::*)(double)>(&MobileVRInterface::set_vrs_min_radius)>((new std::string("vrs_min_radius"))->c_str())
			.property<static_cast<double (MobileVRInterface::*)() const>(&MobileVRInterface::get_vrs_strength), static_cast<void (MobileVRInterface::*)(double)>(&MobileVRInterface::set_vrs_strength)>((new std::string("vrs_strength"))->c_str());
}