#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_loader.hpp>

using namespace godot;

void register_classes_ResourceLoader() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceLoader>("ResourceLoader")
           .constructor<>()
		    .fun<static_cast<Error(ResourceLoader::*)(const String &,const String &,bool,ResourceLoader::CacheMode)>(&ResourceLoader::load_threaded_request)>("load_threaded_request")
		    .fun<static_cast<ResourceLoader::ThreadLoadStatus(ResourceLoader::*)(const String &,const Array &)>(&ResourceLoader::load_threaded_get_status)>("load_threaded_get_status")
		    .fun<static_cast<Ref<Resource>(ResourceLoader::*)(const String &)>(&ResourceLoader::load_threaded_get)>("load_threaded_get")
		    .fun<static_cast<Ref<Resource>(ResourceLoader::*)(const String &,const String &,ResourceLoader::CacheMode)>(&ResourceLoader::load)>("load")
		    .fun<static_cast<PackedStringArray(ResourceLoader::*)(const String &)>(&ResourceLoader::get_recognized_extensions_for_type)>("get_recognized_extensions_for_type")
		    .fun<static_cast<void(ResourceLoader::*)(const Ref<ResourceFormatLoader> &,bool)>(&ResourceLoader::add_resource_format_loader)>("add_resource_format_loader")
		    .fun<static_cast<void(ResourceLoader::*)(const Ref<ResourceFormatLoader> &)>(&ResourceLoader::remove_resource_format_loader)>("remove_resource_format_loader")
		    .fun<static_cast<void(ResourceLoader::*)(bool)>(&ResourceLoader::set_abort_on_missing_resources)>("set_abort_on_missing_resources")
		    .fun<static_cast<PackedStringArray(ResourceLoader::*)(const String &)>(&ResourceLoader::get_dependencies)>("get_dependencies")
		    .fun<static_cast<bool(ResourceLoader::*)(const String &)>(&ResourceLoader::has_cached)>("has_cached")
		    .fun<static_cast<bool(ResourceLoader::*)(const String &,const String &)>(&ResourceLoader::exists)>("exists")
		    .fun<static_cast<int64_t(ResourceLoader::*)(const String &)>(&ResourceLoader::get_resource_uid)>("get_resource_uid")
;}