#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_document_extension.hpp>

using namespace godot;

void register_classes_GLTFDocumentExtensionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFDocumentExtension>>("GLTFDocumentExtensionRef").constructor<GLTFDocumentExtension *>();
}