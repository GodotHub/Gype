
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/remote_transform2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void remote_transform2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef remote_transform2d_class_def = {
	"RemoteTransform2D",
	.finalizer = remote_transform2d_class_finalizer
};

static JSValue remote_transform2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RemoteTransform2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	RemoteTransform2D *remote_transform2d_class = memnew(RemoteTransform2D);
	if (!remote_transform2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, remote_transform2d_class);	
	return obj;
}
static JSValue remote_transform2d_class_set_remote_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RemoteTransform2D::set_remote_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue remote_transform2d_class_get_remote_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RemoteTransform2D::get_remote_node, ctx, this_val, argc, argv);
};
static JSValue remote_transform2d_class_force_update_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RemoteTransform2D::force_update_cache, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue remote_transform2d_class_set_use_global_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RemoteTransform2D::set_use_global_coordinates, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue remote_transform2d_class_get_use_global_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RemoteTransform2D::get_use_global_coordinates, ctx, this_val, argc, argv);
};
static JSValue remote_transform2d_class_set_update_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RemoteTransform2D::set_update_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue remote_transform2d_class_get_update_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RemoteTransform2D::get_update_position, ctx, this_val, argc, argv);
};
static JSValue remote_transform2d_class_set_update_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RemoteTransform2D::set_update_rotation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue remote_transform2d_class_get_update_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RemoteTransform2D::get_update_rotation, ctx, this_val, argc, argv);
};
static JSValue remote_transform2d_class_set_update_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RemoteTransform2D::set_update_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue remote_transform2d_class_get_update_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RemoteTransform2D::get_update_scale, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry remote_transform2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_remote_node", 1, &remote_transform2d_class_set_remote_node),
	JS_CFUNC_DEF("get_remote_node", 0, &remote_transform2d_class_get_remote_node),
	JS_CFUNC_DEF("force_update_cache", 0, &remote_transform2d_class_force_update_cache),
	JS_CFUNC_DEF("set_use_global_coordinates", 1, &remote_transform2d_class_set_use_global_coordinates),
	JS_CFUNC_DEF("get_use_global_coordinates", 0, &remote_transform2d_class_get_use_global_coordinates),
	JS_CFUNC_DEF("set_update_position", 1, &remote_transform2d_class_set_update_position),
	JS_CFUNC_DEF("get_update_position", 0, &remote_transform2d_class_get_update_position),
	JS_CFUNC_DEF("set_update_rotation", 1, &remote_transform2d_class_set_update_rotation),
	JS_CFUNC_DEF("get_update_rotation", 0, &remote_transform2d_class_get_update_rotation),
	JS_CFUNC_DEF("set_update_scale", 1, &remote_transform2d_class_set_update_scale),
	JS_CFUNC_DEF("get_update_scale", 0, &remote_transform2d_class_get_update_scale),
};

void define_remote_transform2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "remote_path"),
        JS_NewCFunction(ctx, remote_transform2d_class_get_remote_node, "get_remote_node", 0),
        JS_NewCFunction(ctx, remote_transform2d_class_set_remote_node, "set_remote_node", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_global_coordinates"),
        JS_NewCFunction(ctx, remote_transform2d_class_get_use_global_coordinates, "get_use_global_coordinates", 0),
        JS_NewCFunction(ctx, remote_transform2d_class_set_use_global_coordinates, "set_use_global_coordinates", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "update_position"),
        JS_NewCFunction(ctx, remote_transform2d_class_get_update_position, "get_update_position", 0),
        JS_NewCFunction(ctx, remote_transform2d_class_set_update_position, "set_update_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "update_rotation"),
        JS_NewCFunction(ctx, remote_transform2d_class_get_update_rotation, "get_update_rotation", 0),
        JS_NewCFunction(ctx, remote_transform2d_class_set_update_rotation, "set_update_rotation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "update_scale"),
        JS_NewCFunction(ctx, remote_transform2d_class_get_update_scale, "get_update_scale", 0),
        JS_NewCFunction(ctx, remote_transform2d_class_set_update_scale, "set_update_scale", 1),
        JS_PROP_GETSET
    );
}

static int js_remote_transform2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RemoteTransform2D::__class_id);
	classes["RemoteTransform2D"] = RemoteTransform2D::__class_id;
	class_id_list.insert(RemoteTransform2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RemoteTransform2D::__class_id, &remote_transform2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RemoteTransform2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RemoteTransform2D::__class_id, proto);

	define_remote_transform2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, remote_transform2d_class_proto_funcs, _countof(remote_transform2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, remote_transform2d_class_constructor, "RemoteTransform2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RemoteTransform2D", ctor);

	return 0;
}

JSModuleDef *_js_init_remote_transform2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_remote_transform2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RemoteTransform2D");
	return m;
}

JSModuleDef *js_init_remote_transform2d_module(JSContext *ctx) {
	return _js_init_remote_transform2d_module(ctx, "godot/classes/remote_transform2d");
}

void register_remote_transform2d() {
	RemoteTransform2D::__init_js_class_id();
	js_init_remote_transform2d_module(ctx);
}