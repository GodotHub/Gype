#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_export_platform_web.hpp>

using namespace godot;

void register_classes_EditorExportPlatformWeb() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorExportPlatformWeb>("EditorExportPlatformWeb")
           .constructor<>()
;}