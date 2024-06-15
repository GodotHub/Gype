#include <godot_cpp/classes/animation_library.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationLibrary() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimationLibrary>("AnimationLibrary")
            .constructor<>()
            .base<Resource>()
            .fun<static_cast<Error(AnimationLibrary::*)(const StringName &,const Ref<Animation> &)>(&AnimationLibrary::add_animation)>("add_animation")
            .fun<static_cast<void(AnimationLibrary::*)(const StringName &)>(&AnimationLibrary::remove_animation)>("remove_animation")
            .fun<static_cast<void(AnimationLibrary::*)(const StringName &,const StringName &)>(&AnimationLibrary::rename_animation)>("rename_animation")
            .fun<static_cast<bool(AnimationLibrary::*)(const StringName &)const>(&AnimationLibrary::has_animation)>("has_animation")
            .fun<static_cast<Ref<Animation>(AnimationLibrary::*)(const StringName &)const>(&AnimationLibrary::get_animation)>("get_animation")
            .fun<static_cast<TypedArray<StringName>(AnimationLibrary::*)()const>(&AnimationLibrary::get_animation_list)>("get_animation_list")
;}