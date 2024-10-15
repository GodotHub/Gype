
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_transform_vec_mult.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_transform_vec_mult_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeTransformVecMult *visual_shader_node_transform_vec_mult = static_cast<VisualShaderNodeTransformVecMult *>(JS_GetOpaque(val, VisualShaderNodeTransformVecMult::__class_id));
	if (visual_shader_node_transform_vec_mult)
		memdelete(visual_shader_node_transform_vec_mult);
}

static JSClassDef visual_shader_node_transform_vec_mult_class_def = {
	"VisualShaderNodeTransformVecMult",
	.finalizer = visual_shader_node_transform_vec_mult_class_finalizer
};

static JSValue visual_shader_node_transform_vec_mult_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeTransformVecMult::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeTransformVecMult *visual_shader_node_transform_vec_mult_class = memnew(VisualShaderNodeTransformVecMult);
	if (!visual_shader_node_transform_vec_mult_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_transform_vec_mult_class);	
	return obj;
}
static JSValue visual_shader_node_transform_vec_mult_class_set_operator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeTransformVecMult::set_operator, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_transform_vec_mult_class_get_operator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeTransformVecMult::get_operator, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_transform_vec_mult_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_operator", 1, &visual_shader_node_transform_vec_mult_class_set_operator),
	JS_CFUNC_DEF("get_operator", 0, &visual_shader_node_transform_vec_mult_class_get_operator),
};

void define_visual_shader_node_transform_vec_mult_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "operator"),
        JS_NewCFunction(ctx, visual_shader_node_transform_vec_mult_class_get_operator, "get_operator", 0),
        JS_NewCFunction(ctx, visual_shader_node_transform_vec_mult_class_set_operator, "set_operator", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_visual_shader_node_transform_vec_mult_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeTransformVecMult::__class_id);
	classes["VisualShaderNodeTransformVecMult"] = VisualShaderNodeTransformVecMult::__class_id;
	class_id_list.insert(VisualShaderNodeTransformVecMult::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeTransformVecMult::__class_id, &visual_shader_node_transform_vec_mult_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeTransformVecMult::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeTransformVecMult::__class_id, proto);

	define_visual_shader_node_transform_vec_mult_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_transform_vec_mult_class_proto_funcs, _countof(visual_shader_node_transform_vec_mult_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_transform_vec_mult_class_constructor, "VisualShaderNodeTransformVecMult", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeTransformVecMult", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_transform_vec_mult_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_transform_vec_mult_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeTransformVecMult");
	return m;
}

JSModuleDef *js_init_visual_shader_node_transform_vec_mult_module(JSContext *ctx) {
	return _js_init_visual_shader_node_transform_vec_mult_module(ctx, "godot/classes/visual_shader_node_transform_vec_mult");
}

void register_visual_shader_node_transform_vec_mult() {
	VisualShaderNodeTransformVecMult::__init_js_class_id();
	js_init_visual_shader_node_transform_vec_mult_module(ctx);
}