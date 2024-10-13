
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/vector4.hpp>

using namespace godot;

static void vector4_class_finalizer(JSRuntime *rt, JSValue val) {
	Vector4 *vector4 = static_cast<Vector4 *>(JS_GetOpaque(val, Vector4::__class_id));
	if (vector4)
		memfree(vector4);
}

static JSClassDef vector4_class_def = {
	"Vector4",
	.finalizer = vector4_class_finalizer
};

static JSValue vector4_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Vector4 *vector4_class;
	JSValue obj = JS_NewObjectClass(ctx, Vector4::__class_id);
	if (JS_IsException(obj))
		return obj;
	vector4_class = memnew(Vector4);
	if (!vector4_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, vector4_class);
	return obj;
}

void define_vector4_property(JSContext *ctx, JSValue obj) {
}

static int js_vector4_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Vector4::__class_id);
	classes["Vector4"] = Vector4::__class_id;
	class_id_list.insert(Vector4::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Vector4::__class_id, &vector4_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Vector4::__class_id, proto);
	define_vector4_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, vector4_class_constructor, "Vector4", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Vector4", ctor);

	return 0;
}

JSModuleDef *_js_init_vector4_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_vector4_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Vector4");
	return m;
}

JSModuleDef *js_init_vector4_module(JSContext *ctx) {
	return _js_init_vector4_module(ctx, "godot/classes/vector4");
}

void register_vector4() {
	Vector4::__init_js_class_id();
	js_init_vector4_module(ctx);
}