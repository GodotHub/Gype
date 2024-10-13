
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/packed_float32_array.hpp>

using namespace godot;

static void packed_float32_array_class_finalizer(JSRuntime *rt, JSValue val) {
	PackedFloat32Array *packed_float32_array = static_cast<PackedFloat32Array *>(JS_GetOpaque(val, PackedFloat32Array::__class_id));
	if (packed_float32_array)
		memfree(packed_float32_array);
}

static JSClassDef packed_float32_array_class_def = {
	"PackedFloat32Array",
	.finalizer = packed_float32_array_class_finalizer
};

static JSValue packed_float32_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PackedFloat32Array *packed_float32_array_class;
	JSValue obj = JS_NewObjectClass(ctx, PackedFloat32Array::__class_id);
	if (JS_IsException(obj))
		return obj;
	packed_float32_array_class = memnew(PackedFloat32Array);
	if (!packed_float32_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packed_float32_array_class);
	return obj;
}

void define_packed_float32_array_property(JSContext *ctx, JSValue obj) {
}

static int js_packed_float32_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PackedFloat32Array::__class_id);
	classes["PackedFloat32Array"] = PackedFloat32Array::__class_id;
	class_id_list.insert(PackedFloat32Array::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PackedFloat32Array::__class_id, &packed_float32_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, PackedFloat32Array::__class_id, proto);
	define_packed_float32_array_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, packed_float32_array_class_constructor, "PackedFloat32Array", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PackedFloat32Array", ctor);

	return 0;
}

JSModuleDef *_js_init_packed_float32_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packed_float32_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PackedFloat32Array");
	return m;
}

JSModuleDef *js_init_packed_float32_array_module(JSContext *ctx) {
	return _js_init_packed_float32_array_module(ctx, "godot/classes/packed_float32_array");
}

void register_packed_float32_array() {
	PackedFloat32Array::__init_js_class_id();
	js_init_packed_float32_array_module(ctx);
}