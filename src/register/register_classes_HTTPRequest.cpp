
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/http_client.hpp>
#include <godot_cpp/classes/http_request.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_HTTPRequest() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<HTTPRequest>("HTTPRequest")
			.constructor<>()
			.base<Node>()
			.property<static_cast<String (HTTPRequest::*)() const>(&HTTPRequest::get_download_file), static_cast<void (HTTPRequest::*)(const String &)>(&HTTPRequest::set_download_file)>((new std::string("download_file"))->c_str())
			.property<static_cast<int32_t (HTTPRequest::*)() const>(&HTTPRequest::get_download_chunk_size), static_cast<void (HTTPRequest::*)(int32_t)>(&HTTPRequest::set_download_chunk_size)>((new std::string("download_chunk_size"))->c_str())
			.property<static_cast<bool (HTTPRequest::*)() const>(&HTTPRequest::is_using_threads), static_cast<void (HTTPRequest::*)(bool)>(&HTTPRequest::set_use_threads)>((new std::string("use_threads"))->c_str())
			.property<static_cast<bool (HTTPRequest::*)() const>(&HTTPRequest::is_accepting_gzip), static_cast<void (HTTPRequest::*)(bool)>(&HTTPRequest::set_accept_gzip)>((new std::string("accept_gzip"))->c_str())
			.property<static_cast<int32_t (HTTPRequest::*)() const>(&HTTPRequest::get_body_size_limit), static_cast<void (HTTPRequest::*)(int32_t)>(&HTTPRequest::set_body_size_limit)>((new std::string("body_size_limit"))->c_str())
			.property<static_cast<int32_t (HTTPRequest::*)() const>(&HTTPRequest::get_max_redirects), static_cast<void (HTTPRequest::*)(int32_t)>(&HTTPRequest::set_max_redirects)>((new std::string("max_redirects"))->c_str())
			.property<static_cast<double (HTTPRequest::*)()>(&HTTPRequest::get_timeout), static_cast<void (HTTPRequest::*)(double)>(&HTTPRequest::set_timeout)>((new std::string("timeout"))->c_str())
			.fun<static_cast<Error (HTTPRequest::*)(const String &, const PackedStringArray &, HTTPClient::Method, const String &)>(&HTTPRequest::request)>((new std::string("request"))->c_str())
			.fun<static_cast<Error (HTTPRequest::*)(const String &, const PackedStringArray &, HTTPClient::Method, const PackedByteArray &)>(&HTTPRequest::request_raw)>((new std::string("request_raw"))->c_str())
			.fun<static_cast<void (HTTPRequest::*)()>(&HTTPRequest::cancel_request)>((new std::string("cancel_request"))->c_str())
			.fun<static_cast<void (HTTPRequest::*)(const Ref<TLSOptions> &)>(&HTTPRequest::set_tls_options)>((new std::string("set_tls_options"))->c_str())
			.fun<static_cast<HTTPClient::Status (HTTPRequest::*)() const>(&HTTPRequest::get_http_client_status)>((new std::string("get_http_client_status"))->c_str())
			.fun<static_cast<int32_t (HTTPRequest::*)() const>(&HTTPRequest::get_downloaded_bytes)>((new std::string("get_downloaded_bytes"))->c_str())
			.fun<static_cast<int32_t (HTTPRequest::*)() const>(&HTTPRequest::get_body_size)>((new std::string("get_body_size"))->c_str())
			.fun<static_cast<void (HTTPRequest::*)(const String &, int32_t)>(&HTTPRequest::set_http_proxy)>((new std::string("set_http_proxy"))->c_str())
			.fun<static_cast<void (HTTPRequest::*)(const String &, int32_t)>(&HTTPRequest::set_https_proxy)>((new std::string("set_https_proxy"))->c_str());
	qjs::Value _Result = context->newObject();
	_Result[(new std::string("RESULT_SUCCESS"))->c_str()] = HTTPRequest::Result::RESULT_SUCCESS;
	_Result[(new std::string("RESULT_CHUNKED_BODY_SIZE_MISMATCH"))->c_str()] = HTTPRequest::Result::RESULT_CHUNKED_BODY_SIZE_MISMATCH;
	_Result[(new std::string("RESULT_CANT_CONNECT"))->c_str()] = HTTPRequest::Result::RESULT_CANT_CONNECT;
	_Result[(new std::string("RESULT_CANT_RESOLVE"))->c_str()] = HTTPRequest::Result::RESULT_CANT_RESOLVE;
	_Result[(new std::string("RESULT_CONNECTION_ERROR"))->c_str()] = HTTPRequest::Result::RESULT_CONNECTION_ERROR;
	_Result[(new std::string("RESULT_TLS_HANDSHAKE_ERROR"))->c_str()] = HTTPRequest::Result::RESULT_TLS_HANDSHAKE_ERROR;
	_Result[(new std::string("RESULT_NO_RESPONSE"))->c_str()] = HTTPRequest::Result::RESULT_NO_RESPONSE;
	_Result[(new std::string("RESULT_BODY_SIZE_LIMIT_EXCEEDED"))->c_str()] = HTTPRequest::Result::RESULT_BODY_SIZE_LIMIT_EXCEEDED;
	_Result[(new std::string("RESULT_BODY_DECOMPRESS_FAILED"))->c_str()] = HTTPRequest::Result::RESULT_BODY_DECOMPRESS_FAILED;
	_Result[(new std::string("RESULT_REQUEST_FAILED"))->c_str()] = HTTPRequest::Result::RESULT_REQUEST_FAILED;
	_Result[(new std::string("RESULT_DOWNLOAD_FILE_CANT_OPEN"))->c_str()] = HTTPRequest::Result::RESULT_DOWNLOAD_FILE_CANT_OPEN;
	_Result[(new std::string("RESULT_DOWNLOAD_FILE_WRITE_ERROR"))->c_str()] = HTTPRequest::Result::RESULT_DOWNLOAD_FILE_WRITE_ERROR;
	_Result[(new std::string("RESULT_REDIRECT_LIMIT_REACHED"))->c_str()] = HTTPRequest::Result::RESULT_REDIRECT_LIMIT_REACHED;
	_Result[(new std::string("RESULT_TIMEOUT"))->c_str()] = HTTPRequest::Result::RESULT_TIMEOUT;
	_module.add("Result", std::move(_Result));
}