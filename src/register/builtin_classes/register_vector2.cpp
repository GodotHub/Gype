
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/vector2.hpp>

using namespace godot;

static void vector2_class_finalizer(JSRuntime *rt, JSValue val) {
	Vector2 *vector2 = static_cast<Vector2 *>(JS_GetOpaque(val, Vector2::__class_id));
	if (vector2)
		memfree(vector2);
}

static JSClassDef vector2_class_def = {
	"Vector2",
	.finalizer = vector2_class_finalizer
};

static JSValue vector2_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Vector2 *vector2_class;
	JSValue obj = JS_NewObjectClass(ctx, Vector2::__class_id);
	if (JS_IsException(obj))
		return obj;
	vector2_class = memnew(Vector2);
	if (!vector2_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, vector2_class);
	return obj;
}

void define_vector2_property(JSContext *ctx, JSValue obj) {
}

static int js_vector2_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Vector2::__class_id);
	classes["Vector2"] = Vector2::__class_id;
	class_id_list.insert(Vector2::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Vector2::__class_id, &vector2_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Vector2::__class_id, proto);
	define_vector2_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, vector2_class_constructor, "Vector2", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Vector2", ctor);

	return 0;
}

JSModuleDef *_js_init_vector2_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_vector2_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Vector2");
	return m;
}

JSModuleDef *js_init_vector2_module(JSContext *ctx) {
	return _js_init_vector2_module(ctx, "godot/classes/vector2");
}

void register_vector2() {
	Vector2::__init_js_class_id();
	js_init_vector2_module(ctx);
}