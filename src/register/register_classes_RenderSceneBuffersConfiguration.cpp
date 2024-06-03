#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/render_scene_buffers_configuration.hpp>

using namespace godot;

void register_classes_RenderSceneBuffersConfiguration() {
    qjs::Context::Module &_module = _General;
    _module.class_<RenderSceneBuffersConfiguration>("RenderSceneBuffersConfiguration")
           .constructor<>()
           .property<RenderSceneBuffersConfiguration::get_render_target, RenderSceneBuffersConfiguration::set_render_target>("render_target")
           .property<RenderSceneBuffersConfiguration::get_internal_size, RenderSceneBuffersConfiguration::set_internal_size>("internal_size")
           .property<RenderSceneBuffersConfiguration::get_target_size, RenderSceneBuffersConfiguration::set_target_size>("target_size")
           .property<RenderSceneBuffersConfiguration::get_view_count, RenderSceneBuffersConfiguration::set_view_count>("view_count")
           .property<RenderSceneBuffersConfiguration::get_scaling_3d_mode, RenderSceneBuffersConfiguration::set_scaling_3d_mode>("scaling_3d_mode")
           .property<RenderSceneBuffersConfiguration::get_msaa_3d, RenderSceneBuffersConfiguration::set_msaa_3d>("msaa_3d")
           .property<RenderSceneBuffersConfiguration::get_screen_space_aa, RenderSceneBuffersConfiguration::set_screen_space_aa>("screen_space_aa")
           .property<RenderSceneBuffersConfiguration::get_fsr_sharpness, RenderSceneBuffersConfiguration::set_fsr_sharpness>("fsr_sharpness")
           .property<RenderSceneBuffersConfiguration::get_texture_mipmap_bias, RenderSceneBuffersConfiguration::set_texture_mipmap_bias>("texture_mipmap_bias")
;}