#include <godot_cpp/classes/editor_export_platform_android.hpp>
#include <godot_cpp/classes/editor_export_platform.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorExportPlatformAndroid() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorExportPlatformAndroid>("EditorExportPlatformAndroid")
            .constructor<>()
            .base<EditorExportPlatform>()
;}