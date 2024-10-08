
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void shortcut_class_finalizer(JSRuntime *rt, JSValue val) {
	Shortcut *shortcut = static_cast<Shortcut *>(JS_GetOpaque(val, Shortcut::__class_id));
	if (shortcut)
		Shortcut::free(nullptr, shortcut);
}

static JSClassDef shortcut_class_def = {
	"Shortcut",
	.finalizer = shortcut_class_finalizer
};

static JSValue shortcut_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Shortcut *shortcut_class;
	JSValue obj = JS_NewObjectClass(ctx, Shortcut::__class_id);
	if (JS_IsException(obj))
		return obj;
	shortcut_class = memnew(Shortcut);
	if (!shortcut_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, shortcut_class);
	return obj;
}
static JSValue shortcut_class_set_events(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Shortcut::set_events, Shortcut::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shortcut_class_get_events(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Shortcut::get_events, Shortcut::__class_id, ctx, this_val, argv);
};
static JSValue shortcut_class_has_valid_event(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Shortcut::has_valid_event, Shortcut::__class_id, ctx, this_val, argv);
};
static JSValue shortcut_class_matches_event(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Shortcut::matches_event, Shortcut::__class_id, ctx, this_val, argv);
};
static JSValue shortcut_class_get_as_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Shortcut::get_as_text, Shortcut::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry shortcut_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_events", 1, &shortcut_class_set_events),
	JS_CFUNC_DEF("get_events", 0, &shortcut_class_get_events),
	JS_CFUNC_DEF("has_valid_event", 0, &shortcut_class_has_valid_event),
	JS_CFUNC_DEF("matches_event", 1, &shortcut_class_matches_event),
	JS_CFUNC_DEF("get_as_text", 0, &shortcut_class_get_as_text),
};

static int js_shortcut_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Shortcut::__class_id);
	classes["Shortcut"] = Shortcut::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Shortcut::__class_id, &shortcut_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Shortcut::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, shortcut_class_proto_funcs, _countof(shortcut_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, shortcut_class_constructor, "Shortcut", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Shortcut", ctor);

	return 0;
}

JSModuleDef *_js_init_shortcut_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shortcut_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Shortcut");
	return m;
}

JSModuleDef *js_init_shortcut_module(JSContext *ctx) {
	return _js_init_shortcut_module(ctx, "godot/classes/shortcut");
}

void register_shortcut() {
	js_init_shortcut_module(ctx);
}