#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/world3d.hpp>

using namespace godot;

void register_classes_World3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<World3D>("World3D")
           .constructor<>()
           .property<World3D::get_environment, World3D::set_environment>("environment")
           .property<World3D::get_fallback_environment, World3D::set_fallback_environment>("fallback_environment")
           .property<World3D::get_camera_attributes, World3D::set_camera_attributes>("camera_attributes")
           .property<World3D::get_space>("space")
           .property<World3D::get_navigation_map>("navigation_map")
           .property<World3D::get_scenario>("scenario")
           .property<World3D::get_direct_space_state>("direct_space_state")
;}