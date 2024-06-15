#include <godot_cpp/classes/weak_ref.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_WeakRef() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<WeakRef>("WeakRef")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<Variant(WeakRef::*)()const>(&WeakRef::get_ref)>("get_ref")
;}