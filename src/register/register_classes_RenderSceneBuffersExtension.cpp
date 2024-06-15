#include <godot_cpp/classes/render_scene_buffers_extension.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/render_scene_buffers_configuration.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RenderSceneBuffersExtension() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RenderSceneBuffersExtension>("RenderSceneBuffersExtension")
            .constructor<>()
            .base<RenderSceneBuffers>()
            .fun<static_cast<void(RenderSceneBuffersExtension::*)(const Ref<RenderSceneBuffersConfiguration> &)>(&RenderSceneBuffersExtension::_configure)>("_configure")
            .fun<static_cast<void(RenderSceneBuffersExtension::*)(double)>(&RenderSceneBuffersExtension::_set_fsr_sharpness)>("_set_fsr_sharpness")
            .fun<static_cast<void(RenderSceneBuffersExtension::*)(double)>(&RenderSceneBuffersExtension::_set_texture_mipmap_bias)>("_set_texture_mipmap_bias")
            .fun<static_cast<void(RenderSceneBuffersExtension::*)(bool)>(&RenderSceneBuffersExtension::_set_use_debanding)>("_set_use_debanding")
;}