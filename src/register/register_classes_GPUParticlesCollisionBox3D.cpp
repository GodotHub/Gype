#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_GPUParticlesCollisionBox3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<GPUParticlesCollisionBox3D>("GPUParticlesCollisionBox3D")
           .constructor<>()
           .property<GPUParticlesCollisionBox3D::get_size, GPUParticlesCollisionBox3D::set_size>("size")
;}