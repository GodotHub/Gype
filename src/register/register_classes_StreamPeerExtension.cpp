#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/stream_peer_extension.hpp>

using namespace godot;

void register_classes_StreamPeerExtension() {
    qjs::Context::Module &_module = _General;
    _module.class_<StreamPeerExtension>("StreamPeerExtension")
           .constructor<>()
		    .fun<static_cast<Error(StreamPeerExtension::*)(uint8_t*,int32_t,int32_t*)>(&StreamPeerExtension::_get_data)>("_get_data")
		    .fun<static_cast<Error(StreamPeerExtension::*)(uint8_t*,int32_t,int32_t*)>(&StreamPeerExtension::_get_partial_data)>("_get_partial_data")
		    .fun<static_cast<Error(StreamPeerExtension::*)(const uint8_t*,int32_t,int32_t*)>(&StreamPeerExtension::_put_data)>("_put_data")
		    .fun<static_cast<Error(StreamPeerExtension::*)(const uint8_t*,int32_t,int32_t*)>(&StreamPeerExtension::_put_partial_data)>("_put_partial_data")
		    .fun<static_cast<int32_t(StreamPeerExtension::*)()const>(&StreamPeerExtension::_get_available_bytes)>("_get_available_bytes")
;}