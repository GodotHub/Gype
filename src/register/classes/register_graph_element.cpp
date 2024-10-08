
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/graph_element.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void graph_element_class_finalizer(JSRuntime *rt, JSValue val) {
	GraphElement *graph_element = static_cast<GraphElement *>(JS_GetOpaque(val, GraphElement::__class_id));
	if (graph_element)
		GraphElement::free(nullptr, graph_element);
}

static JSClassDef graph_element_class_def = {
	"GraphElement",
	.finalizer = graph_element_class_finalizer
};

static JSValue graph_element_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GraphElement *graph_element_class;
	JSValue obj = JS_NewObjectClass(ctx, GraphElement::__class_id);
	if (JS_IsException(obj))
		return obj;
	graph_element_class = memnew(GraphElement);
	if (!graph_element_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, graph_element_class);
	return obj;
}
static JSValue graph_element_class_set_resizable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphElement::set_resizable, GraphElement::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_element_class_is_resizable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphElement::is_resizable, GraphElement::__class_id, ctx, this_val, argv);
};
static JSValue graph_element_class_set_draggable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphElement::set_draggable, GraphElement::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_element_class_is_draggable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphElement::is_draggable, GraphElement::__class_id, ctx, this_val, argv);
};
static JSValue graph_element_class_set_selectable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphElement::set_selectable, GraphElement::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_element_class_is_selectable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphElement::is_selectable, GraphElement::__class_id, ctx, this_val, argv);
};
static JSValue graph_element_class_set_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphElement::set_selected, GraphElement::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_element_class_is_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphElement::is_selected, GraphElement::__class_id, ctx, this_val, argv);
};
static JSValue graph_element_class_set_position_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphElement::set_position_offset, GraphElement::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_element_class_get_position_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphElement::get_position_offset, GraphElement::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry graph_element_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_resizable", 1, &graph_element_class_set_resizable),
	JS_CFUNC_DEF("is_resizable", 0, &graph_element_class_is_resizable),
	JS_CFUNC_DEF("set_draggable", 1, &graph_element_class_set_draggable),
	JS_CFUNC_DEF("is_draggable", 0, &graph_element_class_is_draggable),
	JS_CFUNC_DEF("set_selectable", 1, &graph_element_class_set_selectable),
	JS_CFUNC_DEF("is_selectable", 0, &graph_element_class_is_selectable),
	JS_CFUNC_DEF("set_selected", 1, &graph_element_class_set_selected),
	JS_CFUNC_DEF("is_selected", 0, &graph_element_class_is_selected),
	JS_CFUNC_DEF("set_position_offset", 1, &graph_element_class_set_position_offset),
	JS_CFUNC_DEF("get_position_offset", 0, &graph_element_class_get_position_offset),
};

static int js_graph_element_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GraphElement::__class_id);
	classes["GraphElement"] = GraphElement::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GraphElement::__class_id, &graph_element_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GraphElement::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, graph_element_class_proto_funcs, _countof(graph_element_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, graph_element_class_constructor, "GraphElement", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GraphElement", ctor);

	return 0;
}

JSModuleDef *_js_init_graph_element_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_graph_element_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GraphElement");
	return m;
}

JSModuleDef *js_init_graph_element_module(JSContext *ctx) {
	return _js_init_graph_element_module(ctx, "godot/classes/graph_element");
}

void register_graph_element() {
	js_init_graph_element_module(ctx);
}