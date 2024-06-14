#include <godot_cpp/classes/gd_extension.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GDExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GDExtension>("GDExtension")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<bool (GDExtension::*)() const>(&GDExtension::is_library_open)>((new std::string("is_library_open"))->c_str())
			.fun<static_cast<GDExtension::InitializationLevel (GDExtension::*)() const>(&GDExtension::get_minimum_library_initialization_level)>((new std::string("get_minimum_library_initialization_level"))->c_str());
	qjs::Value _InitializationLevel = context->newObject();
	_InitializationLevel[(new std::string("INITIALIZATION_LEVEL_CORE"))->c_str()] = GDExtension::InitializationLevel::INITIALIZATION_LEVEL_CORE;
	_InitializationLevel[(new std::string("INITIALIZATION_LEVEL_SERVERS"))->c_str()] = GDExtension::InitializationLevel::INITIALIZATION_LEVEL_SERVERS;
	_InitializationLevel[(new std::string("INITIALIZATION_LEVEL_SCENE"))->c_str()] = GDExtension::InitializationLevel::INITIALIZATION_LEVEL_SCENE;
	_InitializationLevel[(new std::string("INITIALIZATION_LEVEL_EDITOR"))->c_str()] = GDExtension::InitializationLevel::INITIALIZATION_LEVEL_EDITOR;
	_module.add("InitializationLevel", std::move(_InitializationLevel));
}