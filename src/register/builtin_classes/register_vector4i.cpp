
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/vector4i.hpp>

using namespace godot;

static void vector4i_class_finalizer(JSRuntime *rt, JSValue val) {
	Vector4i *vector4i = static_cast<Vector4i *>(JS_GetOpaque(val, Vector4i::__class_id));
	if (vector4i)
		memfree(vector4i);
}

static JSClassDef vector4i_class_def = {
	"Vector4i",
	.finalizer = vector4i_class_finalizer
};

static JSValue vector4i_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Vector4i *vector4i_class;
	JSValue obj = JS_NewObjectClass(ctx, Vector4i::__class_id);
	if (JS_IsException(obj))
		return obj;
	vector4i_class = memnew(Vector4i);
	if (!vector4i_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, vector4i_class);
	return obj;
}

void define_vector4i_property(JSContext *ctx, JSValue obj) {
}

static int js_vector4i_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Vector4i::__class_id);
	classes["Vector4i"] = Vector4i::__class_id;
	class_id_list.insert(Vector4i::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Vector4i::__class_id, &vector4i_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Vector4i::__class_id, proto);
	define_vector4i_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, vector4i_class_constructor, "Vector4i", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Vector4i", ctor);

	return 0;
}

JSModuleDef *_js_init_vector4i_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_vector4i_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Vector4i");
	return m;
}

JSModuleDef *js_init_vector4i_module(JSContext *ctx) {
	return _js_init_vector4i_module(ctx, "godot/classes/vector4i");
}

void register_vector4i() {
	Vector4i::__init_js_class_id();
	js_init_vector4i_module(ctx);
}