
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/h_separator.hpp>
#include <godot_cpp/classes/separator.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void h_separator_class_finalizer(JSRuntime *rt, JSValue val) {
	HSeparator *h_separator = static_cast<HSeparator *>(JS_GetOpaque(val, HSeparator::__class_id));
	if (h_separator)
		HSeparator::free(nullptr, h_separator);
}

static JSClassDef h_separator_class_def = {
	"HSeparator",
	.finalizer = h_separator_class_finalizer
};

static JSValue h_separator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	HSeparator *h_separator_class;
	JSValue obj = JS_NewObjectClass(ctx, HSeparator::__class_id);
	if (JS_IsException(obj))
		return obj;
	h_separator_class = memnew(HSeparator);
	if (!h_separator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, h_separator_class);
	return obj;
}

static int js_h_separator_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&HSeparator::__class_id);
	classes["HSeparator"] = HSeparator::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), HSeparator::__class_id, &h_separator_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Separator::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HSeparator::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, h_separator_class_constructor, "HSeparator", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "HSeparator", ctor);

	return 0;
}

JSModuleDef *_js_init_h_separator_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_h_separator_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HSeparator");
	return m;
}

JSModuleDef *js_init_h_separator_module(JSContext *ctx) {
	return _js_init_h_separator_module(ctx, "godot/classes/h_separator");
}

void register_h_separator() {
	js_init_h_separator_module(ctx);
}