
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/gltf_document_extension.hpp>
#include <godot_cpp/classes/gltf_document_extension_convert_importer_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gltf_document_extension_convert_importer_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFDocumentExtensionConvertImporterMesh *gltf_document_extension_convert_importer_mesh = static_cast<GLTFDocumentExtensionConvertImporterMesh *>(JS_GetOpaque(val, GLTFDocumentExtensionConvertImporterMesh::__class_id));
	if (gltf_document_extension_convert_importer_mesh)
		GLTFDocumentExtensionConvertImporterMesh::free(nullptr, gltf_document_extension_convert_importer_mesh);
}

static JSClassDef gltf_document_extension_convert_importer_mesh_class_def = {
	"GLTFDocumentExtensionConvertImporterMesh",
	.finalizer = gltf_document_extension_convert_importer_mesh_class_finalizer
};

static JSValue gltf_document_extension_convert_importer_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFDocumentExtensionConvertImporterMesh *gltf_document_extension_convert_importer_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFDocumentExtensionConvertImporterMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_document_extension_convert_importer_mesh_class = memnew(GLTFDocumentExtensionConvertImporterMesh);
	if (!gltf_document_extension_convert_importer_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_document_extension_convert_importer_mesh_class);
	return obj;
}

static int js_gltf_document_extension_convert_importer_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFDocumentExtensionConvertImporterMesh::__class_id);
	classes["GLTFDocumentExtensionConvertImporterMesh"] = GLTFDocumentExtensionConvertImporterMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFDocumentExtensionConvertImporterMesh::__class_id, &gltf_document_extension_convert_importer_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GLTFDocumentExtension::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFDocumentExtensionConvertImporterMesh::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, gltf_document_extension_convert_importer_mesh_class_constructor, "GLTFDocumentExtensionConvertImporterMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GLTFDocumentExtensionConvertImporterMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_document_extension_convert_importer_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_document_extension_convert_importer_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFDocumentExtensionConvertImporterMesh");
	return m;
}

JSModuleDef *js_init_gltf_document_extension_convert_importer_mesh_module(JSContext *ctx) {
	return _js_init_gltf_document_extension_convert_importer_mesh_module(ctx, "godot/classes/gltf_document_extension_convert_importer_mesh");
}

void register_gltf_document_extension_convert_importer_mesh() {
	js_init_gltf_document_extension_convert_importer_mesh_module(ctx);
}