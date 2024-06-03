#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_export_platform_ios.hpp>

using namespace godot;

void register_classes_EditorExportPlatformIOS() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorExportPlatformIOS>("EditorExportPlatformIOS")
           .constructor<>()
;}