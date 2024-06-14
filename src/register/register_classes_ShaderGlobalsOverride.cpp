#include <godot_cpp/classes/shader_globals_override.hpp>
#include <godot_cpp/classes/node.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ShaderGlobalsOverride() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<ShaderGlobalsOverride>("ShaderGlobalsOverride")
            .constructor<>()
            .base<Node>()
;}