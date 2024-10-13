
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/quaternion.hpp>

using namespace godot;

static void quaternion_class_finalizer(JSRuntime *rt, JSValue val) {
	Quaternion *quaternion = static_cast<Quaternion *>(JS_GetOpaque(val, Quaternion::__class_id));
	if (quaternion)
		memfree(quaternion);
}

static JSClassDef quaternion_class_def = {
	"Quaternion",
	.finalizer = quaternion_class_finalizer
};

static JSValue quaternion_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Quaternion *quaternion_class;
	JSValue obj = JS_NewObjectClass(ctx, Quaternion::__class_id);
	if (JS_IsException(obj))
		return obj;
	quaternion_class = memnew(Quaternion);
	if (!quaternion_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, quaternion_class);
	return obj;
}

void define_quaternion_property(JSContext *ctx, JSValue obj) {
}

static int js_quaternion_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Quaternion::__class_id);
	classes["Quaternion"] = Quaternion::__class_id;
	class_id_list.insert(Quaternion::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Quaternion::__class_id, &quaternion_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Quaternion::__class_id, proto);
	define_quaternion_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, quaternion_class_constructor, "Quaternion", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Quaternion", ctor);

	return 0;
}

JSModuleDef *_js_init_quaternion_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_quaternion_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Quaternion");
	return m;
}

JSModuleDef *js_init_quaternion_module(JSContext *ctx) {
	return _js_init_quaternion_module(ctx, "godot/classes/quaternion");
}

void register_quaternion() {
	Quaternion::__init_js_class_id();
	js_init_quaternion_module(ctx);
}