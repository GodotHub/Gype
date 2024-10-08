
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/graph_element.hpp>
#include <godot_cpp/classes/graph_frame.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void graph_frame_class_finalizer(JSRuntime *rt, JSValue val) {
	GraphFrame *graph_frame = static_cast<GraphFrame *>(JS_GetOpaque(val, GraphFrame::__class_id));
	if (graph_frame)
		GraphFrame::free(nullptr, graph_frame);
}

static JSClassDef graph_frame_class_def = {
	"GraphFrame",
	.finalizer = graph_frame_class_finalizer
};

static JSValue graph_frame_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GraphFrame *graph_frame_class;
	JSValue obj = JS_NewObjectClass(ctx, GraphFrame::__class_id);
	if (JS_IsException(obj))
		return obj;
	graph_frame_class = memnew(GraphFrame);
	if (!graph_frame_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, graph_frame_class);
	return obj;
}
static JSValue graph_frame_class_set_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphFrame::set_title, GraphFrame::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_frame_class_get_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphFrame::get_title, GraphFrame::__class_id, ctx, this_val, argv);
};
static JSValue graph_frame_class_get_titlebar_hbox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphFrame::get_titlebar_hbox, GraphFrame::__class_id, ctx, this_val, argv);
};
static JSValue graph_frame_class_set_autoshrink_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphFrame::set_autoshrink_enabled, GraphFrame::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_frame_class_is_autoshrink_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphFrame::is_autoshrink_enabled, GraphFrame::__class_id, ctx, this_val, argv);
};
static JSValue graph_frame_class_set_autoshrink_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphFrame::set_autoshrink_margin, GraphFrame::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_frame_class_get_autoshrink_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphFrame::get_autoshrink_margin, GraphFrame::__class_id, ctx, this_val, argv);
};
static JSValue graph_frame_class_set_drag_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphFrame::set_drag_margin, GraphFrame::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_frame_class_get_drag_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphFrame::get_drag_margin, GraphFrame::__class_id, ctx, this_val, argv);
};
static JSValue graph_frame_class_set_tint_color_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphFrame::set_tint_color_enabled, GraphFrame::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_frame_class_is_tint_color_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphFrame::is_tint_color_enabled, GraphFrame::__class_id, ctx, this_val, argv);
};
static JSValue graph_frame_class_set_tint_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphFrame::set_tint_color, GraphFrame::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_frame_class_get_tint_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphFrame::get_tint_color, GraphFrame::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry graph_frame_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_title", 1, &graph_frame_class_set_title),
	JS_CFUNC_DEF("get_title", 0, &graph_frame_class_get_title),
	JS_CFUNC_DEF("get_titlebar_hbox", 0, &graph_frame_class_get_titlebar_hbox),
	JS_CFUNC_DEF("set_autoshrink_enabled", 1, &graph_frame_class_set_autoshrink_enabled),
	JS_CFUNC_DEF("is_autoshrink_enabled", 0, &graph_frame_class_is_autoshrink_enabled),
	JS_CFUNC_DEF("set_autoshrink_margin", 1, &graph_frame_class_set_autoshrink_margin),
	JS_CFUNC_DEF("get_autoshrink_margin", 0, &graph_frame_class_get_autoshrink_margin),
	JS_CFUNC_DEF("set_drag_margin", 1, &graph_frame_class_set_drag_margin),
	JS_CFUNC_DEF("get_drag_margin", 0, &graph_frame_class_get_drag_margin),
	JS_CFUNC_DEF("set_tint_color_enabled", 1, &graph_frame_class_set_tint_color_enabled),
	JS_CFUNC_DEF("is_tint_color_enabled", 0, &graph_frame_class_is_tint_color_enabled),
	JS_CFUNC_DEF("set_tint_color", 1, &graph_frame_class_set_tint_color),
	JS_CFUNC_DEF("get_tint_color", 0, &graph_frame_class_get_tint_color),
};

static int js_graph_frame_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GraphFrame::__class_id);
	classes["GraphFrame"] = GraphFrame::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GraphFrame::__class_id, &graph_frame_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GraphElement::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GraphFrame::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, graph_frame_class_proto_funcs, _countof(graph_frame_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, graph_frame_class_constructor, "GraphFrame", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GraphFrame", ctor);

	return 0;
}

JSModuleDef *_js_init_graph_frame_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_graph_frame_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GraphFrame");
	return m;
}

JSModuleDef *js_init_graph_frame_module(JSContext *ctx) {
	return _js_init_graph_frame_module(ctx, "godot/classes/graph_frame");
}

void register_graph_frame() {
	js_init_graph_frame_module(ctx);
}