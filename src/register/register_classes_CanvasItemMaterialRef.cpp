#include "register/register_classes.h"
#include <godot_cpp/classes/canvas_item_material.hpp>

using namespace godot;

void register_classes_CanvasItemMaterialRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CanvasItemMaterial>>("CanvasItemMaterialRef").constructor<CanvasItemMaterial *>();
}