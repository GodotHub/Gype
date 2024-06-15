#include <godot_cpp/classes/editor_resource_tooltip_plugin.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/texture_rect.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorResourceTooltipPlugin() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorResourceTooltipPlugin>("EditorResourceTooltipPlugin")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<bool(EditorResourceTooltipPlugin::*)(const String &)const>(&EditorResourceTooltipPlugin::_handles)>("_handles")
            .fun<static_cast<Control *(EditorResourceTooltipPlugin::*)(const String &,const Dictionary &,Control *)const>(&EditorResourceTooltipPlugin::_make_tooltip_for_path)>("_make_tooltip_for_path")
            .fun<static_cast<void(EditorResourceTooltipPlugin::*)(const String &,TextureRect *)const>(&EditorResourceTooltipPlugin::request_thumbnail)>("request_thumbnail")
;}