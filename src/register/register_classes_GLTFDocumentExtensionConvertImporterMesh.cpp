#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gltf_document_extension_convert_importer_mesh.hpp>

using namespace godot;

void register_classes_GLTFDocumentExtensionConvertImporterMesh() {
    qjs::Context::Module &_module = _General;
    _module.class_<GLTFDocumentExtensionConvertImporterMesh>("GLTFDocumentExtensionConvertImporterMesh")
           .constructor<>()
;}