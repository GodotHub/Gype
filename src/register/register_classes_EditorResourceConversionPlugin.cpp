#include <godot_cpp/classes/editor_resource_conversion_plugin.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorResourceConversionPlugin() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorResourceConversionPlugin>("EditorResourceConversionPlugin")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<String(EditorResourceConversionPlugin::*)()const>(&EditorResourceConversionPlugin::_converts_to)>("_converts_to")
            .fun<static_cast<bool(EditorResourceConversionPlugin::*)(const Ref<Resource> &)const>(&EditorResourceConversionPlugin::_handles)>("_handles")
            .fun<static_cast<Ref<Resource>(EditorResourceConversionPlugin::*)(const Ref<Resource> &)const>(&EditorResourceConversionPlugin::_convert)>("_convert")
;}