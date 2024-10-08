
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/animation_node_one_shot.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_node_one_shot_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeOneShot *animation_node_one_shot = static_cast<AnimationNodeOneShot *>(JS_GetOpaque(val, AnimationNodeOneShot::__class_id));
	if (animation_node_one_shot)
		AnimationNodeOneShot::free(nullptr, animation_node_one_shot);
}

static JSClassDef animation_node_one_shot_class_def = {
	"AnimationNodeOneShot",
	.finalizer = animation_node_one_shot_class_finalizer
};

static JSValue animation_node_one_shot_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationNodeOneShot *animation_node_one_shot_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationNodeOneShot::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_node_one_shot_class = memnew(AnimationNodeOneShot);
	if (!animation_node_one_shot_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_node_one_shot_class);
	return obj;
}
static JSValue animation_node_one_shot_class_set_fadein_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_fadein_time, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_fadein_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_fadein_time, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_one_shot_class_set_fadein_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_fadein_curve, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_fadein_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_fadein_curve, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_one_shot_class_set_fadeout_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_fadeout_time, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_fadeout_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_fadeout_time, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_one_shot_class_set_fadeout_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_fadeout_curve, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_fadeout_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_fadeout_curve, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_one_shot_class_set_break_loop_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_break_loop_at_end, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_is_loop_broken_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::is_loop_broken_at_end, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_one_shot_class_set_autorestart(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_autorestart, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_has_autorestart(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::has_autorestart, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_one_shot_class_set_autorestart_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_autorestart_delay, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_autorestart_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_autorestart_delay, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_one_shot_class_set_autorestart_random_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_autorestart_random_delay, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_autorestart_random_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_autorestart_random_delay, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_one_shot_class_set_mix_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_mix_mode, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_mix_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_mix_mode, AnimationNodeOneShot::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animation_node_one_shot_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_fadein_time", 1, &animation_node_one_shot_class_set_fadein_time),
	JS_CFUNC_DEF("get_fadein_time", 0, &animation_node_one_shot_class_get_fadein_time),
	JS_CFUNC_DEF("set_fadein_curve", 1, &animation_node_one_shot_class_set_fadein_curve),
	JS_CFUNC_DEF("get_fadein_curve", 0, &animation_node_one_shot_class_get_fadein_curve),
	JS_CFUNC_DEF("set_fadeout_time", 1, &animation_node_one_shot_class_set_fadeout_time),
	JS_CFUNC_DEF("get_fadeout_time", 0, &animation_node_one_shot_class_get_fadeout_time),
	JS_CFUNC_DEF("set_fadeout_curve", 1, &animation_node_one_shot_class_set_fadeout_curve),
	JS_CFUNC_DEF("get_fadeout_curve", 0, &animation_node_one_shot_class_get_fadeout_curve),
	JS_CFUNC_DEF("set_break_loop_at_end", 1, &animation_node_one_shot_class_set_break_loop_at_end),
	JS_CFUNC_DEF("is_loop_broken_at_end", 0, &animation_node_one_shot_class_is_loop_broken_at_end),
	JS_CFUNC_DEF("set_autorestart", 1, &animation_node_one_shot_class_set_autorestart),
	JS_CFUNC_DEF("has_autorestart", 0, &animation_node_one_shot_class_has_autorestart),
	JS_CFUNC_DEF("set_autorestart_delay", 1, &animation_node_one_shot_class_set_autorestart_delay),
	JS_CFUNC_DEF("get_autorestart_delay", 0, &animation_node_one_shot_class_get_autorestart_delay),
	JS_CFUNC_DEF("set_autorestart_random_delay", 1, &animation_node_one_shot_class_set_autorestart_random_delay),
	JS_CFUNC_DEF("get_autorestart_random_delay", 0, &animation_node_one_shot_class_get_autorestart_random_delay),
	JS_CFUNC_DEF("set_mix_mode", 1, &animation_node_one_shot_class_set_mix_mode),
	JS_CFUNC_DEF("get_mix_mode", 0, &animation_node_one_shot_class_get_mix_mode),
};

static int js_animation_node_one_shot_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationNodeOneShot::__class_id);
	classes["AnimationNodeOneShot"] = AnimationNodeOneShot::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeOneShot::__class_id, &animation_node_one_shot_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNodeSync::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeOneShot::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_one_shot_class_proto_funcs, _countof(animation_node_one_shot_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_one_shot_class_constructor, "AnimationNodeOneShot", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationNodeOneShot", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_one_shot_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_one_shot_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeOneShot");
	return m;
}

JSModuleDef *js_init_animation_node_one_shot_module(JSContext *ctx) {
	return _js_init_animation_node_one_shot_module(ctx, "godot/classes/animation_node_one_shot");
}

void register_animation_node_one_shot() {
	js_init_animation_node_one_shot_module(ctx);
}