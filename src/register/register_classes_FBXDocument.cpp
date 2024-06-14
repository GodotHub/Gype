#include <godot_cpp/classes/fbx_document.hpp>
#include <godot_cpp/classes/gltf_document.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_FBXDocument() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<FBXDocument>("FBXDocument")
            .constructor<>()
            .base<GLTFDocument>()
;}