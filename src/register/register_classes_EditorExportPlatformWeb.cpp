#include <godot_cpp/classes/editor_export_platform_web.hpp>
#include <godot_cpp/classes/editor_export_platform.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorExportPlatformWeb() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorExportPlatformWeb>("EditorExportPlatformWeb")
            .constructor<>()
            .base<EditorExportPlatform>()
;}