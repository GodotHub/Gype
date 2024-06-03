#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_resource_conversion_plugin.hpp>

using namespace godot;

void register_classes_EditorResourceConversionPlugin() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorResourceConversionPlugin>("EditorResourceConversionPlugin")
           .constructor<>()
		    .fun<static_cast<String(EditorResourceConversionPlugin::*)()const>(&EditorResourceConversionPlugin::_converts_to)>("_converts_to")
		    .fun<static_cast<bool(EditorResourceConversionPlugin::*)(const Ref<Resource> &)const>(&EditorResourceConversionPlugin::_handles)>("_handles")
		    .fun<static_cast<Ref<Resource>(EditorResourceConversionPlugin::*)(const Ref<Resource> &)const>(&EditorResourceConversionPlugin::_convert)>("_convert")
;}