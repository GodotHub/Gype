
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/separator.hpp>
#include <godot_cpp/classes/v_separator.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void v_separator_class_finalizer(JSRuntime *rt, JSValue val) {
	VSeparator *v_separator = static_cast<VSeparator *>(JS_GetOpaque(val, VSeparator::__class_id));
	if (v_separator)
		VSeparator::free(nullptr, v_separator);
}

static JSClassDef v_separator_class_def = {
	"VSeparator",
	.finalizer = v_separator_class_finalizer
};

static JSValue v_separator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VSeparator *v_separator_class;
	JSValue obj = JS_NewObjectClass(ctx, VSeparator::__class_id);
	if (JS_IsException(obj))
		return obj;
	v_separator_class = memnew(VSeparator);
	if (!v_separator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, v_separator_class);
	return obj;
}

static int js_v_separator_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VSeparator::__class_id);
	classes["VSeparator"] = VSeparator::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VSeparator::__class_id, &v_separator_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Separator::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VSeparator::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, v_separator_class_constructor, "VSeparator", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VSeparator", ctor);

	return 0;
}

JSModuleDef *_js_init_v_separator_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_v_separator_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VSeparator");
	return m;
}

JSModuleDef *js_init_v_separator_module(JSContext *ctx) {
	return _js_init_v_separator_module(ctx, "godot/classes/v_separator");
}

void register_v_separator() {
	js_init_v_separator_module(ctx);
}