
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/placeholder_cubemap.hpp>
#include <godot_cpp/classes/placeholder_texture_layered.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void placeholder_cubemap_class_finalizer(JSRuntime *rt, JSValue val) {
	PlaceholderCubemap *placeholder_cubemap = static_cast<PlaceholderCubemap *>(JS_GetOpaque(val, PlaceholderCubemap::__class_id));
	if (placeholder_cubemap)
		PlaceholderCubemap::free(nullptr, placeholder_cubemap);
}

static JSClassDef placeholder_cubemap_class_def = {
	"PlaceholderCubemap",
	.finalizer = placeholder_cubemap_class_finalizer
};

static JSValue placeholder_cubemap_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PlaceholderCubemap *placeholder_cubemap_class;
	JSValue obj = JS_NewObjectClass(ctx, PlaceholderCubemap::__class_id);
	if (JS_IsException(obj))
		return obj;
	placeholder_cubemap_class = memnew(PlaceholderCubemap);
	if (!placeholder_cubemap_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, placeholder_cubemap_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_placeholder_cubemap_property(JSContext *ctx, JSValue obj) {
}

static int js_placeholder_cubemap_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PlaceholderCubemap::__class_id);
	classes["PlaceholderCubemap"] = PlaceholderCubemap::__class_id;
	class_id_list.insert(PlaceholderCubemap::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderCubemap::__class_id, &placeholder_cubemap_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PlaceholderTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderCubemap::__class_id, proto);
	define_placeholder_cubemap_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, placeholder_cubemap_class_constructor, "PlaceholderCubemap", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PlaceholderCubemap", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_cubemap_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/placeholder_texture_layered';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_cubemap_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderCubemap");
	return m;
}

JSModuleDef *js_init_placeholder_cubemap_module(JSContext *ctx) {
	return _js_init_placeholder_cubemap_module(ctx, "godot/classes/placeholder_cubemap");
}

void register_placeholder_cubemap() {
	PlaceholderCubemap::__init_js_class_id();
	js_init_placeholder_cubemap_module(ctx);
}