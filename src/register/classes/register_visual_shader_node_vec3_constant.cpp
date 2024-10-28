
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/visual_shader_node_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_vec3_constant.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void visual_shader_node_vec3_constant_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef visual_shader_node_vec3_constant_class_def = {
	"VisualShaderNodeVec3Constant",
	.finalizer = visual_shader_node_vec3_constant_class_finalizer
};

static JSValue visual_shader_node_vec3_constant_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeVec3Constant::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeVec3Constant *visual_shader_node_vec3_constant_class = memnew(VisualShaderNodeVec3Constant);
	if (!visual_shader_node_vec3_constant_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_vec3_constant_class);
	return obj;
}
static JSValue visual_shader_node_vec3_constant_class_set_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&VisualShaderNodeVec3Constant::set_constant, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_vec3_constant_class_get_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeVec3Constant::get_constant, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_vec3_constant_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_constant", 1, &visual_shader_node_vec3_constant_class_set_constant),
	JS_CFUNC_DEF("get_constant", 0, &visual_shader_node_vec3_constant_class_get_constant),
};

void define_visual_shader_node_vec3_constant_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "constant"),
			JS_NewCFunction(ctx, visual_shader_node_vec3_constant_class_get_constant, "get_constant", 0),
			JS_NewCFunction(ctx, visual_shader_node_vec3_constant_class_set_constant, "set_constant", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_visual_shader_node_vec3_constant_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeVec3Constant::__class_id);
	classes["VisualShaderNodeVec3Constant"] = VisualShaderNodeVec3Constant::__class_id;
	class_id_list.insert(VisualShaderNodeVec3Constant::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeVec3Constant::__class_id, &visual_shader_node_vec3_constant_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeVec3Constant::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeConstant::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeVec3Constant::__class_id, proto);

	define_visual_shader_node_vec3_constant_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_vec3_constant_class_proto_funcs, _countof(visual_shader_node_vec3_constant_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_vec3_constant_class_constructor, "VisualShaderNodeVec3Constant", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeVec3Constant", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_vec3_constant_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node_constant';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_vec3_constant_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeVec3Constant");
	return m;
}

JSModuleDef *js_init_visual_shader_node_vec3_constant_module(JSContext *ctx) {
	return _js_init_visual_shader_node_vec3_constant_module(ctx, "godot/classes/visual_shader_node_vec3_constant");
}

void register_visual_shader_node_vec3_constant() {
	VisualShaderNodeVec3Constant::__init_js_class_id();
	js_init_visual_shader_node_vec3_constant_module(ctx);
}