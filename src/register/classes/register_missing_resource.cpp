
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/missing_resource.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void missing_resource_class_finalizer(JSRuntime *rt, JSValue val) {
	MissingResource *missing_resource = static_cast<MissingResource *>(JS_GetOpaque(val, MissingResource::__class_id));
	if (missing_resource)
		MissingResource::free(nullptr, missing_resource);
}

static JSClassDef missing_resource_class_def = {
	"MissingResource",
	.finalizer = missing_resource_class_finalizer
};

static JSValue missing_resource_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MissingResource *missing_resource_class;
	JSValue obj = JS_NewObjectClass(ctx, MissingResource::__class_id);
	if (JS_IsException(obj))
		return obj;
	missing_resource_class = memnew(MissingResource);
	if (!missing_resource_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, missing_resource_class);
	return obj;
}
static JSValue missing_resource_class_set_original_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MissingResource::set_original_class, MissingResource::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue missing_resource_class_get_original_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MissingResource::get_original_class, MissingResource::__class_id, ctx, this_val, argv);
};
static JSValue missing_resource_class_set_recording_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MissingResource::set_recording_properties, MissingResource::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue missing_resource_class_is_recording_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MissingResource::is_recording_properties, MissingResource::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry missing_resource_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_original_class", 1, &missing_resource_class_set_original_class),
	JS_CFUNC_DEF("get_original_class", 0, &missing_resource_class_get_original_class),
	JS_CFUNC_DEF("set_recording_properties", 1, &missing_resource_class_set_recording_properties),
	JS_CFUNC_DEF("is_recording_properties", 0, &missing_resource_class_is_recording_properties),
};

static int js_missing_resource_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MissingResource::__class_id);
	classes["MissingResource"] = MissingResource::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MissingResource::__class_id, &missing_resource_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MissingResource::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, missing_resource_class_proto_funcs, _countof(missing_resource_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, missing_resource_class_constructor, "MissingResource", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MissingResource", ctor);

	return 0;
}

JSModuleDef *_js_init_missing_resource_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_missing_resource_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MissingResource");
	return m;
}

JSModuleDef *js_init_missing_resource_module(JSContext *ctx) {
	return _js_init_missing_resource_module(ctx, "godot/classes/missing_resource");
}

void register_missing_resource() {
	js_init_missing_resource_module(ctx);
}