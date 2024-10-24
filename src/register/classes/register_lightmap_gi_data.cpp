
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/classes/lightmap_gi_data.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void lightmap_gi_data_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef lightmap_gi_data_class_def = {
	"LightmapGIData",
	.finalizer = lightmap_gi_data_class_finalizer
};

static JSValue lightmap_gi_data_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, LightmapGIData::__class_id);
	if (JS_IsException(obj))
		return obj;
	LightmapGIData *lightmap_gi_data_class = memnew(LightmapGIData);
	if (!lightmap_gi_data_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, lightmap_gi_data_class);	
	return obj;
}
static JSValue lightmap_gi_data_class_set_lightmap_textures(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&LightmapGIData::set_lightmap_textures, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_data_class_get_lightmap_textures(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGIData::get_lightmap_textures, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_data_class_set_uses_spherical_harmonics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&LightmapGIData::set_uses_spherical_harmonics, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_data_class_is_using_spherical_harmonics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGIData::is_using_spherical_harmonics, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_data_class_add_user(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&LightmapGIData::add_user, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_data_class_get_user_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGIData::get_user_count, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_data_class_get_user_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGIData::get_user_path, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_data_class_clear_users(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&LightmapGIData::clear_users, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_data_class_set_light_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&LightmapGIData::set_light_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_data_class_get_light_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGIData::get_light_texture, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry lightmap_gi_data_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_lightmap_textures", 1, &lightmap_gi_data_class_set_lightmap_textures),
	JS_CFUNC_DEF("get_lightmap_textures", 0, &lightmap_gi_data_class_get_lightmap_textures),
	JS_CFUNC_DEF("set_uses_spherical_harmonics", 1, &lightmap_gi_data_class_set_uses_spherical_harmonics),
	JS_CFUNC_DEF("is_using_spherical_harmonics", 0, &lightmap_gi_data_class_is_using_spherical_harmonics),
	JS_CFUNC_DEF("add_user", 4, &lightmap_gi_data_class_add_user),
	JS_CFUNC_DEF("get_user_count", 0, &lightmap_gi_data_class_get_user_count),
	JS_CFUNC_DEF("get_user_path", 1, &lightmap_gi_data_class_get_user_path),
	JS_CFUNC_DEF("clear_users", 0, &lightmap_gi_data_class_clear_users),
	JS_CFUNC_DEF("set_light_texture", 1, &lightmap_gi_data_class_set_light_texture),
	JS_CFUNC_DEF("get_light_texture", 0, &lightmap_gi_data_class_get_light_texture),
};

void define_lightmap_gi_data_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "lightmap_textures"),
        JS_NewCFunction(ctx, lightmap_gi_data_class_get_lightmap_textures, "get_lightmap_textures", 0),
        JS_NewCFunction(ctx, lightmap_gi_data_class_set_lightmap_textures, "set_lightmap_textures", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uses_spherical_harmonics"),
        JS_NewCFunction(ctx, lightmap_gi_data_class_is_using_spherical_harmonics, "is_using_spherical_harmonics", 0),
        JS_NewCFunction(ctx, lightmap_gi_data_class_set_uses_spherical_harmonics, "set_uses_spherical_harmonics", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_texture"),
        JS_NewCFunction(ctx, lightmap_gi_data_class_get_light_texture, "get_light_texture", 0),
        JS_NewCFunction(ctx, lightmap_gi_data_class_set_light_texture, "set_light_texture", 1),
        JS_PROP_GETSET
    );
}

static int js_lightmap_gi_data_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&LightmapGIData::__class_id);
	classes["LightmapGIData"] = LightmapGIData::__class_id;
	class_id_list.insert(LightmapGIData::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), LightmapGIData::__class_id, &lightmap_gi_data_class_def);

	JSValue proto = JS_NewObjectClass(ctx, LightmapGIData::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LightmapGIData::__class_id, proto);

	define_lightmap_gi_data_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, lightmap_gi_data_class_proto_funcs, _countof(lightmap_gi_data_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, lightmap_gi_data_class_constructor, "LightmapGIData", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "LightmapGIData", ctor);

	return 0;
}

JSModuleDef *_js_init_lightmap_gi_data_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_lightmap_gi_data_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "LightmapGIData");
	return m;
}

JSModuleDef *js_init_lightmap_gi_data_module(JSContext *ctx) {
	return _js_init_lightmap_gi_data_module(ctx, "godot/classes/lightmap_gi_data");
}

void register_lightmap_gi_data() {
	LightmapGIData::__init_js_class_id();
	js_init_lightmap_gi_data_module(ctx);
}