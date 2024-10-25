
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_int_func.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_int_func_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_int_func_class_def = {
	"VisualShaderNodeIntFunc",
	.finalizer = visual_shader_node_int_func_class_finalizer
};

static JSValue visual_shader_node_int_func_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeIntFunc::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeIntFunc *visual_shader_node_int_func_class = memnew(VisualShaderNodeIntFunc);
	if (!visual_shader_node_int_func_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_int_func_class);	
	return obj;
}
static JSValue visual_shader_node_int_func_class_set_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNodeIntFunc::set_function, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_int_func_class_get_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeIntFunc::get_function, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_int_func_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_function", 1, &visual_shader_node_int_func_class_set_function),
	JS_CFUNC_DEF("get_function", 0, &visual_shader_node_int_func_class_get_function),
};

void define_visual_shader_node_int_func_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "function"),
        JS_NewCFunction(ctx, visual_shader_node_int_func_class_get_function, "get_function", 0),
        JS_NewCFunction(ctx, visual_shader_node_int_func_class_set_function, "set_function", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Function_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Function_obj, "FUNC_ABS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Function_obj, "FUNC_NEGATE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Function_obj, "FUNC_SIGN", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Function_obj, "FUNC_BITWISE_NOT", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Function_obj, "FUNC_MAX", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "Function", Function_obj);
}

static int js_visual_shader_node_int_func_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeIntFunc::__class_id);
	classes["VisualShaderNodeIntFunc"] = VisualShaderNodeIntFunc::__class_id;
	class_id_list.insert(VisualShaderNodeIntFunc::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeIntFunc::__class_id, &visual_shader_node_int_func_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeIntFunc::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeIntFunc::__class_id, proto);

	define_visual_shader_node_int_func_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_int_func_class_proto_funcs, _countof(visual_shader_node_int_func_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_int_func_class_constructor, "VisualShaderNodeIntFunc", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeIntFunc", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_int_func_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_int_func_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeIntFunc");
	return m;
}

JSModuleDef *js_init_visual_shader_node_int_func_module(JSContext *ctx) {
	return _js_init_visual_shader_node_int_func_module(ctx, "godot/classes/visual_shader_node_int_func");
}

void register_visual_shader_node_int_func() {
	VisualShaderNodeIntFunc::__init_js_class_id();
	js_init_visual_shader_node_int_func_module(ctx);
}