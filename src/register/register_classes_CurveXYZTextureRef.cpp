#include "register/register_classes.h"
#include <godot_cpp/classes/curve_xyz_texture.hpp>

using namespace godot;

void register_classes_CurveXYZTextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CurveXYZTexture>>("CurveXYZTextureRef").constructor<CurveXYZTexture *>();
}