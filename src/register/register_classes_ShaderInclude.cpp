#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/shader_include.hpp>

using namespace godot;

void register_classes_ShaderInclude() {
    qjs::Context::Module &_module = _General;
    _module.class_<ShaderInclude>("ShaderInclude")
           .constructor<>()
           .property<ShaderInclude::get_code, ShaderInclude::set_code>("code")
;}