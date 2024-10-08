
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/remote_transform3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void remote_transform3d_class_finalizer(JSRuntime *rt, JSValue val) {
	RemoteTransform3D *remote_transform3d = static_cast<RemoteTransform3D *>(JS_GetOpaque(val, RemoteTransform3D::__class_id));
	if (remote_transform3d)
		RemoteTransform3D::free(nullptr, remote_transform3d);
}

static JSClassDef remote_transform3d_class_def = {
	"RemoteTransform3D",
	.finalizer = remote_transform3d_class_finalizer
};

static JSValue remote_transform3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RemoteTransform3D *remote_transform3d_class;
	JSValue obj = JS_NewObjectClass(ctx, RemoteTransform3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	remote_transform3d_class = memnew(RemoteTransform3D);
	if (!remote_transform3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, remote_transform3d_class);
	return obj;
}
static JSValue remote_transform3d_class_set_remote_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RemoteTransform3D::set_remote_node, RemoteTransform3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue remote_transform3d_class_get_remote_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RemoteTransform3D::get_remote_node, RemoteTransform3D::__class_id, ctx, this_val, argv);
};
static JSValue remote_transform3d_class_force_update_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RemoteTransform3D::force_update_cache, RemoteTransform3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue remote_transform3d_class_set_use_global_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RemoteTransform3D::set_use_global_coordinates, RemoteTransform3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue remote_transform3d_class_get_use_global_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RemoteTransform3D::get_use_global_coordinates, RemoteTransform3D::__class_id, ctx, this_val, argv);
};
static JSValue remote_transform3d_class_set_update_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RemoteTransform3D::set_update_position, RemoteTransform3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue remote_transform3d_class_get_update_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RemoteTransform3D::get_update_position, RemoteTransform3D::__class_id, ctx, this_val, argv);
};
static JSValue remote_transform3d_class_set_update_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RemoteTransform3D::set_update_rotation, RemoteTransform3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue remote_transform3d_class_get_update_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RemoteTransform3D::get_update_rotation, RemoteTransform3D::__class_id, ctx, this_val, argv);
};
static JSValue remote_transform3d_class_set_update_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RemoteTransform3D::set_update_scale, RemoteTransform3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue remote_transform3d_class_get_update_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RemoteTransform3D::get_update_scale, RemoteTransform3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry remote_transform3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_remote_node", 1, &remote_transform3d_class_set_remote_node),
	JS_CFUNC_DEF("get_remote_node", 0, &remote_transform3d_class_get_remote_node),
	JS_CFUNC_DEF("force_update_cache", 0, &remote_transform3d_class_force_update_cache),
	JS_CFUNC_DEF("set_use_global_coordinates", 1, &remote_transform3d_class_set_use_global_coordinates),
	JS_CFUNC_DEF("get_use_global_coordinates", 0, &remote_transform3d_class_get_use_global_coordinates),
	JS_CFUNC_DEF("set_update_position", 1, &remote_transform3d_class_set_update_position),
	JS_CFUNC_DEF("get_update_position", 0, &remote_transform3d_class_get_update_position),
	JS_CFUNC_DEF("set_update_rotation", 1, &remote_transform3d_class_set_update_rotation),
	JS_CFUNC_DEF("get_update_rotation", 0, &remote_transform3d_class_get_update_rotation),
	JS_CFUNC_DEF("set_update_scale", 1, &remote_transform3d_class_set_update_scale),
	JS_CFUNC_DEF("get_update_scale", 0, &remote_transform3d_class_get_update_scale),
};

static int js_remote_transform3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RemoteTransform3D::__class_id);
	classes["RemoteTransform3D"] = RemoteTransform3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RemoteTransform3D::__class_id, &remote_transform3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RemoteTransform3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, remote_transform3d_class_proto_funcs, _countof(remote_transform3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, remote_transform3d_class_constructor, "RemoteTransform3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RemoteTransform3D", ctor);

	return 0;
}

JSModuleDef *_js_init_remote_transform3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_remote_transform3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RemoteTransform3D");
	return m;
}

JSModuleDef *js_init_remote_transform3d_module(JSContext *ctx) {
	return _js_init_remote_transform3d_module(ctx, "godot/classes/remote_transform3d");
}

void register_remote_transform3d() {
	js_init_remote_transform3d_module(ctx);
}