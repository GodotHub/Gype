#include "register/register_classes.h"
#include <godot_cpp/classes/curve_texture.hpp>

using namespace godot;

void register_classes_CurveTextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CurveTexture>>("CurveTextureRef").constructor<CurveTexture *>();
}