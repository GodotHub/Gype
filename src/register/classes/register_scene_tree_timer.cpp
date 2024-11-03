
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/scene_tree_timer.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void scene_tree_timer_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef scene_tree_timer_class_def = {
	"SceneTreeTimer",
	.finalizer = scene_tree_timer_class_finalizer
};

static JSValue scene_tree_timer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SceneTreeTimer::__class_id);
	if (JS_IsException(obj))
		return obj;

	SceneTreeTimer *scene_tree_timer_class;
	if (argc == 1) 
		scene_tree_timer_class = static_cast<SceneTreeTimer *>(Variant(*argv).operator Object *());
	else 
		scene_tree_timer_class = memnew(SceneTreeTimer);
	if (!scene_tree_timer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, scene_tree_timer_class);
	return obj;
}
static JSValue scene_tree_timer_class_set_time_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SceneTreeTimer::set_time_left, ctx, this_val, argc, argv);
};
static JSValue scene_tree_timer_class_get_time_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneTreeTimer::get_time_left, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry scene_tree_timer_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_time_left", 1, &scene_tree_timer_class_set_time_left),
	JS_CFUNC_DEF("get_time_left", 0, &scene_tree_timer_class_get_time_left),
};
static JSValue scene_tree_timer_class_get_timeout_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	SceneTreeTimer *opaque = reinterpret_cast<SceneTreeTimer *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "timeout_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "timeout").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "timeout_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_scene_tree_timer_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "time_left"),
        JS_NewCFunction(ctx, scene_tree_timer_class_get_time_left, "get_time_left", 0),
        JS_NewCFunction(ctx, scene_tree_timer_class_set_time_left, "set_time_left", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "timeout"),
		JS_NewCFunction(ctx, scene_tree_timer_class_get_timeout_signal, "get_timeout_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_scene_tree_timer_enum(JSContext *ctx, JSValue proto) {
}

static int js_scene_tree_timer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["SceneTreeTimer"] = SceneTreeTimer::__class_id;
	class_id_list.insert(SceneTreeTimer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SceneTreeTimer::__class_id, &scene_tree_timer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SceneTreeTimer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SceneTreeTimer::__class_id, proto);

	define_scene_tree_timer_property(ctx, proto);
	define_scene_tree_timer_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, scene_tree_timer_class_proto_funcs, _countof(scene_tree_timer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, scene_tree_timer_class_constructor, "SceneTreeTimer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "SceneTreeTimer", ctor);
	constructors[SceneTreeTimer::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_scene_tree_timer_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_scene_tree_timer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SceneTreeTimer");
	return m;
}

JSModuleDef *js_init_scene_tree_timer_module(JSContext *ctx) {
	return _js_init_scene_tree_timer_module(ctx, "@godot/classes/scene_tree_timer");
}

void register_scene_tree_timer() {
	SceneTreeTimer::__init_js_class_id();
	js_init_scene_tree_timer_module(ctx);
}