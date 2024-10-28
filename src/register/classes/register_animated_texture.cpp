
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/animated_texture.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animated_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef animated_texture_class_def = {
	"AnimatedTexture",
	.finalizer = animated_texture_class_finalizer
};

static JSValue animated_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimatedTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	AnimatedTexture *animated_texture_class = memnew(AnimatedTexture);
	if (!animated_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animated_texture_class);
	return obj;
}
static JSValue animated_texture_class_set_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AnimatedTexture::set_frames, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedTexture::get_frames, ctx, this_val, argc, argv);
};
static JSValue animated_texture_class_set_current_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AnimatedTexture::set_current_frame, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_current_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedTexture::get_current_frame, ctx, this_val, argc, argv);
};
static JSValue animated_texture_class_set_pause(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AnimatedTexture::set_pause, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_pause(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedTexture::get_pause, ctx, this_val, argc, argv);
};
static JSValue animated_texture_class_set_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AnimatedTexture::set_one_shot, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedTexture::get_one_shot, ctx, this_val, argc, argv);
};
static JSValue animated_texture_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AnimatedTexture::set_speed_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedTexture::get_speed_scale, ctx, this_val, argc, argv);
};
static JSValue animated_texture_class_set_frame_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AnimatedTexture::set_frame_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_frame_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedTexture::get_frame_texture, ctx, this_val, argc, argv);
};
static JSValue animated_texture_class_set_frame_duration(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AnimatedTexture::set_frame_duration, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_frame_duration(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedTexture::get_frame_duration, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animated_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_frames", 1, &animated_texture_class_set_frames),
	JS_CFUNC_DEF("get_frames", 0, &animated_texture_class_get_frames),
	JS_CFUNC_DEF("set_current_frame", 1, &animated_texture_class_set_current_frame),
	JS_CFUNC_DEF("get_current_frame", 0, &animated_texture_class_get_current_frame),
	JS_CFUNC_DEF("set_pause", 1, &animated_texture_class_set_pause),
	JS_CFUNC_DEF("get_pause", 0, &animated_texture_class_get_pause),
	JS_CFUNC_DEF("set_one_shot", 1, &animated_texture_class_set_one_shot),
	JS_CFUNC_DEF("get_one_shot", 0, &animated_texture_class_get_one_shot),
	JS_CFUNC_DEF("set_speed_scale", 1, &animated_texture_class_set_speed_scale),
	JS_CFUNC_DEF("get_speed_scale", 0, &animated_texture_class_get_speed_scale),
	JS_CFUNC_DEF("set_frame_texture", 2, &animated_texture_class_set_frame_texture),
	JS_CFUNC_DEF("get_frame_texture", 1, &animated_texture_class_get_frame_texture),
	JS_CFUNC_DEF("set_frame_duration", 2, &animated_texture_class_set_frame_duration),
	JS_CFUNC_DEF("get_frame_duration", 1, &animated_texture_class_get_frame_duration),
};

void define_animated_texture_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "frames"),
			JS_NewCFunction(ctx, animated_texture_class_get_frames, "get_frames", 0),
			JS_NewCFunction(ctx, animated_texture_class_set_frames, "set_frames", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "current_frame"),
			JS_NewCFunction(ctx, animated_texture_class_get_current_frame, "get_current_frame", 0),
			JS_NewCFunction(ctx, animated_texture_class_set_current_frame, "set_current_frame", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "pause"),
			JS_NewCFunction(ctx, animated_texture_class_get_pause, "get_pause", 0),
			JS_NewCFunction(ctx, animated_texture_class_set_pause, "set_pause", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "one_shot"),
			JS_NewCFunction(ctx, animated_texture_class_get_one_shot, "get_one_shot", 0),
			JS_NewCFunction(ctx, animated_texture_class_set_one_shot, "set_one_shot", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "speed_scale"),
			JS_NewCFunction(ctx, animated_texture_class_get_speed_scale, "get_speed_scale", 0),
			JS_NewCFunction(ctx, animated_texture_class_set_speed_scale, "set_speed_scale", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_animated_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimatedTexture::__class_id);
	classes["AnimatedTexture"] = AnimatedTexture::__class_id;
	class_id_list.insert(AnimatedTexture::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimatedTexture::__class_id, &animated_texture_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimatedTexture::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimatedTexture::__class_id, proto);

	define_animated_texture_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animated_texture_class_proto_funcs, _countof(animated_texture_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animated_texture_class_constructor, "AnimatedTexture", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimatedTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_animated_texture_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/texture2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animated_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimatedTexture");
	return m;
}

JSModuleDef *js_init_animated_texture_module(JSContext *ctx) {
	return _js_init_animated_texture_module(ctx, "godot/classes/animated_texture");
}

void register_animated_texture() {
	AnimatedTexture::__init_js_class_id();
	js_init_animated_texture_module(ctx);
}