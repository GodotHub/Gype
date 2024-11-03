
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_vector_op.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_base.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_vector_op_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_vector_op_class_def = {
	"VisualShaderNodeVectorOp",
	.finalizer = visual_shader_node_vector_op_class_finalizer
};

static JSValue visual_shader_node_vector_op_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeVectorOp::__class_id);
	if (JS_IsException(obj))
		return obj;

	VisualShaderNodeVectorOp *visual_shader_node_vector_op_class;
	if (argc == 1) 
		visual_shader_node_vector_op_class = static_cast<VisualShaderNodeVectorOp *>(Variant(*argv).operator Object *());
	else 
		visual_shader_node_vector_op_class = memnew(VisualShaderNodeVectorOp);
	if (!visual_shader_node_vector_op_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_vector_op_class);
	return obj;
}
static JSValue visual_shader_node_vector_op_class_set_operator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeVectorOp::set_operator, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_vector_op_class_get_operator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeVectorOp::get_operator, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_vector_op_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_operator", 1, &visual_shader_node_vector_op_class_set_operator),
	JS_CFUNC_DEF("get_operator", 0, &visual_shader_node_vector_op_class_get_operator),
};

static void define_visual_shader_node_vector_op_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "operator"),
        JS_NewCFunction(ctx, visual_shader_node_vector_op_class_get_operator, "get_operator", 0),
        JS_NewCFunction(ctx, visual_shader_node_vector_op_class_set_operator, "set_operator", 1),
        JS_PROP_GETSET
    );
	
}

static void define_visual_shader_node_vector_op_enum(JSContext *ctx, JSValue proto) {
	JSValue Operator_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Operator_obj, "OP_ADD", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_SUB", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_MUL", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_DIV", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_MOD", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_POW", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_MAX", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_MIN", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_CROSS", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_ATAN2", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_REFLECT", JS_NewInt64(ctx, 10));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_STEP", JS_NewInt64(ctx, 11));
	JS_SetPropertyStr(ctx, Operator_obj, "OP_ENUM_SIZE", JS_NewInt64(ctx, 12));
	JS_SetPropertyStr(ctx, proto, "Operator", Operator_obj);
}

static int js_visual_shader_node_vector_op_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VisualShaderNodeVectorOp"] = VisualShaderNodeVectorOp::__class_id;
	class_id_list.insert(VisualShaderNodeVectorOp::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeVectorOp::__class_id, &visual_shader_node_vector_op_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeVectorOp::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeVectorBase::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeVectorOp::__class_id, proto);

	define_visual_shader_node_vector_op_property(ctx, proto);
	define_visual_shader_node_vector_op_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_vector_op_class_proto_funcs, _countof(visual_shader_node_vector_op_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_vector_op_class_constructor, "VisualShaderNodeVectorOp", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "VisualShaderNodeVectorOp", ctor);
	constructors[VisualShaderNodeVectorOp::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_vector_op_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/visual_shader_node_vector_base';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_vector_op_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeVectorOp");
	return m;
}

JSModuleDef *js_init_visual_shader_node_vector_op_module(JSContext *ctx) {
	return _js_init_visual_shader_node_vector_op_module(ctx, "@godot/classes/visual_shader_node_vector_op");
}

void register_visual_shader_node_vector_op() {
	VisualShaderNodeVectorOp::__init_js_class_id();
	js_init_visual_shader_node_vector_op_module(ctx);
}