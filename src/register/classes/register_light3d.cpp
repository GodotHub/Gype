
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void light3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Light3D *light3d = static_cast<Light3D *>(JS_GetOpaque(val, Light3D::__class_id));
	if (light3d)
		Light3D::free(nullptr, light3d);
}

static JSClassDef light3d_class_def = {
	"Light3D",
	.finalizer = light3d_class_finalizer
};

static JSValue light3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Light3D *light3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Light3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	light3d_class = memnew(Light3D);
	if (!light3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, light3d_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue light3d_class_set_editor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_editor_only, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_is_editor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::is_editor_only, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_param, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_param, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_shadow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_shadow, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_has_shadow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::has_shadow, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_negative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_negative, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_is_negative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::is_negative, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_cull_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_cull_mask, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_enable_distance_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_enable_distance_fade, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_is_distance_fade_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::is_distance_fade_enabled, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_distance_fade_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_distance_fade_begin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_distance_fade_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_distance_fade_begin, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_distance_fade_shadow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_distance_fade_shadow, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_distance_fade_shadow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_distance_fade_shadow, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_distance_fade_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_distance_fade_length, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_distance_fade_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_distance_fade_length, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_color, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_shadow_reverse_cull_face(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_shadow_reverse_cull_face, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_shadow_reverse_cull_face(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_shadow_reverse_cull_face, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_bake_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_bake_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_bake_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_bake_mode, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_projector(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_projector, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_projector(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_projector, ctx, this_val, argc, argv);
};
static JSValue light3d_class_set_temperature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_temperature, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_temperature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_temperature, ctx, this_val, argc, argv);
};
static JSValue light3d_class_get_correlated_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_correlated_color, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry light3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_editor_only", 1, &light3d_class_set_editor_only),
	JS_CFUNC_DEF("is_editor_only", 0, &light3d_class_is_editor_only),
	JS_CFUNC_DEF("set_param", 2, &light3d_class_set_param),
	JS_CFUNC_DEF("get_param", 1, &light3d_class_get_param),
	JS_CFUNC_DEF("set_shadow", 1, &light3d_class_set_shadow),
	JS_CFUNC_DEF("has_shadow", 0, &light3d_class_has_shadow),
	JS_CFUNC_DEF("set_negative", 1, &light3d_class_set_negative),
	JS_CFUNC_DEF("is_negative", 0, &light3d_class_is_negative),
	JS_CFUNC_DEF("set_cull_mask", 1, &light3d_class_set_cull_mask),
	JS_CFUNC_DEF("get_cull_mask", 0, &light3d_class_get_cull_mask),
	JS_CFUNC_DEF("set_enable_distance_fade", 1, &light3d_class_set_enable_distance_fade),
	JS_CFUNC_DEF("is_distance_fade_enabled", 0, &light3d_class_is_distance_fade_enabled),
	JS_CFUNC_DEF("set_distance_fade_begin", 1, &light3d_class_set_distance_fade_begin),
	JS_CFUNC_DEF("get_distance_fade_begin", 0, &light3d_class_get_distance_fade_begin),
	JS_CFUNC_DEF("set_distance_fade_shadow", 1, &light3d_class_set_distance_fade_shadow),
	JS_CFUNC_DEF("get_distance_fade_shadow", 0, &light3d_class_get_distance_fade_shadow),
	JS_CFUNC_DEF("set_distance_fade_length", 1, &light3d_class_set_distance_fade_length),
	JS_CFUNC_DEF("get_distance_fade_length", 0, &light3d_class_get_distance_fade_length),
	JS_CFUNC_DEF("set_color", 1, &light3d_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &light3d_class_get_color),
	JS_CFUNC_DEF("set_shadow_reverse_cull_face", 1, &light3d_class_set_shadow_reverse_cull_face),
	JS_CFUNC_DEF("get_shadow_reverse_cull_face", 0, &light3d_class_get_shadow_reverse_cull_face),
	JS_CFUNC_DEF("set_bake_mode", 1, &light3d_class_set_bake_mode),
	JS_CFUNC_DEF("get_bake_mode", 0, &light3d_class_get_bake_mode),
	JS_CFUNC_DEF("set_projector", 1, &light3d_class_set_projector),
	JS_CFUNC_DEF("get_projector", 0, &light3d_class_get_projector),
	JS_CFUNC_DEF("set_temperature", 1, &light3d_class_set_temperature),
	JS_CFUNC_DEF("get_temperature", 0, &light3d_class_get_temperature),
	JS_CFUNC_DEF("get_correlated_color", 0, &light3d_class_get_correlated_color),
};

void define_light3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_intensity_lumens"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_intensity_lux"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_temperature"),
        JS_NewCFunction(ctx, light3d_class_get_temperature, "get_temperature", 0),
        JS_NewCFunction(ctx, light3d_class_set_temperature, "set_temperature", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_color"),
        JS_NewCFunction(ctx, light3d_class_get_color, "get_color", 0),
        JS_NewCFunction(ctx, light3d_class_set_color, "set_color", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_energy"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_indirect_energy"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_volumetric_fog_energy"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_projector"),
        JS_NewCFunction(ctx, light3d_class_get_projector, "get_projector", 0),
        JS_NewCFunction(ctx, light3d_class_set_projector, "set_projector", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_size"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_angular_distance"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_negative"),
        JS_NewCFunction(ctx, light3d_class_is_negative, "is_negative", 0),
        JS_NewCFunction(ctx, light3d_class_set_negative, "set_negative", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_specular"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_bake_mode"),
        JS_NewCFunction(ctx, light3d_class_get_bake_mode, "get_bake_mode", 0),
        JS_NewCFunction(ctx, light3d_class_set_bake_mode, "set_bake_mode", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_cull_mask"),
        JS_NewCFunction(ctx, light3d_class_get_cull_mask, "get_cull_mask", 0),
        JS_NewCFunction(ctx, light3d_class_set_cull_mask, "set_cull_mask", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_enabled"),
        JS_NewCFunction(ctx, light3d_class_has_shadow, "has_shadow", 0),
        JS_NewCFunction(ctx, light3d_class_set_shadow, "set_shadow", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_bias"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_normal_bias"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_reverse_cull_face"),
        JS_NewCFunction(ctx, light3d_class_get_shadow_reverse_cull_face, "get_shadow_reverse_cull_face", 0),
        JS_NewCFunction(ctx, light3d_class_set_shadow_reverse_cull_face, "set_shadow_reverse_cull_face", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_transmittance_bias"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_opacity"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_blur"),
        JS_NewCFunction(ctx, light3d_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, light3d_class_set_param, "set_param", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "distance_fade_enabled"),
        JS_NewCFunction(ctx, light3d_class_is_distance_fade_enabled, "is_distance_fade_enabled", 0),
        JS_NewCFunction(ctx, light3d_class_set_enable_distance_fade, "set_enable_distance_fade", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "distance_fade_begin"),
        JS_NewCFunction(ctx, light3d_class_get_distance_fade_begin, "get_distance_fade_begin", 0),
        JS_NewCFunction(ctx, light3d_class_set_distance_fade_begin, "set_distance_fade_begin", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "distance_fade_shadow"),
        JS_NewCFunction(ctx, light3d_class_get_distance_fade_shadow, "get_distance_fade_shadow", 0),
        JS_NewCFunction(ctx, light3d_class_set_distance_fade_shadow, "set_distance_fade_shadow", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "distance_fade_length"),
        JS_NewCFunction(ctx, light3d_class_get_distance_fade_length, "get_distance_fade_length", 0),
        JS_NewCFunction(ctx, light3d_class_set_distance_fade_length, "set_distance_fade_length", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "editor_only"),
        JS_NewCFunction(ctx, light3d_class_is_editor_only, "is_editor_only", 0),
        JS_NewCFunction(ctx, light3d_class_set_editor_only, "set_editor_only", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_light3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Light3D::__class_id);
	classes["Light3D"] = Light3D::__class_id;
	class_id_list.insert(Light3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Light3D::__class_id, &light3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Light3D::__class_id, proto);
	define_light3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, light3d_class_proto_funcs, _countof(light3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, light3d_class_constructor, "Light3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Light3D", ctor);

	return 0;
}

JSModuleDef *_js_init_light3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_light3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Light3D");
	return m;
}

JSModuleDef *js_init_light3d_module(JSContext *ctx) {
	return _js_init_light3d_module(ctx, "godot/classes/light3d");
}

void register_light3d() {
	Light3D::__init_js_class_id();
	js_init_light3d_module(ctx);
}