
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/aabb.hpp>

using namespace godot;

static void aabb_class_finalizer(JSRuntime *rt, JSValue val) {
	AABB *aabb = static_cast<AABB *>(JS_GetOpaque(val, AABB::__class_id));
	if (aabb)
		memfree(aabb);
}

static JSClassDef aabb_class_def = {
	"AABB",
	.finalizer = aabb_class_finalizer
};

static JSValue aabb_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AABB *aabb_class;
	JSValue obj = JS_NewObjectClass(ctx, AABB::__class_id);
	if (JS_IsException(obj))
		return obj;
	aabb_class = memnew(AABB);
	if (!aabb_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, aabb_class);
	return obj;
}

void define_aabb_property(JSContext *ctx, JSValue obj) {
}

static int js_aabb_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AABB::__class_id);
	classes["AABB"] = AABB::__class_id;
	class_id_list.insert(AABB::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AABB::__class_id, &aabb_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, AABB::__class_id, proto);
	define_aabb_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, aabb_class_constructor, "AABB", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AABB", ctor);

	return 0;
}

JSModuleDef *_js_init_aabb_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_aabb_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AABB");
	return m;
}

JSModuleDef *js_init_aabb_module(JSContext *ctx) {
	return _js_init_aabb_module(ctx, "godot/classes/aabb");
}

void register_aabb() {
	AABB::__init_js_class_id();
	js_init_aabb_module(ctx);
}