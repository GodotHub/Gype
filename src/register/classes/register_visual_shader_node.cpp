
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void visual_shader_node_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNode *visual_shader_node = static_cast<VisualShaderNode *>(JS_GetOpaque(val, VisualShaderNode::__class_id));
	if (visual_shader_node)
		VisualShaderNode::free(nullptr, visual_shader_node);
}

static JSClassDef visual_shader_node_class_def = {
	"VisualShaderNode",
	.finalizer = visual_shader_node_class_finalizer
};

static JSValue visual_shader_node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNode *visual_shader_node_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNode::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_class = memnew(VisualShaderNode);
	if (!visual_shader_node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_class);
	return obj;
}
static JSValue visual_shader_node_class_get_default_input_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNode::get_default_input_port, VisualShaderNode::__class_id, ctx, this_val, argv);
};
static JSValue visual_shader_node_class_set_output_port_for_preview(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNode::set_output_port_for_preview, VisualShaderNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_class_get_output_port_for_preview(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNode::get_output_port_for_preview, VisualShaderNode::__class_id, ctx, this_val, argv);
};
static JSValue visual_shader_node_class_set_input_port_default_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNode::set_input_port_default_value, VisualShaderNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_class_get_input_port_default_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNode::get_input_port_default_value, VisualShaderNode::__class_id, ctx, this_val, argv);
};
static JSValue visual_shader_node_class_remove_input_port_default_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNode::remove_input_port_default_value, VisualShaderNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_class_clear_default_input_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNode::clear_default_input_values, VisualShaderNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_class_set_default_input_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNode::set_default_input_values, VisualShaderNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_class_get_default_input_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNode::get_default_input_values, VisualShaderNode::__class_id, ctx, this_val, argv);
};
static JSValue visual_shader_node_class_set_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNode::set_frame, VisualShaderNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_class_get_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNode::get_frame, VisualShaderNode::__class_id, ctx, this_val, argv);
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

static int js_visual_shader_node_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNode::__class_id);
	classes["VisualShaderNode"] = VisualShaderNode::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNode::__class_id, &visual_shader_node_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNode::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_class_proto_funcs, _countof(visual_shader_node_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_class_constructor, "VisualShaderNode", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNode", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNode");
	return m;
}

JSModuleDef *js_init_visual_shader_node_module(JSContext *ctx) {
	return _js_init_visual_shader_node_module(ctx, "godot/classes/visual_shader_node");
}

void register_visual_shader_node() {
	js_init_visual_shader_node_module(ctx);
}