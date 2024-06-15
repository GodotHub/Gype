#include <godot_cpp/classes/visible_on_screen_enabler3d.hpp>
#include <godot_cpp/classes/visible_on_screen_notifier3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VisibleOnScreenEnabler3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<VisibleOnScreenEnabler3D>("VisibleOnScreenEnabler3D")
            .constructor<>()
            .base<VisibleOnScreenNotifier3D>()
            .property<static_cast<VisibleOnScreenEnabler3D::EnableMode(VisibleOnScreenEnabler3D::*)()>(&VisibleOnScreenEnabler3D::get_enable_mode),static_cast<void(VisibleOnScreenEnabler3D::*)(VisibleOnScreenEnabler3D::EnableMode)>(&VisibleOnScreenEnabler3D::set_enable_mode)>("enable_mode")
            .property<static_cast<NodePath(VisibleOnScreenEnabler3D::*)()>(&VisibleOnScreenEnabler3D::get_enable_node_path),static_cast<void(VisibleOnScreenEnabler3D::*)(const NodePath &)>(&VisibleOnScreenEnabler3D::set_enable_node_path)>("enable_node_path")
;    qjs::Value _EnableMode = context->newObject();
    _EnableMode["ENABLE_MODE_INHERIT"] = VisibleOnScreenEnabler3D::EnableMode::ENABLE_MODE_INHERIT;
    _EnableMode["ENABLE_MODE_ALWAYS"] = VisibleOnScreenEnabler3D::EnableMode::ENABLE_MODE_ALWAYS;
    _EnableMode["ENABLE_MODE_WHEN_PAUSED"] = VisibleOnScreenEnabler3D::EnableMode::ENABLE_MODE_WHEN_PAUSED;
    _module.add("EnableMode", std::move(_EnableMode));
}