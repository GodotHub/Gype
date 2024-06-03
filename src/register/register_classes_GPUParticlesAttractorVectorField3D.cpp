#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_GPUParticlesAttractorVectorField3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<GPUParticlesAttractorVectorField3D>("GPUParticlesAttractorVectorField3D")
           .constructor<>()
           .property<GPUParticlesAttractorVectorField3D::get_size, GPUParticlesAttractorVectorField3D::set_size>("size")
           .property<GPUParticlesAttractorVectorField3D::get_texture, GPUParticlesAttractorVectorField3D::set_texture>("texture")
;}