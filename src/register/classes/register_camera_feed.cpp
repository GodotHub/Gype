
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/camera_feed.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void camera_feed_class_finalizer(JSRuntime *rt, JSValue val) {
	CameraFeed *camera_feed = static_cast<CameraFeed *>(JS_GetOpaque(val, CameraFeed::__class_id));
	if (camera_feed)
		memdelete(camera_feed);
}

static JSClassDef camera_feed_class_def = {
	"CameraFeed",
	.finalizer = camera_feed_class_finalizer
};

static JSValue camera_feed_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CameraFeed::__class_id);
	if (JS_IsException(obj))
		return obj;
	CameraFeed *camera_feed_class = memnew(CameraFeed);
	if (!camera_feed_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, camera_feed_class);	
	return obj;
}
static JSValue camera_feed_class_get_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraFeed::get_id, ctx, this_val, argc, argv);
};
static JSValue camera_feed_class_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraFeed::is_active, ctx, this_val, argc, argv);
};
static JSValue camera_feed_class_set_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CameraFeed::set_active, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue camera_feed_class_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraFeed::get_name, ctx, this_val, argc, argv);
};
static JSValue camera_feed_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraFeed::get_position, ctx, this_val, argc, argv);
};
static JSValue camera_feed_class_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraFeed::get_transform, ctx, this_val, argc, argv);
};
static JSValue camera_feed_class_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CameraFeed::set_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue camera_feed_class_get_datatype(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraFeed::get_datatype, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry camera_feed_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_id", 0, &camera_feed_class_get_id),
	JS_CFUNC_DEF("is_active", 0, &camera_feed_class_is_active),
	JS_CFUNC_DEF("set_active", 1, &camera_feed_class_set_active),
	JS_CFUNC_DEF("get_name", 0, &camera_feed_class_get_name),
	JS_CFUNC_DEF("get_position", 0, &camera_feed_class_get_position),
	JS_CFUNC_DEF("get_transform", 0, &camera_feed_class_get_transform),
	JS_CFUNC_DEF("set_transform", 1, &camera_feed_class_set_transform),
	JS_CFUNC_DEF("get_datatype", 0, &camera_feed_class_get_datatype),
};

void define_camera_feed_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "feed_is_active"),
        JS_NewCFunction(ctx, camera_feed_class_is_active, "is_active", 0),
        JS_NewCFunction(ctx, camera_feed_class_set_active, "set_active", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "feed_transform"),
        JS_NewCFunction(ctx, camera_feed_class_get_transform, "get_transform", 0),
        JS_NewCFunction(ctx, camera_feed_class_set_transform, "set_transform", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_camera_feed_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CameraFeed::__class_id);
	classes["CameraFeed"] = CameraFeed::__class_id;
	class_id_list.insert(CameraFeed::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CameraFeed::__class_id, &camera_feed_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CameraFeed::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CameraFeed::__class_id, proto);

	define_camera_feed_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, camera_feed_class_proto_funcs, _countof(camera_feed_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, camera_feed_class_constructor, "CameraFeed", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CameraFeed", ctor);

	return 0;
}

JSModuleDef *_js_init_camera_feed_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_camera_feed_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CameraFeed");
	return m;
}

JSModuleDef *js_init_camera_feed_module(JSContext *ctx) {
	return _js_init_camera_feed_module(ctx, "godot/classes/camera_feed");
}

void register_camera_feed() {
	CameraFeed::__init_js_class_id();
	js_init_camera_feed_module(ctx);
}