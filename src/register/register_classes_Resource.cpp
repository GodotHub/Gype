#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Resource() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Resource>("Resource")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<bool(Resource::*)()const>(&Resource::is_local_to_scene),static_cast<void(Resource::*)(bool)>(&Resource::set_local_to_scene)>("resource_local_to_scene")
            .property<static_cast<String(Resource::*)()const>(&Resource::get_path),static_cast<void(Resource::*)(const String &)>(&Resource::set_path)>("resource_path")
            .property<static_cast<String(Resource::*)()const>(&Resource::get_name),static_cast<void(Resource::*)(const String &)>(&Resource::set_name)>("resource_name")
            .property<static_cast<String(Resource::*)()const>(&Resource::get_scene_unique_id),static_cast<void(Resource::*)(const String &)>(&Resource::set_scene_unique_id)>("resource_scene_unique_id")
            .fun<static_cast<void(Resource::*)()>(&Resource::_setup_local_to_scene)>("_setup_local_to_scene")
            .fun<static_cast<void(Resource::*)(const String &)>(&Resource::take_over_path)>("take_over_path")
            .fun<static_cast<RID(Resource::*)()const>(&Resource::get_rid)>("get_rid")
            .fun<static_cast<Node *(Resource::*)()const>(&Resource::get_local_scene)>("get_local_scene")
            .fun<static_cast<void(Resource::*)()>(&Resource::setup_local_to_scene)>("setup_local_to_scene")
            .static_fun<static_cast<String(*)()>(&Resource::generate_scene_unique_id)>("generate_scene_unique_id")
            .fun<static_cast<void(Resource::*)()>(&Resource::emit_changed)>("emit_changed")
            .fun<static_cast<Ref<Resource>(Resource::*)(bool)const>(&Resource::duplicate)>("duplicate")
;}