
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/camera_feed.hpp>
#include <godot_cpp/classes/camera_feed.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/camera_server.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue camera_server_instance;

static void js_camera_server_singleton();

static void camera_server_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
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
    js_camera_server_singleton();
	return call_builtin_method_ret(&CameraServer::get_feed, ctx, this_val, argc, argv);
};
static JSValue camera_server_class_get_feed_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_camera_server_singleton();
	return call_builtin_method_ret(&CameraServer::get_feed_count, ctx, this_val, argc, argv);
};
static JSValue camera_server_class_feeds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_camera_server_singleton();
	return call_builtin_method_ret(&CameraServer::feeds, ctx, this_val, argc, argv);
};
static JSValue camera_server_class_add_feed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_camera_server_singleton();
    call_builtin_method_no_ret(&CameraServer::add_feed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue camera_server_class_remove_feed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_camera_server_singleton();
    call_builtin_method_no_ret(&CameraServer::remove_feed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry camera_server_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_feed", 1, &camera_server_class_get_feed),
	JS_CFUNC_DEF("get_feed_count", 0, &camera_server_class_get_feed_count),
	JS_CFUNC_DEF("feeds", 0, &camera_server_class_feeds),
	JS_CFUNC_DEF("add_feed", 1, &camera_server_class_add_feed),
	JS_CFUNC_DEF("remove_feed", 1, &camera_server_class_remove_feed),
};

static int js_camera_server_class_init(JSContext *ctx) {
	JS_NewClassID(&CameraServer::__class_id);
	classes["CameraServer"] = CameraServer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CameraServer::__class_id, &camera_server_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CameraServer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, camera_server_class_proto_funcs, _countof(camera_server_class_proto_funcs));
	return 0;
}

static void js_camera_server_singleton() {
	if (JS_IsUninitialized(camera_server_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		camera_server_instance = camera_server_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "CameraServer", camera_server_instance);
	}
}


void register_camera_server() {
	js_camera_server_class_init(ctx);
}