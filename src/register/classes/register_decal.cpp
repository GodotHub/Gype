
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/decal.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void decal_class_finalizer(JSRuntime *rt, JSValue val) {
	Decal *decal = static_cast<Decal *>(JS_GetOpaque(val, Decal::__class_id));
	if (decal)
		Decal::free(nullptr, decal);
}

static JSClassDef decal_class_def = {
	"Decal",
	.finalizer = decal_class_finalizer
};

static JSValue decal_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Decal *decal_class;
	JSValue obj = JS_NewObjectClass(ctx, Decal::__class_id);
	if (JS_IsException(obj))
		return obj;
	decal_class = memnew(Decal);
	if (!decal_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, decal_class);
	return obj;
}
static JSValue decal_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Decal::set_size, Decal::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue decal_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Decal::get_size, Decal::__class_id, ctx, this_val, argv);
};
static JSValue decal_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Decal::set_texture, Decal::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue decal_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Decal::get_texture, Decal::__class_id, ctx, this_val, argv);
};
static JSValue decal_class_set_emission_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Decal::set_emission_energy, Decal::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue decal_class_get_emission_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Decal::get_emission_energy, Decal::__class_id, ctx, this_val, argv);
};
static JSValue decal_class_set_albedo_mix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Decal::set_albedo_mix, Decal::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue decal_class_get_albedo_mix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Decal::get_albedo_mix, Decal::__class_id, ctx, this_val, argv);
};
static JSValue decal_class_set_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Decal::set_modulate, Decal::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue decal_class_get_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Decal::get_modulate, Decal::__class_id, ctx, this_val, argv);
};
static JSValue decal_class_set_upper_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Decal::set_upper_fade, Decal::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue decal_class_get_upper_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Decal::get_upper_fade, Decal::__class_id, ctx, this_val, argv);
};
static JSValue decal_class_set_lower_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Decal::set_lower_fade, Decal::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue decal_class_get_lower_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Decal::get_lower_fade, Decal::__class_id, ctx, this_val, argv);
};
static JSValue decal_class_set_normal_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Decal::set_normal_fade, Decal::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue decal_class_get_normal_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Decal::get_normal_fade, Decal::__class_id, ctx, this_val, argv);
};
static JSValue decal_class_set_enable_distance_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Decal::set_enable_distance_fade, Decal::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue decal_class_is_distance_fade_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Decal::is_distance_fade_enabled, Decal::__class_id, ctx, this_val, argv);
};
static JSValue decal_class_set_distance_fade_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Decal::set_distance_fade_begin, Decal::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue decal_class_get_distance_fade_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Decal::get_distance_fade_begin, Decal::__class_id, ctx, this_val, argv);
};
static JSValue decal_class_set_distance_fade_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Decal::set_distance_fade_length, Decal::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue decal_class_get_distance_fade_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Decal::get_distance_fade_length, Decal::__class_id, ctx, this_val, argv);
};
static JSValue decal_class_set_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Decal::set_cull_mask, Decal::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue decal_class_get_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Decal::get_cull_mask, Decal::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry decal_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &decal_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &decal_class_get_size),
	JS_CFUNC_DEF("set_texture", 2, &decal_class_set_texture),
	JS_CFUNC_DEF("get_texture", 1, &decal_class_get_texture),
	JS_CFUNC_DEF("set_emission_energy", 1, &decal_class_set_emission_energy),
	JS_CFUNC_DEF("get_emission_energy", 0, &decal_class_get_emission_energy),
	JS_CFUNC_DEF("set_albedo_mix", 1, &decal_class_set_albedo_mix),
	JS_CFUNC_DEF("get_albedo_mix", 0, &decal_class_get_albedo_mix),
	JS_CFUNC_DEF("set_modulate", 1, &decal_class_set_modulate),
	JS_CFUNC_DEF("get_modulate", 0, &decal_class_get_modulate),
	JS_CFUNC_DEF("set_upper_fade", 1, &decal_class_set_upper_fade),
	JS_CFUNC_DEF("get_upper_fade", 0, &decal_class_get_upper_fade),
	JS_CFUNC_DEF("set_lower_fade", 1, &decal_class_set_lower_fade),
	JS_CFUNC_DEF("get_lower_fade", 0, &decal_class_get_lower_fade),
	JS_CFUNC_DEF("set_normal_fade", 1, &decal_class_set_normal_fade),
	JS_CFUNC_DEF("get_normal_fade", 0, &decal_class_get_normal_fade),
	JS_CFUNC_DEF("set_enable_distance_fade", 1, &decal_class_set_enable_distance_fade),
	JS_CFUNC_DEF("is_distance_fade_enabled", 0, &decal_class_is_distance_fade_enabled),
	JS_CFUNC_DEF("set_distance_fade_begin", 1, &decal_class_set_distance_fade_begin),
	JS_CFUNC_DEF("get_distance_fade_begin", 0, &decal_class_get_distance_fade_begin),
	JS_CFUNC_DEF("set_distance_fade_length", 1, &decal_class_set_distance_fade_length),
	JS_CFUNC_DEF("get_distance_fade_length", 0, &decal_class_get_distance_fade_length),
	JS_CFUNC_DEF("set_cull_mask", 1, &decal_class_set_cull_mask),
	JS_CFUNC_DEF("get_cull_mask", 0, &decal_class_get_cull_mask),
};

static int js_decal_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Decal::__class_id);
	classes["Decal"] = Decal::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Decal::__class_id, &decal_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Decal::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, decal_class_proto_funcs, _countof(decal_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, decal_class_constructor, "Decal", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Decal", ctor);

	return 0;
}

JSModuleDef *_js_init_decal_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_decal_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Decal");
	return m;
}

JSModuleDef *js_init_decal_module(JSContext *ctx) {
	return _js_init_decal_module(ctx, "godot/classes/decal");
}

void register_decal() {
	js_init_decal_module(ctx);
}