#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/curve_xyz_texture.hpp>

using namespace godot;

void register_classes_CurveXYZTexture() {
    qjs::Context::Module &_module = _General;
    _module.class_<CurveXYZTexture>("CurveXYZTexture")
           .constructor<>()
           .property<CurveXYZTexture::get_width, CurveXYZTexture::set_width>("width")
           .property<CurveXYZTexture::get_curve_x, CurveXYZTexture::set_curve_x>("curve_x")
           .property<CurveXYZTexture::get_curve_y, CurveXYZTexture::set_curve_y>("curve_y")
           .property<CurveXYZTexture::get_curve_z, CurveXYZTexture::set_curve_z>("curve_z")
;}