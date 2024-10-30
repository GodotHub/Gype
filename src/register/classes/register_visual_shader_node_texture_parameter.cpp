
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_texture_parameter.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_texture_parameter_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_texture_parameter_class_def = {
	"VisualShaderNodeTextureParameter",
	.finalizer = visual_shader_node_texture_parameter_class_finalizer
};

static JSValue visual_shader_node_texture_parameter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeTextureParameter::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeTextureParameter *visual_shader_node_texture_parameter_class;
	if (argc == 1) {
		Variant vobj = *argv;
		visual_shader_node_texture_parameter_class = static_cast<VisualShaderNodeTextureParameter *>(static_cast<Object *>(vobj));
	} else {
		visual_shader_node_texture_parameter_class = memnew(VisualShaderNodeTextureParameter);
	}
	if (!visual_shader_node_texture_parameter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_texture_parameter_class);	
	return obj;
}
static JSValue visual_shader_node_texture_parameter_class_set_texture_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNodeTextureParameter::set_texture_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_texture_parameter_class_get_texture_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeTextureParameter::get_texture_type, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_texture_parameter_class_set_color_default(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNodeTextureParameter::set_color_default, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_texture_parameter_class_get_color_default(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeTextureParameter::get_color_default, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_texture_parameter_class_set_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNodeTextureParameter::set_texture_filter, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_texture_parameter_class_get_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeTextureParameter::get_texture_filter, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_texture_parameter_class_set_texture_repeat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNodeTextureParameter::set_texture_repeat, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_texture_parameter_class_get_texture_repeat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeTextureParameter::get_texture_repeat, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_texture_parameter_class_set_texture_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNodeTextureParameter::set_texture_source, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_texture_parameter_class_get_texture_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeTextureParameter::get_texture_source, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_texture_parameter_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture_type", 1, &visual_shader_node_texture_parameter_class_set_texture_type),
	JS_CFUNC_DEF("get_texture_type", 0, &visual_shader_node_texture_parameter_class_get_texture_type),
	JS_CFUNC_DEF("set_color_default", 1, &visual_shader_node_texture_parameter_class_set_color_default),
	JS_CFUNC_DEF("get_color_default", 0, &visual_shader_node_texture_parameter_class_get_color_default),
	JS_CFUNC_DEF("set_texture_filter", 1, &visual_shader_node_texture_parameter_class_set_texture_filter),
	JS_CFUNC_DEF("get_texture_filter", 0, &visual_shader_node_texture_parameter_class_get_texture_filter),
	JS_CFUNC_DEF("set_texture_repeat", 1, &visual_shader_node_texture_parameter_class_set_texture_repeat),
	JS_CFUNC_DEF("get_texture_repeat", 0, &visual_shader_node_texture_parameter_class_get_texture_repeat),
	JS_CFUNC_DEF("set_texture_source", 1, &visual_shader_node_texture_parameter_class_set_texture_source),
	JS_CFUNC_DEF("get_texture_source", 0, &visual_shader_node_texture_parameter_class_get_texture_source),
};

void define_visual_shader_node_texture_parameter_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_type"),
        JS_NewCFunction(ctx, visual_shader_node_texture_parameter_class_get_texture_type, "get_texture_type", 0),
        JS_NewCFunction(ctx, visual_shader_node_texture_parameter_class_set_texture_type, "set_texture_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color_default"),
        JS_NewCFunction(ctx, visual_shader_node_texture_parameter_class_get_color_default, "get_color_default", 0),
        JS_NewCFunction(ctx, visual_shader_node_texture_parameter_class_set_color_default, "set_color_default", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_filter"),
        JS_NewCFunction(ctx, visual_shader_node_texture_parameter_class_get_texture_filter, "get_texture_filter", 0),
        JS_NewCFunction(ctx, visual_shader_node_texture_parameter_class_set_texture_filter, "set_texture_filter", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_repeat"),
        JS_NewCFunction(ctx, visual_shader_node_texture_parameter_class_get_texture_repeat, "get_texture_repeat", 0),
        JS_NewCFunction(ctx, visual_shader_node_texture_parameter_class_set_texture_repeat, "set_texture_repeat", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_source"),
        JS_NewCFunction(ctx, visual_shader_node_texture_parameter_class_get_texture_source, "get_texture_source", 0),
        JS_NewCFunction(ctx, visual_shader_node_texture_parameter_class_set_texture_source, "set_texture_source", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue TextureType_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, TextureType_obj, "TYPE_DATA", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, TextureType_obj, "TYPE_COLOR", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, TextureType_obj, "TYPE_NORMAL_MAP", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, TextureType_obj, "TYPE_ANISOTROPY", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, TextureType_obj, "TYPE_MAX", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "TextureType", TextureType_obj);
	JSValue ColorDefault_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ColorDefault_obj, "COLOR_DEFAULT_WHITE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, ColorDefault_obj, "COLOR_DEFAULT_BLACK", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, ColorDefault_obj, "COLOR_DEFAULT_TRANSPARENT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, ColorDefault_obj, "COLOR_DEFAULT_MAX", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "ColorDefault", ColorDefault_obj);
	JSValue TextureFilter_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, TextureFilter_obj, "FILTER_DEFAULT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, TextureFilter_obj, "FILTER_NEAREST", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, TextureFilter_obj, "FILTER_LINEAR", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, TextureFilter_obj, "FILTER_NEAREST_MIPMAP", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, TextureFilter_obj, "FILTER_LINEAR_MIPMAP", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, TextureFilter_obj, "FILTER_NEAREST_MIPMAP_ANISOTROPIC", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, TextureFilter_obj, "FILTER_LINEAR_MIPMAP_ANISOTROPIC", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, TextureFilter_obj, "FILTER_MAX", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, proto, "TextureFilter", TextureFilter_obj);
	JSValue TextureRepeat_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, TextureRepeat_obj, "REPEAT_DEFAULT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, TextureRepeat_obj, "REPEAT_ENABLED", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, TextureRepeat_obj, "REPEAT_DISABLED", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, TextureRepeat_obj, "REPEAT_MAX", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "TextureRepeat", TextureRepeat_obj);
	JSValue TextureSource_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, TextureSource_obj, "SOURCE_NONE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, TextureSource_obj, "SOURCE_SCREEN", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, TextureSource_obj, "SOURCE_DEPTH", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, TextureSource_obj, "SOURCE_NORMAL_ROUGHNESS", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, TextureSource_obj, "SOURCE_MAX", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "TextureSource", TextureSource_obj);
}

static int js_visual_shader_node_texture_parameter_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeTextureParameter::__class_id);
	classes["VisualShaderNodeTextureParameter"] = VisualShaderNodeTextureParameter::__class_id;
	class_id_list.insert(VisualShaderNodeTextureParameter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeTextureParameter::__class_id, &visual_shader_node_texture_parameter_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeTextureParameter::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeParameter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeTextureParameter::__class_id, proto);

	define_visual_shader_node_texture_parameter_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_texture_parameter_class_proto_funcs, _countof(visual_shader_node_texture_parameter_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_texture_parameter_class_constructor, "VisualShaderNodeTextureParameter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeTextureParameter", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_texture_parameter_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/visual_shader_node_parameter';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_texture_parameter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeTextureParameter");
	return m;
}

JSModuleDef *js_init_visual_shader_node_texture_parameter_module(JSContext *ctx) {
	return _js_init_visual_shader_node_texture_parameter_module(ctx, "@godot/classes/visual_shader_node_texture_parameter");
}

void register_visual_shader_node_texture_parameter() {
	VisualShaderNodeTextureParameter::__init_js_class_id();
	js_init_visual_shader_node_texture_parameter_module(ctx);
}