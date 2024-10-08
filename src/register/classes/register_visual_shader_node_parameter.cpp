
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_parameter.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void visual_shader_node_parameter_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeParameter *visual_shader_node_parameter = static_cast<VisualShaderNodeParameter *>(JS_GetOpaque(val, VisualShaderNodeParameter::__class_id));
	if (visual_shader_node_parameter)
		VisualShaderNodeParameter::free(nullptr, visual_shader_node_parameter);
}

static JSClassDef visual_shader_node_parameter_class_def = {
	"VisualShaderNodeParameter",
	.finalizer = visual_shader_node_parameter_class_finalizer
};

static JSValue visual_shader_node_parameter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeParameter *visual_shader_node_parameter_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeParameter::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_parameter_class = memnew(VisualShaderNodeParameter);
	if (!visual_shader_node_parameter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_parameter_class);
	return obj;
}
static JSValue visual_shader_node_parameter_class_set_parameter_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeParameter::set_parameter_name, VisualShaderNodeParameter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_parameter_class_get_parameter_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeParameter::get_parameter_name, VisualShaderNodeParameter::__class_id, ctx, this_val, argv);
};
static JSValue visual_shader_node_parameter_class_set_qualifier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeParameter::set_qualifier, VisualShaderNodeParameter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_parameter_class_get_qualifier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeParameter::get_qualifier, VisualShaderNodeParameter::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_parameter_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_parameter_name", 1, &visual_shader_node_parameter_class_set_parameter_name),
	JS_CFUNC_DEF("get_parameter_name", 0, &visual_shader_node_parameter_class_get_parameter_name),
	JS_CFUNC_DEF("set_qualifier", 1, &visual_shader_node_parameter_class_set_qualifier),
	JS_CFUNC_DEF("get_qualifier", 0, &visual_shader_node_parameter_class_get_qualifier),
};

static int js_visual_shader_node_parameter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeParameter::__class_id);
	classes["VisualShaderNodeParameter"] = VisualShaderNodeParameter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeParameter::__class_id, &visual_shader_node_parameter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeParameter::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_parameter_class_proto_funcs, _countof(visual_shader_node_parameter_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_parameter_class_constructor, "VisualShaderNodeParameter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeParameter", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_parameter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_parameter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeParameter");
	return m;
}

JSModuleDef *js_init_visual_shader_node_parameter_module(JSContext *ctx) {
	return _js_init_visual_shader_node_parameter_module(ctx, "godot/classes/visual_shader_node_parameter");
}

void register_visual_shader_node_parameter() {
	js_init_visual_shader_node_parameter_module(ctx);
}