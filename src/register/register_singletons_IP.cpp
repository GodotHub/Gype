#include <godot_cpp/classes/ip.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_IP() {
	qjs::Value js_singleton = context->newObject();
    IP *singleton = IP::get_singleton();
    js_singleton.add("resolve_hostname", [singleton](const String & host,IP::Type ip_type)->String{return singleton->resolve_hostname(host,ip_type);});
    js_singleton.add("resolve_hostname_addresses", [singleton](const String & host,IP::Type ip_type)->PackedStringArray{return singleton->resolve_hostname_addresses(host,ip_type);});
    js_singleton.add("resolve_hostname_queue_item", [singleton](const String & host,IP::Type ip_type)->int64_t{return singleton->resolve_hostname_queue_item(host,ip_type);});
    js_singleton.add("get_resolve_item_status", [singleton](int32_t id)->IP::ResolverStatus{return singleton->get_resolve_item_status(id);});
    js_singleton.add("get_resolve_item_address", [singleton](int32_t id)->String{return singleton->get_resolve_item_address(id);});
    js_singleton.add("get_resolve_item_addresses", [singleton](int32_t id)->Array{return singleton->get_resolve_item_addresses(id);});
    js_singleton.add("erase_resolve_item", [singleton](int32_t id)->void{singleton->erase_resolve_item(id);});
    js_singleton.add("get_local_addresses", [singleton]()->PackedStringArray{return singleton->get_local_addresses();});
    js_singleton.add("get_local_interfaces", [singleton]()->TypedArray<Dictionary>{return singleton->get_local_interfaces();});
    js_singleton.add("clear_cache", [singleton](const String & hostname)->void{singleton->clear_cache(hostname);});
    context->global()["IP"] = js_singleton;

    qjs::Value _ResolverStatus = context->newObject();
    _ResolverStatus["RESOLVER_STATUS_NONE"] = IP::ResolverStatus::RESOLVER_STATUS_NONE;
    _ResolverStatus["RESOLVER_STATUS_WAITING"] = IP::ResolverStatus::RESOLVER_STATUS_WAITING;
    _ResolverStatus["RESOLVER_STATUS_DONE"] = IP::ResolverStatus::RESOLVER_STATUS_DONE;
    _ResolverStatus["RESOLVER_STATUS_ERROR"] = IP::ResolverStatus::RESOLVER_STATUS_ERROR;
    js_singleton["ResolverStatus"] = _ResolverStatus;
    qjs::Value _Type = context->newObject();
    _Type["TYPE_NONE"] = IP::Type::TYPE_NONE;
    _Type["TYPE_IPV4"] = IP::Type::TYPE_IPV4;
    _Type["TYPE_IPV6"] = IP::Type::TYPE_IPV6;
    _Type["TYPE_ANY"] = IP::Type::TYPE_ANY;
    js_singleton["Type"] = _Type;
}