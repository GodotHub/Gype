#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_format_loader.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_ResourceLoader() {
	qjs::Value js_singleton = context->newObject();
    ResourceLoader *singleton = ResourceLoader::get_singleton();
    js_singleton.add("load_threaded_request", [singleton](const String & path,const String & type_hint,bool use_sub_threads,ResourceLoader::CacheMode cache_mode)->Error{return singleton->load_threaded_request(path,type_hint,use_sub_threads,cache_mode);});
    js_singleton.add("load_threaded_get_status", [singleton](const String & path,const Array & progress)->ResourceLoader::ThreadLoadStatus{return singleton->load_threaded_get_status(path,progress);});
    js_singleton.add("load_threaded_get", [singleton](const String & path)->Ref<Resource>{return singleton->load_threaded_get(path);});
    js_singleton.add("load", [singleton](const String & path,const String & type_hint,ResourceLoader::CacheMode cache_mode)->Ref<Resource>{return singleton->load(path,type_hint,cache_mode);});
    js_singleton.add("get_recognized_extensions_for_type", [singleton](const String & type)->PackedStringArray{return singleton->get_recognized_extensions_for_type(type);});
    js_singleton.add("add_resource_format_loader", [singleton](const Ref<ResourceFormatLoader> & format_loader,bool at_front)->void{singleton->add_resource_format_loader(format_loader,at_front);});
    js_singleton.add("remove_resource_format_loader", [singleton](const Ref<ResourceFormatLoader> & format_loader)->void{singleton->remove_resource_format_loader(format_loader);});
    js_singleton.add("set_abort_on_missing_resources", [singleton](bool abort)->void{singleton->set_abort_on_missing_resources(abort);});
    js_singleton.add("get_dependencies", [singleton](const String & path)->PackedStringArray{return singleton->get_dependencies(path);});
    js_singleton.add("has_cached", [singleton](const String & path)->bool{return singleton->has_cached(path);});
    js_singleton.add("exists", [singleton](const String & path,const String & type_hint)->bool{return singleton->exists(path,type_hint);});
    js_singleton.add("get_resource_uid", [singleton](const String & path)->int64_t{return singleton->get_resource_uid(path);});
    context->global()["ResourceLoader"] = js_singleton;

    qjs::Value _ThreadLoadStatus = context->newObject();
    _ThreadLoadStatus["THREAD_LOAD_INVALID_RESOURCE"] = ResourceLoader::ThreadLoadStatus::THREAD_LOAD_INVALID_RESOURCE;
    _ThreadLoadStatus["THREAD_LOAD_IN_PROGRESS"] = ResourceLoader::ThreadLoadStatus::THREAD_LOAD_IN_PROGRESS;
    _ThreadLoadStatus["THREAD_LOAD_FAILED"] = ResourceLoader::ThreadLoadStatus::THREAD_LOAD_FAILED;
    _ThreadLoadStatus["THREAD_LOAD_LOADED"] = ResourceLoader::ThreadLoadStatus::THREAD_LOAD_LOADED;
    js_singleton["ThreadLoadStatus"] = _ThreadLoadStatus;
    qjs::Value _CacheMode = context->newObject();
    _CacheMode["CACHE_MODE_IGNORE"] = ResourceLoader::CacheMode::CACHE_MODE_IGNORE;
    _CacheMode["CACHE_MODE_REUSE"] = ResourceLoader::CacheMode::CACHE_MODE_REUSE;
    _CacheMode["CACHE_MODE_REPLACE"] = ResourceLoader::CacheMode::CACHE_MODE_REPLACE;
    _CacheMode["CACHE_MODE_IGNORE_DEEP"] = ResourceLoader::CacheMode::CACHE_MODE_IGNORE_DEEP;
    _CacheMode["CACHE_MODE_REPLACE_DEEP"] = ResourceLoader::CacheMode::CACHE_MODE_REPLACE_DEEP;
    js_singleton["CacheMode"] = _CacheMode;
}