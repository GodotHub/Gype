
#include <godot_cpp/classes/ip.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_IP() {
	qjs::Value js_singleton = context->newObject();
	IP *singleton = IP::get_singleton();
	js_singleton.add((new std::string("resolve_hostname"))->c_str(), [singleton](const String &host, IP::Type ip_type) -> String { return singleton->resolve_hostname(host, ip_type); });
	js_singleton.add((new std::string("resolve_hostname_addresses"))->c_str(), [singleton](const String &host, IP::Type ip_type) -> PackedStringArray { return singleton->resolve_hostname_addresses(host, ip_type); });
	js_singleton.add((new std::string("resolve_hostname_queue_item"))->c_str(), [singleton](const String &host, IP::Type ip_type) -> int64_t { return singleton->resolve_hostname_queue_item(host, ip_type); });
	js_singleton.add((new std::string("get_resolve_item_status"))->c_str(), [singleton](int32_t id) -> IP::ResolverStatus { return singleton->get_resolve_item_status(id); });
	js_singleton.add((new std::string("get_resolve_item_address"))->c_str(), [singleton](int32_t id) -> String { return singleton->get_resolve_item_address(id); });
	js_singleton.add((new std::string("get_resolve_item_addresses"))->c_str(), [singleton](int32_t id) -> Array { return singleton->get_resolve_item_addresses(id); });
	js_singleton.add((new std::string("erase_resolve_item"))->c_str(), [singleton](int32_t id) -> void { singleton->erase_resolve_item(id); });
	js_singleton.add((new std::string("get_local_addresses"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_local_addresses(); });
	js_singleton.add((new std::string("get_local_interfaces"))->c_str(), [singleton]() -> TypedArray<Dictionary> { return singleton->get_local_interfaces(); });
	js_singleton.add((new std::string("clear_cache"))->c_str(), [singleton](const String &hostname) -> void { singleton->clear_cache(hostname); });
	context->global()[(new std::string("IP"))->c_str()] = js_singleton;

	qjs::Value _ResolverStatus = context->newObject();
	_ResolverStatus[(new std::string("RESOLVER_STATUS_NONE"))->c_str()] = IP::ResolverStatus::RESOLVER_STATUS_NONE;
	_ResolverStatus[(new std::string("RESOLVER_STATUS_WAITING"))->c_str()] = IP::ResolverStatus::RESOLVER_STATUS_WAITING;
	_ResolverStatus[(new std::string("RESOLVER_STATUS_DONE"))->c_str()] = IP::ResolverStatus::RESOLVER_STATUS_DONE;
	_ResolverStatus[(new std::string("RESOLVER_STATUS_ERROR"))->c_str()] = IP::ResolverStatus::RESOLVER_STATUS_ERROR;
	js_singleton[(new std::string("ResolverStatus"))->c_str()] = _ResolverStatus;
	qjs::Value _Type = context->newObject();
	_Type[(new std::string("TYPE_NONE"))->c_str()] = IP::Type::TYPE_NONE;
	_Type[(new std::string("TYPE_IPV4"))->c_str()] = IP::Type::TYPE_IPV4;
	_Type[(new std::string("TYPE_IPV6"))->c_str()] = IP::Type::TYPE_IPV6;
	_Type[(new std::string("TYPE_ANY"))->c_str()] = IP::Type::TYPE_ANY;
	js_singleton[(new std::string("Type"))->c_str()] = _Type;
}