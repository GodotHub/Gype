
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/upnp.hpp>
#include <godot_cpp/classes/upnp_device.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_UPNP() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<UPNP>("UPNP")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<String (UPNP::*)() const>(&UPNP::get_discover_multicast_if), static_cast<void (UPNP::*)(const String &)>(&UPNP::set_discover_multicast_if)>((new std::string("discover_multicast_if"))->c_str())
			.property<static_cast<int32_t (UPNP::*)() const>(&UPNP::get_discover_local_port), static_cast<void (UPNP::*)(int32_t)>(&UPNP::set_discover_local_port)>((new std::string("discover_local_port"))->c_str())
			.property<static_cast<bool (UPNP::*)() const>(&UPNP::is_discover_ipv6), static_cast<void (UPNP::*)(bool)>(&UPNP::set_discover_ipv6)>((new std::string("discover_ipv6"))->c_str())
			.fun<static_cast<int32_t (UPNP::*)() const>(&UPNP::get_device_count)>((new std::string("get_device_count"))->c_str())
			.fun<static_cast<Ref<UPNPDevice> (UPNP::*)(int32_t) const>(&UPNP::get_device)>((new std::string("get_device"))->c_str())
			.fun<static_cast<void (UPNP::*)(const Ref<UPNPDevice> &)>(&UPNP::add_device)>((new std::string("add_device"))->c_str())
			.fun<static_cast<void (UPNP::*)(int32_t, const Ref<UPNPDevice> &)>(&UPNP::set_device)>((new std::string("set_device"))->c_str())
			.fun<static_cast<void (UPNP::*)(int32_t)>(&UPNP::remove_device)>((new std::string("remove_device"))->c_str())
			.fun<static_cast<void (UPNP::*)()>(&UPNP::clear_devices)>((new std::string("clear_devices"))->c_str())
			.fun<static_cast<Ref<UPNPDevice> (UPNP::*)() const>(&UPNP::get_gateway)>((new std::string("get_gateway"))->c_str())
			.fun<static_cast<int32_t (UPNP::*)(int32_t, int32_t, const String &)>(&UPNP::discover)>((new std::string("discover"))->c_str())
			.fun<static_cast<String (UPNP::*)() const>(&UPNP::query_external_address)>((new std::string("query_external_address"))->c_str())
			.fun<static_cast<int32_t (UPNP::*)(int32_t, int32_t, const String &, const String &, int32_t) const>(&UPNP::add_port_mapping)>((new std::string("add_port_mapping"))->c_str())
			.fun<static_cast<int32_t (UPNP::*)(int32_t, const String &) const>(&UPNP::delete_port_mapping)>((new std::string("delete_port_mapping"))->c_str());
	qjs::Value _UPNPResult = context->newObject();
	_UPNPResult[(new std::string("UPNP_RESULT_SUCCESS"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_SUCCESS;
	_UPNPResult[(new std::string("UPNP_RESULT_NOT_AUTHORIZED"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_NOT_AUTHORIZED;
	_UPNPResult[(new std::string("UPNP_RESULT_PORT_MAPPING_NOT_FOUND"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_PORT_MAPPING_NOT_FOUND;
	_UPNPResult[(new std::string("UPNP_RESULT_INCONSISTENT_PARAMETERS"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_INCONSISTENT_PARAMETERS;
	_UPNPResult[(new std::string("UPNP_RESULT_NO_SUCH_ENTRY_IN_ARRAY"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_NO_SUCH_ENTRY_IN_ARRAY;
	_UPNPResult[(new std::string("UPNP_RESULT_ACTION_FAILED"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_ACTION_FAILED;
	_UPNPResult[(new std::string("UPNP_RESULT_SRC_IP_WILDCARD_NOT_PERMITTED"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_SRC_IP_WILDCARD_NOT_PERMITTED;
	_UPNPResult[(new std::string("UPNP_RESULT_EXT_PORT_WILDCARD_NOT_PERMITTED"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_EXT_PORT_WILDCARD_NOT_PERMITTED;
	_UPNPResult[(new std::string("UPNP_RESULT_INT_PORT_WILDCARD_NOT_PERMITTED"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_INT_PORT_WILDCARD_NOT_PERMITTED;
	_UPNPResult[(new std::string("UPNP_RESULT_REMOTE_HOST_MUST_BE_WILDCARD"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_REMOTE_HOST_MUST_BE_WILDCARD;
	_UPNPResult[(new std::string("UPNP_RESULT_EXT_PORT_MUST_BE_WILDCARD"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_EXT_PORT_MUST_BE_WILDCARD;
	_UPNPResult[(new std::string("UPNP_RESULT_NO_PORT_MAPS_AVAILABLE"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_NO_PORT_MAPS_AVAILABLE;
	_UPNPResult[(new std::string("UPNP_RESULT_CONFLICT_WITH_OTHER_MECHANISM"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_CONFLICT_WITH_OTHER_MECHANISM;
	_UPNPResult[(new std::string("UPNP_RESULT_CONFLICT_WITH_OTHER_MAPPING"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_CONFLICT_WITH_OTHER_MAPPING;
	_UPNPResult[(new std::string("UPNP_RESULT_SAME_PORT_VALUES_REQUIRED"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_SAME_PORT_VALUES_REQUIRED;
	_UPNPResult[(new std::string("UPNP_RESULT_ONLY_PERMANENT_LEASE_SUPPORTED"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_ONLY_PERMANENT_LEASE_SUPPORTED;
	_UPNPResult[(new std::string("UPNP_RESULT_INVALID_GATEWAY"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_INVALID_GATEWAY;
	_UPNPResult[(new std::string("UPNP_RESULT_INVALID_PORT"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_INVALID_PORT;
	_UPNPResult[(new std::string("UPNP_RESULT_INVALID_PROTOCOL"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_INVALID_PROTOCOL;
	_UPNPResult[(new std::string("UPNP_RESULT_INVALID_DURATION"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_INVALID_DURATION;
	_UPNPResult[(new std::string("UPNP_RESULT_INVALID_ARGS"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_INVALID_ARGS;
	_UPNPResult[(new std::string("UPNP_RESULT_INVALID_RESPONSE"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_INVALID_RESPONSE;
	_UPNPResult[(new std::string("UPNP_RESULT_INVALID_PARAM"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_INVALID_PARAM;
	_UPNPResult[(new std::string("UPNP_RESULT_HTTP_ERROR"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_HTTP_ERROR;
	_UPNPResult[(new std::string("UPNP_RESULT_SOCKET_ERROR"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_SOCKET_ERROR;
	_UPNPResult[(new std::string("UPNP_RESULT_MEM_ALLOC_ERROR"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_MEM_ALLOC_ERROR;
	_UPNPResult[(new std::string("UPNP_RESULT_NO_GATEWAY"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_NO_GATEWAY;
	_UPNPResult[(new std::string("UPNP_RESULT_NO_DEVICES"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_NO_DEVICES;
	_UPNPResult[(new std::string("UPNP_RESULT_UNKNOWN_ERROR"))->c_str()] = UPNP::UPNPResult::UPNP_RESULT_UNKNOWN_ERROR;
	_module.add("UPNPResult", std::move(_UPNPResult));
}