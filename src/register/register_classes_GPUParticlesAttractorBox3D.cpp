#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gpu_particles_attractor_box3d.hpp>

using namespace godot;

void register_classes_GPUParticlesAttractorBox3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<GPUParticlesAttractorBox3D>("GPUParticlesAttractorBox3D")
           .constructor<>()
           .property<GPUParticlesAttractorBox3D::get_size, GPUParticlesAttractorBox3D::set_size>("size")
;}