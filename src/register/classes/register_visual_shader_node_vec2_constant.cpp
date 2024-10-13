
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_vec2_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_constant.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_vec2_constant_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeVec2Constant *visual_shader_node_vec2_constant = static_cast<VisualShaderNodeVec2Constant *>(JS_GetOpaque(val, VisualShaderNodeVec2Constant::__class_id));
	if (visual_shader_node_vec2_constant)
		VisualShaderNodeVec2Constant::free(nullptr, visual_shader_node_vec2_constant);
}

static JSClassDef visual_shader_node_vec2_constant_class_def = {
	"VisualShaderNodeVec2Constant",
	.finalizer = visual_shader_node_vec2_constant_class_finalizer
};

static JSValue visual_shader_node_vec2_constant_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeVec2Constant *visual_shader_node_vec2_constant_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeVec2Constant::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_vec2_constant_class = memnew(VisualShaderNodeVec2Constant);
	if (!visual_shader_node_vec2_constant_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_vec2_constant_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue visual_shader_node_vec2_constant_class_set_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeVec2Constant::set_constant, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_vec2_constant_class_get_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeVec2Constant::get_constant, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_vec2_constant_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_constant", 1, &visual_shader_node_vec2_constant_class_set_constant),
	JS_CFUNC_DEF("get_constant", 0, &visual_shader_node_vec2_constant_class_get_constant),
};

void define_visual_shader_node_vec2_constant_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "constant"),
        JS_NewCFunction(ctx, visual_shader_node_vec2_constant_class_get_constant, "get_constant", 0),
        JS_NewCFunction(ctx, visual_shader_node_vec2_constant_class_set_constant, "set_constant", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_visual_shader_node_vec2_constant_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeVec2Constant::__class_id);
	classes["VisualShaderNodeVec2Constant"] = VisualShaderNodeVec2Constant::__class_id;
	class_id_list.insert(VisualShaderNodeVec2Constant::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeVec2Constant::__class_id, &visual_shader_node_vec2_constant_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeConstant::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeVec2Constant::__class_id, proto);
	define_visual_shader_node_vec2_constant_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_vec2_constant_class_proto_funcs, _countof(visual_shader_node_vec2_constant_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_vec2_constant_class_constructor, "VisualShaderNodeVec2Constant", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeVec2Constant", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_vec2_constant_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node_constant';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_vec2_constant_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeVec2Constant");
	return m;
}

JSModuleDef *js_init_visual_shader_node_vec2_constant_module(JSContext *ctx) {
	return _js_init_visual_shader_node_vec2_constant_module(ctx, "godot/classes/visual_shader_node_vec2_constant");
}

void register_visual_shader_node_vec2_constant() {
	VisualShaderNodeVec2Constant::__init_js_class_id();
	js_init_visual_shader_node_vec2_constant_module(ctx);
}