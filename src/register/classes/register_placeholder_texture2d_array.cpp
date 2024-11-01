
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/placeholder_texture_layered.hpp>
#include <godot_cpp/classes/placeholder_texture2d_array.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void placeholder_texture2d_array_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef placeholder_texture2d_array_class_def = {
	"PlaceholderTexture2DArray",
	.finalizer = placeholder_texture2d_array_class_finalizer
};

static JSValue placeholder_texture2d_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PlaceholderTexture2DArray::__class_id);
	if (JS_IsException(obj))
		return obj;

	PlaceholderTexture2DArray *placeholder_texture2d_array_class;
	if (argc == 1) 
		placeholder_texture2d_array_class = static_cast<PlaceholderTexture2DArray *>(Variant(*argv).operator Object *());
	else 
		placeholder_texture2d_array_class = memnew(PlaceholderTexture2DArray);
	if (!placeholder_texture2d_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, placeholder_texture2d_array_class);
	return obj;
}

static void define_placeholder_texture2d_array_property(JSContext *ctx, JSValue proto) {
	
}

static void define_placeholder_texture2d_array_enum(JSContext *ctx, JSValue proto) {
}

static int js_placeholder_texture2d_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PlaceholderTexture2DArray"] = PlaceholderTexture2DArray::__class_id;
	class_id_list.insert(PlaceholderTexture2DArray::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderTexture2DArray::__class_id, &placeholder_texture2d_array_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PlaceholderTexture2DArray::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PlaceholderTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderTexture2DArray::__class_id, proto);

	define_placeholder_texture2d_array_property(ctx, proto);
	define_placeholder_texture2d_array_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, placeholder_texture2d_array_class_constructor, "PlaceholderTexture2DArray", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PlaceholderTexture2DArray", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_texture2d_array_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/placeholder_texture_layered';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_texture2d_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderTexture2DArray");
	return m;
}

JSModuleDef *js_init_placeholder_texture2d_array_module(JSContext *ctx) {
	return _js_init_placeholder_texture2d_array_module(ctx, "@godot/classes/placeholder_texture2d_array");
}

void register_placeholder_texture2d_array() {
	PlaceholderTexture2DArray::__init_js_class_id();
	js_init_placeholder_texture2d_array_module(ctx);
}