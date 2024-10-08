
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/compositor_effect.hpp>
#include <godot_cpp/classes/render_data.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void compositor_effect_class_finalizer(JSRuntime *rt, JSValue val) {
	CompositorEffect *compositor_effect = static_cast<CompositorEffect *>(JS_GetOpaque(val, CompositorEffect::__class_id));
	if (compositor_effect)
		CompositorEffect::free(nullptr, compositor_effect);
}

static JSClassDef compositor_effect_class_def = {
	"CompositorEffect",
	.finalizer = compositor_effect_class_finalizer
};

static JSValue compositor_effect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CompositorEffect *compositor_effect_class;
	JSValue obj = JS_NewObjectClass(ctx, CompositorEffect::__class_id);
	if (JS_IsException(obj))
		return obj;
	compositor_effect_class = memnew(CompositorEffect);
	if (!compositor_effect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, compositor_effect_class);
	return obj;
}
static JSValue compositor_effect_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CompositorEffect::set_enabled, CompositorEffect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CompositorEffect::get_enabled, CompositorEffect::__class_id, ctx, this_val, argv);
};
static JSValue compositor_effect_class_set_effect_callback_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CompositorEffect::set_effect_callback_type, CompositorEffect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_effect_callback_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CompositorEffect::get_effect_callback_type, CompositorEffect::__class_id, ctx, this_val, argv);
};
static JSValue compositor_effect_class_set_access_resolved_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CompositorEffect::set_access_resolved_color, CompositorEffect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_access_resolved_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CompositorEffect::get_access_resolved_color, CompositorEffect::__class_id, ctx, this_val, argv);
};
static JSValue compositor_effect_class_set_access_resolved_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CompositorEffect::set_access_resolved_depth, CompositorEffect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_access_resolved_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CompositorEffect::get_access_resolved_depth, CompositorEffect::__class_id, ctx, this_val, argv);
};
static JSValue compositor_effect_class_set_needs_motion_vectors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CompositorEffect::set_needs_motion_vectors, CompositorEffect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_needs_motion_vectors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CompositorEffect::get_needs_motion_vectors, CompositorEffect::__class_id, ctx, this_val, argv);
};
static JSValue compositor_effect_class_set_needs_normal_roughness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CompositorEffect::set_needs_normal_roughness, CompositorEffect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_needs_normal_roughness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CompositorEffect::get_needs_normal_roughness, CompositorEffect::__class_id, ctx, this_val, argv);
};
static JSValue compositor_effect_class_set_needs_separate_specular(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CompositorEffect::set_needs_separate_specular, CompositorEffect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_needs_separate_specular(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CompositorEffect::get_needs_separate_specular, CompositorEffect::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry compositor_effect_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enabled", 1, &compositor_effect_class_set_enabled),
	JS_CFUNC_DEF("get_enabled", 0, &compositor_effect_class_get_enabled),
	JS_CFUNC_DEF("set_effect_callback_type", 1, &compositor_effect_class_set_effect_callback_type),
	JS_CFUNC_DEF("get_effect_callback_type", 0, &compositor_effect_class_get_effect_callback_type),
	JS_CFUNC_DEF("set_access_resolved_color", 1, &compositor_effect_class_set_access_resolved_color),
	JS_CFUNC_DEF("get_access_resolved_color", 0, &compositor_effect_class_get_access_resolved_color),
	JS_CFUNC_DEF("set_access_resolved_depth", 1, &compositor_effect_class_set_access_resolved_depth),
	JS_CFUNC_DEF("get_access_resolved_depth", 0, &compositor_effect_class_get_access_resolved_depth),
	JS_CFUNC_DEF("set_needs_motion_vectors", 1, &compositor_effect_class_set_needs_motion_vectors),
	JS_CFUNC_DEF("get_needs_motion_vectors", 0, &compositor_effect_class_get_needs_motion_vectors),
	JS_CFUNC_DEF("set_needs_normal_roughness", 1, &compositor_effect_class_set_needs_normal_roughness),
	JS_CFUNC_DEF("get_needs_normal_roughness", 0, &compositor_effect_class_get_needs_normal_roughness),
	JS_CFUNC_DEF("set_needs_separate_specular", 1, &compositor_effect_class_set_needs_separate_specular),
	JS_CFUNC_DEF("get_needs_separate_specular", 0, &compositor_effect_class_get_needs_separate_specular),
};

static int js_compositor_effect_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CompositorEffect::__class_id);
	classes["CompositorEffect"] = CompositorEffect::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CompositorEffect::__class_id, &compositor_effect_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CompositorEffect::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, compositor_effect_class_proto_funcs, _countof(compositor_effect_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, compositor_effect_class_constructor, "CompositorEffect", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CompositorEffect", ctor);

	return 0;
}

JSModuleDef *_js_init_compositor_effect_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_compositor_effect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CompositorEffect");
	return m;
}

JSModuleDef *js_init_compositor_effect_module(JSContext *ctx) {
	return _js_init_compositor_effect_module(ctx, "godot/classes/compositor_effect");
}

void register_compositor_effect() {
	js_init_compositor_effect_module(ctx);
}