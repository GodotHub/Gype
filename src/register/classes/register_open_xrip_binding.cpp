
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/open_xrip_binding.hpp>
#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xrip_binding_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef open_xrip_binding_class_def = {
	"OpenXRIPBinding",
	.finalizer = open_xrip_binding_class_finalizer
};

static JSValue open_xrip_binding_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OpenXRIPBinding::__class_id);
	if (JS_IsException(obj))
		return obj;

	OpenXRIPBinding *open_xrip_binding_class;
	if (argc == 1) 
		open_xrip_binding_class = static_cast<OpenXRIPBinding *>(Variant(*argv).operator Object *());
	else 
		open_xrip_binding_class = memnew(OpenXRIPBinding);
	if (!open_xrip_binding_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, open_xrip_binding_class);
	return obj;
}
static JSValue open_xrip_binding_class_set_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRIPBinding::set_action, ctx, this_val, argc, argv);
};
static JSValue open_xrip_binding_class_get_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRIPBinding::get_action, ctx, this_val, argc, argv);
};
static JSValue open_xrip_binding_class_get_path_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRIPBinding::get_path_count, ctx, this_val, argc, argv);
};
static JSValue open_xrip_binding_class_set_paths(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRIPBinding::set_paths, ctx, this_val, argc, argv);
};
static JSValue open_xrip_binding_class_get_paths(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRIPBinding::get_paths, ctx, this_val, argc, argv);
};
static JSValue open_xrip_binding_class_has_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRIPBinding::has_path, ctx, this_val, argc, argv);
};
static JSValue open_xrip_binding_class_add_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRIPBinding::add_path, ctx, this_val, argc, argv);
};
static JSValue open_xrip_binding_class_remove_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRIPBinding::remove_path, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry open_xrip_binding_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_action", 1, &open_xrip_binding_class_set_action),
	JS_CFUNC_DEF("get_action", 0, &open_xrip_binding_class_get_action),
	JS_CFUNC_DEF("get_path_count", 0, &open_xrip_binding_class_get_path_count),
	JS_CFUNC_DEF("set_paths", 1, &open_xrip_binding_class_set_paths),
	JS_CFUNC_DEF("get_paths", 0, &open_xrip_binding_class_get_paths),
	JS_CFUNC_DEF("has_path", 1, &open_xrip_binding_class_has_path),
	JS_CFUNC_DEF("add_path", 1, &open_xrip_binding_class_add_path),
	JS_CFUNC_DEF("remove_path", 1, &open_xrip_binding_class_remove_path),
};

static void define_open_xrip_binding_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "action"),
        JS_NewCFunction(ctx, open_xrip_binding_class_get_action, "get_action", 0),
        JS_NewCFunction(ctx, open_xrip_binding_class_set_action, "set_action", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "paths"),
        JS_NewCFunction(ctx, open_xrip_binding_class_get_paths, "get_paths", 0),
        JS_NewCFunction(ctx, open_xrip_binding_class_set_paths, "set_paths", 1),
        JS_PROP_GETSET
    );
	
}

static void define_open_xrip_binding_enum(JSContext *ctx, JSValue proto) {
}

static int js_open_xrip_binding_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["OpenXRIPBinding"] = OpenXRIPBinding::__class_id;
	class_id_list.insert(OpenXRIPBinding::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OpenXRIPBinding::__class_id, &open_xrip_binding_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OpenXRIPBinding::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRIPBinding::__class_id, proto);

	define_open_xrip_binding_property(ctx, proto);
	define_open_xrip_binding_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xrip_binding_class_proto_funcs, _countof(open_xrip_binding_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, open_xrip_binding_class_constructor, "OpenXRIPBinding", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OpenXRIPBinding", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xrip_binding_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xrip_binding_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRIPBinding");
	return m;
}

JSModuleDef *js_init_open_xrip_binding_module(JSContext *ctx) {
	return _js_init_open_xrip_binding_module(ctx, "@godot/classes/open_xrip_binding");
}

void register_open_xrip_binding() {
	OpenXRIPBinding::__init_js_class_id();
	js_init_open_xrip_binding_module(ctx);
}