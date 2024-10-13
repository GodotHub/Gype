
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/vector3.hpp>

using namespace godot;

static void vector3_class_finalizer(JSRuntime *rt, JSValue val) {
	Vector3 *vector3 = static_cast<Vector3 *>(JS_GetOpaque(val, Vector3::__class_id));
	if (vector3)
		memfree(vector3);
}

static JSClassDef vector3_class_def = {
	"Vector3",
	.finalizer = vector3_class_finalizer
};

static JSValue vector3_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Vector3 *vector3_class;
	JSValue obj = JS_NewObjectClass(ctx, Vector3::__class_id);
	if (JS_IsException(obj))
		return obj;
	vector3_class = memnew(Vector3);
	if (!vector3_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, vector3_class);
	return obj;
}

void define_vector3_property(JSContext *ctx, JSValue obj) {
}

static int js_vector3_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Vector3::__class_id);
	classes["Vector3"] = Vector3::__class_id;
	class_id_list.insert(Vector3::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Vector3::__class_id, &vector3_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Vector3::__class_id, proto);
	define_vector3_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, vector3_class_constructor, "Vector3", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Vector3", ctor);

	return 0;
}

JSModuleDef *_js_init_vector3_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_vector3_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Vector3");
	return m;
}

JSModuleDef *js_init_vector3_module(JSContext *ctx) {
	return _js_init_vector3_module(ctx, "godot/classes/vector3");
}

void register_vector3() {
	Vector3::__init_js_class_id();
	js_init_vector3_module(ctx);
}