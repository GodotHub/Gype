
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/h_scroll_bar.hpp>
#include <godot_cpp/classes/scroll_container.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void scroll_container_class_finalizer(JSRuntime *rt, JSValue val) {
	ScrollContainer *scroll_container = static_cast<ScrollContainer *>(JS_GetOpaque(val, ScrollContainer::__class_id));
	if (scroll_container)
		ScrollContainer::free(nullptr, scroll_container);
}

static JSClassDef scroll_container_class_def = {
	"ScrollContainer",
	.finalizer = scroll_container_class_finalizer
};

static JSValue scroll_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ScrollContainer *scroll_container_class;
	JSValue obj = JS_NewObjectClass(ctx, ScrollContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	scroll_container_class = memnew(ScrollContainer);
	if (!scroll_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, scroll_container_class);
	return obj;
}
static JSValue scroll_container_class_set_h_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ScrollContainer::set_h_scroll, ScrollContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_h_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ScrollContainer::get_h_scroll, ScrollContainer::__class_id, ctx, this_val, argv);
};
static JSValue scroll_container_class_set_v_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ScrollContainer::set_v_scroll, ScrollContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_v_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ScrollContainer::get_v_scroll, ScrollContainer::__class_id, ctx, this_val, argv);
};
static JSValue scroll_container_class_set_horizontal_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ScrollContainer::set_horizontal_custom_step, ScrollContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_horizontal_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ScrollContainer::get_horizontal_custom_step, ScrollContainer::__class_id, ctx, this_val, argv);
};
static JSValue scroll_container_class_set_vertical_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ScrollContainer::set_vertical_custom_step, ScrollContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_vertical_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ScrollContainer::get_vertical_custom_step, ScrollContainer::__class_id, ctx, this_val, argv);
};
static JSValue scroll_container_class_set_horizontal_scroll_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ScrollContainer::set_horizontal_scroll_mode, ScrollContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_horizontal_scroll_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ScrollContainer::get_horizontal_scroll_mode, ScrollContainer::__class_id, ctx, this_val, argv);
};
static JSValue scroll_container_class_set_vertical_scroll_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ScrollContainer::set_vertical_scroll_mode, ScrollContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_vertical_scroll_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ScrollContainer::get_vertical_scroll_mode, ScrollContainer::__class_id, ctx, this_val, argv);
};
static JSValue scroll_container_class_set_deadzone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ScrollContainer::set_deadzone, ScrollContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_get_deadzone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ScrollContainer::get_deadzone, ScrollContainer::__class_id, ctx, this_val, argv);
};
static JSValue scroll_container_class_set_follow_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ScrollContainer::set_follow_focus, ScrollContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_container_class_is_following_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ScrollContainer::is_following_focus, ScrollContainer::__class_id, ctx, this_val, argv);
};
static JSValue scroll_container_class_get_h_scroll_bar(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ScrollContainer::get_h_scroll_bar, ScrollContainer::__class_id, ctx, this_val, argv);
};
static JSValue scroll_container_class_get_v_scroll_bar(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ScrollContainer::get_v_scroll_bar, ScrollContainer::__class_id, ctx, this_val, argv);
};
static JSValue scroll_container_class_ensure_control_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ScrollContainer::ensure_control_visible, ScrollContainer::__class_id, ctx, this_val, argv);
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

static int js_scroll_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ScrollContainer::__class_id);
	classes["ScrollContainer"] = ScrollContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ScrollContainer::__class_id, &scroll_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScrollContainer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, scroll_container_class_proto_funcs, _countof(scroll_container_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, scroll_container_class_constructor, "ScrollContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ScrollContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_scroll_container_module(JSContext *ctx, const char *module_name) {
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
	js_init_scroll_container_module(ctx);
}