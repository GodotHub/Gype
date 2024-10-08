
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_action_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRAction *open_xr_action = static_cast<OpenXRAction *>(JS_GetOpaque(val, OpenXRAction::__class_id));
	if (open_xr_action)
		OpenXRAction::free(nullptr, open_xr_action);
}

static JSClassDef open_xr_action_class_def = {
	"OpenXRAction",
	.finalizer = open_xr_action_class_finalizer
};

static JSValue open_xr_action_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRAction *open_xr_action_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRAction::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xr_action_class = memnew(OpenXRAction);
	if (!open_xr_action_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xr_action_class);
	return obj;
}
static JSValue open_xr_action_class_set_localized_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRAction::set_localized_name, OpenXRAction::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_class_get_localized_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRAction::get_localized_name, OpenXRAction::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_class_set_action_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRAction::set_action_type, OpenXRAction::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_class_get_action_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRAction::get_action_type, OpenXRAction::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_class_set_toplevel_paths(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRAction::set_toplevel_paths, OpenXRAction::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_class_get_toplevel_paths(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRAction::get_toplevel_paths, OpenXRAction::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry open_xr_action_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_localized_name", 1, &open_xr_action_class_set_localized_name),
	JS_CFUNC_DEF("get_localized_name", 0, &open_xr_action_class_get_localized_name),
	JS_CFUNC_DEF("set_action_type", 1, &open_xr_action_class_set_action_type),
	JS_CFUNC_DEF("get_action_type", 0, &open_xr_action_class_get_action_type),
	JS_CFUNC_DEF("set_toplevel_paths", 1, &open_xr_action_class_set_toplevel_paths),
	JS_CFUNC_DEF("get_toplevel_paths", 0, &open_xr_action_class_get_toplevel_paths),
};

static int js_open_xr_action_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRAction::__class_id);
	classes["OpenXRAction"] = OpenXRAction::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OpenXRAction::__class_id, &open_xr_action_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRAction::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_action_class_proto_funcs, _countof(open_xr_action_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xr_action_class_constructor, "OpenXRAction", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OpenXRAction", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_action_module(JSContext *ctx, const char *module_name) {
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
	js_init_open_xr_action_module(ctx);
}