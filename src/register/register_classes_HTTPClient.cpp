
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/http_client.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_HTTPClient() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<HTTPClient>("HTTPClient")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<bool (HTTPClient::*)() const>(&HTTPClient::is_blocking_mode_enabled), static_cast<void (HTTPClient::*)(bool)>(&HTTPClient::set_blocking_mode)>((new std::string("blocking_mode_enabled"))->c_str())
			.property<static_cast<Ref<StreamPeer> (HTTPClient::*)() const>(&HTTPClient::get_connection), static_cast<void (HTTPClient::*)(const Ref<StreamPeer> &)>(&HTTPClient::set_connection)>((new std::string("connection"))->c_str())
			.property<static_cast<int32_t (HTTPClient::*)() const>(&HTTPClient::get_read_chunk_size), static_cast<void (HTTPClient::*)(int32_t)>(&HTTPClient::set_read_chunk_size)>((new std::string("read_chunk_size"))->c_str())
			.fun<static_cast<Error (HTTPClient::*)(const String &, int32_t, const Ref<TLSOptions> &)>(&HTTPClient::connect_to_host)>((new std::string("connect_to_host"))->c_str())
			.fun<static_cast<Error (HTTPClient::*)(HTTPClient::Method, const String &, const PackedStringArray &, const PackedByteArray &)>(&HTTPClient::request_raw)>((new std::string("request_raw"))->c_str())
			.fun<static_cast<Error (HTTPClient::*)(HTTPClient::Method, const String &, const PackedStringArray &, const String &)>(&HTTPClient::request)>((new std::string("request"))->c_str())
			.fun<static_cast<void (HTTPClient::*)()>(&HTTPClient::close)>((new std::string("close"))->c_str())
			.fun<static_cast<bool (HTTPClient::*)() const>(&HTTPClient::has_response)>((new std::string("has_response"))->c_str())
			.fun<static_cast<bool (HTTPClient::*)() const>(&HTTPClient::is_response_chunked)>((new std::string("is_response_chunked"))->c_str())
			.fun<static_cast<int32_t (HTTPClient::*)() const>(&HTTPClient::get_response_code)>((new std::string("get_response_code"))->c_str())
			.fun<static_cast<PackedStringArray (HTTPClient::*)()>(&HTTPClient::get_response_headers)>((new std::string("get_response_headers"))->c_str())
			.fun<static_cast<Dictionary (HTTPClient::*)()>(&HTTPClient::get_response_headers_as_dictionary)>((new std::string("get_response_headers_as_dictionary"))->c_str())
			.fun<static_cast<int64_t (HTTPClient::*)() const>(&HTTPClient::get_response_body_length)>((new std::string("get_response_body_length"))->c_str())
			.fun<static_cast<PackedByteArray (HTTPClient::*)()>(&HTTPClient::read_response_body_chunk)>((new std::string("read_response_body_chunk"))->c_str())
			.fun<static_cast<HTTPClient::Status (HTTPClient::*)() const>(&HTTPClient::get_status)>((new std::string("get_status"))->c_str())
			.fun<static_cast<Error (HTTPClient::*)()>(&HTTPClient::poll)>((new std::string("poll"))->c_str())
			.fun<static_cast<void (HTTPClient::*)(const String &, int32_t)>(&HTTPClient::set_http_proxy)>((new std::string("set_http_proxy"))->c_str())
			.fun<static_cast<void (HTTPClient::*)(const String &, int32_t)>(&HTTPClient::set_https_proxy)>((new std::string("set_https_proxy"))->c_str())
			.fun<static_cast<String (HTTPClient::*)(const Dictionary &)>(&HTTPClient::query_string_from_dict)>((new std::string("query_string_from_dict"))->c_str());
	qjs::Value _Method = context->newObject();
	_Method[(new std::string("METHOD_GET"))->c_str()] = HTTPClient::Method::METHOD_GET;
	_Method[(new std::string("METHOD_HEAD"))->c_str()] = HTTPClient::Method::METHOD_HEAD;
	_Method[(new std::string("METHOD_POST"))->c_str()] = HTTPClient::Method::METHOD_POST;
	_Method[(new std::string("METHOD_PUT"))->c_str()] = HTTPClient::Method::METHOD_PUT;
	_Method[(new std::string("METHOD_DELETE"))->c_str()] = HTTPClient::Method::METHOD_DELETE;
	_Method[(new std::string("METHOD_OPTIONS"))->c_str()] = HTTPClient::Method::METHOD_OPTIONS;
	_Method[(new std::string("METHOD_TRACE"))->c_str()] = HTTPClient::Method::METHOD_TRACE;
	_Method[(new std::string("METHOD_CONNECT"))->c_str()] = HTTPClient::Method::METHOD_CONNECT;
	_Method[(new std::string("METHOD_PATCH"))->c_str()] = HTTPClient::Method::METHOD_PATCH;
	_Method[(new std::string("METHOD_MAX"))->c_str()] = HTTPClient::Method::METHOD_MAX;
	_module.add("Method", std::move(_Method));
	qjs::Value _Status = context->newObject();
	_Status[(new std::string("STATUS_DISCONNECTED"))->c_str()] = HTTPClient::Status::STATUS_DISCONNECTED;
	_Status[(new std::string("STATUS_RESOLVING"))->c_str()] = HTTPClient::Status::STATUS_RESOLVING;
	_Status[(new std::string("STATUS_CANT_RESOLVE"))->c_str()] = HTTPClient::Status::STATUS_CANT_RESOLVE;
	_Status[(new std::string("STATUS_CONNECTING"))->c_str()] = HTTPClient::Status::STATUS_CONNECTING;
	_Status[(new std::string("STATUS_CANT_CONNECT"))->c_str()] = HTTPClient::Status::STATUS_CANT_CONNECT;
	_Status[(new std::string("STATUS_CONNECTED"))->c_str()] = HTTPClient::Status::STATUS_CONNECTED;
	_Status[(new std::string("STATUS_REQUESTING"))->c_str()] = HTTPClient::Status::STATUS_REQUESTING;
	_Status[(new std::string("STATUS_BODY"))->c_str()] = HTTPClient::Status::STATUS_BODY;
	_Status[(new std::string("STATUS_CONNECTION_ERROR"))->c_str()] = HTTPClient::Status::STATUS_CONNECTION_ERROR;
	_Status[(new std::string("STATUS_TLS_HANDSHAKE_ERROR"))->c_str()] = HTTPClient::Status::STATUS_TLS_HANDSHAKE_ERROR;
	_module.add("Status", std::move(_Status));
	qjs::Value _ResponseCode = context->newObject();
	_ResponseCode[(new std::string("RESPONSE_CONTINUE"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_CONTINUE;
	_ResponseCode[(new std::string("RESPONSE_SWITCHING_PROTOCOLS"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_SWITCHING_PROTOCOLS;
	_ResponseCode[(new std::string("RESPONSE_PROCESSING"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_PROCESSING;
	_ResponseCode[(new std::string("RESPONSE_OK"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_OK;
	_ResponseCode[(new std::string("RESPONSE_CREATED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_CREATED;
	_ResponseCode[(new std::string("RESPONSE_ACCEPTED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_ACCEPTED;
	_ResponseCode[(new std::string("RESPONSE_NON_AUTHORITATIVE_INFORMATION"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_NON_AUTHORITATIVE_INFORMATION;
	_ResponseCode[(new std::string("RESPONSE_NO_CONTENT"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_NO_CONTENT;
	_ResponseCode[(new std::string("RESPONSE_RESET_CONTENT"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_RESET_CONTENT;
	_ResponseCode[(new std::string("RESPONSE_PARTIAL_CONTENT"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_PARTIAL_CONTENT;
	_ResponseCode[(new std::string("RESPONSE_MULTI_STATUS"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_MULTI_STATUS;
	_ResponseCode[(new std::string("RESPONSE_ALREADY_REPORTED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_ALREADY_REPORTED;
	_ResponseCode[(new std::string("RESPONSE_IM_USED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_IM_USED;
	_ResponseCode[(new std::string("RESPONSE_MULTIPLE_CHOICES"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_MULTIPLE_CHOICES;
	_ResponseCode[(new std::string("RESPONSE_MOVED_PERMANENTLY"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_MOVED_PERMANENTLY;
	_ResponseCode[(new std::string("RESPONSE_FOUND"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_FOUND;
	_ResponseCode[(new std::string("RESPONSE_SEE_OTHER"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_SEE_OTHER;
	_ResponseCode[(new std::string("RESPONSE_NOT_MODIFIED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_NOT_MODIFIED;
	_ResponseCode[(new std::string("RESPONSE_USE_PROXY"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_USE_PROXY;
	_ResponseCode[(new std::string("RESPONSE_SWITCH_PROXY"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_SWITCH_PROXY;
	_ResponseCode[(new std::string("RESPONSE_TEMPORARY_REDIRECT"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_TEMPORARY_REDIRECT;
	_ResponseCode[(new std::string("RESPONSE_PERMANENT_REDIRECT"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_PERMANENT_REDIRECT;
	_ResponseCode[(new std::string("RESPONSE_BAD_REQUEST"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_BAD_REQUEST;
	_ResponseCode[(new std::string("RESPONSE_UNAUTHORIZED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_UNAUTHORIZED;
	_ResponseCode[(new std::string("RESPONSE_PAYMENT_REQUIRED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_PAYMENT_REQUIRED;
	_ResponseCode[(new std::string("RESPONSE_FORBIDDEN"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_FORBIDDEN;
	_ResponseCode[(new std::string("RESPONSE_NOT_FOUND"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_NOT_FOUND;
	_ResponseCode[(new std::string("RESPONSE_METHOD_NOT_ALLOWED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_METHOD_NOT_ALLOWED;
	_ResponseCode[(new std::string("RESPONSE_NOT_ACCEPTABLE"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_NOT_ACCEPTABLE;
	_ResponseCode[(new std::string("RESPONSE_PROXY_AUTHENTICATION_REQUIRED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_PROXY_AUTHENTICATION_REQUIRED;
	_ResponseCode[(new std::string("RESPONSE_REQUEST_TIMEOUT"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_REQUEST_TIMEOUT;
	_ResponseCode[(new std::string("RESPONSE_CONFLICT"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_CONFLICT;
	_ResponseCode[(new std::string("RESPONSE_GONE"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_GONE;
	_ResponseCode[(new std::string("RESPONSE_LENGTH_REQUIRED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_LENGTH_REQUIRED;
	_ResponseCode[(new std::string("RESPONSE_PRECONDITION_FAILED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_PRECONDITION_FAILED;
	_ResponseCode[(new std::string("RESPONSE_REQUEST_ENTITY_TOO_LARGE"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_REQUEST_ENTITY_TOO_LARGE;
	_ResponseCode[(new std::string("RESPONSE_REQUEST_URI_TOO_LONG"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_REQUEST_URI_TOO_LONG;
	_ResponseCode[(new std::string("RESPONSE_UNSUPPORTED_MEDIA_TYPE"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_UNSUPPORTED_MEDIA_TYPE;
	_ResponseCode[(new std::string("RESPONSE_REQUESTED_RANGE_NOT_SATISFIABLE"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_REQUESTED_RANGE_NOT_SATISFIABLE;
	_ResponseCode[(new std::string("RESPONSE_EXPECTATION_FAILED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_EXPECTATION_FAILED;
	_ResponseCode[(new std::string("RESPONSE_IM_A_TEAPOT"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_IM_A_TEAPOT;
	_ResponseCode[(new std::string("RESPONSE_MISDIRECTED_REQUEST"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_MISDIRECTED_REQUEST;
	_ResponseCode[(new std::string("RESPONSE_UNPROCESSABLE_ENTITY"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_UNPROCESSABLE_ENTITY;
	_ResponseCode[(new std::string("RESPONSE_LOCKED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_LOCKED;
	_ResponseCode[(new std::string("RESPONSE_FAILED_DEPENDENCY"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_FAILED_DEPENDENCY;
	_ResponseCode[(new std::string("RESPONSE_UPGRADE_REQUIRED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_UPGRADE_REQUIRED;
	_ResponseCode[(new std::string("RESPONSE_PRECONDITION_REQUIRED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_PRECONDITION_REQUIRED;
	_ResponseCode[(new std::string("RESPONSE_TOO_MANY_REQUESTS"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_TOO_MANY_REQUESTS;
	_ResponseCode[(new std::string("RESPONSE_REQUEST_HEADER_FIELDS_TOO_LARGE"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_REQUEST_HEADER_FIELDS_TOO_LARGE;
	_ResponseCode[(new std::string("RESPONSE_UNAVAILABLE_FOR_LEGAL_REASONS"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_UNAVAILABLE_FOR_LEGAL_REASONS;
	_ResponseCode[(new std::string("RESPONSE_INTERNAL_SERVER_ERROR"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_INTERNAL_SERVER_ERROR;
	_ResponseCode[(new std::string("RESPONSE_NOT_IMPLEMENTED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_NOT_IMPLEMENTED;
	_ResponseCode[(new std::string("RESPONSE_BAD_GATEWAY"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_BAD_GATEWAY;
	_ResponseCode[(new std::string("RESPONSE_SERVICE_UNAVAILABLE"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_SERVICE_UNAVAILABLE;
	_ResponseCode[(new std::string("RESPONSE_GATEWAY_TIMEOUT"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_GATEWAY_TIMEOUT;
	_ResponseCode[(new std::string("RESPONSE_HTTP_VERSION_NOT_SUPPORTED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_HTTP_VERSION_NOT_SUPPORTED;
	_ResponseCode[(new std::string("RESPONSE_VARIANT_ALSO_NEGOTIATES"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_VARIANT_ALSO_NEGOTIATES;
	_ResponseCode[(new std::string("RESPONSE_INSUFFICIENT_STORAGE"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_INSUFFICIENT_STORAGE;
	_ResponseCode[(new std::string("RESPONSE_LOOP_DETECTED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_LOOP_DETECTED;
	_ResponseCode[(new std::string("RESPONSE_NOT_EXTENDED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_NOT_EXTENDED;
	_ResponseCode[(new std::string("RESPONSE_NETWORK_AUTH_REQUIRED"))->c_str()] = HTTPClient::ResponseCode::RESPONSE_NETWORK_AUTH_REQUIRED;
	_module.add("ResponseCode", std::move(_ResponseCode));
}