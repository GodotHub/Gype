#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_preloader.hpp>

using namespace godot;

void register_classes_ResourcePreloader() {
    qjs::Context::Module &_module = _Node;
    _module.class_<ResourcePreloader>("ResourcePreloader")
           .constructor<>()
           .property<ResourcePreloader::_get_resources, ResourcePreloader::_set_resources>("resources")
		    .fun<static_cast<void(ResourcePreloader::*)(const StringName &,const Ref<Resource> &)>(&ResourcePreloader::add_resource)>("add_resource")
		    .fun<static_cast<void(ResourcePreloader::*)(const StringName &)>(&ResourcePreloader::remove_resource)>("remove_resource")
		    .fun<static_cast<void(ResourcePreloader::*)(const StringName &,const StringName &)>(&ResourcePreloader::rename_resource)>("rename_resource")
		    .fun<static_cast<bool(ResourcePreloader::*)(const StringName &)const>(&ResourcePreloader::has_resource)>("has_resource")
		    .fun<static_cast<Ref<Resource>(ResourcePreloader::*)(const StringName &)const>(&ResourcePreloader::get_resource)>("get_resource")
		    .fun<static_cast<PackedStringArray(ResourcePreloader::*)()const>(&ResourcePreloader::get_resource_list)>("get_resource_list")
;}