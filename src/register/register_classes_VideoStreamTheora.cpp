#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/video_stream_theora.hpp>

using namespace godot;

void register_classes_VideoStreamTheora() {
    qjs::Context::Module &_module = _General;
    _module.class_<VideoStreamTheora>("VideoStreamTheora")
           .constructor<>()
;}