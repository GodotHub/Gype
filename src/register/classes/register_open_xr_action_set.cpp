
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/open_xr_action_set.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void open_xr_action_set_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRActionSet *open_xr_action_set = static_cast<OpenXRActionSet *>(JS_GetOpaque(val, OpenXRActionSet::__class_id));
	if (open_xr_action_set)
		OpenXRActionSet::free(nullptr, open_xr_action_set);
}

static JSClassDef open_xr_action_set_class_def = {
	"OpenXRActionSet",
	.finalizer = open_xr_action_set_class_finalizer
};

static JSValue open_xr_action_set_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRActionSet *open_xr_action_set_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRActionSet::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xr_action_set_class = memnew(OpenXRActionSet);
	if (!open_xr_action_set_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xr_action_set_class);
	return obj;
}
static JSValue open_xr_action_set_class_set_localized_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionSet::set_localized_name, OpenXRActionSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_set_class_get_localized_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionSet::get_localized_name, OpenXRActionSet::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_set_class_set_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionSet::set_priority, OpenXRActionSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_set_class_get_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionSet::get_priority, OpenXRActionSet::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_set_class_get_action_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionSet::get_action_count, OpenXRActionSet::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_set_class_set_actions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionSet::set_actions, OpenXRActionSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_set_class_get_actions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionSet::get_actions, OpenXRActionSet::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_set_class_add_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionSet::add_action, OpenXRActionSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_set_class_remove_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionSet::remove_action, OpenXRActionSet::__class_id, ctx, this_val, argv);
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

static int js_open_xr_action_set_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRActionSet::__class_id);
	classes["OpenXRActionSet"] = OpenXRActionSet::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OpenXRActionSet::__class_id, &open_xr_action_set_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRActionSet::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_action_set_class_proto_funcs, _countof(open_xr_action_set_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xr_action_set_class_constructor, "OpenXRActionSet", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OpenXRActionSet", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_action_set_module(JSContext *ctx, const char *module_name) {
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
	js_init_open_xr_action_set_module(ctx);
}