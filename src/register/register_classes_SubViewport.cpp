#include <godot_cpp/classes/sub_viewport.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SubViewport() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<SubViewport>("SubViewport")
            .constructor<>()
            .base<Viewport>()
            .property<static_cast<Vector2i(SubViewport::*)()const>(&SubViewport::get_size),static_cast<void(SubViewport::*)(const Vector2i &)>(&SubViewport::set_size)>("size")
            .property<static_cast<Vector2i(SubViewport::*)()const>(&SubViewport::get_size_2d_override),static_cast<void(SubViewport::*)(const Vector2i &)>(&SubViewport::set_size_2d_override)>("size_2d_override")
            .property<static_cast<bool(SubViewport::*)()const>(&SubViewport::is_size_2d_override_stretch_enabled),static_cast<void(SubViewport::*)(bool)>(&SubViewport::set_size_2d_override_stretch)>("size_2d_override_stretch")
            .property<static_cast<SubViewport::ClearMode(SubViewport::*)()const>(&SubViewport::get_clear_mode),static_cast<void(SubViewport::*)(SubViewport::ClearMode)>(&SubViewport::set_clear_mode)>("render_target_clear_mode")
            .property<static_cast<SubViewport::UpdateMode(SubViewport::*)()const>(&SubViewport::get_update_mode),static_cast<void(SubViewport::*)(SubViewport::UpdateMode)>(&SubViewport::set_update_mode)>("render_target_update_mode")
;    qjs::Value _ClearMode = context->newObject();
    _ClearMode["CLEAR_MODE_ALWAYS"] = SubViewport::ClearMode::CLEAR_MODE_ALWAYS;
    _ClearMode["CLEAR_MODE_NEVER"] = SubViewport::ClearMode::CLEAR_MODE_NEVER;
    _ClearMode["CLEAR_MODE_ONCE"] = SubViewport::ClearMode::CLEAR_MODE_ONCE;
    _module.add("ClearMode", std::move(_ClearMode));
    qjs::Value _UpdateMode = context->newObject();
    _UpdateMode["UPDATE_DISABLED"] = SubViewport::UpdateMode::UPDATE_DISABLED;
    _UpdateMode["UPDATE_ONCE"] = SubViewport::UpdateMode::UPDATE_ONCE;
    _UpdateMode["UPDATE_WHEN_VISIBLE"] = SubViewport::UpdateMode::UPDATE_WHEN_VISIBLE;
    _UpdateMode["UPDATE_WHEN_PARENT_VISIBLE"] = SubViewport::UpdateMode::UPDATE_WHEN_PARENT_VISIBLE;
    _UpdateMode["UPDATE_ALWAYS"] = SubViewport::UpdateMode::UPDATE_ALWAYS;
    _module.add("UpdateMode", std::move(_UpdateMode));
}