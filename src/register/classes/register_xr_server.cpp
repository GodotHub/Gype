
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/classes/xr_server.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void xr_server_class_finalizer(JSRuntime *rt, JSValue val) {
	XRServer *xr_server = static_cast<XRServer *>(JS_GetOpaque(val, XRServer::__class_id));
	if (xr_server)
		XRServer::free(nullptr, xr_server);
}

static JSClassDef xr_server_class_def = {
	"XRServer",
	.finalizer = xr_server_class_finalizer
};

static JSValue xr_server_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRServer *xr_server_class;
	JSValue obj = JS_NewObjectClass(ctx, XRServer::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_server_class = XRServer::get_singleton();
	if (!xr_server_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_server_class);
	return obj;
}
static JSValue xr_server_class_get_world_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRServer::get_world_scale, XRServer::__class_id, ctx, this_val, argv);
};
static JSValue xr_server_class_set_world_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRServer::set_world_scale, XRServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_server_class_get_world_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRServer::get_world_origin, XRServer::__class_id, ctx, this_val, argv);
};
static JSValue xr_server_class_set_world_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRServer::set_world_origin, XRServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_server_class_get_reference_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRServer::get_reference_frame, XRServer::__class_id, ctx, this_val, argv);
};
static JSValue xr_server_class_clear_reference_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRServer::clear_reference_frame, XRServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_server_class_center_on_hmd(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRServer::center_on_hmd, XRServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_server_class_get_hmd_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRServer::get_hmd_transform, XRServer::__class_id, ctx, this_val, argv);
};
static JSValue xr_server_class_add_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRServer::add_interface, XRServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_server_class_get_interface_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRServer::get_interface_count, XRServer::__class_id, ctx, this_val, argv);
};
static JSValue xr_server_class_remove_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRServer::remove_interface, XRServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_server_class_get_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRServer::get_interface, XRServer::__class_id, ctx, this_val, argv);
};
static JSValue xr_server_class_get_interfaces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRServer::get_interfaces, XRServer::__class_id, ctx, this_val, argv);
};
static JSValue xr_server_class_find_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRServer::find_interface, XRServer::__class_id, ctx, this_val, argv);
};
static JSValue xr_server_class_add_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRServer::add_tracker, XRServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_server_class_remove_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRServer::remove_tracker, XRServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_server_class_get_trackers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRServer::get_trackers, XRServer::__class_id, ctx, this_val, argv);
};
static JSValue xr_server_class_get_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRServer::get_tracker, XRServer::__class_id, ctx, this_val, argv);
};
static JSValue xr_server_class_get_primary_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRServer::get_primary_interface, XRServer::__class_id, ctx, this_val, argv);
};
static JSValue xr_server_class_set_primary_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRServer::set_primary_interface, XRServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry xr_server_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_world_scale", 0, &xr_server_class_get_world_scale),
	JS_CFUNC_DEF("set_world_scale", 1, &xr_server_class_set_world_scale),
	JS_CFUNC_DEF("get_world_origin", 0, &xr_server_class_get_world_origin),
	JS_CFUNC_DEF("set_world_origin", 1, &xr_server_class_set_world_origin),
	JS_CFUNC_DEF("get_reference_frame", 0, &xr_server_class_get_reference_frame),
	JS_CFUNC_DEF("clear_reference_frame", 0, &xr_server_class_clear_reference_frame),
	JS_CFUNC_DEF("center_on_hmd", 2, &xr_server_class_center_on_hmd),
	JS_CFUNC_DEF("get_hmd_transform", 0, &xr_server_class_get_hmd_transform),
	JS_CFUNC_DEF("add_interface", 1, &xr_server_class_add_interface),
	JS_CFUNC_DEF("get_interface_count", 0, &xr_server_class_get_interface_count),
	JS_CFUNC_DEF("remove_interface", 1, &xr_server_class_remove_interface),
	JS_CFUNC_DEF("get_interface", 1, &xr_server_class_get_interface),
	JS_CFUNC_DEF("get_interfaces", 0, &xr_server_class_get_interfaces),
	JS_CFUNC_DEF("find_interface", 1, &xr_server_class_find_interface),
	JS_CFUNC_DEF("add_tracker", 1, &xr_server_class_add_tracker),
	JS_CFUNC_DEF("remove_tracker", 1, &xr_server_class_remove_tracker),
	JS_CFUNC_DEF("get_trackers", 1, &xr_server_class_get_trackers),
	JS_CFUNC_DEF("get_tracker", 1, &xr_server_class_get_tracker),
	JS_CFUNC_DEF("get_primary_interface", 0, &xr_server_class_get_primary_interface),
	JS_CFUNC_DEF("set_primary_interface", 1, &xr_server_class_set_primary_interface),
};

static int js_xr_server_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRServer::__class_id);
	classes["XRServer"] = XRServer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRServer::__class_id, &xr_server_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRServer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_server_class_proto_funcs, _countof(xr_server_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_server_class_constructor, "XRServer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRServer", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_server_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_server_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRServer");
	return m;
}

JSModuleDef *js_init_xr_server_module(JSContext *ctx) {
	return _js_init_xr_server_module(ctx, "godot/classes/xr_server");
}

void register_xr_server() {
	js_init_xr_server_module(ctx);
}