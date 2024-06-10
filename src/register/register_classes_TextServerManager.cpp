#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/text_server_manager.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextServerManager() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TextServerManager>("TextServerManager")
			.fun<static_cast<void (TextServerManager::*)(const Ref<TextServer> &)>(&TextServerManager::add_interface)>("add_interface")
			.fun<static_cast<int32_t (TextServerManager::*)() const>(&TextServerManager::get_interface_count)>("get_interface_count")
			.fun<static_cast<void (TextServerManager::*)(const Ref<TextServer> &)>(&TextServerManager::remove_interface)>("remove_interface")
			.fun<static_cast<Ref<TextServer> (TextServerManager::*)(int32_t) const>(&TextServerManager::get_interface)>("get_interface")
			.fun<static_cast<TypedArray<Dictionary> (TextServerManager::*)() const>(&TextServerManager::get_interfaces)>("get_interfaces")
			.fun<static_cast<Ref<TextServer> (TextServerManager::*)(const String &) const>(&TextServerManager::find_interface)>("find_interface")
			.fun<static_cast<void (TextServerManager::*)(const Ref<TextServer> &)>(&TextServerManager::set_primary_interface)>("set_primary_interface")
			.fun<static_cast<Ref<TextServer> (TextServerManager::*)() const>(&TextServerManager::get_primary_interface)>("get_primary_interface");
}