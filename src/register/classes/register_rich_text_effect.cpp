
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/rich_text_effect.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/char_fx_transform.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void rich_text_effect_class_finalizer(JSRuntime *rt, JSValue val) {
	RichTextEffect *rich_text_effect = static_cast<RichTextEffect *>(JS_GetOpaque(val, RichTextEffect::__class_id));
	if (rich_text_effect)
		RichTextEffect::free(nullptr, rich_text_effect);
}

static JSClassDef rich_text_effect_class_def = {
	"RichTextEffect",
	.finalizer = rich_text_effect_class_finalizer
};

static JSValue rich_text_effect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RichTextEffect *rich_text_effect_class;
	JSValue obj = JS_NewObjectClass(ctx, RichTextEffect::__class_id);
	if (JS_IsException(obj))
		return obj;
	rich_text_effect_class = memnew(RichTextEffect);
	if (!rich_text_effect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rich_text_effect_class);
	return obj;
}

static int js_rich_text_effect_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RichTextEffect::__class_id);
	classes["RichTextEffect"] = RichTextEffect::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RichTextEffect::__class_id, &rich_text_effect_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RichTextEffect::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, rich_text_effect_class_constructor, "RichTextEffect", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RichTextEffect", ctor);

	return 0;
}

JSModuleDef *_js_init_rich_text_effect_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rich_text_effect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RichTextEffect");
	return m;
}

JSModuleDef *js_init_rich_text_effect_module(JSContext *ctx) {
	return _js_init_rich_text_effect_module(ctx, "godot/classes/rich_text_effect");
}

void register_rich_text_effect() {
	js_init_rich_text_effect_module(ctx);
}