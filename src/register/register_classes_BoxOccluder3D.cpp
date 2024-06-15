#include <godot_cpp/classes/box_occluder3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/occluder3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_BoxOccluder3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<BoxOccluder3D>("BoxOccluder3D")
            .constructor<>()
            .base<Occluder3D>()
            .property<static_cast<Vector3(BoxOccluder3D::*)()const>(&BoxOccluder3D::get_size),static_cast<void(BoxOccluder3D::*)(const Vector3 &)>(&BoxOccluder3D::set_size)>("size")
;}