#include <godot_cpp/classes/gd_extension_manager.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/gd_extension.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_GDExtensionManager() {
	qjs::Value js_singleton = context->newObject();
    GDExtensionManager *singleton = GDExtensionManager::get_singleton();
    js_singleton.add("load_extension", [singleton](const String & path)->GDExtensionManager::LoadStatus{return singleton->load_extension(path);});
    js_singleton.add("reload_extension", [singleton](const String & path)->GDExtensionManager::LoadStatus{return singleton->reload_extension(path);});
    js_singleton.add("unload_extension", [singleton](const String & path)->GDExtensionManager::LoadStatus{return singleton->unload_extension(path);});
    js_singleton.add("is_extension_loaded", [singleton](const String & path)->bool{return singleton->is_extension_loaded(path);});
    js_singleton.add("get_loaded_extensions", [singleton]()->PackedStringArray{return singleton->get_loaded_extensions();});
    js_singleton.add("get_extension", [singleton](const String & path)->Ref<GDExtension>{return singleton->get_extension(path);});
    context->global()["GDExtensionManager"] = js_singleton;

    qjs::Value _LoadStatus = context->newObject();
    _LoadStatus["LOAD_STATUS_OK"] = GDExtensionManager::LoadStatus::LOAD_STATUS_OK;
    _LoadStatus["LOAD_STATUS_FAILED"] = GDExtensionManager::LoadStatus::LOAD_STATUS_FAILED;
    _LoadStatus["LOAD_STATUS_ALREADY_LOADED"] = GDExtensionManager::LoadStatus::LOAD_STATUS_ALREADY_LOADED;
    _LoadStatus["LOAD_STATUS_NOT_LOADED"] = GDExtensionManager::LoadStatus::LOAD_STATUS_NOT_LOADED;
    _LoadStatus["LOAD_STATUS_NEEDS_RESTART"] = GDExtensionManager::LoadStatus::LOAD_STATUS_NEEDS_RESTART;
    js_singleton["LoadStatus"] = _LoadStatus;
}