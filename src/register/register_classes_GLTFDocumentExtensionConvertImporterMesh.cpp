#include <godot_cpp/classes/gltf_document_extension_convert_importer_mesh.hpp>
#include <godot_cpp/classes/gltf_document_extension.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFDocumentExtensionConvertImporterMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFDocumentExtensionConvertImporterMesh>("GLTFDocumentExtensionConvertImporterMesh")
            .constructor<>()
            .base<GLTFDocumentExtension>()
;}