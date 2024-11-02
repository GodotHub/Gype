
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/resource_saver.hpp>
#include <godot_cpp/classes/resource_format_saver.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue resource_saver_instance;

static void js_resource_saver_singleton();

static void resource_saver_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef resource_saver_class_def = {
	"ResourceSaver",
	.finalizer = resource_saver_class_finalizer
};

static JSValue resource_saver_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ResourceSaver *resource_saver_class;
	JSValue obj = JS_NewObjectClass(ctx, ResourceSaver::__class_id);
	if (JS_IsException(obj))
		return obj;
	resource_saver_class = ResourceSaver::get_singleton();
	if (!resource_saver_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_saver_class);
	return obj;
}
static JSValue resource_saver_class_save(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_resource_saver_singleton();
	return call_builtin_method_ret(&ResourceSaver::save, ctx, this_val, argc, argv);
};
static JSValue resource_saver_class_get_recognized_extensions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_resource_saver_singleton();
	return call_builtin_method_ret(&ResourceSaver::get_recognized_extensions, ctx, this_val, argc, argv);
};
static JSValue resource_saver_class_add_resource_format_saver(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_resource_saver_singleton();
    call_builtin_method_no_ret(&ResourceSaver::add_resource_format_saver, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_saver_class_remove_resource_format_saver(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_resource_saver_singleton();
    call_builtin_method_no_ret(&ResourceSaver::remove_resource_format_saver, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry resource_saver_class_proto_funcs[] = {
	JS_CFUNC_DEF("save", 3, &resource_saver_class_save),
	JS_CFUNC_DEF("get_recognized_extensions", 1, &resource_saver_class_get_recognized_extensions),
	JS_CFUNC_DEF("add_resource_format_saver", 2, &resource_saver_class_add_resource_format_saver),
	JS_CFUNC_DEF("remove_resource_format_saver", 1, &resource_saver_class_remove_resource_format_saver),
};

static int js_resource_saver_class_init(JSContext *ctx) {
	JS_NewClassID(&ResourceSaver::__class_id);
	classes["ResourceSaver"] = ResourceSaver::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ResourceSaver::__class_id, &resource_saver_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceSaver::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, resource_saver_class_proto_funcs, _countof(resource_saver_class_proto_funcs));
	return 0;
}

static void js_resource_saver_singleton() {
	if (JS_IsUninitialized(resource_saver_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		resource_saver_instance = resource_saver_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "ResourceSaver", resource_saver_instance);
	}
}


void register_resource_saver() {
	js_resource_saver_class_init(ctx);
}