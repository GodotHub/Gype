#include "register/register_classes.h"
#include <godot_cpp/classes/rd_texture_view.hpp>

using namespace godot;

void register_classes_RDTextureViewRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDTextureView>>("RDTextureViewRef").constructor<RDTextureView *>();
}