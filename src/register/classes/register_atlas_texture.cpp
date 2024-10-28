
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/atlas_texture.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void atlas_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef atlas_texture_class_def = {
	"AtlasTexture",
	.finalizer = atlas_texture_class_finalizer
};

static JSValue atlas_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AtlasTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	AtlasTexture *atlas_texture_class = memnew(AtlasTexture);
	if (!atlas_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, atlas_texture_class);
	return obj;
}
static JSValue atlas_texture_class_set_atlas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AtlasTexture::set_atlas, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue atlas_texture_class_get_atlas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AtlasTexture::get_atlas, ctx, this_val, argc, argv);
};
static JSValue atlas_texture_class_set_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AtlasTexture::set_region, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue atlas_texture_class_get_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AtlasTexture::get_region, ctx, this_val, argc, argv);
};
static JSValue atlas_texture_class_set_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AtlasTexture::set_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue atlas_texture_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AtlasTexture::get_margin, ctx, this_val, argc, argv);
};
static JSValue atlas_texture_class_set_filter_clip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AtlasTexture::set_filter_clip, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue atlas_texture_class_has_filter_clip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AtlasTexture::has_filter_clip, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry atlas_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_atlas", 1, &atlas_texture_class_set_atlas),
	JS_CFUNC_DEF("get_atlas", 0, &atlas_texture_class_get_atlas),
	JS_CFUNC_DEF("set_region", 1, &atlas_texture_class_set_region),
	JS_CFUNC_DEF("get_region", 0, &atlas_texture_class_get_region),
	JS_CFUNC_DEF("set_margin", 1, &atlas_texture_class_set_margin),
	JS_CFUNC_DEF("get_margin", 0, &atlas_texture_class_get_margin),
	JS_CFUNC_DEF("set_filter_clip", 1, &atlas_texture_class_set_filter_clip),
	JS_CFUNC_DEF("has_filter_clip", 0, &atlas_texture_class_has_filter_clip),
};

void define_atlas_texture_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "atlas"),
			JS_NewCFunction(ctx, atlas_texture_class_get_atlas, "get_atlas", 0),
			JS_NewCFunction(ctx, atlas_texture_class_set_atlas, "set_atlas", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "region"),
			JS_NewCFunction(ctx, atlas_texture_class_get_region, "get_region", 0),
			JS_NewCFunction(ctx, atlas_texture_class_set_region, "set_region", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "margin"),
			JS_NewCFunction(ctx, atlas_texture_class_get_margin, "get_margin", 0),
			JS_NewCFunction(ctx, atlas_texture_class_set_margin, "set_margin", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "filter_clip"),
			JS_NewCFunction(ctx, atlas_texture_class_has_filter_clip, "has_filter_clip", 0),
			JS_NewCFunction(ctx, atlas_texture_class_set_filter_clip, "set_filter_clip", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_atlas_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AtlasTexture::__class_id);
	classes["AtlasTexture"] = AtlasTexture::__class_id;
	class_id_list.insert(AtlasTexture::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AtlasTexture::__class_id, &atlas_texture_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AtlasTexture::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AtlasTexture::__class_id, proto);

	define_atlas_texture_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, atlas_texture_class_proto_funcs, _countof(atlas_texture_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, atlas_texture_class_constructor, "AtlasTexture", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AtlasTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_atlas_texture_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/texture2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_atlas_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AtlasTexture");
	return m;
}

JSModuleDef *js_init_atlas_texture_module(JSContext *ctx) {
	return _js_init_atlas_texture_module(ctx, "godot/classes/atlas_texture");
}

void register_atlas_texture() {
	AtlasTexture::__init_js_class_id();
	js_init_atlas_texture_module(ctx);
}