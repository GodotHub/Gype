
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_billboard.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_billboard_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_billboard_class_def = {
	"VisualShaderNodeBillboard",
	.finalizer = visual_shader_node_billboard_class_finalizer
};

static JSValue visual_shader_node_billboard_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeBillboard::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeBillboard *visual_shader_node_billboard_class = memnew(VisualShaderNodeBillboard);
	if (!visual_shader_node_billboard_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_billboard_class);	
	return obj;
}
static JSValue visual_shader_node_billboard_class_set_billboard_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNodeBillboard::set_billboard_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_billboard_class_get_billboard_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeBillboard::get_billboard_type, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_billboard_class_set_keep_scale_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNodeBillboard::set_keep_scale_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_billboard_class_is_keep_scale_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeBillboard::is_keep_scale_enabled, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_billboard_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_billboard_type", 1, &visual_shader_node_billboard_class_set_billboard_type),
	JS_CFUNC_DEF("get_billboard_type", 0, &visual_shader_node_billboard_class_get_billboard_type),
	JS_CFUNC_DEF("set_keep_scale_enabled", 1, &visual_shader_node_billboard_class_set_keep_scale_enabled),
	JS_CFUNC_DEF("is_keep_scale_enabled", 0, &visual_shader_node_billboard_class_is_keep_scale_enabled),
};

void define_visual_shader_node_billboard_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "billboard_type"),
        JS_NewCFunction(ctx, visual_shader_node_billboard_class_get_billboard_type, "get_billboard_type", 0),
        JS_NewCFunction(ctx, visual_shader_node_billboard_class_set_billboard_type, "set_billboard_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "keep_scale"),
        JS_NewCFunction(ctx, visual_shader_node_billboard_class_is_keep_scale_enabled, "is_keep_scale_enabled", 0),
        JS_NewCFunction(ctx, visual_shader_node_billboard_class_set_keep_scale_enabled, "set_keep_scale_enabled", 1),
        JS_PROP_GETSET
    );
}

static int js_visual_shader_node_billboard_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeBillboard::__class_id);
	classes["VisualShaderNodeBillboard"] = VisualShaderNodeBillboard::__class_id;
	class_id_list.insert(VisualShaderNodeBillboard::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeBillboard::__class_id, &visual_shader_node_billboard_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeBillboard::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeBillboard::__class_id, proto);

	define_visual_shader_node_billboard_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_billboard_class_proto_funcs, _countof(visual_shader_node_billboard_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_billboard_class_constructor, "VisualShaderNodeBillboard", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeBillboard", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_billboard_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_billboard_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeBillboard");
	return m;
}

JSModuleDef *js_init_visual_shader_node_billboard_module(JSContext *ctx) {
	return _js_init_visual_shader_node_billboard_module(ctx, "godot/classes/visual_shader_node_billboard");
}

void register_visual_shader_node_billboard() {
	VisualShaderNodeBillboard::__init_js_class_id();
	js_init_visual_shader_node_billboard_module(ctx);
}