#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_resource_tooltip_plugin.hpp>

using namespace godot;

void register_classes_EditorResourceTooltipPlugin() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorResourceTooltipPlugin>("EditorResourceTooltipPlugin")
           .constructor<>()
		    .fun<static_cast<bool(EditorResourceTooltipPlugin::*)(const String &)const>(&EditorResourceTooltipPlugin::_handles)>("_handles")
		    .fun<static_cast<Control *(EditorResourceTooltipPlugin::*)(const String &,const Dictionary &,Control *)const>(&EditorResourceTooltipPlugin::_make_tooltip_for_path)>("_make_tooltip_for_path")
		    .fun<static_cast<void(EditorResourceTooltipPlugin::*)(const String &,TextureRect *)const>(&EditorResourceTooltipPlugin::request_thumbnail)>("request_thumbnail")
;}