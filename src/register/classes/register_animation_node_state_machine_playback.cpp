
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_node_state_machine_playback.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_state_machine_playback_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeStateMachinePlayback *animation_node_state_machine_playback = static_cast<AnimationNodeStateMachinePlayback *>(JS_GetOpaque(val, AnimationNodeStateMachinePlayback::__class_id));
	if (animation_node_state_machine_playback)
		memdelete(animation_node_state_machine_playback);
}

static JSClassDef animation_node_state_machine_playback_class_def = {
	"AnimationNodeStateMachinePlayback",
	.finalizer = animation_node_state_machine_playback_class_finalizer
};

static JSValue animation_node_state_machine_playback_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationNodeStateMachinePlayback::__class_id);
	if (JS_IsException(obj))
		return obj;
	AnimationNodeStateMachinePlayback *animation_node_state_machine_playback_class = memnew(AnimationNodeStateMachinePlayback);
	if (!animation_node_state_machine_playback_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_node_state_machine_playback_class);	
	return obj;
}
static JSValue animation_node_state_machine_playback_class_travel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachinePlayback::travel, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_playback_class_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachinePlayback::start, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_playback_class_next(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachinePlayback::next, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_playback_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachinePlayback::stop, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_playback_class_is_playing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachinePlayback::is_playing, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_playback_class_get_current_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachinePlayback::get_current_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_playback_class_get_current_play_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachinePlayback::get_current_play_position, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_playback_class_get_current_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachinePlayback::get_current_length, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_playback_class_get_fading_from_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachinePlayback::get_fading_from_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_playback_class_get_travel_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachinePlayback::get_travel_path, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animation_node_state_machine_playback_class_proto_funcs[] = {
	JS_CFUNC_DEF("travel", 2, &animation_node_state_machine_playback_class_travel),
	JS_CFUNC_DEF("start", 2, &animation_node_state_machine_playback_class_start),
	JS_CFUNC_DEF("next", 0, &animation_node_state_machine_playback_class_next),
	JS_CFUNC_DEF("stop", 0, &animation_node_state_machine_playback_class_stop),
	JS_CFUNC_DEF("is_playing", 0, &animation_node_state_machine_playback_class_is_playing),
	JS_CFUNC_DEF("get_current_node", 0, &animation_node_state_machine_playback_class_get_current_node),
	JS_CFUNC_DEF("get_current_play_position", 0, &animation_node_state_machine_playback_class_get_current_play_position),
	JS_CFUNC_DEF("get_current_length", 0, &animation_node_state_machine_playback_class_get_current_length),
	JS_CFUNC_DEF("get_fading_from_node", 0, &animation_node_state_machine_playback_class_get_fading_from_node),
	JS_CFUNC_DEF("get_travel_path", 0, &animation_node_state_machine_playback_class_get_travel_path),
};

void define_animation_node_state_machine_playback_property(JSContext *ctx, JSValue obj) {
}

static int js_animation_node_state_machine_playback_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AnimationNodeStateMachinePlayback::__class_id);
	classes["AnimationNodeStateMachinePlayback"] = AnimationNodeStateMachinePlayback::__class_id;
	class_id_list.insert(AnimationNodeStateMachinePlayback::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeStateMachinePlayback::__class_id, &animation_node_state_machine_playback_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationNodeStateMachinePlayback::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeStateMachinePlayback::__class_id, proto);

	define_animation_node_state_machine_playback_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_state_machine_playback_class_proto_funcs, _countof(animation_node_state_machine_playback_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animation_node_state_machine_playback_class_constructor, "AnimationNodeStateMachinePlayback", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationNodeStateMachinePlayback", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_state_machine_playback_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_state_machine_playback_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeStateMachinePlayback");
	return m;
}

JSModuleDef *js_init_animation_node_state_machine_playback_module(JSContext *ctx) {
	return _js_init_animation_node_state_machine_playback_module(ctx, "godot/classes/animation_node_state_machine_playback");
}

void register_animation_node_state_machine_playback() {
	AnimationNodeStateMachinePlayback::__init_js_class_id();
	js_init_animation_node_state_machine_playback_module(ctx);
}