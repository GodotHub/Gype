
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void skeleton_modification_stack2d_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonModificationStack2D *skeleton_modification_stack2d = static_cast<SkeletonModificationStack2D *>(JS_GetOpaque(val, SkeletonModificationStack2D::__class_id));
	if (skeleton_modification_stack2d)
		SkeletonModificationStack2D::free(nullptr, skeleton_modification_stack2d);
}

static JSClassDef skeleton_modification_stack2d_class_def = {
	"SkeletonModificationStack2D",
	.finalizer = skeleton_modification_stack2d_class_finalizer
};

static JSValue skeleton_modification_stack2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SkeletonModificationStack2D *skeleton_modification_stack2d_class;
	JSValue obj = JS_NewObjectClass(ctx, SkeletonModificationStack2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton_modification_stack2d_class = memnew(SkeletonModificationStack2D);
	if (!skeleton_modification_stack2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton_modification_stack2d_class);
	return obj;
}
static JSValue skeleton_modification_stack2d_class_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModificationStack2D::setup, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_execute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModificationStack2D::execute, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_enable_all_modifications(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModificationStack2D::enable_all_modifications, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_get_modification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModificationStack2D::get_modification, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification_stack2d_class_add_modification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModificationStack2D::add_modification, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_delete_modification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModificationStack2D::delete_modification, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_set_modification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModificationStack2D::set_modification, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_set_modification_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModificationStack2D::set_modification_count, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_get_modification_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModificationStack2D::get_modification_count, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification_stack2d_class_get_is_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModificationStack2D::get_is_setup, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification_stack2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModificationStack2D::set_enabled, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_get_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModificationStack2D::get_enabled, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification_stack2d_class_set_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModificationStack2D::set_strength, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_get_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModificationStack2D::get_strength, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification_stack2d_class_get_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModificationStack2D::get_skeleton, SkeletonModificationStack2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry skeleton_modification_stack2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("setup", 0, &skeleton_modification_stack2d_class_setup),
	JS_CFUNC_DEF("execute", 2, &skeleton_modification_stack2d_class_execute),
	JS_CFUNC_DEF("enable_all_modifications", 1, &skeleton_modification_stack2d_class_enable_all_modifications),
	JS_CFUNC_DEF("get_modification", 1, &skeleton_modification_stack2d_class_get_modification),
	JS_CFUNC_DEF("add_modification", 1, &skeleton_modification_stack2d_class_add_modification),
	JS_CFUNC_DEF("delete_modification", 1, &skeleton_modification_stack2d_class_delete_modification),
	JS_CFUNC_DEF("set_modification", 2, &skeleton_modification_stack2d_class_set_modification),
	JS_CFUNC_DEF("set_modification_count", 1, &skeleton_modification_stack2d_class_set_modification_count),
	JS_CFUNC_DEF("get_modification_count", 0, &skeleton_modification_stack2d_class_get_modification_count),
	JS_CFUNC_DEF("get_is_setup", 0, &skeleton_modification_stack2d_class_get_is_setup),
	JS_CFUNC_DEF("set_enabled", 1, &skeleton_modification_stack2d_class_set_enabled),
	JS_CFUNC_DEF("get_enabled", 0, &skeleton_modification_stack2d_class_get_enabled),
	JS_CFUNC_DEF("set_strength", 1, &skeleton_modification_stack2d_class_set_strength),
	JS_CFUNC_DEF("get_strength", 0, &skeleton_modification_stack2d_class_get_strength),
	JS_CFUNC_DEF("get_skeleton", 0, &skeleton_modification_stack2d_class_get_skeleton),
};

static int js_skeleton_modification_stack2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkeletonModificationStack2D::__class_id);
	classes["SkeletonModificationStack2D"] = SkeletonModificationStack2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModificationStack2D::__class_id, &skeleton_modification_stack2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModificationStack2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification_stack2d_class_proto_funcs, _countof(skeleton_modification_stack2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification_stack2d_class_constructor, "SkeletonModificationStack2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SkeletonModificationStack2D", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_modification_stack2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modification_stack2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModificationStack2D");
	return m;
}

JSModuleDef *js_init_skeleton_modification_stack2d_module(JSContext *ctx) {
	return _js_init_skeleton_modification_stack2d_module(ctx, "godot/classes/skeleton_modification_stack2d");
}

void register_skeleton_modification_stack2d() {
	js_init_skeleton_modification_stack2d_module(ctx);
}