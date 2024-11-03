
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/placeholder_texture_layered.hpp>
#include <godot_cpp/classes/placeholder_cubemap.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void placeholder_cubemap_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef placeholder_cubemap_class_def = {
	"PlaceholderCubemap",
	.finalizer = placeholder_cubemap_class_finalizer
};

static JSValue placeholder_cubemap_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PlaceholderCubemap::__class_id);
	if (JS_IsException(obj))
		return obj;

	PlaceholderCubemap *placeholder_cubemap_class;
	if (argc == 1) 
		placeholder_cubemap_class = static_cast<PlaceholderCubemap *>(Variant(*argv).operator Object *());
	else 
		placeholder_cubemap_class = memnew(PlaceholderCubemap);
	if (!placeholder_cubemap_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, placeholder_cubemap_class);
	return obj;
}

static void define_placeholder_cubemap_property(JSContext *ctx, JSValue proto) {
	
}

static void define_placeholder_cubemap_enum(JSContext *ctx, JSValue proto) {
}

static int js_placeholder_cubemap_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PlaceholderCubemap"] = PlaceholderCubemap::__class_id;
	class_id_list.insert(PlaceholderCubemap::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderCubemap::__class_id, &placeholder_cubemap_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PlaceholderCubemap::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PlaceholderTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderCubemap::__class_id, proto);

	define_placeholder_cubemap_property(ctx, proto);
	define_placeholder_cubemap_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, placeholder_cubemap_class_constructor, "PlaceholderCubemap", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "PlaceholderCubemap", ctor);
	constructors[PlaceholderCubemap::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_placeholder_cubemap_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/placeholder_texture_layered';";
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
	return _js_init_placeholder_cubemap_module(ctx, "@godot/classes/placeholder_cubemap");
}

void register_placeholder_cubemap() {
	PlaceholderCubemap::__init_js_class_id();
	js_init_placeholder_cubemap_module(ctx);
}