
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/graph_frame.hpp>
#include <godot_cpp/classes/graph_element.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void graph_frame_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef graph_frame_class_def = {
	"GraphFrame",
	.finalizer = graph_frame_class_finalizer
};

static JSValue graph_frame_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GraphFrame::__class_id);
	if (JS_IsException(obj))
		return obj;
	GraphFrame *graph_frame_class = memnew(GraphFrame);
	if (!graph_frame_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, graph_frame_class);	
	return obj;
}
static JSValue graph_frame_class_set_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GraphFrame::set_title, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_frame_class_get_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GraphFrame::get_title, ctx, this_val, argc, argv);
};
static JSValue graph_frame_class_get_titlebar_hbox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GraphFrame::get_titlebar_hbox, ctx, this_val, argc, argv);
};
static JSValue graph_frame_class_set_autoshrink_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GraphFrame::set_autoshrink_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_frame_class_is_autoshrink_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GraphFrame::is_autoshrink_enabled, ctx, this_val, argc, argv);
};
static JSValue graph_frame_class_set_autoshrink_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GraphFrame::set_autoshrink_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_frame_class_get_autoshrink_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GraphFrame::get_autoshrink_margin, ctx, this_val, argc, argv);
};
static JSValue graph_frame_class_set_drag_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GraphFrame::set_drag_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_frame_class_get_drag_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GraphFrame::get_drag_margin, ctx, this_val, argc, argv);
};
static JSValue graph_frame_class_set_tint_color_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GraphFrame::set_tint_color_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_frame_class_is_tint_color_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GraphFrame::is_tint_color_enabled, ctx, this_val, argc, argv);
};
static JSValue graph_frame_class_set_tint_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GraphFrame::set_tint_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_frame_class_get_tint_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GraphFrame::get_tint_color, ctx, this_val, argc, argv);
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

void define_graph_frame_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "title"),
        JS_NewCFunction(ctx, graph_frame_class_get_title, "get_title", 0),
        JS_NewCFunction(ctx, graph_frame_class_set_title, "set_title", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "autoshrink_enabled"),
        JS_NewCFunction(ctx, graph_frame_class_is_autoshrink_enabled, "is_autoshrink_enabled", 0),
        JS_NewCFunction(ctx, graph_frame_class_set_autoshrink_enabled, "set_autoshrink_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "autoshrink_margin"),
        JS_NewCFunction(ctx, graph_frame_class_get_autoshrink_margin, "get_autoshrink_margin", 0),
        JS_NewCFunction(ctx, graph_frame_class_set_autoshrink_margin, "set_autoshrink_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "drag_margin"),
        JS_NewCFunction(ctx, graph_frame_class_get_drag_margin, "get_drag_margin", 0),
        JS_NewCFunction(ctx, graph_frame_class_set_drag_margin, "set_drag_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tint_color_enabled"),
        JS_NewCFunction(ctx, graph_frame_class_is_tint_color_enabled, "is_tint_color_enabled", 0),
        JS_NewCFunction(ctx, graph_frame_class_set_tint_color_enabled, "set_tint_color_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tint_color"),
        JS_NewCFunction(ctx, graph_frame_class_get_tint_color, "get_tint_color", 0),
        JS_NewCFunction(ctx, graph_frame_class_set_tint_color, "set_tint_color", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_graph_frame_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GraphFrame::__class_id);
	classes["GraphFrame"] = GraphFrame::__class_id;
	class_id_list.insert(GraphFrame::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GraphFrame::__class_id, &graph_frame_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GraphFrame::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GraphElement::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GraphFrame::__class_id, proto);

	define_graph_frame_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, graph_frame_class_proto_funcs, _countof(graph_frame_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, graph_frame_class_constructor, "GraphFrame", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GraphFrame", ctor);

	return 0;
}

JSModuleDef *_js_init_graph_frame_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/graph_element';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_graph_frame_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GraphFrame");
	return m;
}

JSModuleDef *js_init_graph_frame_module(JSContext *ctx) {
	return _js_init_graph_frame_module(ctx, "@godot/classes/graph_frame");
}

void register_graph_frame() {
	GraphFrame::__init_js_class_id();
	js_init_graph_frame_module(ctx);
}