#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/quad_occluder3d.hpp>

using namespace godot;

void register_classes_QuadOccluder3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<QuadOccluder3D>("QuadOccluder3D")
           .constructor<>()
           .property<QuadOccluder3D::get_size, QuadOccluder3D::set_size>("size")
;}