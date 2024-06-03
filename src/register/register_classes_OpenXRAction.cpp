#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/open_xr_action.hpp>

using namespace godot;

void register_classes_OpenXRAction() {
    qjs::Context::Module &_module = _General;
    _module.class_<OpenXRAction>("OpenXRAction")
           .constructor<>()
           .property<OpenXRAction::get_localized_name, OpenXRAction::set_localized_name>("localized_name")
           .property<OpenXRAction::get_action_type, OpenXRAction::set_action_type>("action_type")
           .property<OpenXRAction::get_toplevel_paths, OpenXRAction::set_toplevel_paths>("toplevel_paths")
;}