#include "quickjs/utils.h"
#include <quickjs/finalizer.h>
#include <string.h>

void variant_finalizer_destructor(JSRuntime *rt, JSValue val) {
	JSValue bingdings = JS_GetPropertyStr(context.ctx, val, "_bindings");
	JSValue destructor = JS_GetPropertyStr(context.ctx, val, "destructor");
	JSValue *opaque = new JSValue[1]{ JS_GetPropertyStr(context.ctx, val, "opaque") };
	JS_Call(context.ctx, destructor, val, 0, opaque);
	JS_FreeValue(context.ctx, *opaque);
}

void variant_finalizer(JSRuntime *rt, JSValue val) {
	JSValue *opaque = new JSValue[1]{ JS_GetPropertyStr(context.ctx, val, "opaque") };
	const char *code = R"xxx(
		import { variant_destroy } from '__internal__';
		variant_destroy(this);
		// await (async()=>{
		// 	let mod = import('__internal__');
		// 	mod.variant_destroy(this);
		// })();
	)xxx";
	JSValue func = JS_EvalThis(context.ctx, val, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	JS_FreeValue(context.ctx, *opaque);
	JS_FreeValue(context.ctx, func);
}

static JSClassDef string_name = {
	"StringName",
	.finalizer = variant_finalizer_destructor,
};

static JSClassDef string = {
	"GDString",
	.finalizer = variant_finalizer_destructor,
};

static JSClassDef variant = {
	"Variant",
	.finalizer = variant_finalizer,
};

static JSClassID my_class_id;

#define REGISTER_CLASS(ctx, def)                        \
	JS_NewClassID(&my_class_id);                        \
	JS_NewClass(JS_GetRuntime(ctx), my_class_id, &def); \
	JSValue proto_##def = JS_NewObject(ctx);            \
	JS_SetClassProto(ctx, my_class_id, proto_##def);

void js_init_module(JSContext *ctx) {
	REGISTER_CLASS(ctx, string)
	REGISTER_CLASS(ctx, string_name)
	REGISTER_CLASS(ctx, variant)
}