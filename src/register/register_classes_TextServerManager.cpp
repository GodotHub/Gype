#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_TextServerManager() {
    qjs::Context::Module &_module = _System;
    _module.class_<TextServerManager>("TextServerManager")
           .constructor<>()
		   .fun<static_cast<void(TextServerManager::*)(const Ref<TextServer> &)>(&TextServerManager::add_interface)>("add_interface")
		   .fun<static_cast<int32_t(TextServerManager::*)()const>(&TextServerManager::get_interface_count)>("get_interface_count")
		   .fun<static_cast<void(TextServerManager::*)(const Ref<TextServer> &)>(&TextServerManager::remove_interface)>("remove_interface")
		   .fun<static_cast<Ref<TextServer>(TextServerManager::*)(int32_t)const>(&TextServerManager::get_interface)>("get_interface")
		   .fun<static_cast<TypedArray<Dictionary>(TextServerManager::*)()const>(&TextServerManager::get_interfaces)>("get_interfaces")
		   .fun<static_cast<Ref<TextServer>(TextServerManager::*)(const String &)const>(&TextServerManager::find_interface)>("find_interface")
		   .fun<static_cast<void(TextServerManager::*)(const Ref<TextServer> &)>(&TextServerManager::set_primary_interface)>("set_primary_interface")
		   .fun<static_cast<Ref<TextServer>(TextServerManager::*)()const>(&TextServerManager::get_primary_interface)>("get_primary_interface")
;}