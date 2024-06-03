#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/segment_shape2d.hpp>

using namespace godot;

void register_classes_SegmentShape2D() {
    qjs::Context::Module &_module = _General;
    _module.class_<SegmentShape2D>("SegmentShape2D")
           .constructor<>()
           .property<SegmentShape2D::get_a, SegmentShape2D::set_a>("a")
           .property<SegmentShape2D::get_b, SegmentShape2D::set_b>("b")
;}