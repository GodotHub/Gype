
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/decal.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void decal_class_finalizer(JSRuntime *rt, JSValue val) {
	Decal *decal = static_cast<Decal *>(JS_GetOpaque(val, Decal::__class_id));
	if (decal)
		memdelete(decal);
}

static JSClassDef decal_class_def = {
	"Decal",
	.finalizer = decal_class_finalizer
};

static JSValue decal_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Decal::__class_id);
	if (JS_IsException(obj))
		return obj;

	Decal *decal_class;
	if (argc == 1) 
		decal_class = static_cast<Decal *>(Variant(*argv).operator Object *());
	else 
		decal_class = memnew(Decal);
	if (!decal_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, decal_class);
	return obj;
}
static JSValue decal_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Decal::set_size, ctx, this_val, argc, argv);
};
static JSValue decal_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Decal::get_size, ctx, this_val, argc, argv);
};
static JSValue decal_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Decal::set_texture, ctx, this_val, argc, argv);
};
static JSValue decal_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Decal::get_texture, ctx, this_val, argc, argv);
};
static JSValue decal_class_set_emission_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Decal::set_emission_energy, ctx, this_val, argc, argv);
};
static JSValue decal_class_get_emission_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Decal::get_emission_energy, ctx, this_val, argc, argv);
};
static JSValue decal_class_set_albedo_mix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Decal::set_albedo_mix, ctx, this_val, argc, argv);
};
static JSValue decal_class_get_albedo_mix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Decal::get_albedo_mix, ctx, this_val, argc, argv);
};
static JSValue decal_class_set_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Decal::set_modulate, ctx, this_val, argc, argv);
};
static JSValue decal_class_get_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Decal::get_modulate, ctx, this_val, argc, argv);
};
static JSValue decal_class_set_upper_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Decal::set_upper_fade, ctx, this_val, argc, argv);
};
static JSValue decal_class_get_upper_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Decal::get_upper_fade, ctx, this_val, argc, argv);
};
static JSValue decal_class_set_lower_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Decal::set_lower_fade, ctx, this_val, argc, argv);
};
static JSValue decal_class_get_lower_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Decal::get_lower_fade, ctx, this_val, argc, argv);
};
static JSValue decal_class_set_normal_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Decal::set_normal_fade, ctx, this_val, argc, argv);
};
static JSValue decal_class_get_normal_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Decal::get_normal_fade, ctx, this_val, argc, argv);
};
static JSValue decal_class_set_enable_distance_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Decal::set_enable_distance_fade, ctx, this_val, argc, argv);
};
static JSValue decal_class_is_distance_fade_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Decal::is_distance_fade_enabled, ctx, this_val, argc, argv);
};
static JSValue decal_class_set_distance_fade_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Decal::set_distance_fade_begin, ctx, this_val, argc, argv);
};
static JSValue decal_class_get_distance_fade_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Decal::get_distance_fade_begin, ctx, this_val, argc, argv);
};
static JSValue decal_class_set_distance_fade_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Decal::set_distance_fade_length, ctx, this_val, argc, argv);
};
static JSValue decal_class_get_distance_fade_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Decal::get_distance_fade_length, ctx, this_val, argc, argv);
};
static JSValue decal_class_set_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Decal::set_cull_mask, ctx, this_val, argc, argv);
};
static JSValue decal_class_get_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Decal::get_cull_mask, ctx, this_val, argc, argv);
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

static void define_decal_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, decal_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, decal_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture_albedo"),
        JS_NewCFunction(ctx, decal_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, decal_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture_normal"),
        JS_NewCFunction(ctx, decal_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, decal_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture_orm"),
        JS_NewCFunction(ctx, decal_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, decal_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture_emission"),
        JS_NewCFunction(ctx, decal_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, decal_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "emission_energy"),
        JS_NewCFunction(ctx, decal_class_get_emission_energy, "get_emission_energy", 0),
        JS_NewCFunction(ctx, decal_class_set_emission_energy, "set_emission_energy", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "modulate"),
        JS_NewCFunction(ctx, decal_class_get_modulate, "get_modulate", 0),
        JS_NewCFunction(ctx, decal_class_set_modulate, "set_modulate", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "albedo_mix"),
        JS_NewCFunction(ctx, decal_class_get_albedo_mix, "get_albedo_mix", 0),
        JS_NewCFunction(ctx, decal_class_set_albedo_mix, "set_albedo_mix", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "normal_fade"),
        JS_NewCFunction(ctx, decal_class_get_normal_fade, "get_normal_fade", 0),
        JS_NewCFunction(ctx, decal_class_set_normal_fade, "set_normal_fade", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "upper_fade"),
        JS_NewCFunction(ctx, decal_class_get_upper_fade, "get_upper_fade", 0),
        JS_NewCFunction(ctx, decal_class_set_upper_fade, "set_upper_fade", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "lower_fade"),
        JS_NewCFunction(ctx, decal_class_get_lower_fade, "get_lower_fade", 0),
        JS_NewCFunction(ctx, decal_class_set_lower_fade, "set_lower_fade", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "distance_fade_enabled"),
        JS_NewCFunction(ctx, decal_class_is_distance_fade_enabled, "is_distance_fade_enabled", 0),
        JS_NewCFunction(ctx, decal_class_set_enable_distance_fade, "set_enable_distance_fade", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "distance_fade_begin"),
        JS_NewCFunction(ctx, decal_class_get_distance_fade_begin, "get_distance_fade_begin", 0),
        JS_NewCFunction(ctx, decal_class_set_distance_fade_begin, "set_distance_fade_begin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "distance_fade_length"),
        JS_NewCFunction(ctx, decal_class_get_distance_fade_length, "get_distance_fade_length", 0),
        JS_NewCFunction(ctx, decal_class_set_distance_fade_length, "set_distance_fade_length", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "cull_mask"),
        JS_NewCFunction(ctx, decal_class_get_cull_mask, "get_cull_mask", 0),
        JS_NewCFunction(ctx, decal_class_set_cull_mask, "set_cull_mask", 1),
        JS_PROP_GETSET
    );
	
}

static void define_decal_enum(JSContext *ctx, JSValue proto) {
	JSValue DecalTexture_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, DecalTexture_obj, "TEXTURE_ALBEDO", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, DecalTexture_obj, "TEXTURE_NORMAL", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, DecalTexture_obj, "TEXTURE_ORM", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, DecalTexture_obj, "TEXTURE_EMISSION", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, DecalTexture_obj, "TEXTURE_MAX", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "DecalTexture", DecalTexture_obj);
}

static int js_decal_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Decal"] = Decal::__class_id;
	class_id_list.insert(Decal::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Decal::__class_id, &decal_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Decal::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Decal::__class_id, proto);

	define_decal_property(ctx, proto);
	define_decal_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, decal_class_proto_funcs, _countof(decal_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, decal_class_constructor, "Decal", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "Decal", ctor);
	constructors[Decal::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_decal_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/visual_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_decal_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Decal");
	return m;
}

JSModuleDef *js_init_decal_module(JSContext *ctx) {
	return _js_init_decal_module(ctx, "@godot/classes/decal");
}

void register_decal() {
	Decal::__init_js_class_id();
	js_init_decal_module(ctx);
}