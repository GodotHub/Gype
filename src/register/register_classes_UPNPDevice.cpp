#include <godot_cpp/classes/upnp_device.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_UPNPDevice() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<UPNPDevice>("UPNPDevice")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<String(UPNPDevice::*)()const>(&UPNPDevice::get_description_url),static_cast<void(UPNPDevice::*)(const String &)>(&UPNPDevice::set_description_url)>("description_url")
            .property<static_cast<String(UPNPDevice::*)()const>(&UPNPDevice::get_service_type),static_cast<void(UPNPDevice::*)(const String &)>(&UPNPDevice::set_service_type)>("service_type")
            .property<static_cast<String(UPNPDevice::*)()const>(&UPNPDevice::get_igd_control_url),static_cast<void(UPNPDevice::*)(const String &)>(&UPNPDevice::set_igd_control_url)>("igd_control_url")
            .property<static_cast<String(UPNPDevice::*)()const>(&UPNPDevice::get_igd_service_type),static_cast<void(UPNPDevice::*)(const String &)>(&UPNPDevice::set_igd_service_type)>("igd_service_type")
            .property<static_cast<String(UPNPDevice::*)()const>(&UPNPDevice::get_igd_our_addr),static_cast<void(UPNPDevice::*)(const String &)>(&UPNPDevice::set_igd_our_addr)>("igd_our_addr")
            .property<static_cast<UPNPDevice::IGDStatus(UPNPDevice::*)()const>(&UPNPDevice::get_igd_status),static_cast<void(UPNPDevice::*)(UPNPDevice::IGDStatus)>(&UPNPDevice::set_igd_status)>("igd_status")
            .fun<static_cast<bool(UPNPDevice::*)()const>(&UPNPDevice::is_valid_gateway)>("is_valid_gateway")
            .fun<static_cast<String(UPNPDevice::*)()const>(&UPNPDevice::query_external_address)>("query_external_address")
            .fun<static_cast<int32_t(UPNPDevice::*)(int32_t,int32_t,const String &,const String &,int32_t)const>(&UPNPDevice::add_port_mapping)>("add_port_mapping")
            .fun<static_cast<int32_t(UPNPDevice::*)(int32_t,const String &)const>(&UPNPDevice::delete_port_mapping)>("delete_port_mapping")
;    qjs::Value _IGDStatus = context->newObject();
    _IGDStatus["IGD_STATUS_OK"] = UPNPDevice::IGDStatus::IGD_STATUS_OK;
    _IGDStatus["IGD_STATUS_HTTP_ERROR"] = UPNPDevice::IGDStatus::IGD_STATUS_HTTP_ERROR;
    _IGDStatus["IGD_STATUS_HTTP_EMPTY"] = UPNPDevice::IGDStatus::IGD_STATUS_HTTP_EMPTY;
    _IGDStatus["IGD_STATUS_NO_URLS"] = UPNPDevice::IGDStatus::IGD_STATUS_NO_URLS;
    _IGDStatus["IGD_STATUS_NO_IGD"] = UPNPDevice::IGDStatus::IGD_STATUS_NO_IGD;
    _IGDStatus["IGD_STATUS_DISCONNECTED"] = UPNPDevice::IGDStatus::IGD_STATUS_DISCONNECTED;
    _IGDStatus["IGD_STATUS_UNKNOWN_DEVICE"] = UPNPDevice::IGDStatus::IGD_STATUS_UNKNOWN_DEVICE;
    _IGDStatus["IGD_STATUS_INVALID_CONTROL"] = UPNPDevice::IGDStatus::IGD_STATUS_INVALID_CONTROL;
    _IGDStatus["IGD_STATUS_MALLOC_ERROR"] = UPNPDevice::IGDStatus::IGD_STATUS_MALLOC_ERROR;
    _IGDStatus["IGD_STATUS_UNKNOWN_ERROR"] = UPNPDevice::IGDStatus::IGD_STATUS_UNKNOWN_ERROR;
    _module.add("IGDStatus", std::move(_IGDStatus));
}