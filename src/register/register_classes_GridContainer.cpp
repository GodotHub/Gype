#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/grid_container.hpp>

using namespace godot;

void register_classes_GridContainer() {
    qjs::Context::Module &_module = _Control;
    _module.class_<GridContainer>("GridContainer")
           .constructor<>()
           .property<GridContainer::get_columns, GridContainer::set_columns>("columns")
;}