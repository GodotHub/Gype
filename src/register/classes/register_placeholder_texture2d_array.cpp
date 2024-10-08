
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/placeholder_texture2d_array.hpp>
#include <godot_cpp/classes/placeholder_texture_layered.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void placeholder_texture2d_array_class_finalizer(JSRuntime *rt, JSValue val) {
	PlaceholderTexture2DArray *placeholder_texture2d_array = static_cast<PlaceholderTexture2DArray *>(JS_GetOpaque(val, PlaceholderTexture2DArray::__class_id));
	if (placeholder_texture2d_array)
		PlaceholderTexture2DArray::free(nullptr, placeholder_texture2d_array);
}

static JSClassDef placeholder_texture2d_array_class_def = {
	"PlaceholderTexture2DArray",
	.finalizer = placeholder_texture2d_array_class_finalizer
};

static JSValue placeholder_texture2d_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PlaceholderTexture2DArray *placeholder_texture2d_array_class;
	JSValue obj = JS_NewObjectClass(ctx, PlaceholderTexture2DArray::__class_id);
	if (JS_IsException(obj))
		return obj;
	placeholder_texture2d_array_class = memnew(PlaceholderTexture2DArray);
	if (!placeholder_texture2d_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, placeholder_texture2d_array_class);
	return obj;
}

static int js_placeholder_texture2d_array_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PlaceholderTexture2DArray::__class_id);
	classes["PlaceholderTexture2DArray"] = PlaceholderTexture2DArray::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderTexture2DArray::__class_id, &placeholder_texture2d_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PlaceholderTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderTexture2DArray::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, placeholder_texture2d_array_class_constructor, "PlaceholderTexture2DArray", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PlaceholderTexture2DArray", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_texture2d_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_texture2d_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderTexture2DArray");
	return m;
}

JSModuleDef *js_init_placeholder_texture2d_array_module(JSContext *ctx) {
	return _js_init_placeholder_texture2d_array_module(ctx, "godot/classes/placeholder_texture2d_array");
}

void register_placeholder_texture2d_array() {
	js_init_placeholder_texture2d_array_module(ctx);
}