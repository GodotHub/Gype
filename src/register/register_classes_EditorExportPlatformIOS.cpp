#include <godot_cpp/classes/editor_export_platform_ios.hpp>
#include <godot_cpp/classes/editor_export_platform.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorExportPlatformIOS() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorExportPlatformIOS>("EditorExportPlatformIOS")
            .constructor<>()
            .base<EditorExportPlatform>()
;}