
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/packed_vector2_array.hpp>

using namespace godot;

static void packed_vector2_array_class_finalizer(JSRuntime *rt, JSValue val) {
	PackedVector2Array *packed_vector2_array = static_cast<PackedVector2Array *>(JS_GetOpaque(val, PackedVector2Array::__class_id));
	if (packed_vector2_array)
		memfree(packed_vector2_array);
}

static JSClassDef packed_vector2_array_class_def = {
	"PackedVector2Array",
	.finalizer = packed_vector2_array_class_finalizer
};

static JSValue packed_vector2_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PackedVector2Array *packed_vector2_array_class;
	JSValue obj = JS_NewObjectClass(ctx, PackedVector2Array::__class_id);
	if (JS_IsException(obj))
		return obj;
	packed_vector2_array_class = memnew(PackedVector2Array);
	if (!packed_vector2_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packed_vector2_array_class);
	return obj;
}

void define_packed_vector2_array_property(JSContext *ctx, JSValue obj) {
}

static int js_packed_vector2_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PackedVector2Array::__class_id);
	classes["PackedVector2Array"] = PackedVector2Array::__class_id;
	class_id_list.insert(PackedVector2Array::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PackedVector2Array::__class_id, &packed_vector2_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, PackedVector2Array::__class_id, proto);
	define_packed_vector2_array_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, packed_vector2_array_class_constructor, "PackedVector2Array", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PackedVector2Array", ctor);

	return 0;
}

JSModuleDef *_js_init_packed_vector2_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packed_vector2_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PackedVector2Array");
	return m;
}

JSModuleDef *js_init_packed_vector2_array_module(JSContext *ctx) {
	return _js_init_packed_vector2_array_module(ctx, "godot/classes/packed_vector2_array");
}

void register_packed_vector2_array() {
	PackedVector2Array::__init_js_class_id();
	js_init_packed_vector2_array_module(ctx);
}