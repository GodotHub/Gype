
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/camera_feed.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/camera_server.hpp>
#include <godot_cpp/classes/camera_feed.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void camera_server_class_finalizer(JSRuntime *rt, JSValue val) {
	CameraServer *camera_server = static_cast<CameraServer *>(JS_GetOpaque(val, CameraServer::__class_id));
	if (camera_server)
		CameraServer::free(nullptr, camera_server);
}

static JSClassDef camera_server_class_def = {
	"CameraServer",
	.finalizer = camera_server_class_finalizer
};

static JSValue camera_server_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CameraServer *camera_server_class;
	JSValue obj = JS_NewObjectClass(ctx, CameraServer::__class_id);
	if (JS_IsException(obj))
		return obj;
	camera_server_class = CameraServer::get_singleton();
	if (!camera_server_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, camera_server_class);
	return obj;
}
static JSValue camera_server_class_get_feed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CameraServer::get_feed, CameraServer::__class_id, ctx, this_val, argv);
};
static JSValue camera_server_class_get_feed_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CameraServer::get_feed_count, CameraServer::__class_id, ctx, this_val, argv);
};
static JSValue camera_server_class_feeds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CameraServer::feeds, CameraServer::__class_id, ctx, this_val, argv);
};
static JSValue camera_server_class_add_feed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CameraServer::add_feed, CameraServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_server_class_remove_feed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CameraServer::remove_feed, CameraServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry camera_server_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_feed", 1, &camera_server_class_get_feed),
	JS_CFUNC_DEF("get_feed_count", 0, &camera_server_class_get_feed_count),
	JS_CFUNC_DEF("feeds", 0, &camera_server_class_feeds),
	JS_CFUNC_DEF("add_feed", 1, &camera_server_class_add_feed),
	JS_CFUNC_DEF("remove_feed", 1, &camera_server_class_remove_feed),
};

static int js_camera_server_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CameraServer::__class_id);
	classes["CameraServer"] = CameraServer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CameraServer::__class_id, &camera_server_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CameraServer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, camera_server_class_proto_funcs, _countof(camera_server_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, camera_server_class_constructor, "CameraServer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CameraServer", ctor);

	return 0;
}

JSModuleDef *_js_init_camera_server_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_camera_server_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CameraServer");
	return m;
}

JSModuleDef *js_init_camera_server_module(JSContext *ctx) {
	return _js_init_camera_server_module(ctx, "godot/classes/camera_server");
}

void register_camera_server() {
	js_init_camera_server_module(ctx);
}