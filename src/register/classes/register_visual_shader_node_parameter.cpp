
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_parameter_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_parameter_class_def = {
	"VisualShaderNodeParameter",
	.finalizer = visual_shader_node_parameter_class_finalizer
};

static JSValue visual_shader_node_parameter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeParameter::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeParameter *visual_shader_node_parameter_class = memnew(VisualShaderNodeParameter);
	if (!visual_shader_node_parameter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_parameter_class);	
	return obj;
}
static JSValue visual_shader_node_parameter_class_set_parameter_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNodeParameter::set_parameter_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_parameter_class_get_parameter_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeParameter::get_parameter_name, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_parameter_class_set_qualifier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNodeParameter::set_qualifier, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_parameter_class_get_qualifier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeParameter::get_qualifier, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_parameter_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_parameter_name", 1, &visual_shader_node_parameter_class_set_parameter_name),
	JS_CFUNC_DEF("get_parameter_name", 0, &visual_shader_node_parameter_class_get_parameter_name),
	JS_CFUNC_DEF("set_qualifier", 1, &visual_shader_node_parameter_class_set_qualifier),
	JS_CFUNC_DEF("get_qualifier", 0, &visual_shader_node_parameter_class_get_qualifier),
};

void define_visual_shader_node_parameter_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "parameter_name"),
        JS_NewCFunction(ctx, visual_shader_node_parameter_class_get_parameter_name, "get_parameter_name", 0),
        JS_NewCFunction(ctx, visual_shader_node_parameter_class_set_parameter_name, "set_parameter_name", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "qualifier"),
        JS_NewCFunction(ctx, visual_shader_node_parameter_class_get_qualifier, "get_qualifier", 0),
        JS_NewCFunction(ctx, visual_shader_node_parameter_class_set_qualifier, "set_qualifier", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Qualifier_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Qualifier_obj, "QUAL_NONE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Qualifier_obj, "QUAL_GLOBAL", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Qualifier_obj, "QUAL_INSTANCE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Qualifier_obj, "QUAL_MAX", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "Qualifier", Qualifier_obj);
}

static int js_visual_shader_node_parameter_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeParameter::__class_id);
	classes["VisualShaderNodeParameter"] = VisualShaderNodeParameter::__class_id;
	class_id_list.insert(VisualShaderNodeParameter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeParameter::__class_id, &visual_shader_node_parameter_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeParameter::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeParameter::__class_id, proto);

	define_visual_shader_node_parameter_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_parameter_class_proto_funcs, _countof(visual_shader_node_parameter_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_parameter_class_constructor, "VisualShaderNodeParameter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeParameter", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_parameter_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_parameter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeParameter");
	return m;
}

JSModuleDef *js_init_visual_shader_node_parameter_module(JSContext *ctx) {
	return _js_init_visual_shader_node_parameter_module(ctx, "@godot/classes/visual_shader_node_parameter");
}

void register_visual_shader_node_parameter() {
	VisualShaderNodeParameter::__init_js_class_id();
	js_init_visual_shader_node_parameter_module(ctx);
}