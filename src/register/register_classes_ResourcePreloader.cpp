#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_preloader.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ResourcePreloader() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<ResourcePreloader>("ResourcePreloader")
			.constructor<>()
			.base<Node>()
			.fun<static_cast<void (ResourcePreloader::*)(const StringName &, const Ref<Resource> &)>(&ResourcePreloader::add_resource)>((new std::string("add_resource"))->c_str())
			.fun<static_cast<void (ResourcePreloader::*)(const StringName &)>(&ResourcePreloader::remove_resource)>((new std::string("remove_resource"))->c_str())
			.fun<static_cast<void (ResourcePreloader::*)(const StringName &, const StringName &)>(&ResourcePreloader::rename_resource)>((new std::string("rename_resource"))->c_str())
			.fun<static_cast<bool (ResourcePreloader::*)(const StringName &) const>(&ResourcePreloader::has_resource)>((new std::string("has_resource"))->c_str())
			.fun<static_cast<Ref<Resource> (ResourcePreloader::*)(const StringName &) const>(&ResourcePreloader::get_resource)>((new std::string("get_resource"))->c_str())
			.fun<static_cast<PackedStringArray (ResourcePreloader::*)() const>(&ResourcePreloader::get_resource_list)>((new std::string("get_resource_list"))->c_str());
}