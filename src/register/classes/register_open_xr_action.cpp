
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_action_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRAction *open_xr_action = static_cast<OpenXRAction *>(JS_GetOpaque(val, OpenXRAction::__class_id));
	if (open_xr_action)
		memdelete(open_xr_action);
}

static JSClassDef open_xr_action_class_def = {
	"OpenXRAction",
	.finalizer = open_xr_action_class_finalizer
};

static JSValue open_xr_action_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OpenXRAction::__class_id);
	if (JS_IsException(obj))
		return obj;
	OpenXRAction *open_xr_action_class = memnew(OpenXRAction);
	if (!open_xr_action_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, open_xr_action_class);	
	return obj;
}
static JSValue open_xr_action_class_set_localized_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRAction::set_localized_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_class_get_localized_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRAction::get_localized_name, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_class_set_action_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRAction::set_action_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_class_get_action_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRAction::get_action_type, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_class_set_toplevel_paths(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRAction::set_toplevel_paths, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_class_get_toplevel_paths(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRAction::get_toplevel_paths, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry open_xr_action_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_localized_name", 1, &open_xr_action_class_set_localized_name),
	JS_CFUNC_DEF("get_localized_name", 0, &open_xr_action_class_get_localized_name),
	JS_CFUNC_DEF("set_action_type", 1, &open_xr_action_class_set_action_type),
	JS_CFUNC_DEF("get_action_type", 0, &open_xr_action_class_get_action_type),
	JS_CFUNC_DEF("set_toplevel_paths", 1, &open_xr_action_class_set_toplevel_paths),
	JS_CFUNC_DEF("get_toplevel_paths", 0, &open_xr_action_class_get_toplevel_paths),
};

void define_open_xr_action_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "localized_name"),
        JS_NewCFunction(ctx, open_xr_action_class_get_localized_name, "get_localized_name", 0),
        JS_NewCFunction(ctx, open_xr_action_class_set_localized_name, "set_localized_name", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "action_type"),
        JS_NewCFunction(ctx, open_xr_action_class_get_action_type, "get_action_type", 0),
        JS_NewCFunction(ctx, open_xr_action_class_set_action_type, "set_action_type", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "toplevel_paths"),
        JS_NewCFunction(ctx, open_xr_action_class_get_toplevel_paths, "get_toplevel_paths", 0),
        JS_NewCFunction(ctx, open_xr_action_class_set_toplevel_paths, "set_toplevel_paths", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_open_xr_action_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&OpenXRAction::__class_id);
	classes["OpenXRAction"] = OpenXRAction::__class_id;
	class_id_list.insert(OpenXRAction::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OpenXRAction::__class_id, &open_xr_action_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OpenXRAction::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRAction::__class_id, proto);

	define_open_xr_action_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_action_class_proto_funcs, _countof(open_xr_action_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, open_xr_action_class_constructor, "OpenXRAction", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OpenXRAction", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_action_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_action_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRAction");
	return m;
}

JSModuleDef *js_init_open_xr_action_module(JSContext *ctx) {
	return _js_init_open_xr_action_module(ctx, "godot/classes/open_xr_action");
}

void register_open_xr_action() {
	OpenXRAction::__init_js_class_id();
	js_init_open_xr_action_module(ctx);
}