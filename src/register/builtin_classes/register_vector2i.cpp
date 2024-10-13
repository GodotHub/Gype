
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/vector2i.hpp>

using namespace godot;

static void vector2i_class_finalizer(JSRuntime *rt, JSValue val) {
	Vector2i *vector2i = static_cast<Vector2i *>(JS_GetOpaque(val, Vector2i::__class_id));
	if (vector2i)
		memfree(vector2i);
}

static JSClassDef vector2i_class_def = {
	"Vector2i",
	.finalizer = vector2i_class_finalizer
};

static JSValue vector2i_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Vector2i *vector2i_class;
	JSValue obj = JS_NewObjectClass(ctx, Vector2i::__class_id);
	if (JS_IsException(obj))
		return obj;
	vector2i_class = memnew(Vector2i);
	if (!vector2i_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, vector2i_class);
	return obj;
}

void define_vector2i_property(JSContext *ctx, JSValue obj) {
}

static int js_vector2i_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Vector2i::__class_id);
	classes["Vector2i"] = Vector2i::__class_id;
	class_id_list.insert(Vector2i::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Vector2i::__class_id, &vector2i_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Vector2i::__class_id, proto);
	define_vector2i_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, vector2i_class_constructor, "Vector2i", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Vector2i", ctor);

	return 0;
}

JSModuleDef *_js_init_vector2i_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_vector2i_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Vector2i");
	return m;
}

JSModuleDef *js_init_vector2i_module(JSContext *ctx) {
	return _js_init_vector2i_module(ctx, "godot/classes/vector2i");
}

void register_vector2i() {
	Vector2i::__init_js_class_id();
	js_init_vector2i_module(ctx);
}