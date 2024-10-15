
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_derivative_func.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_derivative_func_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeDerivativeFunc *visual_shader_node_derivative_func = static_cast<VisualShaderNodeDerivativeFunc *>(JS_GetOpaque(val, VisualShaderNodeDerivativeFunc::__class_id));
	if (visual_shader_node_derivative_func)
		memdelete(visual_shader_node_derivative_func);
}

static JSClassDef visual_shader_node_derivative_func_class_def = {
	"VisualShaderNodeDerivativeFunc",
	.finalizer = visual_shader_node_derivative_func_class_finalizer
};

static JSValue visual_shader_node_derivative_func_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeDerivativeFunc::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeDerivativeFunc *visual_shader_node_derivative_func_class = memnew(VisualShaderNodeDerivativeFunc);
	if (!visual_shader_node_derivative_func_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_derivative_func_class);	
	return obj;
}
static JSValue visual_shader_node_derivative_func_class_set_op_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeDerivativeFunc::set_op_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_derivative_func_class_get_op_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeDerivativeFunc::get_op_type, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_derivative_func_class_set_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeDerivativeFunc::set_function, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_derivative_func_class_get_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeDerivativeFunc::get_function, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_derivative_func_class_set_precision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeDerivativeFunc::set_precision, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_derivative_func_class_get_precision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeDerivativeFunc::get_precision, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_derivative_func_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_op_type", 1, &visual_shader_node_derivative_func_class_set_op_type),
	JS_CFUNC_DEF("get_op_type", 0, &visual_shader_node_derivative_func_class_get_op_type),
	JS_CFUNC_DEF("set_function", 1, &visual_shader_node_derivative_func_class_set_function),
	JS_CFUNC_DEF("get_function", 0, &visual_shader_node_derivative_func_class_get_function),
	JS_CFUNC_DEF("set_precision", 1, &visual_shader_node_derivative_func_class_set_precision),
	JS_CFUNC_DEF("get_precision", 0, &visual_shader_node_derivative_func_class_get_precision),
};

void define_visual_shader_node_derivative_func_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "op_type"),
        JS_NewCFunction(ctx, visual_shader_node_derivative_func_class_get_op_type, "get_op_type", 0),
        JS_NewCFunction(ctx, visual_shader_node_derivative_func_class_set_op_type, "set_op_type", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "function"),
        JS_NewCFunction(ctx, visual_shader_node_derivative_func_class_get_function, "get_function", 0),
        JS_NewCFunction(ctx, visual_shader_node_derivative_func_class_set_function, "set_function", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "precision"),
        JS_NewCFunction(ctx, visual_shader_node_derivative_func_class_get_precision, "get_precision", 0),
        JS_NewCFunction(ctx, visual_shader_node_derivative_func_class_set_precision, "set_precision", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_visual_shader_node_derivative_func_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeDerivativeFunc::__class_id);
	classes["VisualShaderNodeDerivativeFunc"] = VisualShaderNodeDerivativeFunc::__class_id;
	class_id_list.insert(VisualShaderNodeDerivativeFunc::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeDerivativeFunc::__class_id, &visual_shader_node_derivative_func_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeDerivativeFunc::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeDerivativeFunc::__class_id, proto);

	define_visual_shader_node_derivative_func_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_derivative_func_class_proto_funcs, _countof(visual_shader_node_derivative_func_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_derivative_func_class_constructor, "VisualShaderNodeDerivativeFunc", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeDerivativeFunc", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_derivative_func_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_derivative_func_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeDerivativeFunc");
	return m;
}

JSModuleDef *js_init_visual_shader_node_derivative_func_module(JSContext *ctx) {
	return _js_init_visual_shader_node_derivative_func_module(ctx, "godot/classes/visual_shader_node_derivative_func");
}

void register_visual_shader_node_derivative_func() {
	VisualShaderNodeDerivativeFunc::__init_js_class_id();
	js_init_visual_shader_node_derivative_func_module(ctx);
}