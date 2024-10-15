
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_frame.hpp>
#include <godot_cpp/classes/visual_shader_node_resizable_base.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_frame_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeFrame *visual_shader_node_frame = static_cast<VisualShaderNodeFrame *>(JS_GetOpaque(val, VisualShaderNodeFrame::__class_id));
	if (visual_shader_node_frame)
		memdelete(visual_shader_node_frame);
}

static JSClassDef visual_shader_node_frame_class_def = {
	"VisualShaderNodeFrame",
	.finalizer = visual_shader_node_frame_class_finalizer
};

static JSValue visual_shader_node_frame_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeFrame::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeFrame *visual_shader_node_frame_class = memnew(VisualShaderNodeFrame);
	if (!visual_shader_node_frame_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_frame_class);	
	return obj;
}
static JSValue visual_shader_node_frame_class_set_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeFrame::set_title, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_frame_class_get_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeFrame::get_title, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_frame_class_set_tint_color_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeFrame::set_tint_color_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_frame_class_is_tint_color_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeFrame::is_tint_color_enabled, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_frame_class_set_tint_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeFrame::set_tint_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_frame_class_get_tint_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeFrame::get_tint_color, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_frame_class_set_autoshrink_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeFrame::set_autoshrink_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_frame_class_is_autoshrink_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeFrame::is_autoshrink_enabled, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_frame_class_add_attached_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeFrame::add_attached_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_frame_class_remove_attached_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeFrame::remove_attached_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_frame_class_set_attached_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeFrame::set_attached_nodes, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_frame_class_get_attached_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeFrame::get_attached_nodes, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_frame_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_title", 1, &visual_shader_node_frame_class_set_title),
	JS_CFUNC_DEF("get_title", 0, &visual_shader_node_frame_class_get_title),
	JS_CFUNC_DEF("set_tint_color_enabled", 1, &visual_shader_node_frame_class_set_tint_color_enabled),
	JS_CFUNC_DEF("is_tint_color_enabled", 0, &visual_shader_node_frame_class_is_tint_color_enabled),
	JS_CFUNC_DEF("set_tint_color", 1, &visual_shader_node_frame_class_set_tint_color),
	JS_CFUNC_DEF("get_tint_color", 0, &visual_shader_node_frame_class_get_tint_color),
	JS_CFUNC_DEF("set_autoshrink_enabled", 1, &visual_shader_node_frame_class_set_autoshrink_enabled),
	JS_CFUNC_DEF("is_autoshrink_enabled", 0, &visual_shader_node_frame_class_is_autoshrink_enabled),
	JS_CFUNC_DEF("add_attached_node", 1, &visual_shader_node_frame_class_add_attached_node),
	JS_CFUNC_DEF("remove_attached_node", 1, &visual_shader_node_frame_class_remove_attached_node),
	JS_CFUNC_DEF("set_attached_nodes", 1, &visual_shader_node_frame_class_set_attached_nodes),
	JS_CFUNC_DEF("get_attached_nodes", 0, &visual_shader_node_frame_class_get_attached_nodes),
};

void define_visual_shader_node_frame_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "title"),
        JS_NewCFunction(ctx, visual_shader_node_frame_class_get_title, "get_title", 0),
        JS_NewCFunction(ctx, visual_shader_node_frame_class_set_title, "set_title", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tint_color_enabled"),
        JS_NewCFunction(ctx, visual_shader_node_frame_class_is_tint_color_enabled, "is_tint_color_enabled", 0),
        JS_NewCFunction(ctx, visual_shader_node_frame_class_set_tint_color_enabled, "set_tint_color_enabled", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tint_color"),
        JS_NewCFunction(ctx, visual_shader_node_frame_class_get_tint_color, "get_tint_color", 0),
        JS_NewCFunction(ctx, visual_shader_node_frame_class_set_tint_color, "set_tint_color", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "autoshrink"),
        JS_NewCFunction(ctx, visual_shader_node_frame_class_is_autoshrink_enabled, "is_autoshrink_enabled", 0),
        JS_NewCFunction(ctx, visual_shader_node_frame_class_set_autoshrink_enabled, "set_autoshrink_enabled", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "attached_nodes"),
        JS_NewCFunction(ctx, visual_shader_node_frame_class_get_attached_nodes, "get_attached_nodes", 0),
        JS_NewCFunction(ctx, visual_shader_node_frame_class_set_attached_nodes, "set_attached_nodes", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_visual_shader_node_frame_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeFrame::__class_id);
	classes["VisualShaderNodeFrame"] = VisualShaderNodeFrame::__class_id;
	class_id_list.insert(VisualShaderNodeFrame::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeFrame::__class_id, &visual_shader_node_frame_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeFrame::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeResizableBase::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeFrame::__class_id, proto);

	define_visual_shader_node_frame_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_frame_class_proto_funcs, _countof(visual_shader_node_frame_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_frame_class_constructor, "VisualShaderNodeFrame", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeFrame", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_frame_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node_resizable_base';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_frame_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeFrame");
	return m;
}

JSModuleDef *js_init_visual_shader_node_frame_module(JSContext *ctx) {
	return _js_init_visual_shader_node_frame_module(ctx, "godot/classes/visual_shader_node_frame");
}

void register_visual_shader_node_frame() {
	VisualShaderNodeFrame::__init_js_class_id();
	js_init_visual_shader_node_frame_module(ctx);
}