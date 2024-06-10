#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_spec_gloss.hpp>

using namespace godot;

void register_classes_GLTFSpecGlossRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFSpecGloss>>("GLTFSpecGlossRef").constructor<GLTFSpecGloss *>();
}