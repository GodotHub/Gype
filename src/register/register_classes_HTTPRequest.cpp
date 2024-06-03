#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/http_request.hpp>

using namespace godot;

void register_classes_HTTPRequest() {
    qjs::Context::Module &_module = _Node;
    _module.class_<HTTPRequest>("HTTPRequest")
           .constructor<>()
           .property<HTTPRequest::get_download_file, HTTPRequest::set_download_file>("download_file")
           .property<HTTPRequest::get_download_chunk_size, HTTPRequest::set_download_chunk_size>("download_chunk_size")
           .property<HTTPRequest::is_using_threads, HTTPRequest::set_use_threads>("use_threads")
           .property<HTTPRequest::is_accepting_gzip, HTTPRequest::set_accept_gzip>("accept_gzip")
           .property<HTTPRequest::get_body_size_limit, HTTPRequest::set_body_size_limit>("body_size_limit")
           .property<HTTPRequest::get_max_redirects, HTTPRequest::set_max_redirects>("max_redirects")
           .property<HTTPRequest::get_timeout, HTTPRequest::set_timeout>("timeout")
		    .fun<static_cast<Error(HTTPRequest::*)(const String &,const PackedStringArray &,HTTPClient::Method,const String &)>(&HTTPRequest::request)>("request")
		    .fun<static_cast<Error(HTTPRequest::*)(const String &,const PackedStringArray &,HTTPClient::Method,const PackedByteArray &)>(&HTTPRequest::request_raw)>("request_raw")
		    .fun<static_cast<void(HTTPRequest::*)()>(&HTTPRequest::cancel_request)>("cancel_request")
		    .fun<static_cast<void(HTTPRequest::*)(const Ref<TLSOptions> &)>(&HTTPRequest::set_tls_options)>("set_tls_options")
		    .fun<static_cast<HTTPClient::Status(HTTPRequest::*)()const>(&HTTPRequest::get_http_client_status)>("get_http_client_status")
		    .fun<static_cast<int32_t(HTTPRequest::*)()const>(&HTTPRequest::get_downloaded_bytes)>("get_downloaded_bytes")
		    .fun<static_cast<int32_t(HTTPRequest::*)()const>(&HTTPRequest::get_body_size)>("get_body_size")
		    .fun<static_cast<void(HTTPRequest::*)(const String &,int32_t)>(&HTTPRequest::set_http_proxy)>("set_http_proxy")
		    .fun<static_cast<void(HTTPRequest::*)(const String &,int32_t)>(&HTTPRequest::set_https_proxy)>("set_https_proxy")
;}