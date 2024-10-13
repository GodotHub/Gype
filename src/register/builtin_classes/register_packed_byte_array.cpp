
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/packed_byte_array.hpp>

using namespace godot;

static void packed_byte_array_class_finalizer(JSRuntime *rt, JSValue val) {
	PackedByteArray *packed_byte_array = static_cast<PackedByteArray *>(JS_GetOpaque(val, PackedByteArray::__class_id));
	if (packed_byte_array)
		memfree(packed_byte_array);
}

static JSClassDef packed_byte_array_class_def = {
	"PackedByteArray",
	.finalizer = packed_byte_array_class_finalizer
};

static JSValue packed_byte_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PackedByteArray *packed_byte_array_class;
	JSValue obj = JS_NewObjectClass(ctx, PackedByteArray::__class_id);
	if (JS_IsException(obj))
		return obj;
	packed_byte_array_class = memnew(PackedByteArray);
	if (!packed_byte_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packed_byte_array_class);
	return obj;
}

void define_packed_byte_array_property(JSContext *ctx, JSValue obj) {
}

static int js_packed_byte_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PackedByteArray::__class_id);
	classes["PackedByteArray"] = PackedByteArray::__class_id;
	class_id_list.insert(PackedByteArray::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PackedByteArray::__class_id, &packed_byte_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, PackedByteArray::__class_id, proto);
	define_packed_byte_array_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, packed_byte_array_class_constructor, "PackedByteArray", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PackedByteArray", ctor);

	return 0;
}

JSModuleDef *_js_init_packed_byte_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packed_byte_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PackedByteArray");
	return m;
}

JSModuleDef *js_init_packed_byte_array_module(JSContext *ctx) {
	return _js_init_packed_byte_array_module(ctx, "godot/classes/packed_byte_array");
}

void register_packed_byte_array() {
	PackedByteArray::__init_js_class_id();
	js_init_packed_byte_array_module(ctx);
}