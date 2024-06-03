#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gltf_animation.hpp>

using namespace godot;

void register_classes_GLTFAnimation() {
    qjs::Context::Module &_module = _General;
    _module.class_<GLTFAnimation>("GLTFAnimation")
           .constructor<>()
           .property<GLTFAnimation::get_loop, GLTFAnimation::set_loop>("loop")
;}