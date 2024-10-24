
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/render_data.hpp>
#include <godot_cpp/classes/compositor_effect.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void compositor_effect_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef compositor_effect_class_def = {
	"CompositorEffect",
	.finalizer = compositor_effect_class_finalizer
};

static JSValue compositor_effect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CompositorEffect::__class_id);
	if (JS_IsException(obj))
		return obj;
	CompositorEffect *compositor_effect_class = memnew(CompositorEffect);
	if (!compositor_effect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, compositor_effect_class);	
	return obj;
}
static JSValue compositor_effect_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CompositorEffect::set_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CompositorEffect::get_enabled, ctx, this_val, argc, argv);
};
static JSValue compositor_effect_class_set_effect_callback_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CompositorEffect::set_effect_callback_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_effect_callback_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CompositorEffect::get_effect_callback_type, ctx, this_val, argc, argv);
};
static JSValue compositor_effect_class_set_access_resolved_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CompositorEffect::set_access_resolved_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_access_resolved_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CompositorEffect::get_access_resolved_color, ctx, this_val, argc, argv);
};
static JSValue compositor_effect_class_set_access_resolved_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CompositorEffect::set_access_resolved_depth, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_access_resolved_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CompositorEffect::get_access_resolved_depth, ctx, this_val, argc, argv);
};
static JSValue compositor_effect_class_set_needs_motion_vectors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CompositorEffect::set_needs_motion_vectors, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_needs_motion_vectors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CompositorEffect::get_needs_motion_vectors, ctx, this_val, argc, argv);
};
static JSValue compositor_effect_class_set_needs_normal_roughness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CompositorEffect::set_needs_normal_roughness, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_needs_normal_roughness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CompositorEffect::get_needs_normal_roughness, ctx, this_val, argc, argv);
};
static JSValue compositor_effect_class_set_needs_separate_specular(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CompositorEffect::set_needs_separate_specular, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue compositor_effect_class_get_needs_separate_specular(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CompositorEffect::get_needs_separate_specular, ctx, this_val, argc, argv);
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

void define_compositor_effect_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "enabled"),
        JS_NewCFunction(ctx, compositor_effect_class_get_enabled, "get_enabled", 0),
        JS_NewCFunction(ctx, compositor_effect_class_set_enabled, "set_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "effect_callback_type"),
        JS_NewCFunction(ctx, compositor_effect_class_get_effect_callback_type, "get_effect_callback_type", 0),
        JS_NewCFunction(ctx, compositor_effect_class_set_effect_callback_type, "set_effect_callback_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "access_resolved_color"),
        JS_NewCFunction(ctx, compositor_effect_class_get_access_resolved_color, "get_access_resolved_color", 0),
        JS_NewCFunction(ctx, compositor_effect_class_set_access_resolved_color, "set_access_resolved_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "access_resolved_depth"),
        JS_NewCFunction(ctx, compositor_effect_class_get_access_resolved_depth, "get_access_resolved_depth", 0),
        JS_NewCFunction(ctx, compositor_effect_class_set_access_resolved_depth, "set_access_resolved_depth", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "needs_motion_vectors"),
        JS_NewCFunction(ctx, compositor_effect_class_get_needs_motion_vectors, "get_needs_motion_vectors", 0),
        JS_NewCFunction(ctx, compositor_effect_class_set_needs_motion_vectors, "set_needs_motion_vectors", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "needs_normal_roughness"),
        JS_NewCFunction(ctx, compositor_effect_class_get_needs_normal_roughness, "get_needs_normal_roughness", 0),
        JS_NewCFunction(ctx, compositor_effect_class_set_needs_normal_roughness, "set_needs_normal_roughness", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "needs_separate_specular"),
        JS_NewCFunction(ctx, compositor_effect_class_get_needs_separate_specular, "get_needs_separate_specular", 0),
        JS_NewCFunction(ctx, compositor_effect_class_set_needs_separate_specular, "set_needs_separate_specular", 1),
        JS_PROP_GETSET
    );
}

static int js_compositor_effect_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CompositorEffect::__class_id);
	classes["CompositorEffect"] = CompositorEffect::__class_id;
	class_id_list.insert(CompositorEffect::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CompositorEffect::__class_id, &compositor_effect_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CompositorEffect::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CompositorEffect::__class_id, proto);

	define_compositor_effect_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, compositor_effect_class_proto_funcs, _countof(compositor_effect_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, compositor_effect_class_constructor, "CompositorEffect", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CompositorEffect", ctor);

	return 0;
}

JSModuleDef *_js_init_compositor_effect_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	CompositorEffect::__init_js_class_id();
	js_init_compositor_effect_module(ctx);
}