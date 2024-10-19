
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_resizable_base.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_resizable_base_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_resizable_base_class_def = {
	"VisualShaderNodeResizableBase",
	.finalizer = visual_shader_node_resizable_base_class_finalizer
};

static JSValue visual_shader_node_resizable_base_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeResizableBase::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeResizableBase *visual_shader_node_resizable_base_class = memnew(VisualShaderNodeResizableBase);
	if (!visual_shader_node_resizable_base_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_resizable_base_class);	
	return obj;
}
static JSValue visual_shader_node_resizable_base_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeResizableBase::set_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_resizable_base_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeResizableBase::get_size, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_resizable_base_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &visual_shader_node_resizable_base_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &visual_shader_node_resizable_base_class_get_size),
};

void define_visual_shader_node_resizable_base_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, visual_shader_node_resizable_base_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, visual_shader_node_resizable_base_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
}

static int js_visual_shader_node_resizable_base_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeResizableBase::__class_id);
	classes["VisualShaderNodeResizableBase"] = VisualShaderNodeResizableBase::__class_id;
	class_id_list.insert(VisualShaderNodeResizableBase::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeResizableBase::__class_id, &visual_shader_node_resizable_base_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeResizableBase::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeResizableBase::__class_id, proto);

	define_visual_shader_node_resizable_base_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_resizable_base_class_proto_funcs, _countof(visual_shader_node_resizable_base_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_resizable_base_class_constructor, "VisualShaderNodeResizableBase", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeResizableBase", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_resizable_base_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_resizable_base_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeResizableBase");
	return m;
}

JSModuleDef *js_init_visual_shader_node_resizable_base_module(JSContext *ctx) {
	return _js_init_visual_shader_node_resizable_base_module(ctx, "godot/classes/visual_shader_node_resizable_base");
}

void register_visual_shader_node_resizable_base() {
	VisualShaderNodeResizableBase::__init_js_class_id();
	js_init_visual_shader_node_resizable_base_module(ctx);
}