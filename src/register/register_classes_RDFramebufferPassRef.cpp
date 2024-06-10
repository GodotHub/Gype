#include "register/register_classes.h"
#include <godot_cpp/classes/rd_framebuffer_pass.hpp>

using namespace godot;

void register_classes_RDFramebufferPassRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDFramebufferPass>>("RDFramebufferPassRef").constructor<RDFramebufferPass *>();
}