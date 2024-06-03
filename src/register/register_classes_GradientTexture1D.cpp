#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gradient_texture1d.hpp>

using namespace godot;

void register_classes_GradientTexture1D() {
    qjs::Context::Module &_module = _General;
    _module.class_<GradientTexture1D>("GradientTexture1D")
           .constructor<>()
           .property<GradientTexture1D::get_gradient, GradientTexture1D::set_gradient>("gradient")
           .property<GradientTexture1D::get_width, GradientTexture1D::set_width>("width")
           .property<GradientTexture1D::is_using_hdr, GradientTexture1D::set_use_hdr>("use_hdr")
;}