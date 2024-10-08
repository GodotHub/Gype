
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/separator.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void separator_class_finalizer(JSRuntime *rt, JSValue val) {
	Separator *separator = static_cast<Separator *>(JS_GetOpaque(val, Separator::__class_id));
	if (separator)
		Separator::free(nullptr, separator);
}

static JSClassDef separator_class_def = {
	"Separator",
	.finalizer = separator_class_finalizer
};

static JSValue separator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Separator *separator_class;
	JSValue obj = JS_NewObjectClass(ctx, Separator::__class_id);
	if (JS_IsException(obj))
		return obj;
	separator_class = memnew(Separator);
	if (!separator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, separator_class);
	return obj;
}

static int js_separator_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Separator::__class_id);
	classes["Separator"] = Separator::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Separator::__class_id, &separator_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Separator::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, separator_class_constructor, "Separator", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Separator", ctor);

	return 0;
}

JSModuleDef *_js_init_separator_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_separator_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Separator");
	return m;
}

JSModuleDef *js_init_separator_module(JSContext *ctx) {
	return _js_init_separator_module(ctx, "godot/classes/separator");
}

void register_separator() {
	js_init_separator_module(ctx);
}