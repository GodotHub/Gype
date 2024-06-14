#include <godot_cpp/classes/render_data_rd.hpp>
#include <godot_cpp/classes/render_data.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RenderDataRD() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RenderDataRD>("RenderDataRD")
            .constructor<>()
            .base<RenderData>()
;}