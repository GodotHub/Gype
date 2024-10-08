
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/compositor.hpp>
#include <godot_cpp/classes/compositor_effect.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void compositor_class_finalizer(JSRuntime *rt, JSValue val) {
	Compositor *compositor = static_cast<Compositor *>(JS_GetOpaque(val, Compositor::__class_id));
	if (compositor)
		Compositor::free(nullptr, compositor);
}

static JSClassDef compositor_class_def = {
	"Compositor",
	.finalizer = compositor_class_finalizer
};

static JSValue compositor_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Compositor *compositor_class;
	JSValue obj = JS_NewObjectClass(ctx, Compositor::__class_id);
	if (JS_IsException(obj))
		return obj;
	compositor_class = memnew(Compositor);
	if (!compositor_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, compositor_class);
	return obj;
}
static JSValue compositor_class_set_compositor_effects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Compositor::set_compositor_effects, Compositor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_class_get_compositor_effects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Compositor::get_compositor_effects, Compositor::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry compositor_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_compositor_effects", 1, &compositor_class_set_compositor_effects),
	JS_CFUNC_DEF("get_compositor_effects", 0, &compositor_class_get_compositor_effects),
};

static int js_compositor_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Compositor::__class_id);
	classes["Compositor"] = Compositor::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Compositor::__class_id, &compositor_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Compositor::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, compositor_class_proto_funcs, _countof(compositor_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, compositor_class_constructor, "Compositor", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Compositor", ctor);

	return 0;
}

JSModuleDef *_js_init_compositor_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_compositor_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Compositor");
	return m;
}

JSModuleDef *js_init_compositor_module(JSContext *ctx) {
	return _js_init_compositor_module(ctx, "godot/classes/compositor");
}

void register_compositor() {
	js_init_compositor_module(ctx);
}