#include <godot_cpp/classes/gd_extension.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GDExtension() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GDExtension>("GDExtension")
            .constructor<>()
            .base<Resource>()
            .fun<static_cast<bool(GDExtension::*)()const>(&GDExtension::is_library_open)>("is_library_open")
            .fun<static_cast<GDExtension::InitializationLevel(GDExtension::*)()const>(&GDExtension::get_minimum_library_initialization_level)>("get_minimum_library_initialization_level")
;    qjs::Value _InitializationLevel = context->newObject();
    _InitializationLevel["INITIALIZATION_LEVEL_CORE"] = GDExtension::InitializationLevel::INITIALIZATION_LEVEL_CORE;
    _InitializationLevel["INITIALIZATION_LEVEL_SERVERS"] = GDExtension::InitializationLevel::INITIALIZATION_LEVEL_SERVERS;
    _InitializationLevel["INITIALIZATION_LEVEL_SCENE"] = GDExtension::InitializationLevel::INITIALIZATION_LEVEL_SCENE;
    _InitializationLevel["INITIALIZATION_LEVEL_EDITOR"] = GDExtension::InitializationLevel::INITIALIZATION_LEVEL_EDITOR;
    _module.add("InitializationLevel", std::move(_InitializationLevel));
}