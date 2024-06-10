#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_node.hpp>

using namespace godot;

void register_classes_GLTFNodeRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFNode>>("GLTFNodeRef").constructor<GLTFNode *>();
}