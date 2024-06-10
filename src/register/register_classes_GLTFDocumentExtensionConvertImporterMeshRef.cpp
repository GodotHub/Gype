#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_document_extension_convert_importer_mesh.hpp>

using namespace godot;

void register_classes_GLTFDocumentExtensionConvertImporterMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFDocumentExtensionConvertImporterMesh>>("GLTFDocumentExtensionConvertImporterMeshRef").constructor<GLTFDocumentExtensionConvertImporterMesh *>();
}