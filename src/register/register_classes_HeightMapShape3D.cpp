#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/height_map_shape3d.hpp>

using namespace godot;

void register_classes_HeightMapShape3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<HeightMapShape3D>("HeightMapShape3D")
           .constructor<>()
           .property<HeightMapShape3D::get_map_width, HeightMapShape3D::set_map_width>("map_width")
           .property<HeightMapShape3D::get_map_depth, HeightMapShape3D::set_map_depth>("map_depth")
           .property<HeightMapShape3D::get_map_data, HeightMapShape3D::set_map_data>("map_data")
;}