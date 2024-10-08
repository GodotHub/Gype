
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/scene_tree_timer.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void scene_tree_timer_class_finalizer(JSRuntime *rt, JSValue val) {
	SceneTreeTimer *scene_tree_timer = static_cast<SceneTreeTimer *>(JS_GetOpaque(val, SceneTreeTimer::__class_id));
	if (scene_tree_timer)
		SceneTreeTimer::free(nullptr, scene_tree_timer);
}

static JSClassDef scene_tree_timer_class_def = {
	"SceneTreeTimer",
	.finalizer = scene_tree_timer_class_finalizer
};

static JSValue scene_tree_timer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SceneTreeTimer *scene_tree_timer_class;
	JSValue obj = JS_NewObjectClass(ctx, SceneTreeTimer::__class_id);
	if (JS_IsException(obj))
		return obj;
	scene_tree_timer_class = memnew(SceneTreeTimer);
	if (!scene_tree_timer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, scene_tree_timer_class);
	return obj;
}
static JSValue scene_tree_timer_class_set_time_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneTreeTimer::set_time_left, SceneTreeTimer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_tree_timer_class_get_time_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneTreeTimer::get_time_left, SceneTreeTimer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry scene_tree_timer_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_time_left", 1, &scene_tree_timer_class_set_time_left),
	JS_CFUNC_DEF("get_time_left", 0, &scene_tree_timer_class_get_time_left),
};

static int js_scene_tree_timer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SceneTreeTimer::__class_id);
	classes["SceneTreeTimer"] = SceneTreeTimer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SceneTreeTimer::__class_id, &scene_tree_timer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SceneTreeTimer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, scene_tree_timer_class_proto_funcs, _countof(scene_tree_timer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, scene_tree_timer_class_constructor, "SceneTreeTimer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SceneTreeTimer", ctor);

	return 0;
}

JSModuleDef *_js_init_scene_tree_timer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_scene_tree_timer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SceneTreeTimer");
	return m;
}

JSModuleDef *js_init_scene_tree_timer_module(JSContext *ctx) {
	return _js_init_scene_tree_timer_module(ctx, "godot/classes/scene_tree_timer");
}

void register_scene_tree_timer() {
	js_init_scene_tree_timer_module(ctx);
}