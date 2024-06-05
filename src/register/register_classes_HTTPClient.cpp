#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/http_client.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_HTTPClient() {
	qjs::Context::Module &_module = _General;
	_module.class_<HTTPClient>("HTTPClient")
			.constructor<>()
			.property<&HTTPClient::is_blocking_mode_enabled, &HTTPClient::set_blocking_mode>("blocking_mode_enabled")
			.property<&HTTPClient::get_connection, &HTTPClient::set_connection>("connection")
			.property<&HTTPClient::get_read_chunk_size, &HTTPClient::set_read_chunk_size>("read_chunk_size")
			.fun<static_cast<Error (HTTPClient::*)(const String &, int32_t, const Ref<TLSOptions> &)>(&HTTPClient::connect_to_host)>("connect_to_host")
			.fun<static_cast<Error (HTTPClient::*)(HTTPClient::Method, const String &, const PackedStringArray &, const PackedByteArray &)>(&HTTPClient::request_raw)>("request_raw")
			.fun<static_cast<Error (HTTPClient::*)(HTTPClient::Method, const String &, const PackedStringArray &, const String &)>(&HTTPClient::request)>("request")
			.fun<static_cast<void (HTTPClient::*)()>(&HTTPClient::close)>("close")
			.fun<static_cast<bool (HTTPClient::*)() const>(&HTTPClient::has_response)>("has_response")
			.fun<static_cast<bool (HTTPClient::*)() const>(&HTTPClient::is_response_chunked)>("is_response_chunked")
			.fun<static_cast<int32_t (HTTPClient::*)() const>(&HTTPClient::get_response_code)>("get_response_code")
			.fun<static_cast<PackedStringArray (HTTPClient::*)()>(&HTTPClient::get_response_headers)>("get_response_headers")
			.fun<static_cast<Dictionary (HTTPClient::*)()>(&HTTPClient::get_response_headers_as_dictionary)>("get_response_headers_as_dictionary")
			.fun<static_cast<int64_t (HTTPClient::*)() const>(&HTTPClient::get_response_body_length)>("get_response_body_length")
			.fun<static_cast<PackedByteArray (HTTPClient::*)()>(&HTTPClient::read_response_body_chunk)>("read_response_body_chunk")
			.fun<static_cast<HTTPClient::Status (HTTPClient::*)() const>(&HTTPClient::get_status)>("get_status")
			.fun<static_cast<Error (HTTPClient::*)()>(&HTTPClient::poll)>("poll")
			.fun<static_cast<void (HTTPClient::*)(const String &, int32_t)>(&HTTPClient::set_http_proxy)>("set_http_proxy")
			.fun<static_cast<void (HTTPClient::*)(const String &, int32_t)>(&HTTPClient::set_https_proxy)>("set_https_proxy")
			.fun<static_cast<String (HTTPClient::*)(const Dictionary &)>(&HTTPClient::query_string_from_dict)>("query_string_from_dict");
}