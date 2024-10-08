
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/status_indicator.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void status_indicator_class_finalizer(JSRuntime *rt, JSValue val) {
	StatusIndicator *status_indicator = static_cast<StatusIndicator *>(JS_GetOpaque(val, StatusIndicator::__class_id));
	if (status_indicator)
		StatusIndicator::free(nullptr, status_indicator);
}

static JSClassDef status_indicator_class_def = {
	"StatusIndicator",
	.finalizer = status_indicator_class_finalizer
};

static JSValue status_indicator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StatusIndicator *status_indicator_class;
	JSValue obj = JS_NewObjectClass(ctx, StatusIndicator::__class_id);
	if (JS_IsException(obj))
		return obj;
	status_indicator_class = memnew(StatusIndicator);
	if (!status_indicator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, status_indicator_class);
	return obj;
}
static JSValue status_indicator_class_set_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StatusIndicator::set_tooltip, StatusIndicator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue status_indicator_class_get_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StatusIndicator::get_tooltip, StatusIndicator::__class_id, ctx, this_val, argv);
};
static JSValue status_indicator_class_set_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StatusIndicator::set_icon, StatusIndicator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue status_indicator_class_get_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StatusIndicator::get_icon, StatusIndicator::__class_id, ctx, this_val, argv);
};
static JSValue status_indicator_class_set_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StatusIndicator::set_visible, StatusIndicator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue status_indicator_class_is_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StatusIndicator::is_visible, StatusIndicator::__class_id, ctx, this_val, argv);
};
static JSValue status_indicator_class_set_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StatusIndicator::set_menu, StatusIndicator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue status_indicator_class_get_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StatusIndicator::get_menu, StatusIndicator::__class_id, ctx, this_val, argv);
};
static JSValue status_indicator_class_get_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StatusIndicator::get_rect, StatusIndicator::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry status_indicator_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_tooltip", 1, &status_indicator_class_set_tooltip),
	JS_CFUNC_DEF("get_tooltip", 0, &status_indicator_class_get_tooltip),
	JS_CFUNC_DEF("set_icon", 1, &status_indicator_class_set_icon),
	JS_CFUNC_DEF("get_icon", 0, &status_indicator_class_get_icon),
	JS_CFUNC_DEF("set_visible", 1, &status_indicator_class_set_visible),
	JS_CFUNC_DEF("is_visible", 0, &status_indicator_class_is_visible),
	JS_CFUNC_DEF("set_menu", 1, &status_indicator_class_set_menu),
	JS_CFUNC_DEF("get_menu", 0, &status_indicator_class_get_menu),
	JS_CFUNC_DEF("get_rect", 0, &status_indicator_class_get_rect),
};

static int js_status_indicator_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StatusIndicator::__class_id);
	classes["StatusIndicator"] = StatusIndicator::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StatusIndicator::__class_id, &status_indicator_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StatusIndicator::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, status_indicator_class_proto_funcs, _countof(status_indicator_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, status_indicator_class_constructor, "StatusIndicator", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StatusIndicator", ctor);

	return 0;
}

JSModuleDef *_js_init_status_indicator_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_status_indicator_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StatusIndicator");
	return m;
}

JSModuleDef *js_init_status_indicator_module(JSContext *ctx) {
	return _js_init_status_indicator_module(ctx, "godot/classes/status_indicator");
}

void register_status_indicator() {
	js_init_status_indicator_module(ctx);
}