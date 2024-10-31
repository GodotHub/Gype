
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gltf_document_extension_convert_importer_mesh.hpp>
#include <godot_cpp/classes/gltf_document_extension.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_document_extension_convert_importer_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gltf_document_extension_convert_importer_mesh_class_def = {
	"GLTFDocumentExtensionConvertImporterMesh",
	.finalizer = gltf_document_extension_convert_importer_mesh_class_finalizer
};

static JSValue gltf_document_extension_convert_importer_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFDocumentExtensionConvertImporterMesh::__class_id);
	if (JS_IsException(obj))
		return obj;

	GLTFDocumentExtensionConvertImporterMesh *gltf_document_extension_convert_importer_mesh_class;
	if (argc == 1) 
		gltf_document_extension_convert_importer_mesh_class = static_cast<GLTFDocumentExtensionConvertImporterMesh *>(static_cast<Object *>(Variant(*argv)));
	else 
		gltf_document_extension_convert_importer_mesh_class = memnew(GLTFDocumentExtensionConvertImporterMesh);
	if (!gltf_document_extension_convert_importer_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_document_extension_convert_importer_mesh_class);	
	return obj;
}

static void define_gltf_document_extension_convert_importer_mesh_property(JSContext *ctx, JSValue proto) {
	
}

static void define_gltf_document_extension_convert_importer_mesh_enum(JSContext *ctx, JSValue proto) {
}

static int js_gltf_document_extension_convert_importer_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GLTFDocumentExtensionConvertImporterMesh::__class_id);
	classes["GLTFDocumentExtensionConvertImporterMesh"] = GLTFDocumentExtensionConvertImporterMesh::__class_id;
	class_id_list.insert(GLTFDocumentExtensionConvertImporterMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFDocumentExtensionConvertImporterMesh::__class_id, &gltf_document_extension_convert_importer_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFDocumentExtensionConvertImporterMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GLTFDocumentExtension::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFDocumentExtensionConvertImporterMesh::__class_id, proto);

	define_gltf_document_extension_convert_importer_mesh_property(ctx, proto);
	define_gltf_document_extension_convert_importer_mesh_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, gltf_document_extension_convert_importer_mesh_class_constructor, "GLTFDocumentExtensionConvertImporterMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GLTFDocumentExtensionConvertImporterMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_document_extension_convert_importer_mesh_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/gltf_document_extension';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_document_extension_convert_importer_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFDocumentExtensionConvertImporterMesh");
	return m;
}

JSModuleDef *js_init_gltf_document_extension_convert_importer_mesh_module(JSContext *ctx) {
	return _js_init_gltf_document_extension_convert_importer_mesh_module(ctx, "@godot/classes/gltf_document_extension_convert_importer_mesh");
}

void register_gltf_document_extension_convert_importer_mesh() {
	GLTFDocumentExtensionConvertImporterMesh::__init_js_class_id();
	js_init_gltf_document_extension_convert_importer_mesh_module(ctx);
}