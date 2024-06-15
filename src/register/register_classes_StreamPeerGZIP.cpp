#include <godot_cpp/classes/stream_peer_gzip.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_StreamPeerGZIP() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<StreamPeerGZIP>("StreamPeerGZIP")
            .constructor<>()
            .base<StreamPeer>()
            .fun<static_cast<Error(StreamPeerGZIP::*)(bool,int32_t)>(&StreamPeerGZIP::start_compression)>("start_compression")
            .fun<static_cast<Error(StreamPeerGZIP::*)(bool,int32_t)>(&StreamPeerGZIP::start_decompression)>("start_decompression")
            .fun<static_cast<Error(StreamPeerGZIP::*)()>(&StreamPeerGZIP::finish)>("finish")
            .fun<static_cast<void(StreamPeerGZIP::*)()>(&StreamPeerGZIP::clear)>("clear")
;}