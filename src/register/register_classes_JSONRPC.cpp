#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/jsonrpc.hpp>

using namespace godot;

void register_classes_JSONRPC() {
    qjs::Context::Module &_module = _General;
    _module.class_<JSONRPC>("JSONRPC")
           .constructor<>()
		    .fun<static_cast<void(JSONRPC::*)(const String &,Object *)>(&JSONRPC::set_scope)>("set_scope")
		    .fun<static_cast<Variant(JSONRPC::*)(const Variant &,bool)>(&JSONRPC::process_action)>("process_action")
		    .fun<static_cast<String(JSONRPC::*)(const String &)>(&JSONRPC::process_string)>("process_string")
		    .fun<static_cast<Dictionary(JSONRPC::*)(const String &,const Variant &,const Variant &)>(&JSONRPC::make_request)>("make_request")
		    .fun<static_cast<Dictionary(JSONRPC::*)(const Variant &,const Variant &)>(&JSONRPC::make_response)>("make_response")
		    .fun<static_cast<Dictionary(JSONRPC::*)(const String &,const Variant &)>(&JSONRPC::make_notification)>("make_notification")
		    .fun<static_cast<Dictionary(JSONRPC::*)(int32_t,const String &,const Variant &)const>(&JSONRPC::make_response_error)>("make_response_error")
;}