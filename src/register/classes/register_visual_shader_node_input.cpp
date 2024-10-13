
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_input.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_input_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeInput *visual_shader_node_input = static_cast<VisualShaderNodeInput *>(JS_GetOpaque(val, VisualShaderNodeInput::__class_id));
	if (visual_shader_node_input)
		VisualShaderNodeInput::free(nullptr, visual_shader_node_input);
}

static JSClassDef visual_shader_node_input_class_def = {
	"VisualShaderNodeInput",
	.finalizer = visual_shader_node_input_class_finalizer
};

static JSValue visual_shader_node_input_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeInput *visual_shader_node_input_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeInput::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_input_class = memnew(VisualShaderNodeInput);
	if (!visual_shader_node_input_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_input_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue visual_shader_node_input_class_set_input_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeInput::set_input_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_input_class_get_input_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeInput::get_input_name, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_input_class_get_input_real_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeInput::get_input_real_name, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_input_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_input_name", 1, &visual_shader_node_input_class_set_input_name),
	JS_CFUNC_DEF("get_input_name", 0, &visual_shader_node_input_class_get_input_name),
	JS_CFUNC_DEF("get_input_real_name", 0, &visual_shader_node_input_class_get_input_real_name),
};

void define_visual_shader_node_input_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "input_name"),
        JS_NewCFunction(ctx, visual_shader_node_input_class_get_input_name, "get_input_name", 0),
        JS_NewCFunction(ctx, visual_shader_node_input_class_set_input_name, "set_input_name", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_visual_shader_node_input_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeInput::__class_id);
	classes["VisualShaderNodeInput"] = VisualShaderNodeInput::__class_id;
	class_id_list.insert(VisualShaderNodeInput::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeInput::__class_id, &visual_shader_node_input_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeInput::__class_id, proto);
	define_visual_shader_node_input_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_input_class_proto_funcs, _countof(visual_shader_node_input_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_input_class_constructor, "VisualShaderNodeInput", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeInput", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_input_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_input_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeInput");
	return m;
}

JSModuleDef *js_init_visual_shader_node_input_module(JSContext *ctx) {
	return _js_init_visual_shader_node_input_module(ctx, "godot/classes/visual_shader_node_input");
}

void register_visual_shader_node_input() {
	VisualShaderNodeInput::__init_js_class_id();
	js_init_visual_shader_node_input_module(ctx);
}