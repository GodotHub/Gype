
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_modification_stack2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef skeleton_modification_stack2d_class_def = {
	"SkeletonModificationStack2D",
	.finalizer = skeleton_modification_stack2d_class_finalizer
};

static JSValue skeleton_modification_stack2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SkeletonModificationStack2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	SkeletonModificationStack2D *skeleton_modification_stack2d_class = memnew(SkeletonModificationStack2D);
	if (!skeleton_modification_stack2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, skeleton_modification_stack2d_class);	
	return obj;
}
static JSValue skeleton_modification_stack2d_class_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SkeletonModificationStack2D::setup, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_execute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SkeletonModificationStack2D::execute, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_enable_all_modifications(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SkeletonModificationStack2D::enable_all_modifications, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_get_modification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModificationStack2D::get_modification, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification_stack2d_class_add_modification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SkeletonModificationStack2D::add_modification, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_delete_modification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SkeletonModificationStack2D::delete_modification, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_set_modification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SkeletonModificationStack2D::set_modification, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_set_modification_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SkeletonModificationStack2D::set_modification_count, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_get_modification_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModificationStack2D::get_modification_count, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification_stack2d_class_get_is_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModificationStack2D::get_is_setup, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification_stack2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SkeletonModificationStack2D::set_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_get_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModificationStack2D::get_enabled, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification_stack2d_class_set_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SkeletonModificationStack2D::set_strength, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification_stack2d_class_get_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModificationStack2D::get_strength, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification_stack2d_class_get_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModificationStack2D::get_skeleton, ctx, this_val, argc, argv);
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

void define_skeleton_modification_stack2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "enabled"),
        JS_NewCFunction(ctx, skeleton_modification_stack2d_class_get_enabled, "get_enabled", 0),
        JS_NewCFunction(ctx, skeleton_modification_stack2d_class_set_enabled, "set_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "strength"),
        JS_NewCFunction(ctx, skeleton_modification_stack2d_class_get_strength, "get_strength", 0),
        JS_NewCFunction(ctx, skeleton_modification_stack2d_class_set_strength, "set_strength", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "modification_count"),
        JS_NewCFunction(ctx, skeleton_modification_stack2d_class_get_modification_count, "get_modification_count", 0),
        JS_NewCFunction(ctx, skeleton_modification_stack2d_class_set_modification_count, "set_modification_count", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_skeleton_modification_stack2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&SkeletonModificationStack2D::__class_id);
	classes["SkeletonModificationStack2D"] = SkeletonModificationStack2D::__class_id;
	class_id_list.insert(SkeletonModificationStack2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModificationStack2D::__class_id, &skeleton_modification_stack2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SkeletonModificationStack2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModificationStack2D::__class_id, proto);

	define_skeleton_modification_stack2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification_stack2d_class_proto_funcs, _countof(skeleton_modification_stack2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification_stack2d_class_constructor, "SkeletonModificationStack2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SkeletonModificationStack2D", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_modification_stack2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	SkeletonModificationStack2D::__init_js_class_id();
	js_init_skeleton_modification_stack2d_module(ctx);
}