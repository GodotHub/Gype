#include <godot_cpp/classes/compositor.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/compositor_effect.hpp>
#include <godot_cpp/classes/resource.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Compositor() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Compositor>("Compositor")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<TypedArray<CompositorEffect>(Compositor::*)()const>(&Compositor::get_compositor_effects),static_cast<void(Compositor::*)(const TypedArray<CompositorEffect> &)>(&Compositor::set_compositor_effects)>("compositor_effects")
;}