#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource.hpp>

using namespace godot;

void register_classes_Resource() {
    qjs::Context::Module &_module = _General;
    _module.class_<Resource>("Resource")
           .constructor<>()
           .property<Resource::is_local_to_scene, Resource::set_local_to_scene>("resource_local_to_scene")
           .property<Resource::get_path, Resource::set_path>("resource_path")
           .property<Resource::get_name, Resource::set_name>("resource_name")
		    .fun<static_cast<void(Resource::*)()>(&Resource::_setup_local_to_scene)>("_setup_local_to_scene")
		    .fun<static_cast<void(Resource::*)(const String &)>(&Resource::take_over_path)>("take_over_path")
		    .fun<static_cast<RID(Resource::*)()const>(&Resource::get_rid)>("get_rid")
		    .fun<static_cast<Node *(Resource::*)()const>(&Resource::get_local_scene)>("get_local_scene")
		    .fun<static_cast<void(Resource::*)()>(&Resource::setup_local_to_scene)>("setup_local_to_scene")
		    .fun<static_cast<void(Resource::*)()>(&Resource::emit_changed)>("emit_changed")
		    .fun<static_cast<Ref<Resource>(Resource::*)(bool)const>(&Resource::duplicate)>("duplicate")
;}