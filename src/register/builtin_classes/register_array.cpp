
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/array.hpp>

using namespace godot;

static void array_class_finalizer(JSRuntime *rt, JSValue val) {
	Array *array = static_cast<Array *>(JS_GetOpaque(val, Array::__class_id));
	if (array)
		memfree(array);
}

static JSClassDef array_class_def = {
	"Array",
	.finalizer = array_class_finalizer
};

static JSValue array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Array *array_class;
	JSValue obj = JS_NewObjectClass(ctx, Array::__class_id);
	if (JS_IsException(obj))
		return obj;
	array_class = memnew(Array);
	if (!array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, array_class);
	return obj;
}

void define_array_property(JSContext *ctx, JSValue obj) {
}

static int js_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Array::__class_id);
	classes["Array"] = Array::__class_id;
	class_id_list.insert(Array::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Array::__class_id, &array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Array::__class_id, proto);
	define_array_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, array_class_constructor, "Array", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Array", ctor);

	return 0;
}

JSModuleDef *_js_init_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Array");
	return m;
}

JSModuleDef *js_init_array_module(JSContext *ctx) {
	return _js_init_array_module(ctx, "godot/classes/array");
}

void register_array() {
	Array::__init_js_class_id();
	js_init_array_module(ctx);
}