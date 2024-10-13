
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/packed_int64_array.hpp>

using namespace godot;

static void packed_int64_array_class_finalizer(JSRuntime *rt, JSValue val) {
	PackedInt64Array *packed_int64_array = static_cast<PackedInt64Array *>(JS_GetOpaque(val, PackedInt64Array::__class_id));
	if (packed_int64_array)
		memfree(packed_int64_array);
}

static JSClassDef packed_int64_array_class_def = {
	"PackedInt64Array",
	.finalizer = packed_int64_array_class_finalizer
};

static JSValue packed_int64_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PackedInt64Array *packed_int64_array_class;
	JSValue obj = JS_NewObjectClass(ctx, PackedInt64Array::__class_id);
	if (JS_IsException(obj))
		return obj;
	packed_int64_array_class = memnew(PackedInt64Array);
	if (!packed_int64_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packed_int64_array_class);
	return obj;
}

void define_packed_int64_array_property(JSContext *ctx, JSValue obj) {
}

static int js_packed_int64_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PackedInt64Array::__class_id);
	classes["PackedInt64Array"] = PackedInt64Array::__class_id;
	class_id_list.insert(PackedInt64Array::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PackedInt64Array::__class_id, &packed_int64_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, PackedInt64Array::__class_id, proto);
	define_packed_int64_array_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, packed_int64_array_class_constructor, "PackedInt64Array", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PackedInt64Array", ctor);

	return 0;
}

JSModuleDef *_js_init_packed_int64_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packed_int64_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PackedInt64Array");
	return m;
}

JSModuleDef *js_init_packed_int64_array_module(JSContext *ctx) {
	return _js_init_packed_int64_array_module(ctx, "godot/classes/packed_int64_array");
}

void register_packed_int64_array() {
	PackedInt64Array::__init_js_class_id();
	js_init_packed_int64_array_module(ctx);
}