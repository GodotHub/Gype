#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/array_occluder3d.hpp>

using namespace godot;

void register_classes_ArrayOccluder3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<ArrayOccluder3D>("ArrayOccluder3D")
           .constructor<>()
           .property<ArrayOccluder3D::get_vertices, ArrayOccluder3D::set_vertices>("vertices")
           .property<ArrayOccluder3D::get_indices, ArrayOccluder3D::set_indices>("indices")
		    .fun<static_cast<void(ArrayOccluder3D::*)(const PackedVector3Array &,const PackedInt32Array &)>(&ArrayOccluder3D::set_arrays)>("set_arrays")
;}