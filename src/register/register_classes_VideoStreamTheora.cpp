#include <godot_cpp/classes/video_stream_theora.hpp>
#include <godot_cpp/classes/video_stream.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VideoStreamTheora() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<VideoStreamTheora>("VideoStreamTheora")
            .constructor<>()
            .base<VideoStream>()
;}