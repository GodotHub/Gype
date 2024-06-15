#include <godot_cpp/classes/skin_reference.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SkinReference() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<SkinReference>("SkinReference")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<RID(SkinReference::*)()const>(&SkinReference::get_skeleton)>("get_skeleton")
            .fun<static_cast<Ref<Skin>(SkinReference::*)()const>(&SkinReference::get_skin)>("get_skin")
;}