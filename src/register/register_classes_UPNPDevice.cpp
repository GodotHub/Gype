
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/upnp_device.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_UPNPDevice() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<UPNPDevice>("UPNPDevice")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<String (UPNPDevice::*)() const>(&UPNPDevice::get_description_url), static_cast<void (UPNPDevice::*)(const String &)>(&UPNPDevice::set_description_url)>((new std::string("description_url"))->c_str())
			.property<static_cast<String (UPNPDevice::*)() const>(&UPNPDevice::get_service_type), static_cast<void (UPNPDevice::*)(const String &)>(&UPNPDevice::set_service_type)>((new std::string("service_type"))->c_str())
			.property<static_cast<String (UPNPDevice::*)() const>(&UPNPDevice::get_igd_control_url), static_cast<void (UPNPDevice::*)(const String &)>(&UPNPDevice::set_igd_control_url)>((new std::string("igd_control_url"))->c_str())
			.property<static_cast<String (UPNPDevice::*)() const>(&UPNPDevice::get_igd_service_type), static_cast<void (UPNPDevice::*)(const String &)>(&UPNPDevice::set_igd_service_type)>((new std::string("igd_service_type"))->c_str())
			.property<static_cast<String (UPNPDevice::*)() const>(&UPNPDevice::get_igd_our_addr), static_cast<void (UPNPDevice::*)(const String &)>(&UPNPDevice::set_igd_our_addr)>((new std::string("igd_our_addr"))->c_str())
			.property<static_cast<UPNPDevice::IGDStatus (UPNPDevice::*)() const>(&UPNPDevice::get_igd_status), static_cast<void (UPNPDevice::*)(UPNPDevice::IGDStatus)>(&UPNPDevice::set_igd_status)>((new std::string("igd_status"))->c_str())
			.fun<static_cast<bool (UPNPDevice::*)() const>(&UPNPDevice::is_valid_gateway)>((new std::string("is_valid_gateway"))->c_str())
			.fun<static_cast<String (UPNPDevice::*)() const>(&UPNPDevice::query_external_address)>((new std::string("query_external_address"))->c_str())
			.fun<static_cast<int32_t (UPNPDevice::*)(int32_t, int32_t, const String &, const String &, int32_t) const>(&UPNPDevice::add_port_mapping)>((new std::string("add_port_mapping"))->c_str())
			.fun<static_cast<int32_t (UPNPDevice::*)(int32_t, const String &) const>(&UPNPDevice::delete_port_mapping)>((new std::string("delete_port_mapping"))->c_str());
	qjs::Value _IGDStatus = context->newObject();
	_IGDStatus[(new std::string("IGD_STATUS_OK"))->c_str()] = UPNPDevice::IGDStatus::IGD_STATUS_OK;
	_IGDStatus[(new std::string("IGD_STATUS_HTTP_ERROR"))->c_str()] = UPNPDevice::IGDStatus::IGD_STATUS_HTTP_ERROR;
	_IGDStatus[(new std::string("IGD_STATUS_HTTP_EMPTY"))->c_str()] = UPNPDevice::IGDStatus::IGD_STATUS_HTTP_EMPTY;
	_IGDStatus[(new std::string("IGD_STATUS_NO_URLS"))->c_str()] = UPNPDevice::IGDStatus::IGD_STATUS_NO_URLS;
	_IGDStatus[(new std::string("IGD_STATUS_NO_IGD"))->c_str()] = UPNPDevice::IGDStatus::IGD_STATUS_NO_IGD;
	_IGDStatus[(new std::string("IGD_STATUS_DISCONNECTED"))->c_str()] = UPNPDevice::IGDStatus::IGD_STATUS_DISCONNECTED;
	_IGDStatus[(new std::string("IGD_STATUS_UNKNOWN_DEVICE"))->c_str()] = UPNPDevice::IGDStatus::IGD_STATUS_UNKNOWN_DEVICE;
	_IGDStatus[(new std::string("IGD_STATUS_INVALID_CONTROL"))->c_str()] = UPNPDevice::IGDStatus::IGD_STATUS_INVALID_CONTROL;
	_IGDStatus[(new std::string("IGD_STATUS_MALLOC_ERROR"))->c_str()] = UPNPDevice::IGDStatus::IGD_STATUS_MALLOC_ERROR;
	_IGDStatus[(new std::string("IGD_STATUS_UNKNOWN_ERROR"))->c_str()] = UPNPDevice::IGDStatus::IGD_STATUS_UNKNOWN_ERROR;
	_module.add("IGDStatus", std::move(_IGDStatus));
}