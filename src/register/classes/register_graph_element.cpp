
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/graph_element.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void graph_element_class_finalizer(JSRuntime *rt, JSValue val) {
	GraphElement *graph_element = static_cast<GraphElement *>(JS_GetOpaque(val, GraphElement::__class_id));
	if (graph_element)
		memdelete(graph_element);
}

static JSClassDef graph_element_class_def = {
	"GraphElement",
	.finalizer = graph_element_class_finalizer
};

static JSValue graph_element_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GraphElement::__class_id);
	if (JS_IsException(obj))
		return obj;

	GraphElement *graph_element_class;
	if (argc == 1) 
		graph_element_class = static_cast<GraphElement *>(Variant(*argv).operator Object *());
	else 
		graph_element_class = memnew(GraphElement);
	if (!graph_element_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, graph_element_class);
	return obj;
}
static JSValue graph_element_class_set_resizable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GraphElement::set_resizable, ctx, this_val, argc, argv);
};
static JSValue graph_element_class_is_resizable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GraphElement::is_resizable, ctx, this_val, argc, argv);
};
static JSValue graph_element_class_set_draggable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GraphElement::set_draggable, ctx, this_val, argc, argv);
};
static JSValue graph_element_class_is_draggable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GraphElement::is_draggable, ctx, this_val, argc, argv);
};
static JSValue graph_element_class_set_selectable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GraphElement::set_selectable, ctx, this_val, argc, argv);
};
static JSValue graph_element_class_is_selectable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GraphElement::is_selectable, ctx, this_val, argc, argv);
};
static JSValue graph_element_class_set_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GraphElement::set_selected, ctx, this_val, argc, argv);
};
static JSValue graph_element_class_is_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GraphElement::is_selected, ctx, this_val, argc, argv);
};
static JSValue graph_element_class_set_position_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GraphElement::set_position_offset, ctx, this_val, argc, argv);
};
static JSValue graph_element_class_get_position_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GraphElement::get_position_offset, ctx, this_val, argc, argv);
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
static JSValue graph_element_class_get_node_selected_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	GraphElement *opaque = reinterpret_cast<GraphElement *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "node_selected_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "node_selected").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "node_selected_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue graph_element_class_get_node_deselected_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	GraphElement *opaque = reinterpret_cast<GraphElement *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "node_deselected_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "node_deselected").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "node_deselected_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue graph_element_class_get_raise_request_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	GraphElement *opaque = reinterpret_cast<GraphElement *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "raise_request_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "raise_request").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "raise_request_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue graph_element_class_get_delete_request_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	GraphElement *opaque = reinterpret_cast<GraphElement *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "delete_request_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "delete_request").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "delete_request_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue graph_element_class_get_resize_request_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	GraphElement *opaque = reinterpret_cast<GraphElement *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "resize_request_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "resize_request").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "resize_request_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue graph_element_class_get_resize_end_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	GraphElement *opaque = reinterpret_cast<GraphElement *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "resize_end_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "resize_end").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "resize_end_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue graph_element_class_get_dragged_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	GraphElement *opaque = reinterpret_cast<GraphElement *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "dragged_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "dragged").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "dragged_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue graph_element_class_get_position_offset_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	GraphElement *opaque = reinterpret_cast<GraphElement *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "position_offset_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "position_offset_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "position_offset_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_graph_element_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "position_offset"),
        JS_NewCFunction(ctx, graph_element_class_get_position_offset, "get_position_offset", 0),
        JS_NewCFunction(ctx, graph_element_class_set_position_offset, "set_position_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "resizable"),
        JS_NewCFunction(ctx, graph_element_class_is_resizable, "is_resizable", 0),
        JS_NewCFunction(ctx, graph_element_class_set_resizable, "set_resizable", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "draggable"),
        JS_NewCFunction(ctx, graph_element_class_is_draggable, "is_draggable", 0),
        JS_NewCFunction(ctx, graph_element_class_set_draggable, "set_draggable", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "selectable"),
        JS_NewCFunction(ctx, graph_element_class_is_selectable, "is_selectable", 0),
        JS_NewCFunction(ctx, graph_element_class_set_selectable, "set_selectable", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "selected"),
        JS_NewCFunction(ctx, graph_element_class_is_selected, "is_selected", 0),
        JS_NewCFunction(ctx, graph_element_class_set_selected, "set_selected", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "node_selected"),
		JS_NewCFunction(ctx, graph_element_class_get_node_selected_signal, "get_node_selected_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "node_deselected"),
		JS_NewCFunction(ctx, graph_element_class_get_node_deselected_signal, "get_node_deselected_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "raise_request"),
		JS_NewCFunction(ctx, graph_element_class_get_raise_request_signal, "get_raise_request_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "delete_request"),
		JS_NewCFunction(ctx, graph_element_class_get_delete_request_signal, "get_delete_request_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "resize_request"),
		JS_NewCFunction(ctx, graph_element_class_get_resize_request_signal, "get_resize_request_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "resize_end"),
		JS_NewCFunction(ctx, graph_element_class_get_resize_end_signal, "get_resize_end_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "dragged"),
		JS_NewCFunction(ctx, graph_element_class_get_dragged_signal, "get_dragged_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "position_offset_changed"),
		JS_NewCFunction(ctx, graph_element_class_get_position_offset_changed_signal, "get_position_offset_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_graph_element_enum(JSContext *ctx, JSValue proto) {
}

static int js_graph_element_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["GraphElement"] = GraphElement::__class_id;
	class_id_list.insert(GraphElement::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GraphElement::__class_id, &graph_element_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GraphElement::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GraphElement::__class_id, proto);

	define_graph_element_property(ctx, proto);
	define_graph_element_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, graph_element_class_proto_funcs, _countof(graph_element_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, graph_element_class_constructor, "GraphElement", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "GraphElement", ctor);
	constructors[GraphElement::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_graph_element_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_graph_element_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GraphElement");
	return m;
}

JSModuleDef *js_init_graph_element_module(JSContext *ctx) {
	return _js_init_graph_element_module(ctx, "@godot/classes/graph_element");
}

void register_graph_element() {
	GraphElement::__init_js_class_id();
	js_init_graph_element_module(ctx);
}