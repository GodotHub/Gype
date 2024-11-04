
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_modification2d_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonModification2D *skeleton_modification2d = static_cast<SkeletonModification2D *>(JS_GetOpaque(val, SkeletonModification2D::__class_id));
	if (skeleton_modification2d)
		memdelete(skeleton_modification2d);
}

static JSClassDef skeleton_modification2d_class_def = {
	"SkeletonModification2D",
	.finalizer = skeleton_modification2d_class_finalizer
};

static JSValue skeleton_modification2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SkeletonModification2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	SkeletonModification2D *skeleton_modification2d_class;
	if (argc == 1) 
		skeleton_modification2d_class = static_cast<SkeletonModification2D *>(Variant(*argv).operator Object *());
	else 
		skeleton_modification2d_class = memnew(SkeletonModification2D);
	if (!skeleton_modification2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, skeleton_modification2d_class);
	return obj;
}
static JSValue skeleton_modification2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2D::set_enabled, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_class_get_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&SkeletonModification2D::get_enabled, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_class_get_modification_stack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&SkeletonModification2D::get_modification_stack, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_class_set_is_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2D::set_is_setup, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_class_get_is_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModification2D::get_is_setup, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_class_set_execution_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2D::set_execution_mode, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_class_get_execution_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModification2D::get_execution_mode, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_class_clamp_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&SkeletonModification2D::clamp_angle, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_class_set_editor_draw_gizmo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2D::set_editor_draw_gizmo, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_class_get_editor_draw_gizmo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModification2D::get_editor_draw_gizmo, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry skeleton_modification2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enabled", 1, &skeleton_modification2d_class_set_enabled),
	JS_CFUNC_DEF("get_enabled", 0, &skeleton_modification2d_class_get_enabled),
	JS_CFUNC_DEF("get_modification_stack", 0, &skeleton_modification2d_class_get_modification_stack),
	JS_CFUNC_DEF("set_is_setup", 1, &skeleton_modification2d_class_set_is_setup),
	JS_CFUNC_DEF("get_is_setup", 0, &skeleton_modification2d_class_get_is_setup),
	JS_CFUNC_DEF("set_execution_mode", 1, &skeleton_modification2d_class_set_execution_mode),
	JS_CFUNC_DEF("get_execution_mode", 0, &skeleton_modification2d_class_get_execution_mode),
	JS_CFUNC_DEF("clamp_angle", 4, &skeleton_modification2d_class_clamp_angle),
	JS_CFUNC_DEF("set_editor_draw_gizmo", 1, &skeleton_modification2d_class_set_editor_draw_gizmo),
	JS_CFUNC_DEF("get_editor_draw_gizmo", 0, &skeleton_modification2d_class_get_editor_draw_gizmo),
};

static void define_skeleton_modification2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enabled"),
        JS_NewCFunction(ctx, skeleton_modification2d_class_get_enabled, "get_enabled", 0),
        JS_NewCFunction(ctx, skeleton_modification2d_class_set_enabled, "set_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "execution_mode"),
        JS_NewCFunction(ctx, skeleton_modification2d_class_get_execution_mode, "get_execution_mode", 0),
        JS_NewCFunction(ctx, skeleton_modification2d_class_set_execution_mode, "set_execution_mode", 1),
        JS_PROP_GETSET
    );
	
}

static void define_skeleton_modification2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_skeleton_modification2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["SkeletonModification2D"] = SkeletonModification2D::__class_id;
	class_id_list.insert(SkeletonModification2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModification2D::__class_id, &skeleton_modification2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SkeletonModification2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModification2D::__class_id, proto);

	define_skeleton_modification2d_property(ctx, proto);
	define_skeleton_modification2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification2d_class_proto_funcs, _countof(skeleton_modification2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification2d_class_constructor, "SkeletonModification2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "SkeletonModification2D", ctor);
	constructors[SkeletonModification2D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_skeleton_modification2d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modification2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModification2D");
	return m;
}

JSModuleDef *js_init_skeleton_modification2d_module(JSContext *ctx) {
	return _js_init_skeleton_modification2d_module(ctx, "@godot/classes/skeleton_modification2d");
}

void register_skeleton_modification2d() {
	SkeletonModification2D::__init_js_class_id();
	js_init_skeleton_modification2d_module(ctx);
}