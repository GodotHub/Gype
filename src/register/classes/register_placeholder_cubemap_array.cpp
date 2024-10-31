
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/placeholder_cubemap_array.hpp>
#include <godot_cpp/classes/placeholder_texture_layered.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void placeholder_cubemap_array_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef placeholder_cubemap_array_class_def = {
	"PlaceholderCubemapArray",
	.finalizer = placeholder_cubemap_array_class_finalizer
};

static JSValue placeholder_cubemap_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PlaceholderCubemapArray::__class_id);
	if (JS_IsException(obj))
		return obj;

	PlaceholderCubemapArray *placeholder_cubemap_array_class;
	if (argc == 1) 
		placeholder_cubemap_array_class = static_cast<PlaceholderCubemapArray *>(static_cast<Object *>(Variant(*argv)));
	else 
		placeholder_cubemap_array_class = memnew(PlaceholderCubemapArray);
	if (!placeholder_cubemap_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, placeholder_cubemap_array_class);	
	return obj;
}

static void define_placeholder_cubemap_array_property(JSContext *ctx, JSValue proto) {
	
}

static void define_placeholder_cubemap_array_enum(JSContext *ctx, JSValue proto) {
}

static int js_placeholder_cubemap_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PlaceholderCubemapArray::__class_id);
	classes["PlaceholderCubemapArray"] = PlaceholderCubemapArray::__class_id;
	class_id_list.insert(PlaceholderCubemapArray::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderCubemapArray::__class_id, &placeholder_cubemap_array_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PlaceholderCubemapArray::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PlaceholderTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderCubemapArray::__class_id, proto);

	define_placeholder_cubemap_array_property(ctx, proto);
	define_placeholder_cubemap_array_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, placeholder_cubemap_array_class_constructor, "PlaceholderCubemapArray", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PlaceholderCubemapArray", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_cubemap_array_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/placeholder_texture_layered';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_cubemap_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderCubemapArray");
	return m;
}

JSModuleDef *js_init_placeholder_cubemap_array_module(JSContext *ctx) {
	return _js_init_placeholder_cubemap_array_module(ctx, "@godot/classes/placeholder_cubemap_array");
}

void register_placeholder_cubemap_array() {
	PlaceholderCubemapArray::__init_js_class_id();
	js_init_placeholder_cubemap_array_module(ctx);
}