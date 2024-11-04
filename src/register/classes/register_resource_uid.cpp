
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/resource_uid.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void resource_uid_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceUID *resource_uid = static_cast<ResourceUID *>(JS_GetOpaque(val, ResourceUID::__class_id));
	if (resource_uid)
		memdelete(resource_uid);
}

static JSClassDef resource_uid_class_def = {
	"_ResourceUID",
	.finalizer = resource_uid_class_finalizer
};

static JSValue resource_uid_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, ResourceUID::__class_id);
	if (JS_IsException(obj))
		return obj;
	ResourceUID *resource_uid_class = ResourceUID::get_singleton();
	if (!resource_uid_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_uid_class);
	return obj;
}
static JSValue resource_uid_class_id_to_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourceUID::id_to_text, ctx, this_val, argc, argv);
};
static JSValue resource_uid_class_text_to_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourceUID::text_to_id, ctx, this_val, argc, argv);
};
static JSValue resource_uid_class_create_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceUID::create_id, ctx, this_val, argc, argv);
};
static JSValue resource_uid_class_has_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourceUID::has_id, ctx, this_val, argc, argv);
};
static JSValue resource_uid_class_add_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ResourceUID::add_id, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_uid_class_set_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ResourceUID::set_id, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_uid_class_get_id_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourceUID::get_id_path, ctx, this_val, argc, argv);
};
static JSValue resource_uid_class_remove_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ResourceUID::remove_id, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry resource_uid_class_proto_funcs[] = {
	JS_CFUNC_DEF("id_to_text", 1, &resource_uid_class_id_to_text),
	JS_CFUNC_DEF("text_to_id", 1, &resource_uid_class_text_to_id),
	JS_CFUNC_DEF("create_id", 0, &resource_uid_class_create_id),
	JS_CFUNC_DEF("has_id", 1, &resource_uid_class_has_id),
	JS_CFUNC_DEF("add_id", 2, &resource_uid_class_add_id),
	JS_CFUNC_DEF("set_id", 2, &resource_uid_class_set_id),
	JS_CFUNC_DEF("get_id_path", 1, &resource_uid_class_get_id_path),
	JS_CFUNC_DEF("remove_id", 1, &resource_uid_class_remove_id),
};

static int js_resource_uid_class_init(JSContext *ctx) {
	classes["ResourceUID"] = ResourceUID::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ResourceUID::__class_id, &resource_uid_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceUID::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, resource_uid_class_proto_funcs, _countof(resource_uid_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, resource_uid_class_constructor, "_ResourceUID", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "_ResourceUID", ctor);
	JS_FreeValue(ctx, global);
	return 0;
}

void register_resource_uid() {
	ResourceUID::__init_js_class_id();
	js_resource_uid_class_init(ctx);
}