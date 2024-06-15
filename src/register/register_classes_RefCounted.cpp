#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/object.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RefCounted() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RefCounted>("RefCounted")
            .constructor<>()
            .base<Object>()
            .fun<static_cast<bool(RefCounted::*)()>(&RefCounted::init_ref)>("init_ref")
            .fun<static_cast<bool(RefCounted::*)()>(&RefCounted::reference)>("reference")
            .fun<static_cast<bool(RefCounted::*)()>(&RefCounted::unreference)>("unreference")
            .fun<static_cast<int32_t(RefCounted::*)()const>(&RefCounted::get_reference_count)>("get_reference_count")
;}