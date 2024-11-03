
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gltf_document.hpp>
#include <godot_cpp/classes/fbx_document.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void fbx_document_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef fbx_document_class_def = {
	"FBXDocument",
	.finalizer = fbx_document_class_finalizer
};

static JSValue fbx_document_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, FBXDocument::__class_id);
	if (JS_IsException(obj))
		return obj;

	FBXDocument *fbx_document_class;
	if (argc == 1) 
		fbx_document_class = static_cast<FBXDocument *>(Variant(*argv).operator Object *());
	else 
		fbx_document_class = memnew(FBXDocument);
	if (!fbx_document_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, fbx_document_class);
	return obj;
}

static void define_fbx_document_property(JSContext *ctx, JSValue proto) {
	
}

static void define_fbx_document_enum(JSContext *ctx, JSValue proto) {
}

static int js_fbx_document_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["FBXDocument"] = FBXDocument::__class_id;
	class_id_list.insert(FBXDocument::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), FBXDocument::__class_id, &fbx_document_class_def);

	JSValue proto = JS_NewObjectClass(ctx, FBXDocument::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GLTFDocument::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FBXDocument::__class_id, proto);

	define_fbx_document_property(ctx, proto);
	define_fbx_document_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, fbx_document_class_constructor, "FBXDocument", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "FBXDocument", ctor);
	constructors[FBXDocument::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_fbx_document_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/gltf_document';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_fbx_document_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FBXDocument");
	return m;
}

JSModuleDef *js_init_fbx_document_module(JSContext *ctx) {
	return _js_init_fbx_document_module(ctx, "@godot/classes/fbx_document");
}

void register_fbx_document() {
	FBXDocument::__init_js_class_id();
	js_init_fbx_document_module(ctx);
}