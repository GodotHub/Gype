
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/char_fx_transform.hpp>
#include <godot_cpp/classes/rich_text_effect.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rich_text_effect_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef rich_text_effect_class_def = {
	"RichTextEffect",
	.finalizer = rich_text_effect_class_finalizer
};

static JSValue rich_text_effect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RichTextEffect::__class_id);
	if (JS_IsException(obj))
		return obj;
	RichTextEffect *rich_text_effect_class = memnew(RichTextEffect);
	if (!rich_text_effect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, rich_text_effect_class);	
	return obj;
}

void define_rich_text_effect_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_rich_text_effect_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RichTextEffect::__class_id);
	classes["RichTextEffect"] = RichTextEffect::__class_id;
	class_id_list.insert(RichTextEffect::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RichTextEffect::__class_id, &rich_text_effect_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RichTextEffect::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RichTextEffect::__class_id, proto);

	define_rich_text_effect_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, rich_text_effect_class_constructor, "RichTextEffect", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RichTextEffect", ctor);

	return 0;
}

JSModuleDef *_js_init_rich_text_effect_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rich_text_effect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RichTextEffect");
	return m;
}

JSModuleDef *js_init_rich_text_effect_module(JSContext *ctx) {
	return _js_init_rich_text_effect_module(ctx, "@godot/classes/rich_text_effect");
}

void register_rich_text_effect() {
	RichTextEffect::__init_js_class_id();
	js_init_rich_text_effect_module(ctx);
}