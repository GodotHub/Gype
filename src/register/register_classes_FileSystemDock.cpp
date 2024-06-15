#include <godot_cpp/classes/file_system_dock.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/editor_resource_tooltip_plugin.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_FileSystemDock() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<FileSystemDock>("FileSystemDock")
            .constructor<>()
            .base<VBoxContainer>()
            .fun<static_cast<void(FileSystemDock::*)(const String &)>(&FileSystemDock::navigate_to_path)>("navigate_to_path")
            .fun<static_cast<void(FileSystemDock::*)(const Ref<EditorResourceTooltipPlugin> &)>(&FileSystemDock::add_resource_tooltip_plugin)>("add_resource_tooltip_plugin")
            .fun<static_cast<void(FileSystemDock::*)(const Ref<EditorResourceTooltipPlugin> &)>(&FileSystemDock::remove_resource_tooltip_plugin)>("remove_resource_tooltip_plugin")
;}