
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/graph_node.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/graph_element.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void graph_node_class_finalizer(JSRuntime *rt, JSValue val) {
	GraphNode *graph_node = static_cast<GraphNode *>(JS_GetOpaque(val, GraphNode::__class_id));
	if (graph_node)
		GraphNode::free(nullptr, graph_node);
}

static JSClassDef graph_node_class_def = {
	"GraphNode",
	.finalizer = graph_node_class_finalizer
};

static JSValue graph_node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GraphNode *graph_node_class;
	JSValue obj = JS_NewObjectClass(ctx, GraphNode::__class_id);
	if (JS_IsException(obj))
		return obj;
	graph_node_class = memnew(GraphNode);
	if (!graph_node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, graph_node_class);
	return obj;
}
static JSValue graph_node_class_set_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_title, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_title, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_get_titlebar_hbox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_titlebar_hbox, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_set_slot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_clear_slot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::clear_slot, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_clear_all_slots(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::clear_all_slots, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_is_slot_enabled_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::is_slot_enabled_left, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_set_slot_enabled_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_enabled_left, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_set_slot_type_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_type_left, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_slot_type_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_slot_type_left, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_set_slot_color_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_color_left, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_slot_color_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_slot_color_left, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_set_slot_custom_icon_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_custom_icon_left, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_slot_custom_icon_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_slot_custom_icon_left, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_is_slot_enabled_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::is_slot_enabled_right, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_set_slot_enabled_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_enabled_right, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_set_slot_type_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_type_right, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_slot_type_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_slot_type_right, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_set_slot_color_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_color_right, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_slot_color_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_slot_color_right, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_set_slot_custom_icon_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_custom_icon_right, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_slot_custom_icon_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_slot_custom_icon_right, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_is_slot_draw_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::is_slot_draw_stylebox, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_set_slot_draw_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_draw_stylebox, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_set_ignore_invalid_connection_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_ignore_invalid_connection_type, GraphNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_is_ignoring_valid_connection_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::is_ignoring_valid_connection_type, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_get_input_port_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_input_port_count, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_get_input_port_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_input_port_position, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_get_input_port_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_input_port_type, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_get_input_port_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_input_port_color, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_get_input_port_slot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_input_port_slot, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_get_output_port_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_output_port_count, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_get_output_port_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_output_port_position, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_get_output_port_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_output_port_type, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_get_output_port_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_output_port_color, GraphNode::__class_id, ctx, this_val, argv);
};
static JSValue graph_node_class_get_output_port_slot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_output_port_slot, GraphNode::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry graph_node_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_title", 1, &graph_node_class_set_title),
	JS_CFUNC_DEF("get_title", 0, &graph_node_class_get_title),
	JS_CFUNC_DEF("get_titlebar_hbox", 0, &graph_node_class_get_titlebar_hbox),
	JS_CFUNC_DEF("set_slot", 10, &graph_node_class_set_slot),
	JS_CFUNC_DEF("clear_slot", 1, &graph_node_class_clear_slot),
	JS_CFUNC_DEF("clear_all_slots", 0, &graph_node_class_clear_all_slots),
	JS_CFUNC_DEF("is_slot_enabled_left", 1, &graph_node_class_is_slot_enabled_left),
	JS_CFUNC_DEF("set_slot_enabled_left", 2, &graph_node_class_set_slot_enabled_left),
	JS_CFUNC_DEF("set_slot_type_left", 2, &graph_node_class_set_slot_type_left),
	JS_CFUNC_DEF("get_slot_type_left", 1, &graph_node_class_get_slot_type_left),
	JS_CFUNC_DEF("set_slot_color_left", 2, &graph_node_class_set_slot_color_left),
	JS_CFUNC_DEF("get_slot_color_left", 1, &graph_node_class_get_slot_color_left),
	JS_CFUNC_DEF("set_slot_custom_icon_left", 2, &graph_node_class_set_slot_custom_icon_left),
	JS_CFUNC_DEF("get_slot_custom_icon_left", 1, &graph_node_class_get_slot_custom_icon_left),
	JS_CFUNC_DEF("is_slot_enabled_right", 1, &graph_node_class_is_slot_enabled_right),
	JS_CFUNC_DEF("set_slot_enabled_right", 2, &graph_node_class_set_slot_enabled_right),
	JS_CFUNC_DEF("set_slot_type_right", 2, &graph_node_class_set_slot_type_right),
	JS_CFUNC_DEF("get_slot_type_right", 1, &graph_node_class_get_slot_type_right),
	JS_CFUNC_DEF("set_slot_color_right", 2, &graph_node_class_set_slot_color_right),
	JS_CFUNC_DEF("get_slot_color_right", 1, &graph_node_class_get_slot_color_right),
	JS_CFUNC_DEF("set_slot_custom_icon_right", 2, &graph_node_class_set_slot_custom_icon_right),
	JS_CFUNC_DEF("get_slot_custom_icon_right", 1, &graph_node_class_get_slot_custom_icon_right),
	JS_CFUNC_DEF("is_slot_draw_stylebox", 1, &graph_node_class_is_slot_draw_stylebox),
	JS_CFUNC_DEF("set_slot_draw_stylebox", 2, &graph_node_class_set_slot_draw_stylebox),
	JS_CFUNC_DEF("set_ignore_invalid_connection_type", 1, &graph_node_class_set_ignore_invalid_connection_type),
	JS_CFUNC_DEF("is_ignoring_valid_connection_type", 0, &graph_node_class_is_ignoring_valid_connection_type),
	JS_CFUNC_DEF("get_input_port_count", 0, &graph_node_class_get_input_port_count),
	JS_CFUNC_DEF("get_input_port_position", 1, &graph_node_class_get_input_port_position),
	JS_CFUNC_DEF("get_input_port_type", 1, &graph_node_class_get_input_port_type),
	JS_CFUNC_DEF("get_input_port_color", 1, &graph_node_class_get_input_port_color),
	JS_CFUNC_DEF("get_input_port_slot", 1, &graph_node_class_get_input_port_slot),
	JS_CFUNC_DEF("get_output_port_count", 0, &graph_node_class_get_output_port_count),
	JS_CFUNC_DEF("get_output_port_position", 1, &graph_node_class_get_output_port_position),
	JS_CFUNC_DEF("get_output_port_type", 1, &graph_node_class_get_output_port_type),
	JS_CFUNC_DEF("get_output_port_color", 1, &graph_node_class_get_output_port_color),
	JS_CFUNC_DEF("get_output_port_slot", 1, &graph_node_class_get_output_port_slot),
};

static int js_graph_node_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GraphNode::__class_id);
	classes["GraphNode"] = GraphNode::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GraphNode::__class_id, &graph_node_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GraphElement::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GraphNode::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, graph_node_class_proto_funcs, _countof(graph_node_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, graph_node_class_constructor, "GraphNode", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GraphNode", ctor);

	return 0;
}

JSModuleDef *_js_init_graph_node_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_graph_node_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GraphNode");
	return m;
}

JSModuleDef *js_init_graph_node_module(JSContext *ctx) {
	return _js_init_graph_node_module(ctx, "godot/classes/graph_node");
}

void register_graph_node() {
	js_init_graph_node_module(ctx);
}