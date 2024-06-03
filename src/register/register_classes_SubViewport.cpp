#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/sub_viewport.hpp>

using namespace godot;

void register_classes_SubViewport() {
    qjs::Context::Module &_module = _Node;
    _module.class_<SubViewport>("SubViewport")
           .constructor<>()
           .property<SubViewport::get_size, SubViewport::set_size>("size")
           .property<SubViewport::get_size_2d_override, SubViewport::set_size_2d_override>("size_2d_override")
           .property<SubViewport::is_size_2d_override_stretch_enabled, SubViewport::set_size_2d_override_stretch>("size_2d_override_stretch")
           .property<SubViewport::get_clear_mode, SubViewport::set_clear_mode>("render_target_clear_mode")
           .property<SubViewport::get_update_mode, SubViewport::set_update_mode>("render_target_update_mode")
;}