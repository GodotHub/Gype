
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/missing_resource.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void missing_resource_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef missing_resource_class_def = {
	"MissingResource",
	.finalizer = missing_resource_class_finalizer
};

static JSValue missing_resource_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MissingResource::__class_id);
	if (JS_IsException(obj))
		return obj;

	MissingResource *missing_resource_class;
	if (argc == 1) 
		missing_resource_class = static_cast<MissingResource *>(static_cast<Object *>(Variant(*argv)));
	else 
		missing_resource_class = memnew(MissingResource);
	if (!missing_resource_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, missing_resource_class);	
	return obj;
}
static JSValue missing_resource_class_set_original_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MissingResource::set_original_class, ctx, this_val, argc, argv);
};
static JSValue missing_resource_class_get_original_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MissingResource::get_original_class, ctx, this_val, argc, argv);
};
static JSValue missing_resource_class_set_recording_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MissingResource::set_recording_properties, ctx, this_val, argc, argv);
};
static JSValue missing_resource_class_is_recording_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MissingResource::is_recording_properties, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry missing_resource_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_original_class", 1, &missing_resource_class_set_original_class),
	JS_CFUNC_DEF("get_original_class", 0, &missing_resource_class_get_original_class),
	JS_CFUNC_DEF("set_recording_properties", 1, &missing_resource_class_set_recording_properties),
	JS_CFUNC_DEF("is_recording_properties", 0, &missing_resource_class_is_recording_properties),
};

static void define_missing_resource_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "original_class"),
        JS_NewCFunction(ctx, missing_resource_class_get_original_class, "get_original_class", 0),
        JS_NewCFunction(ctx, missing_resource_class_set_original_class, "set_original_class", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "recording_properties"),
        JS_NewCFunction(ctx, missing_resource_class_is_recording_properties, "is_recording_properties", 0),
        JS_NewCFunction(ctx, missing_resource_class_set_recording_properties, "set_recording_properties", 1),
        JS_PROP_GETSET
    );
	
}

static void define_missing_resource_enum(JSContext *ctx, JSValue proto) {
}

static int js_missing_resource_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MissingResource::__class_id);
	classes["MissingResource"] = MissingResource::__class_id;
	class_id_list.insert(MissingResource::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MissingResource::__class_id, &missing_resource_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MissingResource::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MissingResource::__class_id, proto);

	define_missing_resource_property(ctx, proto);
	define_missing_resource_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, missing_resource_class_proto_funcs, _countof(missing_resource_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, missing_resource_class_constructor, "MissingResource", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MissingResource", ctor);

	return 0;
}

JSModuleDef *_js_init_missing_resource_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_missing_resource_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MissingResource");
	return m;
}

JSModuleDef *js_init_missing_resource_module(JSContext *ctx) {
	return _js_init_missing_resource_module(ctx, "@godot/classes/missing_resource");
}

void register_missing_resource() {
	MissingResource::__init_js_class_id();
	js_init_missing_resource_module(ctx);
}