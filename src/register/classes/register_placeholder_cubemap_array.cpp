
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/placeholder_cubemap_array.hpp>
#include <godot_cpp/classes/placeholder_texture_layered.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void placeholder_cubemap_array_class_finalizer(JSRuntime *rt, JSValue val) {
	PlaceholderCubemapArray *placeholder_cubemap_array = static_cast<PlaceholderCubemapArray *>(JS_GetOpaque(val, PlaceholderCubemapArray::__class_id));
	if (placeholder_cubemap_array)
		PlaceholderCubemapArray::free(nullptr, placeholder_cubemap_array);
}

static JSClassDef placeholder_cubemap_array_class_def = {
	"PlaceholderCubemapArray",
	.finalizer = placeholder_cubemap_array_class_finalizer
};

static JSValue placeholder_cubemap_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PlaceholderCubemapArray *placeholder_cubemap_array_class;
	JSValue obj = JS_NewObjectClass(ctx, PlaceholderCubemapArray::__class_id);
	if (JS_IsException(obj))
		return obj;
	placeholder_cubemap_array_class = memnew(PlaceholderCubemapArray);
	if (!placeholder_cubemap_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, placeholder_cubemap_array_class);
	return obj;
}

static int js_placeholder_cubemap_array_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PlaceholderCubemapArray::__class_id);
	classes["PlaceholderCubemapArray"] = PlaceholderCubemapArray::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderCubemapArray::__class_id, &placeholder_cubemap_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PlaceholderTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderCubemapArray::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, placeholder_cubemap_array_class_constructor, "PlaceholderCubemapArray", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PlaceholderCubemapArray", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_cubemap_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_cubemap_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderCubemapArray");
	return m;
}

JSModuleDef *js_init_placeholder_cubemap_array_module(JSContext *ctx) {
	return _js_init_placeholder_cubemap_array_module(ctx, "godot/classes/placeholder_cubemap_array");
}

void register_placeholder_cubemap_array() {
	js_init_placeholder_cubemap_array_module(ctx);
}