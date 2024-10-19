
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/open_xr_action_set.hpp>
#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_action_set_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef open_xr_action_set_class_def = {
	"OpenXRActionSet",
	.finalizer = open_xr_action_set_class_finalizer
};

static JSValue open_xr_action_set_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OpenXRActionSet::__class_id);
	if (JS_IsException(obj))
		return obj;
	OpenXRActionSet *open_xr_action_set_class = memnew(OpenXRActionSet);
	if (!open_xr_action_set_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, open_xr_action_set_class);	
	return obj;
}
static JSValue open_xr_action_set_class_set_localized_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionSet::set_localized_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_set_class_get_localized_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionSet::get_localized_name, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_set_class_set_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionSet::set_priority, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_set_class_get_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionSet::get_priority, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_set_class_get_action_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionSet::get_action_count, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_set_class_set_actions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionSet::set_actions, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_set_class_get_actions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionSet::get_actions, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_set_class_add_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionSet::add_action, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_set_class_remove_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionSet::remove_action, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry open_xr_action_set_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_localized_name", 1, &open_xr_action_set_class_set_localized_name),
	JS_CFUNC_DEF("get_localized_name", 0, &open_xr_action_set_class_get_localized_name),
	JS_CFUNC_DEF("set_priority", 1, &open_xr_action_set_class_set_priority),
	JS_CFUNC_DEF("get_priority", 0, &open_xr_action_set_class_get_priority),
	JS_CFUNC_DEF("get_action_count", 0, &open_xr_action_set_class_get_action_count),
	JS_CFUNC_DEF("set_actions", 1, &open_xr_action_set_class_set_actions),
	JS_CFUNC_DEF("get_actions", 0, &open_xr_action_set_class_get_actions),
	JS_CFUNC_DEF("add_action", 1, &open_xr_action_set_class_add_action),
	JS_CFUNC_DEF("remove_action", 1, &open_xr_action_set_class_remove_action),
};

void define_open_xr_action_set_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "localized_name"),
        JS_NewCFunction(ctx, open_xr_action_set_class_get_localized_name, "get_localized_name", 0),
        JS_NewCFunction(ctx, open_xr_action_set_class_set_localized_name, "set_localized_name", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "priority"),
        JS_NewCFunction(ctx, open_xr_action_set_class_get_priority, "get_priority", 0),
        JS_NewCFunction(ctx, open_xr_action_set_class_set_priority, "set_priority", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "actions"),
        JS_NewCFunction(ctx, open_xr_action_set_class_get_actions, "get_actions", 0),
        JS_NewCFunction(ctx, open_xr_action_set_class_set_actions, "set_actions", 1),
        JS_PROP_GETSET
    );
}

static int js_open_xr_action_set_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&OpenXRActionSet::__class_id);
	classes["OpenXRActionSet"] = OpenXRActionSet::__class_id;
	class_id_list.insert(OpenXRActionSet::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OpenXRActionSet::__class_id, &open_xr_action_set_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OpenXRActionSet::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRActionSet::__class_id, proto);

	define_open_xr_action_set_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_action_set_class_proto_funcs, _countof(open_xr_action_set_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, open_xr_action_set_class_constructor, "OpenXRActionSet", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OpenXRActionSet", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_action_set_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_action_set_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRActionSet");
	return m;
}

JSModuleDef *js_init_open_xr_action_set_module(JSContext *ctx) {
	return _js_init_open_xr_action_set_module(ctx, "godot/classes/open_xr_action_set");
}

void register_open_xr_action_set() {
	OpenXRActionSet::__init_js_class_id();
	js_init_open_xr_action_set_module(ctx);
}