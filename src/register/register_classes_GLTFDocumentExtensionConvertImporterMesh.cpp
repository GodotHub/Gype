#include <godot_cpp/classes/gltf_document_extension_convert_importer_mesh.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFDocumentExtensionConvertImporterMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFDocumentExtensionConvertImporterMesh>("GLTFDocumentExtensionConvertImporterMesh")
			.constructor<>();
}