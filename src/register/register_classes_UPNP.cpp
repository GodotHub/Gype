#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/upnp.hpp>
#include <godot_cpp/classes/upnp_device.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_UPNP() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<UPNP>("UPNP")
			.constructor<>()
			.property<&UPNP::get_discover_multicast_if, &UPNP::set_discover_multicast_if>("discover_multicast_if")
			.property<&UPNP::get_discover_local_port, &UPNP::set_discover_local_port>("discover_local_port")
			.property<&UPNP::is_discover_ipv6, &UPNP::set_discover_ipv6>("discover_ipv6")
			.fun<static_cast<int32_t (UPNP::*)() const>(&UPNP::get_device_count)>("get_device_count")
			.fun<static_cast<Ref<UPNPDevice> (UPNP::*)(int32_t) const>(&UPNP::get_device)>("get_device")
			.fun<static_cast<void (UPNP::*)(const Ref<UPNPDevice> &)>(&UPNP::add_device)>("add_device")
			.fun<static_cast<void (UPNP::*)(int32_t, const Ref<UPNPDevice> &)>(&UPNP::set_device)>("set_device")
			.fun<static_cast<void (UPNP::*)(int32_t)>(&UPNP::remove_device)>("remove_device")
			.fun<static_cast<void (UPNP::*)()>(&UPNP::clear_devices)>("clear_devices")
			.fun<static_cast<Ref<UPNPDevice> (UPNP::*)() const>(&UPNP::get_gateway)>("get_gateway")
			.fun<static_cast<int32_t (UPNP::*)(int32_t, int32_t, const String &)>(&UPNP::discover)>("discover")
			.fun<static_cast<String (UPNP::*)() const>(&UPNP::query_external_address)>("query_external_address")
			.fun<static_cast<int32_t (UPNP::*)(int32_t, int32_t, const String &, const String &, int32_t) const>(&UPNP::add_port_mapping)>("add_port_mapping")
			.fun<static_cast<int32_t (UPNP::*)(int32_t, const String &) const>(&UPNP::delete_port_mapping)>("delete_port_mapping");
}