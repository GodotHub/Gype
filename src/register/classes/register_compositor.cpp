
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/compositor.hpp>
#include <godot_cpp/classes/compositor_effect.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void compositor_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef compositor_class_def = {
	"Compositor",
	.finalizer = compositor_class_finalizer
};

static JSValue compositor_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Compositor::__class_id);
	if (JS_IsException(obj))
		return obj;

	Compositor *compositor_class;
	if (argc == 1) 
		compositor_class = static_cast<Compositor *>(Variant(*argv).operator Object *());
	else 
		compositor_class = memnew(Compositor);
	if (!compositor_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, compositor_class);
	return obj;
}
static JSValue compositor_class_set_compositor_effects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Compositor::set_compositor_effects, ctx, this_val, argc, argv);
};
static JSValue compositor_class_get_compositor_effects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Compositor::get_compositor_effects, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry compositor_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_compositor_effects", 1, &compositor_class_set_compositor_effects),
	JS_CFUNC_DEF("get_compositor_effects", 0, &compositor_class_get_compositor_effects),
};

static void define_compositor_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "compositor_effects"),
        JS_NewCFunction(ctx, compositor_class_get_compositor_effects, "get_compositor_effects", 0),
        JS_NewCFunction(ctx, compositor_class_set_compositor_effects, "set_compositor_effects", 1),
        JS_PROP_GETSET
    );
	
}

static void define_compositor_enum(JSContext *ctx, JSValue proto) {
}

static int js_compositor_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Compositor"] = Compositor::__class_id;
	class_id_list.insert(Compositor::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Compositor::__class_id, &compositor_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Compositor::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Compositor::__class_id, proto);

	define_compositor_property(ctx, proto);
	define_compositor_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, compositor_class_proto_funcs, _countof(compositor_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, compositor_class_constructor, "Compositor", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Compositor", ctor);

	return 0;
}

JSModuleDef *_js_init_compositor_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_compositor_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Compositor");
	return m;
}

JSModuleDef *js_init_compositor_module(JSContext *ctx) {
	return _js_init_compositor_module(ctx, "@godot/classes/compositor");
}

void register_compositor() {
	Compositor::__init_js_class_id();
	js_init_compositor_module(ctx);
}