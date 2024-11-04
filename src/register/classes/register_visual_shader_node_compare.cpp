
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_compare.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_compare_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeCompare *visual_shader_node_compare = static_cast<VisualShaderNodeCompare *>(JS_GetOpaque(val, VisualShaderNodeCompare::__class_id));
	if (visual_shader_node_compare)
		memdelete(visual_shader_node_compare);
}

static JSClassDef visual_shader_node_compare_class_def = {
	"VisualShaderNodeCompare",
	.finalizer = visual_shader_node_compare_class_finalizer
};

static JSValue visual_shader_node_compare_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeCompare::__class_id);
	if (JS_IsException(obj))
		return obj;

	VisualShaderNodeCompare *visual_shader_node_compare_class;
	if (argc == 1) 
		visual_shader_node_compare_class = static_cast<VisualShaderNodeCompare *>(Variant(*argv).operator Object *());
	else 
		visual_shader_node_compare_class = memnew(VisualShaderNodeCompare);
	if (!visual_shader_node_compare_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_compare_class);
	return obj;
}
static JSValue visual_shader_node_compare_class_set_comparison_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeCompare::set_comparison_type, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_compare_class_get_comparison_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeCompare::get_comparison_type, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_compare_class_set_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeCompare::set_function, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_compare_class_get_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeCompare::get_function, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_compare_class_set_condition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeCompare::set_condition, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_compare_class_get_condition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeCompare::get_condition, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_compare_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_comparison_type", 1, &visual_shader_node_compare_class_set_comparison_type),
	JS_CFUNC_DEF("get_comparison_type", 0, &visual_shader_node_compare_class_get_comparison_type),
	JS_CFUNC_DEF("set_function", 1, &visual_shader_node_compare_class_set_function),
	JS_CFUNC_DEF("get_function", 0, &visual_shader_node_compare_class_get_function),
	JS_CFUNC_DEF("set_condition", 1, &visual_shader_node_compare_class_set_condition),
	JS_CFUNC_DEF("get_condition", 0, &visual_shader_node_compare_class_get_condition),
};

static void define_visual_shader_node_compare_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "type"),
        JS_NewCFunction(ctx, visual_shader_node_compare_class_get_comparison_type, "get_comparison_type", 0),
        JS_NewCFunction(ctx, visual_shader_node_compare_class_set_comparison_type, "set_comparison_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "function"),
        JS_NewCFunction(ctx, visual_shader_node_compare_class_get_function, "get_function", 0),
        JS_NewCFunction(ctx, visual_shader_node_compare_class_set_function, "set_function", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "condition"),
        JS_NewCFunction(ctx, visual_shader_node_compare_class_get_condition, "get_condition", 0),
        JS_NewCFunction(ctx, visual_shader_node_compare_class_set_condition, "set_condition", 1),
        JS_PROP_GETSET
    );
	
}

static void define_visual_shader_node_compare_enum(JSContext *ctx, JSValue proto) {
	JSValue ComparisonType_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ComparisonType_obj, "CTYPE_SCALAR", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, ComparisonType_obj, "CTYPE_SCALAR_INT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, ComparisonType_obj, "CTYPE_SCALAR_UINT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, ComparisonType_obj, "CTYPE_VECTOR_2D", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, ComparisonType_obj, "CTYPE_VECTOR_3D", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, ComparisonType_obj, "CTYPE_VECTOR_4D", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, ComparisonType_obj, "CTYPE_BOOLEAN", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, ComparisonType_obj, "CTYPE_TRANSFORM", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, ComparisonType_obj, "CTYPE_MAX", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, proto, "ComparisonType", ComparisonType_obj);
	JSValue Function_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Function_obj, "FUNC_EQUAL", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Function_obj, "FUNC_NOT_EQUAL", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Function_obj, "FUNC_GREATER_THAN", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Function_obj, "FUNC_GREATER_THAN_EQUAL", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Function_obj, "FUNC_LESS_THAN", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, Function_obj, "FUNC_LESS_THAN_EQUAL", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, Function_obj, "FUNC_MAX", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, proto, "Function", Function_obj);
	JSValue Condition_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Condition_obj, "COND_ALL", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Condition_obj, "COND_ANY", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Condition_obj, "COND_MAX", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "Condition", Condition_obj);
}

static int js_visual_shader_node_compare_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VisualShaderNodeCompare"] = VisualShaderNodeCompare::__class_id;
	class_id_list.insert(VisualShaderNodeCompare::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeCompare::__class_id, &visual_shader_node_compare_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeCompare::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeCompare::__class_id, proto);

	define_visual_shader_node_compare_property(ctx, proto);
	define_visual_shader_node_compare_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_compare_class_proto_funcs, _countof(visual_shader_node_compare_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_compare_class_constructor, "VisualShaderNodeCompare", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "VisualShaderNodeCompare", ctor);
	constructors[VisualShaderNodeCompare::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_compare_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_compare_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeCompare");
	return m;
}

JSModuleDef *js_init_visual_shader_node_compare_module(JSContext *ctx) {
	return _js_init_visual_shader_node_compare_module(ctx, "@godot/classes/visual_shader_node_compare");
}

void register_visual_shader_node_compare() {
	VisualShaderNodeCompare::__init_js_class_id();
	js_init_visual_shader_node_compare_module(ctx);
}