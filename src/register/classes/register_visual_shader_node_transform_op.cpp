
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_transform_op.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_transform_op_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_transform_op_class_def = {
	"VisualShaderNodeTransformOp",
	.finalizer = visual_shader_node_transform_op_class_finalizer
};

static JSValue visual_shader_node_transform_op_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeTransformOp::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeTransformOp *visual_shader_node_transform_op_class = memnew(VisualShaderNodeTransformOp);
	if (!visual_shader_node_transform_op_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_transform_op_class);	
	return obj;
}
static JSValue visual_shader_node_transform_op_class_set_operator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNodeTransformOp::set_operator, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_transform_op_class_get_operator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeTransformOp::get_operator, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_transform_op_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_operator", 1, &visual_shader_node_transform_op_class_set_operator),
	JS_CFUNC_DEF("get_operator", 0, &visual_shader_node_transform_op_class_get_operator),
};

void define_visual_shader_node_transform_op_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "operator"),
        JS_NewCFunction(ctx, visual_shader_node_transform_op_class_get_operator, "get_operator", 0),
        JS_NewCFunction(ctx, visual_shader_node_transform_op_class_set_operator, "set_operator", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Operator_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Operator_obj, "OP_AxB", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_BxA", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_AxB_COMP", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_BxA_COMP", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_ADD", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_A_MINUS_B", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_B_MINUS_A", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_A_DIV_B", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_B_DIV_A", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_MAX", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, proto, "Operator", Operator_obj);
}

static int js_visual_shader_node_transform_op_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeTransformOp::__class_id);
	classes["VisualShaderNodeTransformOp"] = VisualShaderNodeTransformOp::__class_id;
	class_id_list.insert(VisualShaderNodeTransformOp::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeTransformOp::__class_id, &visual_shader_node_transform_op_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeTransformOp::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeTransformOp::__class_id, proto);

	define_visual_shader_node_transform_op_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_transform_op_class_proto_funcs, _countof(visual_shader_node_transform_op_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_transform_op_class_constructor, "VisualShaderNodeTransformOp", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeTransformOp", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_transform_op_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_transform_op_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeTransformOp");
	return m;
}

JSModuleDef *js_init_visual_shader_node_transform_op_module(JSContext *ctx) {
	return _js_init_visual_shader_node_transform_op_module(ctx, "godot/classes/visual_shader_node_transform_op");
}

void register_visual_shader_node_transform_op() {
	VisualShaderNodeTransformOp::__init_js_class_id();
	js_init_visual_shader_node_transform_op_module(ctx);
}