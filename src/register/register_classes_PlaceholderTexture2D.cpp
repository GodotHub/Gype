#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/placeholder_texture2d.hpp>

using namespace godot;

void register_classes_PlaceholderTexture2D() {
    qjs::Context::Module &_module = _General;
    _module.class_<PlaceholderTexture2D>("PlaceholderTexture2D")
           .constructor<>()
           .property<PlaceholderTexture2D::get_size, PlaceholderTexture2D::set_size>("size")
;}