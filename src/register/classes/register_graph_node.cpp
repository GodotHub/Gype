
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/graph_element.hpp>
#include <godot_cpp/classes/graph_node.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void graph_node_class_finalizer(JSRuntime *rt, JSValue val) {
	GraphNode *graph_node = static_cast<GraphNode *>(JS_GetOpaque(val, GraphNode::__class_id));
	if (graph_node)
		memdelete(graph_node);
}

static JSClassDef graph_node_class_def = {
	"GraphNode",
	.finalizer = graph_node_class_finalizer
};

static JSValue graph_node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GraphNode::__class_id);
	if (JS_IsException(obj))
		return obj;
	GraphNode *graph_node_class = memnew(GraphNode);
	if (!graph_node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, graph_node_class);	
	return obj;
}
static JSValue graph_node_class_set_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_title, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_title, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_get_titlebar_hbox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_titlebar_hbox, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_set_slot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_clear_slot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::clear_slot, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_clear_all_slots(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::clear_all_slots, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_is_slot_enabled_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::is_slot_enabled_left, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_set_slot_enabled_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_enabled_left, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_set_slot_type_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_type_left, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_slot_type_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_slot_type_left, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_set_slot_color_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_color_left, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_slot_color_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_slot_color_left, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_set_slot_custom_icon_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_custom_icon_left, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_slot_custom_icon_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_slot_custom_icon_left, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_is_slot_enabled_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::is_slot_enabled_right, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_set_slot_enabled_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_enabled_right, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_set_slot_type_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_type_right, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_slot_type_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_slot_type_right, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_set_slot_color_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_color_right, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_slot_color_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_slot_color_right, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_set_slot_custom_icon_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_custom_icon_right, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_get_slot_custom_icon_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::get_slot_custom_icon_right, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_is_slot_draw_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::is_slot_draw_stylebox, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_set_slot_draw_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_slot_draw_stylebox, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_set_ignore_invalid_connection_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GraphNode::set_ignore_invalid_connection_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue graph_node_class_is_ignoring_valid_connection_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GraphNode::is_ignoring_valid_connection_type, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_get_input_port_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_input_port_count, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_get_input_port_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_input_port_position, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_get_input_port_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_input_port_type, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_get_input_port_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_input_port_color, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_get_input_port_slot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_input_port_slot, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_get_output_port_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_output_port_count, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_get_output_port_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_output_port_position, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_get_output_port_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_output_port_type, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_get_output_port_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_output_port_color, ctx, this_val, argc, argv);
};
static JSValue graph_node_class_get_output_port_slot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GraphNode::get_output_port_slot, ctx, this_val, argc, argv);
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

void define_graph_node_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "title"),
        JS_NewCFunction(ctx, graph_node_class_get_title, "get_title", 0),
        JS_NewCFunction(ctx, graph_node_class_set_title, "set_title", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "ignore_invalid_connection_type"),
        JS_NewCFunction(ctx, graph_node_class_is_ignoring_valid_connection_type, "is_ignoring_valid_connection_type", 0),
        JS_NewCFunction(ctx, graph_node_class_set_ignore_invalid_connection_type, "set_ignore_invalid_connection_type", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_graph_node_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GraphNode::__class_id);
	classes["GraphNode"] = GraphNode::__class_id;
	class_id_list.insert(GraphNode::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GraphNode::__class_id, &graph_node_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GraphNode::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GraphElement::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GraphNode::__class_id, proto);

	define_graph_node_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, graph_node_class_proto_funcs, _countof(graph_node_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, graph_node_class_constructor, "GraphNode", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GraphNode", ctor);

	return 0;
}

JSModuleDef *_js_init_graph_node_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/graph_element';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	GraphNode::__init_js_class_id();
	js_init_graph_node_module(ctx);
}