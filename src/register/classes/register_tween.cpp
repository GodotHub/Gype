
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/interval_tweener.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/callback_tweener.hpp>
#include <godot_cpp/classes/property_tweener.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/method_tweener.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void tween_class_finalizer(JSRuntime *rt, JSValue val) {
	Tween *tween = static_cast<Tween *>(JS_GetOpaque(val, Tween::__class_id));
	if (tween)
		Tween::free(nullptr, tween);
}

static JSClassDef tween_class_def = {
	"Tween",
	.finalizer = tween_class_finalizer
};

static JSValue tween_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Tween *tween_class;
	JSValue obj = JS_NewObjectClass(ctx, Tween::__class_id);
	if (JS_IsException(obj))
		return obj;
	tween_class = memnew(Tween);
	if (!tween_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tween_class);
	return obj;
}
static JSValue tween_class_tween_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::tween_property, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_tween_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::tween_interval, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_tween_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::tween_callback, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_tween_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::tween_method, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::custom_step, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tween::stop, Tween::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tween_class_pause(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tween::pause, Tween::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tween_class_play(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tween::play, Tween::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tween_class_kill(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tween::kill, Tween::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tween_class_get_total_elapsed_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tween::get_total_elapsed_time, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_is_running(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::is_running, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_is_valid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::is_valid, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_bind_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::bind_node, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_set_process_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::set_process_mode, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_set_pause_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::set_pause_mode, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_set_parallel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::set_parallel, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_set_loops(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::set_loops, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_get_loops_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tween::get_loops_left, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::set_speed_scale, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_set_trans(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::set_trans, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_set_ease(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::set_ease, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_parallel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::parallel, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_chain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tween::chain, Tween::__class_id, ctx, this_val, argv);
};
static JSValue tween_class_interpolate_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Tween::interpolate_value, Tween::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry tween_class_proto_funcs[] = {
	JS_CFUNC_DEF("tween_property", 4, &tween_class_tween_property),
	JS_CFUNC_DEF("tween_interval", 1, &tween_class_tween_interval),
	JS_CFUNC_DEF("tween_callback", 1, &tween_class_tween_callback),
	JS_CFUNC_DEF("tween_method", 4, &tween_class_tween_method),
	JS_CFUNC_DEF("custom_step", 1, &tween_class_custom_step),
	JS_CFUNC_DEF("stop", 0, &tween_class_stop),
	JS_CFUNC_DEF("pause", 0, &tween_class_pause),
	JS_CFUNC_DEF("play", 0, &tween_class_play),
	JS_CFUNC_DEF("kill", 0, &tween_class_kill),
	JS_CFUNC_DEF("get_total_elapsed_time", 0, &tween_class_get_total_elapsed_time),
	JS_CFUNC_DEF("is_running", 0, &tween_class_is_running),
	JS_CFUNC_DEF("is_valid", 0, &tween_class_is_valid),
	JS_CFUNC_DEF("bind_node", 1, &tween_class_bind_node),
	JS_CFUNC_DEF("set_process_mode", 1, &tween_class_set_process_mode),
	JS_CFUNC_DEF("set_pause_mode", 1, &tween_class_set_pause_mode),
	JS_CFUNC_DEF("set_parallel", 1, &tween_class_set_parallel),
	JS_CFUNC_DEF("set_loops", 1, &tween_class_set_loops),
	JS_CFUNC_DEF("get_loops_left", 0, &tween_class_get_loops_left),
	JS_CFUNC_DEF("set_speed_scale", 1, &tween_class_set_speed_scale),
	JS_CFUNC_DEF("set_trans", 1, &tween_class_set_trans),
	JS_CFUNC_DEF("set_ease", 1, &tween_class_set_ease),
	JS_CFUNC_DEF("parallel", 0, &tween_class_parallel),
	JS_CFUNC_DEF("chain", 0, &tween_class_chain),
};
static const JSCFunctionListEntry tween_class_static_funcs[] = {
	JS_CFUNC_DEF("interpolate_value", 6, &tween_class_interpolate_value),
};

static int js_tween_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Tween::__class_id);
	classes["Tween"] = Tween::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Tween::__class_id, &tween_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Tween::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, tween_class_proto_funcs, _countof(tween_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, tween_class_constructor, "Tween", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, tween_class_static_funcs, _countof(tween_class_static_funcs));

	JS_SetModuleExport(ctx, m, "Tween", ctor);

	return 0;
}

JSModuleDef *_js_init_tween_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tween_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Tween");
	return m;
}

JSModuleDef *js_init_tween_module(JSContext *ctx) {
	return _js_init_tween_module(ctx, "godot/classes/tween");
}

void register_tween() {
	js_init_tween_module(ctx);
}