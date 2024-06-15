#include <godot_cpp/classes/instance_placeholder.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InstancePlaceholder() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<InstancePlaceholder>("InstancePlaceholder")
            .constructor<>()
            .base<Node>()
            .fun<static_cast<Dictionary(InstancePlaceholder::*)(bool)>(&InstancePlaceholder::get_stored_values)>("get_stored_values")
            .fun<static_cast<Node *(InstancePlaceholder::*)(bool,const Ref<PackedScene> &)>(&InstancePlaceholder::create_instance)>("create_instance")
            .fun<static_cast<String(InstancePlaceholder::*)()const>(&InstancePlaceholder::get_instance_path)>("get_instance_path")
;}