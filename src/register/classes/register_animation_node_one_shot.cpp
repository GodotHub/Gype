
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_node_one_shot.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_one_shot_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef animation_node_one_shot_class_def = {
	"AnimationNodeOneShot",
	.finalizer = animation_node_one_shot_class_finalizer
};

static JSValue animation_node_one_shot_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationNodeOneShot::__class_id);
	if (JS_IsException(obj))
		return obj;
	AnimationNodeOneShot *animation_node_one_shot_class = memnew(AnimationNodeOneShot);
	if (!animation_node_one_shot_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_node_one_shot_class);	
	return obj;
}
static JSValue animation_node_one_shot_class_set_fadein_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_fadein_time, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_fadein_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_fadein_time, ctx, this_val, argc, argv);
};
static JSValue animation_node_one_shot_class_set_fadein_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_fadein_curve, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_fadein_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_fadein_curve, ctx, this_val, argc, argv);
};
static JSValue animation_node_one_shot_class_set_fadeout_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_fadeout_time, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_fadeout_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_fadeout_time, ctx, this_val, argc, argv);
};
static JSValue animation_node_one_shot_class_set_fadeout_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_fadeout_curve, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_fadeout_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_fadeout_curve, ctx, this_val, argc, argv);
};
static JSValue animation_node_one_shot_class_set_break_loop_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_break_loop_at_end, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_is_loop_broken_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::is_loop_broken_at_end, ctx, this_val, argc, argv);
};
static JSValue animation_node_one_shot_class_set_autorestart(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_autorestart, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_has_autorestart(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::has_autorestart, ctx, this_val, argc, argv);
};
static JSValue animation_node_one_shot_class_set_autorestart_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_autorestart_delay, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_autorestart_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_autorestart_delay, ctx, this_val, argc, argv);
};
static JSValue animation_node_one_shot_class_set_autorestart_random_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_autorestart_random_delay, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_autorestart_random_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_autorestart_random_delay, ctx, this_val, argc, argv);
};
static JSValue animation_node_one_shot_class_set_mix_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeOneShot::set_mix_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_one_shot_class_get_mix_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeOneShot::get_mix_mode, ctx, this_val, argc, argv);
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

void define_animation_node_one_shot_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "mix_mode"),
        JS_NewCFunction(ctx, animation_node_one_shot_class_get_mix_mode, "get_mix_mode", 0),
        JS_NewCFunction(ctx, animation_node_one_shot_class_set_mix_mode, "set_mix_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fadein_time"),
        JS_NewCFunction(ctx, animation_node_one_shot_class_get_fadein_time, "get_fadein_time", 0),
        JS_NewCFunction(ctx, animation_node_one_shot_class_set_fadein_time, "set_fadein_time", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fadein_curve"),
        JS_NewCFunction(ctx, animation_node_one_shot_class_get_fadein_curve, "get_fadein_curve", 0),
        JS_NewCFunction(ctx, animation_node_one_shot_class_set_fadein_curve, "set_fadein_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fadeout_time"),
        JS_NewCFunction(ctx, animation_node_one_shot_class_get_fadeout_time, "get_fadeout_time", 0),
        JS_NewCFunction(ctx, animation_node_one_shot_class_set_fadeout_time, "set_fadeout_time", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fadeout_curve"),
        JS_NewCFunction(ctx, animation_node_one_shot_class_get_fadeout_curve, "get_fadeout_curve", 0),
        JS_NewCFunction(ctx, animation_node_one_shot_class_set_fadeout_curve, "set_fadeout_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "break_loop_at_end"),
        JS_NewCFunction(ctx, animation_node_one_shot_class_is_loop_broken_at_end, "is_loop_broken_at_end", 0),
        JS_NewCFunction(ctx, animation_node_one_shot_class_set_break_loop_at_end, "set_break_loop_at_end", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "autorestart"),
        JS_NewCFunction(ctx, animation_node_one_shot_class_has_autorestart, "has_autorestart", 0),
        JS_NewCFunction(ctx, animation_node_one_shot_class_set_autorestart, "set_autorestart", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "autorestart_delay"),
        JS_NewCFunction(ctx, animation_node_one_shot_class_get_autorestart_delay, "get_autorestart_delay", 0),
        JS_NewCFunction(ctx, animation_node_one_shot_class_set_autorestart_delay, "set_autorestart_delay", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "autorestart_random_delay"),
        JS_NewCFunction(ctx, animation_node_one_shot_class_get_autorestart_random_delay, "get_autorestart_random_delay", 0),
        JS_NewCFunction(ctx, animation_node_one_shot_class_set_autorestart_random_delay, "set_autorestart_random_delay", 1),
        JS_PROP_GETSET
    );
}

static int js_animation_node_one_shot_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AnimationNodeOneShot::__class_id);
	classes["AnimationNodeOneShot"] = AnimationNodeOneShot::__class_id;
	class_id_list.insert(AnimationNodeOneShot::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeOneShot::__class_id, &animation_node_one_shot_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationNodeOneShot::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNodeSync::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeOneShot::__class_id, proto);

	define_animation_node_one_shot_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_one_shot_class_proto_funcs, _countof(animation_node_one_shot_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animation_node_one_shot_class_constructor, "AnimationNodeOneShot", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationNodeOneShot", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_one_shot_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/animation_node_sync';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	AnimationNodeOneShot::__init_js_class_id();
	js_init_animation_node_one_shot_module(ctx);
}