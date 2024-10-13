
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_cubemap.hpp>
#include <godot_cpp/classes/cubemap.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_cubemap_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeCubemap *visual_shader_node_cubemap = static_cast<VisualShaderNodeCubemap *>(JS_GetOpaque(val, VisualShaderNodeCubemap::__class_id));
	if (visual_shader_node_cubemap)
		VisualShaderNodeCubemap::free(nullptr, visual_shader_node_cubemap);
}

static JSClassDef visual_shader_node_cubemap_class_def = {
	"VisualShaderNodeCubemap",
	.finalizer = visual_shader_node_cubemap_class_finalizer
};

static JSValue visual_shader_node_cubemap_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeCubemap *visual_shader_node_cubemap_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeCubemap::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_cubemap_class = memnew(VisualShaderNodeCubemap);
	if (!visual_shader_node_cubemap_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_cubemap_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue visual_shader_node_cubemap_class_set_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeCubemap::set_source, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_cubemap_class_get_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeCubemap::get_source, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_cubemap_class_set_cube_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeCubemap::set_cube_map, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_cubemap_class_get_cube_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeCubemap::get_cube_map, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_cubemap_class_set_texture_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeCubemap::set_texture_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_cubemap_class_get_texture_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeCubemap::get_texture_type, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_cubemap_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_source", 1, &visual_shader_node_cubemap_class_set_source),
	JS_CFUNC_DEF("get_source", 0, &visual_shader_node_cubemap_class_get_source),
	JS_CFUNC_DEF("set_cube_map", 1, &visual_shader_node_cubemap_class_set_cube_map),
	JS_CFUNC_DEF("get_cube_map", 0, &visual_shader_node_cubemap_class_get_cube_map),
	JS_CFUNC_DEF("set_texture_type", 1, &visual_shader_node_cubemap_class_set_texture_type),
	JS_CFUNC_DEF("get_texture_type", 0, &visual_shader_node_cubemap_class_get_texture_type),
};

void define_visual_shader_node_cubemap_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "source"),
        JS_NewCFunction(ctx, visual_shader_node_cubemap_class_get_source, "get_source", 0),
        JS_NewCFunction(ctx, visual_shader_node_cubemap_class_set_source, "set_source", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "cube_map"),
        JS_NewCFunction(ctx, visual_shader_node_cubemap_class_get_cube_map, "get_cube_map", 0),
        JS_NewCFunction(ctx, visual_shader_node_cubemap_class_set_cube_map, "set_cube_map", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_type"),
        JS_NewCFunction(ctx, visual_shader_node_cubemap_class_get_texture_type, "get_texture_type", 0),
        JS_NewCFunction(ctx, visual_shader_node_cubemap_class_set_texture_type, "set_texture_type", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_visual_shader_node_cubemap_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeCubemap::__class_id);
	classes["VisualShaderNodeCubemap"] = VisualShaderNodeCubemap::__class_id;
	class_id_list.insert(VisualShaderNodeCubemap::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeCubemap::__class_id, &visual_shader_node_cubemap_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeCubemap::__class_id, proto);
	define_visual_shader_node_cubemap_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_cubemap_class_proto_funcs, _countof(visual_shader_node_cubemap_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_cubemap_class_constructor, "VisualShaderNodeCubemap", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeCubemap", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_cubemap_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_cubemap_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeCubemap");
	return m;
}

JSModuleDef *js_init_visual_shader_node_cubemap_module(JSContext *ctx) {
	return _js_init_visual_shader_node_cubemap_module(ctx, "godot/classes/visual_shader_node_cubemap");
}

void register_visual_shader_node_cubemap() {
	VisualShaderNodeCubemap::__init_js_class_id();
	js_init_visual_shader_node_cubemap_module(ctx);
}