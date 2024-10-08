
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/gltf_document.hpp>
#include <godot_cpp/classes/fbx_document.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void fbx_document_class_finalizer(JSRuntime *rt, JSValue val) {
	FBXDocument *fbx_document = static_cast<FBXDocument *>(JS_GetOpaque(val, FBXDocument::__class_id));
	if (fbx_document)
		FBXDocument::free(nullptr, fbx_document);
}

static JSClassDef fbx_document_class_def = {
	"FBXDocument",
	.finalizer = fbx_document_class_finalizer
};

static JSValue fbx_document_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	FBXDocument *fbx_document_class;
	JSValue obj = JS_NewObjectClass(ctx, FBXDocument::__class_id);
	if (JS_IsException(obj))
		return obj;
	fbx_document_class = memnew(FBXDocument);
	if (!fbx_document_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, fbx_document_class);
	return obj;
}

static int js_fbx_document_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&FBXDocument::__class_id);
	classes["FBXDocument"] = FBXDocument::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), FBXDocument::__class_id, &fbx_document_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GLTFDocument::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FBXDocument::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, fbx_document_class_constructor, "FBXDocument", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "FBXDocument", ctor);

	return 0;
}

JSModuleDef *_js_init_fbx_document_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_fbx_document_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FBXDocument");
	return m;
}

JSModuleDef *js_init_fbx_document_module(JSContext *ctx) {
	return _js_init_fbx_document_module(ctx, "godot/classes/fbx_document");
}

void register_fbx_document() {
	js_init_fbx_document_module(ctx);
}