
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/scroll_container.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/classes/h_scroll_bar.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void scroll_container_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef scroll_container_class_def = {
	"ScrollContainer",
	.finalizer = scroll_container_class_finalizer
};

static JSValue scroll_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ScrollContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	ScrollContainer *scroll_container_class = memnew(ScrollContainer);
	if (!scroll_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, scroll_container_class);	
	return obj;
}
static JSValue scroll_container_class_set_h_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ScrollContainer::set_h_scroll, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_h_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ScrollContainer::get_h_scroll, ctx, this_val, argc, argv);
};
static JSValue scroll_container_class_set_v_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ScrollContainer::set_v_scroll, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_v_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ScrollContainer::get_v_scroll, ctx, this_val, argc, argv);
};
static JSValue scroll_container_class_set_horizontal_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ScrollContainer::set_horizontal_custom_step, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_horizontal_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ScrollContainer::get_horizontal_custom_step, ctx, this_val, argc, argv);
};
static JSValue scroll_container_class_set_vertical_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ScrollContainer::set_vertical_custom_step, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_vertical_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ScrollContainer::get_vertical_custom_step, ctx, this_val, argc, argv);
};
static JSValue scroll_container_class_set_horizontal_scroll_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ScrollContainer::set_horizontal_scroll_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_horizontal_scroll_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ScrollContainer::get_horizontal_scroll_mode, ctx, this_val, argc, argv);
};
static JSValue scroll_container_class_set_vertical_scroll_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ScrollContainer::set_vertical_scroll_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_vertical_scroll_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ScrollContainer::get_vertical_scroll_mode, ctx, this_val, argc, argv);
};
static JSValue scroll_container_class_set_deadzone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ScrollContainer::set_deadzone, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_deadzone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ScrollContainer::get_deadzone, ctx, this_val, argc, argv);
};
static JSValue scroll_container_class_set_follow_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ScrollContainer::set_follow_focus, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_is_following_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ScrollContainer::is_following_focus, ctx, this_val, argc, argv);
};
static JSValue scroll_container_class_get_h_scroll_bar(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ScrollContainer::get_h_scroll_bar, ctx, this_val, argc, argv);
};
static JSValue scroll_container_class_get_v_scroll_bar(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ScrollContainer::get_v_scroll_bar, ctx, this_val, argc, argv);
};
static JSValue scroll_container_class_ensure_control_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ScrollContainer::ensure_control_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry scroll_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_h_scroll", 1, &scroll_container_class_set_h_scroll),
	JS_CFUNC_DEF("get_h_scroll", 0, &scroll_container_class_get_h_scroll),
	JS_CFUNC_DEF("set_v_scroll", 1, &scroll_container_class_set_v_scroll),
	JS_CFUNC_DEF("get_v_scroll", 0, &scroll_container_class_get_v_scroll),
	JS_CFUNC_DEF("set_horizontal_custom_step", 1, &scroll_container_class_set_horizontal_custom_step),
	JS_CFUNC_DEF("get_horizontal_custom_step", 0, &scroll_container_class_get_horizontal_custom_step),
	JS_CFUNC_DEF("set_vertical_custom_step", 1, &scroll_container_class_set_vertical_custom_step),
	JS_CFUNC_DEF("get_vertical_custom_step", 0, &scroll_container_class_get_vertical_custom_step),
	JS_CFUNC_DEF("set_horizontal_scroll_mode", 1, &scroll_container_class_set_horizontal_scroll_mode),
	JS_CFUNC_DEF("get_horizontal_scroll_mode", 0, &scroll_container_class_get_horizontal_scroll_mode),
	JS_CFUNC_DEF("set_vertical_scroll_mode", 1, &scroll_container_class_set_vertical_scroll_mode),
	JS_CFUNC_DEF("get_vertical_scroll_mode", 0, &scroll_container_class_get_vertical_scroll_mode),
	JS_CFUNC_DEF("set_deadzone", 1, &scroll_container_class_set_deadzone),
	JS_CFUNC_DEF("get_deadzone", 0, &scroll_container_class_get_deadzone),
	JS_CFUNC_DEF("set_follow_focus", 1, &scroll_container_class_set_follow_focus),
	JS_CFUNC_DEF("is_following_focus", 0, &scroll_container_class_is_following_focus),
	JS_CFUNC_DEF("get_h_scroll_bar", 0, &scroll_container_class_get_h_scroll_bar),
	JS_CFUNC_DEF("get_v_scroll_bar", 0, &scroll_container_class_get_v_scroll_bar),
	JS_CFUNC_DEF("ensure_control_visible", 1, &scroll_container_class_ensure_control_visible),
};

void define_scroll_container_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "follow_focus"),
        JS_NewCFunction(ctx, scroll_container_class_is_following_focus, "is_following_focus", 0),
        JS_NewCFunction(ctx, scroll_container_class_set_follow_focus, "set_follow_focus", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scroll_horizontal"),
        JS_NewCFunction(ctx, scroll_container_class_get_h_scroll, "get_h_scroll", 0),
        JS_NewCFunction(ctx, scroll_container_class_set_h_scroll, "set_h_scroll", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scroll_vertical"),
        JS_NewCFunction(ctx, scroll_container_class_get_v_scroll, "get_v_scroll", 0),
        JS_NewCFunction(ctx, scroll_container_class_set_v_scroll, "set_v_scroll", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scroll_horizontal_custom_step"),
        JS_NewCFunction(ctx, scroll_container_class_get_horizontal_custom_step, "get_horizontal_custom_step", 0),
        JS_NewCFunction(ctx, scroll_container_class_set_horizontal_custom_step, "set_horizontal_custom_step", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scroll_vertical_custom_step"),
        JS_NewCFunction(ctx, scroll_container_class_get_vertical_custom_step, "get_vertical_custom_step", 0),
        JS_NewCFunction(ctx, scroll_container_class_set_vertical_custom_step, "set_vertical_custom_step", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "horizontal_scroll_mode"),
        JS_NewCFunction(ctx, scroll_container_class_get_horizontal_scroll_mode, "get_horizontal_scroll_mode", 0),
        JS_NewCFunction(ctx, scroll_container_class_set_horizontal_scroll_mode, "set_horizontal_scroll_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vertical_scroll_mode"),
        JS_NewCFunction(ctx, scroll_container_class_get_vertical_scroll_mode, "get_vertical_scroll_mode", 0),
        JS_NewCFunction(ctx, scroll_container_class_set_vertical_scroll_mode, "set_vertical_scroll_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scroll_deadzone"),
        JS_NewCFunction(ctx, scroll_container_class_get_deadzone, "get_deadzone", 0),
        JS_NewCFunction(ctx, scroll_container_class_set_deadzone, "set_deadzone", 1),
        JS_PROP_GETSET
    );
}

static int js_scroll_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ScrollContainer::__class_id);
	classes["ScrollContainer"] = ScrollContainer::__class_id;
	class_id_list.insert(ScrollContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ScrollContainer::__class_id, &scroll_container_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ScrollContainer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScrollContainer::__class_id, proto);

	define_scroll_container_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, scroll_container_class_proto_funcs, _countof(scroll_container_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, scroll_container_class_constructor, "ScrollContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ScrollContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_scroll_container_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_scroll_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ScrollContainer");
	return m;
}

JSModuleDef *js_init_scroll_container_module(JSContext *ctx) {
	return _js_init_scroll_container_module(ctx, "godot/classes/scroll_container");
}

void register_scroll_container() {
	ScrollContainer::__init_js_class_id();
	js_init_scroll_container_module(ctx);
}