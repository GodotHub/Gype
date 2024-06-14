#include <godot_cpp/classes/editor_export_platform_windows.hpp>
#include <godot_cpp/classes/editor_export_platform_pc.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorExportPlatformWindows() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorExportPlatformWindows>("EditorExportPlatformWindows")
            .constructor<>()
            .base<EditorExportPlatformPC>()
;}