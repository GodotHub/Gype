
#include <godot_cpp/classes/jsonrpc.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_JSONRPC() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<JSONRPC>("JSONRPC")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<void (JSONRPC::*)(const String &, Object *)>(&JSONRPC::set_scope)>((new std::string("set_scope"))->c_str())
			.fun<static_cast<Variant (JSONRPC::*)(const Variant &, bool)>(&JSONRPC::process_action)>((new std::string("process_action"))->c_str())
			.fun<static_cast<String (JSONRPC::*)(const String &)>(&JSONRPC::process_string)>((new std::string("process_string"))->c_str())
			.fun<static_cast<Dictionary (JSONRPC::*)(const String &, const Variant &, const Variant &)>(&JSONRPC::make_request)>((new std::string("make_request"))->c_str())
			.fun<static_cast<Dictionary (JSONRPC::*)(const Variant &, const Variant &)>(&JSONRPC::make_response)>((new std::string("make_response"))->c_str())
			.fun<static_cast<Dictionary (JSONRPC::*)(const String &, const Variant &)>(&JSONRPC::make_notification)>((new std::string("make_notification"))->c_str())
			.fun<static_cast<Dictionary (JSONRPC::*)(int32_t, const String &, const Variant &) const>(&JSONRPC::make_response_error)>((new std::string("make_response_error"))->c_str());
	qjs::Value _ErrorCode = context->newObject();
	_ErrorCode[(new std::string("PARSE_ERROR"))->c_str()] = JSONRPC::ErrorCode::PARSE_ERROR;
	_ErrorCode[(new std::string("INVALID_REQUEST"))->c_str()] = JSONRPC::ErrorCode::INVALID_REQUEST;
	_ErrorCode[(new std::string("METHOD_NOT_FOUND"))->c_str()] = JSONRPC::ErrorCode::METHOD_NOT_FOUND;
	_ErrorCode[(new std::string("INVALID_PARAMS"))->c_str()] = JSONRPC::ErrorCode::INVALID_PARAMS;
	_ErrorCode[(new std::string("INTERNAL_ERROR"))->c_str()] = JSONRPC::ErrorCode::INTERNAL_ERROR;
	_module.add("ErrorCode", std::move(_ErrorCode));
}