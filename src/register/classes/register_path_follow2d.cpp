
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/path_follow2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void path_follow2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef path_follow2d_class_def = {
	"PathFollow2D",
	.finalizer = path_follow2d_class_finalizer
};

static JSValue path_follow2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PathFollow2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	PathFollow2D *path_follow2d_class = memnew(PathFollow2D);
	if (!path_follow2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, path_follow2d_class);	
	return obj;
}
static JSValue path_follow2d_class_set_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PathFollow2D::set_progress, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_get_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PathFollow2D::get_progress, ctx, this_val, argc, argv);
};
static JSValue path_follow2d_class_set_h_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PathFollow2D::set_h_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_get_h_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PathFollow2D::get_h_offset, ctx, this_val, argc, argv);
};
static JSValue path_follow2d_class_set_v_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PathFollow2D::set_v_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_get_v_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PathFollow2D::get_v_offset, ctx, this_val, argc, argv);
};
static JSValue path_follow2d_class_set_progress_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PathFollow2D::set_progress_ratio, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_get_progress_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PathFollow2D::get_progress_ratio, ctx, this_val, argc, argv);
};
static JSValue path_follow2d_class_set_rotates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PathFollow2D::set_rotates, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_is_rotating(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PathFollow2D::is_rotating, ctx, this_val, argc, argv);
};
static JSValue path_follow2d_class_set_cubic_interpolation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PathFollow2D::set_cubic_interpolation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_get_cubic_interpolation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PathFollow2D::get_cubic_interpolation, ctx, this_val, argc, argv);
};
static JSValue path_follow2d_class_set_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PathFollow2D::set_loop, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue path_follow2d_class_has_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PathFollow2D::has_loop, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry path_follow2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_progress", 1, &path_follow2d_class_set_progress),
	JS_CFUNC_DEF("get_progress", 0, &path_follow2d_class_get_progress),
	JS_CFUNC_DEF("set_h_offset", 1, &path_follow2d_class_set_h_offset),
	JS_CFUNC_DEF("get_h_offset", 0, &path_follow2d_class_get_h_offset),
	JS_CFUNC_DEF("set_v_offset", 1, &path_follow2d_class_set_v_offset),
	JS_CFUNC_DEF("get_v_offset", 0, &path_follow2d_class_get_v_offset),
	JS_CFUNC_DEF("set_progress_ratio", 1, &path_follow2d_class_set_progress_ratio),
	JS_CFUNC_DEF("get_progress_ratio", 0, &path_follow2d_class_get_progress_ratio),
	JS_CFUNC_DEF("set_rotates", 1, &path_follow2d_class_set_rotates),
	JS_CFUNC_DEF("is_rotating", 0, &path_follow2d_class_is_rotating),
	JS_CFUNC_DEF("set_cubic_interpolation", 1, &path_follow2d_class_set_cubic_interpolation),
	JS_CFUNC_DEF("get_cubic_interpolation", 0, &path_follow2d_class_get_cubic_interpolation),
	JS_CFUNC_DEF("set_loop", 1, &path_follow2d_class_set_loop),
	JS_CFUNC_DEF("has_loop", 0, &path_follow2d_class_has_loop),
};

void define_path_follow2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "progress"),
        JS_NewCFunction(ctx, path_follow2d_class_get_progress, "get_progress", 0),
        JS_NewCFunction(ctx, path_follow2d_class_set_progress, "set_progress", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "progress_ratio"),
        JS_NewCFunction(ctx, path_follow2d_class_get_progress_ratio, "get_progress_ratio", 0),
        JS_NewCFunction(ctx, path_follow2d_class_set_progress_ratio, "set_progress_ratio", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "h_offset"),
        JS_NewCFunction(ctx, path_follow2d_class_get_h_offset, "get_h_offset", 0),
        JS_NewCFunction(ctx, path_follow2d_class_set_h_offset, "set_h_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "v_offset"),
        JS_NewCFunction(ctx, path_follow2d_class_get_v_offset, "get_v_offset", 0),
        JS_NewCFunction(ctx, path_follow2d_class_set_v_offset, "set_v_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rotates"),
        JS_NewCFunction(ctx, path_follow2d_class_is_rotating, "is_rotating", 0),
        JS_NewCFunction(ctx, path_follow2d_class_set_rotates, "set_rotates", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "cubic_interp"),
        JS_NewCFunction(ctx, path_follow2d_class_get_cubic_interpolation, "get_cubic_interpolation", 0),
        JS_NewCFunction(ctx, path_follow2d_class_set_cubic_interpolation, "set_cubic_interpolation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "loop"),
        JS_NewCFunction(ctx, path_follow2d_class_has_loop, "has_loop", 0),
        JS_NewCFunction(ctx, path_follow2d_class_set_loop, "set_loop", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_path_follow2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PathFollow2D::__class_id);
	classes["PathFollow2D"] = PathFollow2D::__class_id;
	class_id_list.insert(PathFollow2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PathFollow2D::__class_id, &path_follow2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PathFollow2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PathFollow2D::__class_id, proto);

	define_path_follow2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, path_follow2d_class_proto_funcs, _countof(path_follow2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, path_follow2d_class_constructor, "PathFollow2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PathFollow2D", ctor);

	return 0;
}

JSModuleDef *_js_init_path_follow2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_path_follow2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PathFollow2D");
	return m;
}

JSModuleDef *js_init_path_follow2d_module(JSContext *ctx) {
	return _js_init_path_follow2d_module(ctx, "godot/classes/path_follow2d");
}

void register_path_follow2d() {
	PathFollow2D::__init_js_class_id();
	js_init_path_follow2d_module(ctx);
}