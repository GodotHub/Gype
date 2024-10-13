
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gltf_node.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/gltf_texture.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/gltf_document_extension.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_document_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFDocumentExtension *gltf_document_extension = static_cast<GLTFDocumentExtension *>(JS_GetOpaque(val, GLTFDocumentExtension::__class_id));
	if (gltf_document_extension)
		GLTFDocumentExtension::free(nullptr, gltf_document_extension);
}

static JSClassDef gltf_document_extension_class_def = {
	"GLTFDocumentExtension",
	.finalizer = gltf_document_extension_class_finalizer
};

static JSValue gltf_document_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFDocumentExtension *gltf_document_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFDocumentExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_document_extension_class = memnew(GLTFDocumentExtension);
	if (!gltf_document_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_document_extension_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_gltf_document_extension_property(JSContext *ctx, JSValue obj) {
}

static int js_gltf_document_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GLTFDocumentExtension::__class_id);
	classes["GLTFDocumentExtension"] = GLTFDocumentExtension::__class_id;
	class_id_list.insert(GLTFDocumentExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFDocumentExtension::__class_id, &gltf_document_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFDocumentExtension::__class_id, proto);
	define_gltf_document_extension_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, gltf_document_extension_class_constructor, "GLTFDocumentExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GLTFDocumentExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_document_extension_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_document_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFDocumentExtension");
	return m;
}

JSModuleDef *js_init_gltf_document_extension_module(JSContext *ctx) {
	return _js_init_gltf_document_extension_module(ctx, "godot/classes/gltf_document_extension");
}

void register_gltf_document_extension() {
	GLTFDocumentExtension::__init_js_class_id();
	js_init_gltf_document_extension_module(ctx);
}