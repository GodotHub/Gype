
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_class_def = {
	"VisualShaderNode",
	.finalizer = visual_shader_node_class_finalizer
};

static JSValue visual_shader_node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNode::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNode *visual_shader_node_class;
	if (argc == 1) {
		Variant vobj = *argv;
		visual_shader_node_class = static_cast<VisualShaderNode *>(static_cast<Object *>(vobj));
	} else {
		visual_shader_node_class = memnew(VisualShaderNode);
	}
	if (!visual_shader_node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_class);	
	return obj;
}
static JSValue visual_shader_node_class_get_default_input_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNode::get_default_input_port, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_class_set_output_port_for_preview(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNode::set_output_port_for_preview, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_class_get_output_port_for_preview(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNode::get_output_port_for_preview, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_class_set_input_port_default_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNode::set_input_port_default_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_class_get_input_port_default_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNode::get_input_port_default_value, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_class_remove_input_port_default_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNode::remove_input_port_default_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_class_clear_default_input_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNode::clear_default_input_values, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_class_set_default_input_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNode::set_default_input_values, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_class_get_default_input_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNode::get_default_input_values, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_class_set_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNode::set_frame, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_class_get_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNode::get_frame, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_default_input_port", 1, &visual_shader_node_class_get_default_input_port),
	JS_CFUNC_DEF("set_output_port_for_preview", 1, &visual_shader_node_class_set_output_port_for_preview),
	JS_CFUNC_DEF("get_output_port_for_preview", 0, &visual_shader_node_class_get_output_port_for_preview),
	JS_CFUNC_DEF("set_input_port_default_value", 3, &visual_shader_node_class_set_input_port_default_value),
	JS_CFUNC_DEF("get_input_port_default_value", 1, &visual_shader_node_class_get_input_port_default_value),
	JS_CFUNC_DEF("remove_input_port_default_value", 1, &visual_shader_node_class_remove_input_port_default_value),
	JS_CFUNC_DEF("clear_default_input_values", 0, &visual_shader_node_class_clear_default_input_values),
	JS_CFUNC_DEF("set_default_input_values", 1, &visual_shader_node_class_set_default_input_values),
	JS_CFUNC_DEF("get_default_input_values", 0, &visual_shader_node_class_get_default_input_values),
	JS_CFUNC_DEF("set_frame", 1, &visual_shader_node_class_set_frame),
	JS_CFUNC_DEF("get_frame", 0, &visual_shader_node_class_get_frame),
};

void define_visual_shader_node_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "output_port_for_preview"),
        JS_NewCFunction(ctx, visual_shader_node_class_get_output_port_for_preview, "get_output_port_for_preview", 0),
        JS_NewCFunction(ctx, visual_shader_node_class_set_output_port_for_preview, "set_output_port_for_preview", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "default_input_values"),
        JS_NewCFunction(ctx, visual_shader_node_class_get_default_input_values, "get_default_input_values", 0),
        JS_NewCFunction(ctx, visual_shader_node_class_set_default_input_values, "set_default_input_values", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linked_parent_graph_frame"),
        JS_NewCFunction(ctx, visual_shader_node_class_get_frame, "get_frame", 0),
        JS_NewCFunction(ctx, visual_shader_node_class_set_frame, "set_frame", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue PortType_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, PortType_obj, "PORT_TYPE_SCALAR", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, PortType_obj, "PORT_TYPE_SCALAR_INT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, PortType_obj, "PORT_TYPE_SCALAR_UINT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, PortType_obj, "PORT_TYPE_VECTOR_2D", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, PortType_obj, "PORT_TYPE_VECTOR_3D", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, PortType_obj, "PORT_TYPE_VECTOR_4D", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, PortType_obj, "PORT_TYPE_BOOLEAN", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, PortType_obj, "PORT_TYPE_TRANSFORM", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, PortType_obj, "PORT_TYPE_SAMPLER", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, PortType_obj, "PORT_TYPE_MAX", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, proto, "PortType", PortType_obj);
}

static int js_visual_shader_node_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNode::__class_id);
	classes["VisualShaderNode"] = VisualShaderNode::__class_id;
	class_id_list.insert(VisualShaderNode::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNode::__class_id, &visual_shader_node_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNode::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNode::__class_id, proto);

	define_visual_shader_node_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_class_proto_funcs, _countof(visual_shader_node_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_class_constructor, "VisualShaderNode", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNode", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNode");
	return m;
}

JSModuleDef *js_init_visual_shader_node_module(JSContext *ctx) {
	return _js_init_visual_shader_node_module(ctx, "@godot/classes/visual_shader_node");
}

void register_visual_shader_node() {
	VisualShaderNode::__init_js_class_id();
	js_init_visual_shader_node_module(ctx);
}