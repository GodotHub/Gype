
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_clamp.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_clamp_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeClamp *visual_shader_node_clamp = static_cast<VisualShaderNodeClamp *>(JS_GetOpaque(val, VisualShaderNodeClamp::__class_id));
	if (visual_shader_node_clamp)
		memdelete(visual_shader_node_clamp);
}

static JSClassDef visual_shader_node_clamp_class_def = {
	"VisualShaderNodeClamp",
	.finalizer = visual_shader_node_clamp_class_finalizer
};

static JSValue visual_shader_node_clamp_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeClamp::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeClamp *visual_shader_node_clamp_class = memnew(VisualShaderNodeClamp);
	if (!visual_shader_node_clamp_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_clamp_class);	
	return obj;
}
static JSValue visual_shader_node_clamp_class_set_op_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeClamp::set_op_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_clamp_class_get_op_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeClamp::get_op_type, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_clamp_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_op_type", 1, &visual_shader_node_clamp_class_set_op_type),
	JS_CFUNC_DEF("get_op_type", 0, &visual_shader_node_clamp_class_get_op_type),
};

void define_visual_shader_node_clamp_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "op_type"),
        JS_NewCFunction(ctx, visual_shader_node_clamp_class_get_op_type, "get_op_type", 0),
        JS_NewCFunction(ctx, visual_shader_node_clamp_class_set_op_type, "set_op_type", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_visual_shader_node_clamp_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeClamp::__class_id);
	classes["VisualShaderNodeClamp"] = VisualShaderNodeClamp::__class_id;
	class_id_list.insert(VisualShaderNodeClamp::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeClamp::__class_id, &visual_shader_node_clamp_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeClamp::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeClamp::__class_id, proto);

	define_visual_shader_node_clamp_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_clamp_class_proto_funcs, _countof(visual_shader_node_clamp_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_clamp_class_constructor, "VisualShaderNodeClamp", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeClamp", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_clamp_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_clamp_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeClamp");
	return m;
}

JSModuleDef *js_init_visual_shader_node_clamp_module(JSContext *ctx) {
	return _js_init_visual_shader_node_clamp_module(ctx, "godot/classes/visual_shader_node_clamp");
}

void register_visual_shader_node_clamp() {
	VisualShaderNodeClamp::__init_js_class_id();
	js_init_visual_shader_node_clamp_module(ctx);
}