
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_format_loader.hpp>
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_ResourceLoader() {
	qjs::Value js_singleton = context->newObject();
	ResourceLoader *singleton = ResourceLoader::get_singleton();
	js_singleton.add((new std::string("load_threaded_request"))->c_str(), [singleton](const String &path, const String &type_hint, bool use_sub_threads, ResourceLoader::CacheMode cache_mode) -> Error { return singleton->load_threaded_request(path, type_hint, use_sub_threads, cache_mode); });
	js_singleton.add((new std::string("load_threaded_get_status"))->c_str(), [singleton](const String &path, const Array &progress) -> ResourceLoader::ThreadLoadStatus { return singleton->load_threaded_get_status(path, progress); });
	js_singleton.add((new std::string("load_threaded_get"))->c_str(), [singleton](const String &path) -> Ref<Resource> { return singleton->load_threaded_get(path); });
	js_singleton.add((new std::string("load"))->c_str(), [singleton](const String &path, const String &type_hint, ResourceLoader::CacheMode cache_mode) -> Ref<Resource> { return singleton->load(path, type_hint, cache_mode); });
	js_singleton.add((new std::string("get_recognized_extensions_for_type"))->c_str(), [singleton](const String &type) -> PackedStringArray { return singleton->get_recognized_extensions_for_type(type); });
	js_singleton.add((new std::string("add_resource_format_loader"))->c_str(), [singleton](const Ref<ResourceFormatLoader> &format_loader, bool at_front) -> void { singleton->add_resource_format_loader(format_loader, at_front); });
	js_singleton.add((new std::string("remove_resource_format_loader"))->c_str(), [singleton](const Ref<ResourceFormatLoader> &format_loader) -> void { singleton->remove_resource_format_loader(format_loader); });
	js_singleton.add((new std::string("set_abort_on_missing_resources"))->c_str(), [singleton](bool abort) -> void { singleton->set_abort_on_missing_resources(abort); });
	js_singleton.add((new std::string("get_dependencies"))->c_str(), [singleton](const String &path) -> PackedStringArray { return singleton->get_dependencies(path); });
	js_singleton.add((new std::string("has_cached"))->c_str(), [singleton](const String &path) -> bool { return singleton->has_cached(path); });
	js_singleton.add((new std::string("exists"))->c_str(), [singleton](const String &path, const String &type_hint) -> bool { return singleton->exists(path, type_hint); });
	js_singleton.add((new std::string("get_resource_uid"))->c_str(), [singleton](const String &path) -> int64_t { return singleton->get_resource_uid(path); });
	context->global()[(new std::string("ResourceLoader"))->c_str()] = js_singleton;

	qjs::Value _ThreadLoadStatus = context->newObject();
	_ThreadLoadStatus[(new std::string("THREAD_LOAD_INVALID_RESOURCE"))->c_str()] = ResourceLoader::ThreadLoadStatus::THREAD_LOAD_INVALID_RESOURCE;
	_ThreadLoadStatus[(new std::string("THREAD_LOAD_IN_PROGRESS"))->c_str()] = ResourceLoader::ThreadLoadStatus::THREAD_LOAD_IN_PROGRESS;
	_ThreadLoadStatus[(new std::string("THREAD_LOAD_FAILED"))->c_str()] = ResourceLoader::ThreadLoadStatus::THREAD_LOAD_FAILED;
	_ThreadLoadStatus[(new std::string("THREAD_LOAD_LOADED"))->c_str()] = ResourceLoader::ThreadLoadStatus::THREAD_LOAD_LOADED;
	js_singleton[(new std::string("ThreadLoadStatus"))->c_str()] = _ThreadLoadStatus;
	qjs::Value _CacheMode = context->newObject();
	_CacheMode[(new std::string("CACHE_MODE_IGNORE"))->c_str()] = ResourceLoader::CacheMode::CACHE_MODE_IGNORE;
	_CacheMode[(new std::string("CACHE_MODE_REUSE"))->c_str()] = ResourceLoader::CacheMode::CACHE_MODE_REUSE;
	_CacheMode[(new std::string("CACHE_MODE_REPLACE"))->c_str()] = ResourceLoader::CacheMode::CACHE_MODE_REPLACE;
	_CacheMode[(new std::string("CACHE_MODE_IGNORE_DEEP"))->c_str()] = ResourceLoader::CacheMode::CACHE_MODE_IGNORE_DEEP;
	_CacheMode[(new std::string("CACHE_MODE_REPLACE_DEEP"))->c_str()] = ResourceLoader::CacheMode::CACHE_MODE_REPLACE_DEEP;
	js_singleton[(new std::string("CacheMode"))->c_str()] = _CacheMode;
}