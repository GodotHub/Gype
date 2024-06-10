#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_document.hpp>

using namespace godot;

void register_classes_GLTFDocumentRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFDocument>>("GLTFDocumentRef").constructor<GLTFDocument *>();
}