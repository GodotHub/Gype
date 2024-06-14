#include <godot_cpp/classes/gd_extension.hpp>
#include <godot_cpp/classes/gd_extension_manager.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_GDExtensionManager() {
	qjs::Value js_singleton = context->newObject();
	GDExtensionManager *singleton = GDExtensionManager::get_singleton();
	js_singleton.add((new std::string("load_extension"))->c_str(), [singleton](const String &path) -> GDExtensionManager::LoadStatus { return singleton->load_extension(path); });
	js_singleton.add((new std::string("reload_extension"))->c_str(), [singleton](const String &path) -> GDExtensionManager::LoadStatus { return singleton->reload_extension(path); });
	js_singleton.add((new std::string("unload_extension"))->c_str(), [singleton](const String &path) -> GDExtensionManager::LoadStatus { return singleton->unload_extension(path); });
	js_singleton.add((new std::string("is_extension_loaded"))->c_str(), [singleton](const String &path) -> bool { return singleton->is_extension_loaded(path); });
	js_singleton.add((new std::string("get_loaded_extensions"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_loaded_extensions(); });
	js_singleton.add((new std::string("get_extension"))->c_str(), [singleton](const String &path) -> Ref<GDExtension> { return singleton->get_extension(path); });
	context->global()[(new std::string("GDExtensionManager"))->c_str()] = js_singleton;

	qjs::Value _LoadStatus = context->newObject();
	_LoadStatus[(new std::string("LOAD_STATUS_OK"))->c_str()] = GDExtensionManager::LoadStatus::LOAD_STATUS_OK;
	_LoadStatus[(new std::string("LOAD_STATUS_FAILED"))->c_str()] = GDExtensionManager::LoadStatus::LOAD_STATUS_FAILED;
	_LoadStatus[(new std::string("LOAD_STATUS_ALREADY_LOADED"))->c_str()] = GDExtensionManager::LoadStatus::LOAD_STATUS_ALREADY_LOADED;
	_LoadStatus[(new std::string("LOAD_STATUS_NOT_LOADED"))->c_str()] = GDExtensionManager::LoadStatus::LOAD_STATUS_NOT_LOADED;
	_LoadStatus[(new std::string("LOAD_STATUS_NEEDS_RESTART"))->c_str()] = GDExtensionManager::LoadStatus::LOAD_STATUS_NEEDS_RESTART;
	js_singleton[(new std::string("LoadStatus"))->c_str()] = _LoadStatus;
}