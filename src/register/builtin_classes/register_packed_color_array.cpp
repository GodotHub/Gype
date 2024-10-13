
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/packed_color_array.hpp>

using namespace godot;

static void packed_color_array_class_finalizer(JSRuntime *rt, JSValue val) {
	PackedColorArray *packed_color_array = static_cast<PackedColorArray *>(JS_GetOpaque(val, PackedColorArray::__class_id));
	if (packed_color_array)
		memfree(packed_color_array);
}

static JSClassDef packed_color_array_class_def = {
	"PackedColorArray",
	.finalizer = packed_color_array_class_finalizer
};

static JSValue packed_color_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PackedColorArray *packed_color_array_class;
	JSValue obj = JS_NewObjectClass(ctx, PackedColorArray::__class_id);
	if (JS_IsException(obj))
		return obj;
	packed_color_array_class = memnew(PackedColorArray);
	if (!packed_color_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packed_color_array_class);
	return obj;
}

void define_packed_color_array_property(JSContext *ctx, JSValue obj) {
}

static int js_packed_color_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PackedColorArray::__class_id);
	classes["PackedColorArray"] = PackedColorArray::__class_id;
	class_id_list.insert(PackedColorArray::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PackedColorArray::__class_id, &packed_color_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, PackedColorArray::__class_id, proto);
	define_packed_color_array_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, packed_color_array_class_constructor, "PackedColorArray", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PackedColorArray", ctor);

	return 0;
}

JSModuleDef *_js_init_packed_color_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packed_color_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PackedColorArray");
	return m;
}

JSModuleDef *js_init_packed_color_array_module(JSContext *ctx) {
	return _js_init_packed_color_array_module(ctx, "godot/classes/packed_color_array");
}

void register_packed_color_array() {
	PackedColorArray::__init_js_class_id();
	js_init_packed_color_array_module(ctx);
}