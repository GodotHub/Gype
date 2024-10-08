
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/resource_uid.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_uid_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceUID *resource_uid = static_cast<ResourceUID *>(JS_GetOpaque(val, ResourceUID::__class_id));
	if (resource_uid)
		ResourceUID::free(nullptr, resource_uid);
}

static JSClassDef resource_uid_class_def = {
	"ResourceUID",
	.finalizer = resource_uid_class_finalizer
};

static JSValue resource_uid_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ResourceUID *resource_uid_class;
	JSValue obj = JS_NewObjectClass(ctx, ResourceUID::__class_id);
	if (JS_IsException(obj))
		return obj;
	resource_uid_class = ResourceUID::get_singleton();
	if (!resource_uid_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_uid_class);
	return obj;
}
static JSValue resource_uid_class_id_to_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourceUID::id_to_text, ResourceUID::__class_id, ctx, this_val, argv);
};
static JSValue resource_uid_class_text_to_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourceUID::text_to_id, ResourceUID::__class_id, ctx, this_val, argv);
};
static JSValue resource_uid_class_create_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceUID::create_id, ResourceUID::__class_id, ctx, this_val, argv);
};
static JSValue resource_uid_class_has_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourceUID::has_id, ResourceUID::__class_id, ctx, this_val, argv);
};
static JSValue resource_uid_class_add_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ResourceUID::add_id, ResourceUID::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue resource_uid_class_set_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ResourceUID::set_id, ResourceUID::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue resource_uid_class_get_id_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourceUID::get_id_path, ResourceUID::__class_id, ctx, this_val, argv);
};
static JSValue resource_uid_class_remove_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ResourceUID::remove_id, ResourceUID::__class_id, ctx, this_val, argv);
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

static int js_resource_uid_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ResourceUID::__class_id);
	classes["ResourceUID"] = ResourceUID::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ResourceUID::__class_id, &resource_uid_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceUID::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, resource_uid_class_proto_funcs, _countof(resource_uid_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, resource_uid_class_constructor, "ResourceUID", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ResourceUID", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_uid_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_uid_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceUID");
	return m;
}

JSModuleDef *js_init_resource_uid_module(JSContext *ctx) {
	return _js_init_resource_uid_module(ctx, "godot/classes/resource_uid");
}

void register_resource_uid() {
	js_init_resource_uid_module(ctx);
}