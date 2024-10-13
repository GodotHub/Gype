
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/packed_vector4_array.hpp>

using namespace godot;

static void packed_vector4_array_class_finalizer(JSRuntime *rt, JSValue val) {
	PackedVector4Array *packed_vector4_array = static_cast<PackedVector4Array *>(JS_GetOpaque(val, PackedVector4Array::__class_id));
	if (packed_vector4_array)
		memfree(packed_vector4_array);
}

static JSClassDef packed_vector4_array_class_def = {
	"PackedVector4Array",
	.finalizer = packed_vector4_array_class_finalizer
};

static JSValue packed_vector4_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PackedVector4Array *packed_vector4_array_class;
	JSValue obj = JS_NewObjectClass(ctx, PackedVector4Array::__class_id);
	if (JS_IsException(obj))
		return obj;
	packed_vector4_array_class = memnew(PackedVector4Array);
	if (!packed_vector4_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packed_vector4_array_class);
	return obj;
}

void define_packed_vector4_array_property(JSContext *ctx, JSValue obj) {
}

static int js_packed_vector4_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PackedVector4Array::__class_id);
	classes["PackedVector4Array"] = PackedVector4Array::__class_id;
	class_id_list.insert(PackedVector4Array::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PackedVector4Array::__class_id, &packed_vector4_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, PackedVector4Array::__class_id, proto);
	define_packed_vector4_array_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, packed_vector4_array_class_constructor, "PackedVector4Array", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PackedVector4Array", ctor);

	return 0;
}

JSModuleDef *_js_init_packed_vector4_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packed_vector4_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PackedVector4Array");
	return m;
}

JSModuleDef *js_init_packed_vector4_array_module(JSContext *ctx) {
	return _js_init_packed_vector4_array_module(ctx, "godot/classes/packed_vector4_array");
}

void register_packed_vector4_array() {
	PackedVector4Array::__init_js_class_id();
	js_init_packed_vector4_array_module(ctx);
}