#include <godot_cpp/classes/http_request.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/http_client.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_HTTPRequest() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<HTTPRequest>("HTTPRequest")
            .constructor<>()
            .base<Node>()
            .property<static_cast<String(HTTPRequest::*)()const>(&HTTPRequest::get_download_file),static_cast<void(HTTPRequest::*)(const String &)>(&HTTPRequest::set_download_file)>("download_file")
            .property<static_cast<int32_t(HTTPRequest::*)()const>(&HTTPRequest::get_download_chunk_size),static_cast<void(HTTPRequest::*)(int32_t)>(&HTTPRequest::set_download_chunk_size)>("download_chunk_size")
            .property<static_cast<bool(HTTPRequest::*)()const>(&HTTPRequest::is_using_threads),static_cast<void(HTTPRequest::*)(bool)>(&HTTPRequest::set_use_threads)>("use_threads")
            .property<static_cast<bool(HTTPRequest::*)()const>(&HTTPRequest::is_accepting_gzip),static_cast<void(HTTPRequest::*)(bool)>(&HTTPRequest::set_accept_gzip)>("accept_gzip")
            .property<static_cast<int32_t(HTTPRequest::*)()const>(&HTTPRequest::get_body_size_limit),static_cast<void(HTTPRequest::*)(int32_t)>(&HTTPRequest::set_body_size_limit)>("body_size_limit")
            .property<static_cast<int32_t(HTTPRequest::*)()const>(&HTTPRequest::get_max_redirects),static_cast<void(HTTPRequest::*)(int32_t)>(&HTTPRequest::set_max_redirects)>("max_redirects")
            .property<static_cast<double(HTTPRequest::*)()>(&HTTPRequest::get_timeout),static_cast<void(HTTPRequest::*)(double)>(&HTTPRequest::set_timeout)>("timeout")
            .fun<static_cast<Error(HTTPRequest::*)(const String &,const PackedStringArray &,HTTPClient::Method,const String &)>(&HTTPRequest::request)>("request")
            .fun<static_cast<Error(HTTPRequest::*)(const String &,const PackedStringArray &,HTTPClient::Method,const PackedByteArray &)>(&HTTPRequest::request_raw)>("request_raw")
            .fun<static_cast<void(HTTPRequest::*)()>(&HTTPRequest::cancel_request)>("cancel_request")
            .fun<static_cast<void(HTTPRequest::*)(const Ref<TLSOptions> &)>(&HTTPRequest::set_tls_options)>("set_tls_options")
            .fun<static_cast<HTTPClient::Status(HTTPRequest::*)()const>(&HTTPRequest::get_http_client_status)>("get_http_client_status")
            .fun<static_cast<int32_t(HTTPRequest::*)()const>(&HTTPRequest::get_downloaded_bytes)>("get_downloaded_bytes")
            .fun<static_cast<int32_t(HTTPRequest::*)()const>(&HTTPRequest::get_body_size)>("get_body_size")
            .fun<static_cast<void(HTTPRequest::*)(const String &,int32_t)>(&HTTPRequest::set_http_proxy)>("set_http_proxy")
            .fun<static_cast<void(HTTPRequest::*)(const String &,int32_t)>(&HTTPRequest::set_https_proxy)>("set_https_proxy")
;    qjs::Value _Result = context->newObject();
    _Result["RESULT_SUCCESS"] = HTTPRequest::Result::RESULT_SUCCESS;
    _Result["RESULT_CHUNKED_BODY_SIZE_MISMATCH"] = HTTPRequest::Result::RESULT_CHUNKED_BODY_SIZE_MISMATCH;
    _Result["RESULT_CANT_CONNECT"] = HTTPRequest::Result::RESULT_CANT_CONNECT;
    _Result["RESULT_CANT_RESOLVE"] = HTTPRequest::Result::RESULT_CANT_RESOLVE;
    _Result["RESULT_CONNECTION_ERROR"] = HTTPRequest::Result::RESULT_CONNECTION_ERROR;
    _Result["RESULT_TLS_HANDSHAKE_ERROR"] = HTTPRequest::Result::RESULT_TLS_HANDSHAKE_ERROR;
    _Result["RESULT_NO_RESPONSE"] = HTTPRequest::Result::RESULT_NO_RESPONSE;
    _Result["RESULT_BODY_SIZE_LIMIT_EXCEEDED"] = HTTPRequest::Result::RESULT_BODY_SIZE_LIMIT_EXCEEDED;
    _Result["RESULT_BODY_DECOMPRESS_FAILED"] = HTTPRequest::Result::RESULT_BODY_DECOMPRESS_FAILED;
    _Result["RESULT_REQUEST_FAILED"] = HTTPRequest::Result::RESULT_REQUEST_FAILED;
    _Result["RESULT_DOWNLOAD_FILE_CANT_OPEN"] = HTTPRequest::Result::RESULT_DOWNLOAD_FILE_CANT_OPEN;
    _Result["RESULT_DOWNLOAD_FILE_WRITE_ERROR"] = HTTPRequest::Result::RESULT_DOWNLOAD_FILE_WRITE_ERROR;
    _Result["RESULT_REDIRECT_LIMIT_REACHED"] = HTTPRequest::Result::RESULT_REDIRECT_LIMIT_REACHED;
    _Result["RESULT_TIMEOUT"] = HTTPRequest::Result::RESULT_TIMEOUT;
    _module.add("Result", std::move(_Result));
}