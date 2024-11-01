
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/animation_node_animation.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_animation_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef animation_node_animation_class_def = {
	"AnimationNodeAnimation",
	.finalizer = animation_node_animation_class_finalizer
};

static JSValue animation_node_animation_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationNodeAnimation::__class_id);
	if (JS_IsException(obj))
		return obj;

	AnimationNodeAnimation *animation_node_animation_class;
	if (argc == 1) 
		animation_node_animation_class = static_cast<AnimationNodeAnimation *>(Variant(*argv).operator Object *());
	else 
		animation_node_animation_class = memnew(AnimationNodeAnimation);
	if (!animation_node_animation_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_node_animation_class);
	return obj;
}
static JSValue animation_node_animation_class_set_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeAnimation::set_animation, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_get_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeAnimation::get_animation, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_set_play_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeAnimation::set_play_mode, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_get_play_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeAnimation::get_play_mode, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_set_use_custom_timeline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeAnimation::set_use_custom_timeline, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_is_using_custom_timeline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeAnimation::is_using_custom_timeline, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_set_timeline_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeAnimation::set_timeline_length, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_get_timeline_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeAnimation::get_timeline_length, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_set_stretch_time_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeAnimation::set_stretch_time_scale, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_is_stretching_time_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeAnimation::is_stretching_time_scale, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_set_start_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeAnimation::set_start_offset, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_get_start_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeAnimation::get_start_offset, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_set_loop_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeAnimation::set_loop_mode, ctx, this_val, argc, argv);
};
static JSValue animation_node_animation_class_get_loop_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeAnimation::get_loop_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animation_node_animation_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_animation", 1, &animation_node_animation_class_set_animation),
	JS_CFUNC_DEF("get_animation", 0, &animation_node_animation_class_get_animation),
	JS_CFUNC_DEF("set_play_mode", 1, &animation_node_animation_class_set_play_mode),
	JS_CFUNC_DEF("get_play_mode", 0, &animation_node_animation_class_get_play_mode),
	JS_CFUNC_DEF("set_use_custom_timeline", 1, &animation_node_animation_class_set_use_custom_timeline),
	JS_CFUNC_DEF("is_using_custom_timeline", 0, &animation_node_animation_class_is_using_custom_timeline),
	JS_CFUNC_DEF("set_timeline_length", 1, &animation_node_animation_class_set_timeline_length),
	JS_CFUNC_DEF("get_timeline_length", 0, &animation_node_animation_class_get_timeline_length),
	JS_CFUNC_DEF("set_stretch_time_scale", 1, &animation_node_animation_class_set_stretch_time_scale),
	JS_CFUNC_DEF("is_stretching_time_scale", 0, &animation_node_animation_class_is_stretching_time_scale),
	JS_CFUNC_DEF("set_start_offset", 1, &animation_node_animation_class_set_start_offset),
	JS_CFUNC_DEF("get_start_offset", 0, &animation_node_animation_class_get_start_offset),
	JS_CFUNC_DEF("set_loop_mode", 1, &animation_node_animation_class_set_loop_mode),
	JS_CFUNC_DEF("get_loop_mode", 0, &animation_node_animation_class_get_loop_mode),
};

static void define_animation_node_animation_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "animation"),
        JS_NewCFunction(ctx, animation_node_animation_class_get_animation, "get_animation", 0),
        JS_NewCFunction(ctx, animation_node_animation_class_set_animation, "set_animation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "play_mode"),
        JS_NewCFunction(ctx, animation_node_animation_class_get_play_mode, "get_play_mode", 0),
        JS_NewCFunction(ctx, animation_node_animation_class_set_play_mode, "set_play_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "use_custom_timeline"),
        JS_NewCFunction(ctx, animation_node_animation_class_is_using_custom_timeline, "is_using_custom_timeline", 0),
        JS_NewCFunction(ctx, animation_node_animation_class_set_use_custom_timeline, "set_use_custom_timeline", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "timeline_length"),
        JS_NewCFunction(ctx, animation_node_animation_class_get_timeline_length, "get_timeline_length", 0),
        JS_NewCFunction(ctx, animation_node_animation_class_set_timeline_length, "set_timeline_length", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stretch_time_scale"),
        JS_NewCFunction(ctx, animation_node_animation_class_is_stretching_time_scale, "is_stretching_time_scale", 0),
        JS_NewCFunction(ctx, animation_node_animation_class_set_stretch_time_scale, "set_stretch_time_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "start_offset"),
        JS_NewCFunction(ctx, animation_node_animation_class_get_start_offset, "get_start_offset", 0),
        JS_NewCFunction(ctx, animation_node_animation_class_set_start_offset, "set_start_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "loop_mode"),
        JS_NewCFunction(ctx, animation_node_animation_class_get_loop_mode, "get_loop_mode", 0),
        JS_NewCFunction(ctx, animation_node_animation_class_set_loop_mode, "set_loop_mode", 1),
        JS_PROP_GETSET
    );
	
}

static void define_animation_node_animation_enum(JSContext *ctx, JSValue proto) {
	JSValue PlayMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, PlayMode_obj, "PLAY_MODE_FORWARD", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, PlayMode_obj, "PLAY_MODE_BACKWARD", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "PlayMode", PlayMode_obj);
}

static int js_animation_node_animation_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AnimationNodeAnimation"] = AnimationNodeAnimation::__class_id;
	class_id_list.insert(AnimationNodeAnimation::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeAnimation::__class_id, &animation_node_animation_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationNodeAnimation::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AnimationRootNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeAnimation::__class_id, proto);

	define_animation_node_animation_property(ctx, proto);
	define_animation_node_animation_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_animation_class_proto_funcs, _countof(animation_node_animation_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animation_node_animation_class_constructor, "AnimationNodeAnimation", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationNodeAnimation", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_animation_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/animation_root_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_animation_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeAnimation");
	return m;
}

JSModuleDef *js_init_animation_node_animation_module(JSContext *ctx) {
	return _js_init_animation_node_animation_module(ctx, "@godot/classes/animation_node_animation");
}

void register_animation_node_animation() {
	AnimationNodeAnimation::__init_js_class_id();
	js_init_animation_node_animation_module(ctx);
}