#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/reference_rect.hpp>

using namespace godot;

void register_classes_ReferenceRect() {
    qjs::Context::Module &_module = _Control;
    _module.class_<ReferenceRect>("ReferenceRect")
           .constructor<>()
           .property<ReferenceRect::get_border_color, ReferenceRect::set_border_color>("border_color")
           .property<ReferenceRect::get_border_width, ReferenceRect::set_border_width>("border_width")
           .property<ReferenceRect::get_editor_only, ReferenceRect::set_editor_only>("editor_only")
;}