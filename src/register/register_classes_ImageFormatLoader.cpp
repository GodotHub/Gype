#include <godot_cpp/classes/image_format_loader.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ImageFormatLoader() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ImageFormatLoader>("ImageFormatLoader")
            .constructor<>()
            .base<RefCounted>()
;    qjs::Value _LoaderFlags = context->newObject();
    _LoaderFlags["FLAG_NONE"] = ImageFormatLoader::LoaderFlags::FLAG_NONE;
    _LoaderFlags["FLAG_FORCE_LINEAR"] = ImageFormatLoader::LoaderFlags::FLAG_FORCE_LINEAR;
    _LoaderFlags["FLAG_CONVERT_COLORS"] = ImageFormatLoader::LoaderFlags::FLAG_CONVERT_COLORS;
    _module.add("LoaderFlags", std::move(_LoaderFlags));
}