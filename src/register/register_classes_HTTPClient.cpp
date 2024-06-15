#include <godot_cpp/classes/http_client.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_HTTPClient() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<HTTPClient>("HTTPClient")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<bool(HTTPClient::*)()const>(&HTTPClient::is_blocking_mode_enabled),static_cast<void(HTTPClient::*)(bool)>(&HTTPClient::set_blocking_mode)>("blocking_mode_enabled")
            .property<static_cast<Ref<StreamPeer>(HTTPClient::*)()const>(&HTTPClient::get_connection),static_cast<void(HTTPClient::*)(const Ref<StreamPeer> &)>(&HTTPClient::set_connection)>("connection")
            .property<static_cast<int32_t(HTTPClient::*)()const>(&HTTPClient::get_read_chunk_size),static_cast<void(HTTPClient::*)(int32_t)>(&HTTPClient::set_read_chunk_size)>("read_chunk_size")
            .fun<static_cast<Error(HTTPClient::*)(const String &,int32_t,const Ref<TLSOptions> &)>(&HTTPClient::connect_to_host)>("connect_to_host")
            .fun<static_cast<Error(HTTPClient::*)(HTTPClient::Method,const String &,const PackedStringArray &,const PackedByteArray &)>(&HTTPClient::request_raw)>("request_raw")
            .fun<static_cast<Error(HTTPClient::*)(HTTPClient::Method,const String &,const PackedStringArray &,const String &)>(&HTTPClient::request)>("request")
            .fun<static_cast<void(HTTPClient::*)()>(&HTTPClient::close)>("close")
            .fun<static_cast<bool(HTTPClient::*)()const>(&HTTPClient::has_response)>("has_response")
            .fun<static_cast<bool(HTTPClient::*)()const>(&HTTPClient::is_response_chunked)>("is_response_chunked")
            .fun<static_cast<int32_t(HTTPClient::*)()const>(&HTTPClient::get_response_code)>("get_response_code")
            .fun<static_cast<PackedStringArray(HTTPClient::*)()>(&HTTPClient::get_response_headers)>("get_response_headers")
            .fun<static_cast<Dictionary(HTTPClient::*)()>(&HTTPClient::get_response_headers_as_dictionary)>("get_response_headers_as_dictionary")
            .fun<static_cast<int64_t(HTTPClient::*)()const>(&HTTPClient::get_response_body_length)>("get_response_body_length")
            .fun<static_cast<PackedByteArray(HTTPClient::*)()>(&HTTPClient::read_response_body_chunk)>("read_response_body_chunk")
            .fun<static_cast<HTTPClient::Status(HTTPClient::*)()const>(&HTTPClient::get_status)>("get_status")
            .fun<static_cast<Error(HTTPClient::*)()>(&HTTPClient::poll)>("poll")
            .fun<static_cast<void(HTTPClient::*)(const String &,int32_t)>(&HTTPClient::set_http_proxy)>("set_http_proxy")
            .fun<static_cast<void(HTTPClient::*)(const String &,int32_t)>(&HTTPClient::set_https_proxy)>("set_https_proxy")
            .fun<static_cast<String(HTTPClient::*)(const Dictionary &)>(&HTTPClient::query_string_from_dict)>("query_string_from_dict")
;    qjs::Value _Method = context->newObject();
    _Method["METHOD_GET"] = HTTPClient::Method::METHOD_GET;
    _Method["METHOD_HEAD"] = HTTPClient::Method::METHOD_HEAD;
    _Method["METHOD_POST"] = HTTPClient::Method::METHOD_POST;
    _Method["METHOD_PUT"] = HTTPClient::Method::METHOD_PUT;
    _Method["METHOD_DELETE"] = HTTPClient::Method::METHOD_DELETE;
    _Method["METHOD_OPTIONS"] = HTTPClient::Method::METHOD_OPTIONS;
    _Method["METHOD_TRACE"] = HTTPClient::Method::METHOD_TRACE;
    _Method["METHOD_CONNECT"] = HTTPClient::Method::METHOD_CONNECT;
    _Method["METHOD_PATCH"] = HTTPClient::Method::METHOD_PATCH;
    _Method["METHOD_MAX"] = HTTPClient::Method::METHOD_MAX;
    _module.add("Method", std::move(_Method));
    qjs::Value _Status = context->newObject();
    _Status["STATUS_DISCONNECTED"] = HTTPClient::Status::STATUS_DISCONNECTED;
    _Status["STATUS_RESOLVING"] = HTTPClient::Status::STATUS_RESOLVING;
    _Status["STATUS_CANT_RESOLVE"] = HTTPClient::Status::STATUS_CANT_RESOLVE;
    _Status["STATUS_CONNECTING"] = HTTPClient::Status::STATUS_CONNECTING;
    _Status["STATUS_CANT_CONNECT"] = HTTPClient::Status::STATUS_CANT_CONNECT;
    _Status["STATUS_CONNECTED"] = HTTPClient::Status::STATUS_CONNECTED;
    _Status["STATUS_REQUESTING"] = HTTPClient::Status::STATUS_REQUESTING;
    _Status["STATUS_BODY"] = HTTPClient::Status::STATUS_BODY;
    _Status["STATUS_CONNECTION_ERROR"] = HTTPClient::Status::STATUS_CONNECTION_ERROR;
    _Status["STATUS_TLS_HANDSHAKE_ERROR"] = HTTPClient::Status::STATUS_TLS_HANDSHAKE_ERROR;
    _module.add("Status", std::move(_Status));
    qjs::Value _ResponseCode = context->newObject();
    _ResponseCode["RESPONSE_CONTINUE"] = HTTPClient::ResponseCode::RESPONSE_CONTINUE;
    _ResponseCode["RESPONSE_SWITCHING_PROTOCOLS"] = HTTPClient::ResponseCode::RESPONSE_SWITCHING_PROTOCOLS;
    _ResponseCode["RESPONSE_PROCESSING"] = HTTPClient::ResponseCode::RESPONSE_PROCESSING;
    _ResponseCode["RESPONSE_OK"] = HTTPClient::ResponseCode::RESPONSE_OK;
    _ResponseCode["RESPONSE_CREATED"] = HTTPClient::ResponseCode::RESPONSE_CREATED;
    _ResponseCode["RESPONSE_ACCEPTED"] = HTTPClient::ResponseCode::RESPONSE_ACCEPTED;
    _ResponseCode["RESPONSE_NON_AUTHORITATIVE_INFORMATION"] = HTTPClient::ResponseCode::RESPONSE_NON_AUTHORITATIVE_INFORMATION;
    _ResponseCode["RESPONSE_NO_CONTENT"] = HTTPClient::ResponseCode::RESPONSE_NO_CONTENT;
    _ResponseCode["RESPONSE_RESET_CONTENT"] = HTTPClient::ResponseCode::RESPONSE_RESET_CONTENT;
    _ResponseCode["RESPONSE_PARTIAL_CONTENT"] = HTTPClient::ResponseCode::RESPONSE_PARTIAL_CONTENT;
    _ResponseCode["RESPONSE_MULTI_STATUS"] = HTTPClient::ResponseCode::RESPONSE_MULTI_STATUS;
    _ResponseCode["RESPONSE_ALREADY_REPORTED"] = HTTPClient::ResponseCode::RESPONSE_ALREADY_REPORTED;
    _ResponseCode["RESPONSE_IM_USED"] = HTTPClient::ResponseCode::RESPONSE_IM_USED;
    _ResponseCode["RESPONSE_MULTIPLE_CHOICES"] = HTTPClient::ResponseCode::RESPONSE_MULTIPLE_CHOICES;
    _ResponseCode["RESPONSE_MOVED_PERMANENTLY"] = HTTPClient::ResponseCode::RESPONSE_MOVED_PERMANENTLY;
    _ResponseCode["RESPONSE_FOUND"] = HTTPClient::ResponseCode::RESPONSE_FOUND;
    _ResponseCode["RESPONSE_SEE_OTHER"] = HTTPClient::ResponseCode::RESPONSE_SEE_OTHER;
    _ResponseCode["RESPONSE_NOT_MODIFIED"] = HTTPClient::ResponseCode::RESPONSE_NOT_MODIFIED;
    _ResponseCode["RESPONSE_USE_PROXY"] = HTTPClient::ResponseCode::RESPONSE_USE_PROXY;
    _ResponseCode["RESPONSE_SWITCH_PROXY"] = HTTPClient::ResponseCode::RESPONSE_SWITCH_PROXY;
    _ResponseCode["RESPONSE_TEMPORARY_REDIRECT"] = HTTPClient::ResponseCode::RESPONSE_TEMPORARY_REDIRECT;
    _ResponseCode["RESPONSE_PERMANENT_REDIRECT"] = HTTPClient::ResponseCode::RESPONSE_PERMANENT_REDIRECT;
    _ResponseCode["RESPONSE_BAD_REQUEST"] = HTTPClient::ResponseCode::RESPONSE_BAD_REQUEST;
    _ResponseCode["RESPONSE_UNAUTHORIZED"] = HTTPClient::ResponseCode::RESPONSE_UNAUTHORIZED;
    _ResponseCode["RESPONSE_PAYMENT_REQUIRED"] = HTTPClient::ResponseCode::RESPONSE_PAYMENT_REQUIRED;
    _ResponseCode["RESPONSE_FORBIDDEN"] = HTTPClient::ResponseCode::RESPONSE_FORBIDDEN;
    _ResponseCode["RESPONSE_NOT_FOUND"] = HTTPClient::ResponseCode::RESPONSE_NOT_FOUND;
    _ResponseCode["RESPONSE_METHOD_NOT_ALLOWED"] = HTTPClient::ResponseCode::RESPONSE_METHOD_NOT_ALLOWED;
    _ResponseCode["RESPONSE_NOT_ACCEPTABLE"] = HTTPClient::ResponseCode::RESPONSE_NOT_ACCEPTABLE;
    _ResponseCode["RESPONSE_PROXY_AUTHENTICATION_REQUIRED"] = HTTPClient::ResponseCode::RESPONSE_PROXY_AUTHENTICATION_REQUIRED;
    _ResponseCode["RESPONSE_REQUEST_TIMEOUT"] = HTTPClient::ResponseCode::RESPONSE_REQUEST_TIMEOUT;
    _ResponseCode["RESPONSE_CONFLICT"] = HTTPClient::ResponseCode::RESPONSE_CONFLICT;
    _ResponseCode["RESPONSE_GONE"] = HTTPClient::ResponseCode::RESPONSE_GONE;
    _ResponseCode["RESPONSE_LENGTH_REQUIRED"] = HTTPClient::ResponseCode::RESPONSE_LENGTH_REQUIRED;
    _ResponseCode["RESPONSE_PRECONDITION_FAILED"] = HTTPClient::ResponseCode::RESPONSE_PRECONDITION_FAILED;
    _ResponseCode["RESPONSE_REQUEST_ENTITY_TOO_LARGE"] = HTTPClient::ResponseCode::RESPONSE_REQUEST_ENTITY_TOO_LARGE;
    _ResponseCode["RESPONSE_REQUEST_URI_TOO_LONG"] = HTTPClient::ResponseCode::RESPONSE_REQUEST_URI_TOO_LONG;
    _ResponseCode["RESPONSE_UNSUPPORTED_MEDIA_TYPE"] = HTTPClient::ResponseCode::RESPONSE_UNSUPPORTED_MEDIA_TYPE;
    _ResponseCode["RESPONSE_REQUESTED_RANGE_NOT_SATISFIABLE"] = HTTPClient::ResponseCode::RESPONSE_REQUESTED_RANGE_NOT_SATISFIABLE;
    _ResponseCode["RESPONSE_EXPECTATION_FAILED"] = HTTPClient::ResponseCode::RESPONSE_EXPECTATION_FAILED;
    _ResponseCode["RESPONSE_IM_A_TEAPOT"] = HTTPClient::ResponseCode::RESPONSE_IM_A_TEAPOT;
    _ResponseCode["RESPONSE_MISDIRECTED_REQUEST"] = HTTPClient::ResponseCode::RESPONSE_MISDIRECTED_REQUEST;
    _ResponseCode["RESPONSE_UNPROCESSABLE_ENTITY"] = HTTPClient::ResponseCode::RESPONSE_UNPROCESSABLE_ENTITY;
    _ResponseCode["RESPONSE_LOCKED"] = HTTPClient::ResponseCode::RESPONSE_LOCKED;
    _ResponseCode["RESPONSE_FAILED_DEPENDENCY"] = HTTPClient::ResponseCode::RESPONSE_FAILED_DEPENDENCY;
    _ResponseCode["RESPONSE_UPGRADE_REQUIRED"] = HTTPClient::ResponseCode::RESPONSE_UPGRADE_REQUIRED;
    _ResponseCode["RESPONSE_PRECONDITION_REQUIRED"] = HTTPClient::ResponseCode::RESPONSE_PRECONDITION_REQUIRED;
    _ResponseCode["RESPONSE_TOO_MANY_REQUESTS"] = HTTPClient::ResponseCode::RESPONSE_TOO_MANY_REQUESTS;
    _ResponseCode["RESPONSE_REQUEST_HEADER_FIELDS_TOO_LARGE"] = HTTPClient::ResponseCode::RESPONSE_REQUEST_HEADER_FIELDS_TOO_LARGE;
    _ResponseCode["RESPONSE_UNAVAILABLE_FOR_LEGAL_REASONS"] = HTTPClient::ResponseCode::RESPONSE_UNAVAILABLE_FOR_LEGAL_REASONS;
    _ResponseCode["RESPONSE_INTERNAL_SERVER_ERROR"] = HTTPClient::ResponseCode::RESPONSE_INTERNAL_SERVER_ERROR;
    _ResponseCode["RESPONSE_NOT_IMPLEMENTED"] = HTTPClient::ResponseCode::RESPONSE_NOT_IMPLEMENTED;
    _ResponseCode["RESPONSE_BAD_GATEWAY"] = HTTPClient::ResponseCode::RESPONSE_BAD_GATEWAY;
    _ResponseCode["RESPONSE_SERVICE_UNAVAILABLE"] = HTTPClient::ResponseCode::RESPONSE_SERVICE_UNAVAILABLE;
    _ResponseCode["RESPONSE_GATEWAY_TIMEOUT"] = HTTPClient::ResponseCode::RESPONSE_GATEWAY_TIMEOUT;
    _ResponseCode["RESPONSE_HTTP_VERSION_NOT_SUPPORTED"] = HTTPClient::ResponseCode::RESPONSE_HTTP_VERSION_NOT_SUPPORTED;
    _ResponseCode["RESPONSE_VARIANT_ALSO_NEGOTIATES"] = HTTPClient::ResponseCode::RESPONSE_VARIANT_ALSO_NEGOTIATES;
    _ResponseCode["RESPONSE_INSUFFICIENT_STORAGE"] = HTTPClient::ResponseCode::RESPONSE_INSUFFICIENT_STORAGE;
    _ResponseCode["RESPONSE_LOOP_DETECTED"] = HTTPClient::ResponseCode::RESPONSE_LOOP_DETECTED;
    _ResponseCode["RESPONSE_NOT_EXTENDED"] = HTTPClient::ResponseCode::RESPONSE_NOT_EXTENDED;
    _ResponseCode["RESPONSE_NETWORK_AUTH_REQUIRED"] = HTTPClient::ResponseCode::RESPONSE_NETWORK_AUTH_REQUIRED;
    _module.add("ResponseCode", std::move(_ResponseCode));
}