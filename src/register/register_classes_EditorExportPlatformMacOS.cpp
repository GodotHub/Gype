#include <godot_cpp/classes/editor_export_platform_mac_os.hpp>
#include <godot_cpp/classes/editor_export_platform.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorExportPlatformMacOS() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorExportPlatformMacOS>("EditorExportPlatformMacOS")
            .constructor<>()
            .base<EditorExportPlatform>()
;}