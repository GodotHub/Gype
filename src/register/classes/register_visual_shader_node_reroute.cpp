
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_reroute.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_reroute_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeReroute *visual_shader_node_reroute = static_cast<VisualShaderNodeReroute *>(JS_GetOpaque(val, VisualShaderNodeReroute::__class_id));
	if (visual_shader_node_reroute)
		VisualShaderNodeReroute::free(nullptr, visual_shader_node_reroute);
}

static JSClassDef visual_shader_node_reroute_class_def = {
	"VisualShaderNodeReroute",
	.finalizer = visual_shader_node_reroute_class_finalizer
};

static JSValue visual_shader_node_reroute_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeReroute *visual_shader_node_reroute_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeReroute::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_reroute_class = memnew(VisualShaderNodeReroute);
	if (!visual_shader_node_reroute_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_reroute_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue visual_shader_node_reroute_class_get_port_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeReroute::get_port_type, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_reroute_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_port_type", 0, &visual_shader_node_reroute_class_get_port_type),
};

void define_visual_shader_node_reroute_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "port_type"),
        JS_NewCFunction(ctx, visual_shader_node_reroute_class_get_port_type, "get_port_type", 0),
        JS_UNDEFINED,
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_visual_shader_node_reroute_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeReroute::__class_id);
	classes["VisualShaderNodeReroute"] = VisualShaderNodeReroute::__class_id;
	class_id_list.insert(VisualShaderNodeReroute::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeReroute::__class_id, &visual_shader_node_reroute_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeReroute::__class_id, proto);
	define_visual_shader_node_reroute_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_reroute_class_proto_funcs, _countof(visual_shader_node_reroute_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_reroute_class_constructor, "VisualShaderNodeReroute", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeReroute", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_reroute_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_reroute_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeReroute");
	return m;
}

JSModuleDef *js_init_visual_shader_node_reroute_module(JSContext *ctx) {
	return _js_init_visual_shader_node_reroute_module(ctx, "godot/classes/visual_shader_node_reroute");
}

void register_visual_shader_node_reroute() {
	VisualShaderNodeReroute::__init_js_class_id();
	js_init_visual_shader_node_reroute_module(ctx);
}