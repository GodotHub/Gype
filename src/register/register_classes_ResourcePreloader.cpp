#include <godot_cpp/classes/resource_preloader.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ResourcePreloader() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<ResourcePreloader>("ResourcePreloader")
            .constructor<>()
            .base<Node>()
            .fun<static_cast<void(ResourcePreloader::*)(const StringName &,const Ref<Resource> &)>(&ResourcePreloader::add_resource)>("add_resource")
            .fun<static_cast<void(ResourcePreloader::*)(const StringName &)>(&ResourcePreloader::remove_resource)>("remove_resource")
            .fun<static_cast<void(ResourcePreloader::*)(const StringName &,const StringName &)>(&ResourcePreloader::rename_resource)>("rename_resource")
            .fun<static_cast<bool(ResourcePreloader::*)(const StringName &)const>(&ResourcePreloader::has_resource)>("has_resource")
            .fun<static_cast<Ref<Resource>(ResourcePreloader::*)(const StringName &)const>(&ResourcePreloader::get_resource)>("get_resource")
            .fun<static_cast<PackedStringArray(ResourcePreloader::*)()const>(&ResourcePreloader::get_resource_list)>("get_resource_list")
;}