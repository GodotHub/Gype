#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/upnp_device.hpp>

using namespace godot;

void register_classes_UPNPDevice() {
    qjs::Context::Module &_module = _General;
    _module.class_<UPNPDevice>("UPNPDevice")
           .constructor<>()
           .property<UPNPDevice::get_description_url, UPNPDevice::set_description_url>("description_url")
           .property<UPNPDevice::get_service_type, UPNPDevice::set_service_type>("service_type")
           .property<UPNPDevice::get_igd_control_url, UPNPDevice::set_igd_control_url>("igd_control_url")
           .property<UPNPDevice::get_igd_service_type, UPNPDevice::set_igd_service_type>("igd_service_type")
           .property<UPNPDevice::get_igd_our_addr, UPNPDevice::set_igd_our_addr>("igd_our_addr")
           .property<UPNPDevice::get_igd_status, UPNPDevice::set_igd_status>("igd_status")
		    .fun<static_cast<bool(UPNPDevice::*)()const>(&UPNPDevice::is_valid_gateway)>("is_valid_gateway")
		    .fun<static_cast<String(UPNPDevice::*)()const>(&UPNPDevice::query_external_address)>("query_external_address")
		    .fun<static_cast<int32_t(UPNPDevice::*)(int32_t,int32_t,const String &,const String &,int32_t)const>(&UPNPDevice::add_port_mapping)>("add_port_mapping")
		    .fun<static_cast<int32_t(UPNPDevice::*)(int32_t,const String &)const>(&UPNPDevice::delete_port_mapping)>("delete_port_mapping")
;}