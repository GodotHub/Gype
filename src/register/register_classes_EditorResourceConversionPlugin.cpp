#include <godot_cpp/classes/editor_resource_conversion_plugin.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorResourceConversionPlugin() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorResourceConversionPlugin>("EditorResourceConversionPlugin")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<String (EditorResourceConversionPlugin::*)() const>(&EditorResourceConversionPlugin::_converts_to)>((new std::string("_converts_to"))->c_str())
			.fun<static_cast<bool (EditorResourceConversionPlugin::*)(const Ref<Resource> &) const>(&EditorResourceConversionPlugin::_handles)>((new std::string("_handles"))->c_str())
			.fun<static_cast<Ref<Resource> (EditorResourceConversionPlugin::*)(const Ref<Resource> &) const>(&EditorResourceConversionPlugin::_convert)>((new std::string("_convert"))->c_str());
}