
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/vector3i.hpp>

using namespace godot;

static void vector3i_class_finalizer(JSRuntime *rt, JSValue val) {
	Vector3i *vector3i = static_cast<Vector3i *>(JS_GetOpaque(val, Vector3i::__class_id));
	if (vector3i)
		memfree(vector3i);
}

static JSClassDef vector3i_class_def = {
	"Vector3i",
	.finalizer = vector3i_class_finalizer
};

static JSValue vector3i_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Vector3i *vector3i_class;
	JSValue obj = JS_NewObjectClass(ctx, Vector3i::__class_id);
	if (JS_IsException(obj))
		return obj;
	vector3i_class = memnew(Vector3i);
	if (!vector3i_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, vector3i_class);
	return obj;
}

void define_vector3i_property(JSContext *ctx, JSValue obj) {
}

static int js_vector3i_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Vector3i::__class_id);
	classes["Vector3i"] = Vector3i::__class_id;
	class_id_list.insert(Vector3i::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Vector3i::__class_id, &vector3i_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Vector3i::__class_id, proto);
	define_vector3i_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, vector3i_class_constructor, "Vector3i", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Vector3i", ctor);

	return 0;
}

JSModuleDef *_js_init_vector3i_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_vector3i_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Vector3i");
	return m;
}

JSModuleDef *js_init_vector3i_module(JSContext *ctx) {
	return _js_init_vector3i_module(ctx, "godot/classes/vector3i");
}

void register_vector3i() {
	Vector3i::__init_js_class_id();
	js_init_vector3i_module(ctx);
}