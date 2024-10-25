
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/status_indicator.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void status_indicator_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef status_indicator_class_def = {
	"StatusIndicator",
	.finalizer = status_indicator_class_finalizer
};

static JSValue status_indicator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, StatusIndicator::__class_id);
	if (JS_IsException(obj))
		return obj;
	StatusIndicator *status_indicator_class = memnew(StatusIndicator);
	if (!status_indicator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, status_indicator_class);	
	return obj;
}
static JSValue status_indicator_class_set_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&StatusIndicator::set_tooltip, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue status_indicator_class_get_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StatusIndicator::get_tooltip, ctx, this_val, argc, argv);
};
static JSValue status_indicator_class_set_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&StatusIndicator::set_icon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue status_indicator_class_get_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StatusIndicator::get_icon, ctx, this_val, argc, argv);
};
static JSValue status_indicator_class_set_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&StatusIndicator::set_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue status_indicator_class_is_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StatusIndicator::is_visible, ctx, this_val, argc, argv);
};
static JSValue status_indicator_class_set_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&StatusIndicator::set_menu, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue status_indicator_class_get_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StatusIndicator::get_menu, ctx, this_val, argc, argv);
};
static JSValue status_indicator_class_get_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StatusIndicator::get_rect, ctx, this_val, argc, argv);
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

void define_status_indicator_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tooltip"),
        JS_NewCFunction(ctx, status_indicator_class_get_tooltip, "get_tooltip", 0),
        JS_NewCFunction(ctx, status_indicator_class_set_tooltip, "set_tooltip", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "icon"),
        JS_NewCFunction(ctx, status_indicator_class_get_icon, "get_icon", 0),
        JS_NewCFunction(ctx, status_indicator_class_set_icon, "set_icon", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "menu"),
        JS_NewCFunction(ctx, status_indicator_class_get_menu, "get_menu", 0),
        JS_NewCFunction(ctx, status_indicator_class_set_menu, "set_menu", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "visible"),
        JS_NewCFunction(ctx, status_indicator_class_is_visible, "is_visible", 0),
        JS_NewCFunction(ctx, status_indicator_class_set_visible, "set_visible", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_status_indicator_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&StatusIndicator::__class_id);
	classes["StatusIndicator"] = StatusIndicator::__class_id;
	class_id_list.insert(StatusIndicator::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), StatusIndicator::__class_id, &status_indicator_class_def);

	JSValue proto = JS_NewObjectClass(ctx, StatusIndicator::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StatusIndicator::__class_id, proto);

	define_status_indicator_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, status_indicator_class_proto_funcs, _countof(status_indicator_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, status_indicator_class_constructor, "StatusIndicator", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "StatusIndicator", ctor);

	return 0;
}

JSModuleDef *_js_init_status_indicator_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	StatusIndicator::__init_js_class_id();
	js_init_status_indicator_module(ctx);
}