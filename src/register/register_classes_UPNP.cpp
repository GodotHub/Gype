#include <godot_cpp/classes/upnp.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/upnp_device.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_UPNP() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<UPNP>("UPNP")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<String(UPNP::*)()const>(&UPNP::get_discover_multicast_if),static_cast<void(UPNP::*)(const String &)>(&UPNP::set_discover_multicast_if)>("discover_multicast_if")
            .property<static_cast<int32_t(UPNP::*)()const>(&UPNP::get_discover_local_port),static_cast<void(UPNP::*)(int32_t)>(&UPNP::set_discover_local_port)>("discover_local_port")
            .property<static_cast<bool(UPNP::*)()const>(&UPNP::is_discover_ipv6),static_cast<void(UPNP::*)(bool)>(&UPNP::set_discover_ipv6)>("discover_ipv6")
            .fun<static_cast<int32_t(UPNP::*)()const>(&UPNP::get_device_count)>("get_device_count")
            .fun<static_cast<Ref<UPNPDevice>(UPNP::*)(int32_t)const>(&UPNP::get_device)>("get_device")
            .fun<static_cast<void(UPNP::*)(const Ref<UPNPDevice> &)>(&UPNP::add_device)>("add_device")
            .fun<static_cast<void(UPNP::*)(int32_t,const Ref<UPNPDevice> &)>(&UPNP::set_device)>("set_device")
            .fun<static_cast<void(UPNP::*)(int32_t)>(&UPNP::remove_device)>("remove_device")
            .fun<static_cast<void(UPNP::*)()>(&UPNP::clear_devices)>("clear_devices")
            .fun<static_cast<Ref<UPNPDevice>(UPNP::*)()const>(&UPNP::get_gateway)>("get_gateway")
            .fun<static_cast<int32_t(UPNP::*)(int32_t,int32_t,const String &)>(&UPNP::discover)>("discover")
            .fun<static_cast<String(UPNP::*)()const>(&UPNP::query_external_address)>("query_external_address")
            .fun<static_cast<int32_t(UPNP::*)(int32_t,int32_t,const String &,const String &,int32_t)const>(&UPNP::add_port_mapping)>("add_port_mapping")
            .fun<static_cast<int32_t(UPNP::*)(int32_t,const String &)const>(&UPNP::delete_port_mapping)>("delete_port_mapping")
;    qjs::Value _UPNPResult = context->newObject();
    _UPNPResult["UPNP_RESULT_SUCCESS"] = UPNP::UPNPResult::UPNP_RESULT_SUCCESS;
    _UPNPResult["UPNP_RESULT_NOT_AUTHORIZED"] = UPNP::UPNPResult::UPNP_RESULT_NOT_AUTHORIZED;
    _UPNPResult["UPNP_RESULT_PORT_MAPPING_NOT_FOUND"] = UPNP::UPNPResult::UPNP_RESULT_PORT_MAPPING_NOT_FOUND;
    _UPNPResult["UPNP_RESULT_INCONSISTENT_PARAMETERS"] = UPNP::UPNPResult::UPNP_RESULT_INCONSISTENT_PARAMETERS;
    _UPNPResult["UPNP_RESULT_NO_SUCH_ENTRY_IN_ARRAY"] = UPNP::UPNPResult::UPNP_RESULT_NO_SUCH_ENTRY_IN_ARRAY;
    _UPNPResult["UPNP_RESULT_ACTION_FAILED"] = UPNP::UPNPResult::UPNP_RESULT_ACTION_FAILED;
    _UPNPResult["UPNP_RESULT_SRC_IP_WILDCARD_NOT_PERMITTED"] = UPNP::UPNPResult::UPNP_RESULT_SRC_IP_WILDCARD_NOT_PERMITTED;
    _UPNPResult["UPNP_RESULT_EXT_PORT_WILDCARD_NOT_PERMITTED"] = UPNP::UPNPResult::UPNP_RESULT_EXT_PORT_WILDCARD_NOT_PERMITTED;
    _UPNPResult["UPNP_RESULT_INT_PORT_WILDCARD_NOT_PERMITTED"] = UPNP::UPNPResult::UPNP_RESULT_INT_PORT_WILDCARD_NOT_PERMITTED;
    _UPNPResult["UPNP_RESULT_REMOTE_HOST_MUST_BE_WILDCARD"] = UPNP::UPNPResult::UPNP_RESULT_REMOTE_HOST_MUST_BE_WILDCARD;
    _UPNPResult["UPNP_RESULT_EXT_PORT_MUST_BE_WILDCARD"] = UPNP::UPNPResult::UPNP_RESULT_EXT_PORT_MUST_BE_WILDCARD;
    _UPNPResult["UPNP_RESULT_NO_PORT_MAPS_AVAILABLE"] = UPNP::UPNPResult::UPNP_RESULT_NO_PORT_MAPS_AVAILABLE;
    _UPNPResult["UPNP_RESULT_CONFLICT_WITH_OTHER_MECHANISM"] = UPNP::UPNPResult::UPNP_RESULT_CONFLICT_WITH_OTHER_MECHANISM;
    _UPNPResult["UPNP_RESULT_CONFLICT_WITH_OTHER_MAPPING"] = UPNP::UPNPResult::UPNP_RESULT_CONFLICT_WITH_OTHER_MAPPING;
    _UPNPResult["UPNP_RESULT_SAME_PORT_VALUES_REQUIRED"] = UPNP::UPNPResult::UPNP_RESULT_SAME_PORT_VALUES_REQUIRED;
    _UPNPResult["UPNP_RESULT_ONLY_PERMANENT_LEASE_SUPPORTED"] = UPNP::UPNPResult::UPNP_RESULT_ONLY_PERMANENT_LEASE_SUPPORTED;
    _UPNPResult["UPNP_RESULT_INVALID_GATEWAY"] = UPNP::UPNPResult::UPNP_RESULT_INVALID_GATEWAY;
    _UPNPResult["UPNP_RESULT_INVALID_PORT"] = UPNP::UPNPResult::UPNP_RESULT_INVALID_PORT;
    _UPNPResult["UPNP_RESULT_INVALID_PROTOCOL"] = UPNP::UPNPResult::UPNP_RESULT_INVALID_PROTOCOL;
    _UPNPResult["UPNP_RESULT_INVALID_DURATION"] = UPNP::UPNPResult::UPNP_RESULT_INVALID_DURATION;
    _UPNPResult["UPNP_RESULT_INVALID_ARGS"] = UPNP::UPNPResult::UPNP_RESULT_INVALID_ARGS;
    _UPNPResult["UPNP_RESULT_INVALID_RESPONSE"] = UPNP::UPNPResult::UPNP_RESULT_INVALID_RESPONSE;
    _UPNPResult["UPNP_RESULT_INVALID_PARAM"] = UPNP::UPNPResult::UPNP_RESULT_INVALID_PARAM;
    _UPNPResult["UPNP_RESULT_HTTP_ERROR"] = UPNP::UPNPResult::UPNP_RESULT_HTTP_ERROR;
    _UPNPResult["UPNP_RESULT_SOCKET_ERROR"] = UPNP::UPNPResult::UPNP_RESULT_SOCKET_ERROR;
    _UPNPResult["UPNP_RESULT_MEM_ALLOC_ERROR"] = UPNP::UPNPResult::UPNP_RESULT_MEM_ALLOC_ERROR;
    _UPNPResult["UPNP_RESULT_NO_GATEWAY"] = UPNP::UPNPResult::UPNP_RESULT_NO_GATEWAY;
    _UPNPResult["UPNP_RESULT_NO_DEVICES"] = UPNP::UPNPResult::UPNP_RESULT_NO_DEVICES;
    _UPNPResult["UPNP_RESULT_UNKNOWN_ERROR"] = UPNP::UPNPResult::UPNP_RESULT_UNKNOWN_ERROR;
    _module.add("UPNPResult", std::move(_UPNPResult));
}