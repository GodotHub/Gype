#include <godot_cpp/classes/visible_on_screen_enabler2d.hpp>
#include <godot_cpp/classes/visible_on_screen_notifier2d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VisibleOnScreenEnabler2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<VisibleOnScreenEnabler2D>("VisibleOnScreenEnabler2D")
            .constructor<>()
            .base<VisibleOnScreenNotifier2D>()
            .property<static_cast<VisibleOnScreenEnabler2D::EnableMode(VisibleOnScreenEnabler2D::*)()>(&VisibleOnScreenEnabler2D::get_enable_mode),static_cast<void(VisibleOnScreenEnabler2D::*)(VisibleOnScreenEnabler2D::EnableMode)>(&VisibleOnScreenEnabler2D::set_enable_mode)>("enable_mode")
            .property<static_cast<NodePath(VisibleOnScreenEnabler2D::*)()>(&VisibleOnScreenEnabler2D::get_enable_node_path),static_cast<void(VisibleOnScreenEnabler2D::*)(const NodePath &)>(&VisibleOnScreenEnabler2D::set_enable_node_path)>("enable_node_path")
;    qjs::Value _EnableMode = context->newObject();
    _EnableMode["ENABLE_MODE_INHERIT"] = VisibleOnScreenEnabler2D::EnableMode::ENABLE_MODE_INHERIT;
    _EnableMode["ENABLE_MODE_ALWAYS"] = VisibleOnScreenEnabler2D::EnableMode::ENABLE_MODE_ALWAYS;
    _EnableMode["ENABLE_MODE_WHEN_PAUSED"] = VisibleOnScreenEnabler2D::EnableMode::ENABLE_MODE_WHEN_PAUSED;
    _module.add("EnableMode", std::move(_EnableMode));
}