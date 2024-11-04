
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/reflection_probe.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void reflection_probe_class_finalizer(JSRuntime *rt, JSValue val) {
	ReflectionProbe *reflection_probe = static_cast<ReflectionProbe *>(JS_GetOpaque(val, ReflectionProbe::__class_id));
	if (reflection_probe)
		memdelete(reflection_probe);
}

static JSClassDef reflection_probe_class_def = {
	"ReflectionProbe",
	.finalizer = reflection_probe_class_finalizer
};

static JSValue reflection_probe_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ReflectionProbe::__class_id);
	if (JS_IsException(obj))
		return obj;

	ReflectionProbe *reflection_probe_class;
	if (argc == 1) 
		reflection_probe_class = static_cast<ReflectionProbe *>(Variant(*argv).operator Object *());
	else 
		reflection_probe_class = memnew(ReflectionProbe);
	if (!reflection_probe_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, reflection_probe_class);
	return obj;
}
static JSValue reflection_probe_class_set_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_intensity, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_get_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::get_intensity, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_ambient_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_ambient_mode, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_get_ambient_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::get_ambient_mode, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_ambient_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_ambient_color, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_get_ambient_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::get_ambient_color, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_ambient_color_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_ambient_color_energy, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_get_ambient_color_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::get_ambient_color_energy, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_max_distance, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_get_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::get_max_distance, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_mesh_lod_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_mesh_lod_threshold, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_get_mesh_lod_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::get_mesh_lod_threshold, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_size, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::get_size, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_origin_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_origin_offset, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_get_origin_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::get_origin_offset, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_as_interior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_as_interior, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_is_set_as_interior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::is_set_as_interior, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_enable_box_projection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_enable_box_projection, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_is_box_projection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::is_box_projection_enabled, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_enable_shadows(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_enable_shadows, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_are_shadows_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::are_shadows_enabled, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_cull_mask, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_get_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::get_cull_mask, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_reflection_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_reflection_mask, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_get_reflection_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::get_reflection_mask, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_set_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReflectionProbe::set_update_mode, ctx, this_val, argc, argv);
};
static JSValue reflection_probe_class_get_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReflectionProbe::get_update_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry reflection_probe_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_intensity", 1, &reflection_probe_class_set_intensity),
	JS_CFUNC_DEF("get_intensity", 0, &reflection_probe_class_get_intensity),
	JS_CFUNC_DEF("set_ambient_mode", 1, &reflection_probe_class_set_ambient_mode),
	JS_CFUNC_DEF("get_ambient_mode", 0, &reflection_probe_class_get_ambient_mode),
	JS_CFUNC_DEF("set_ambient_color", 1, &reflection_probe_class_set_ambient_color),
	JS_CFUNC_DEF("get_ambient_color", 0, &reflection_probe_class_get_ambient_color),
	JS_CFUNC_DEF("set_ambient_color_energy", 1, &reflection_probe_class_set_ambient_color_energy),
	JS_CFUNC_DEF("get_ambient_color_energy", 0, &reflection_probe_class_get_ambient_color_energy),
	JS_CFUNC_DEF("set_max_distance", 1, &reflection_probe_class_set_max_distance),
	JS_CFUNC_DEF("get_max_distance", 0, &reflection_probe_class_get_max_distance),
	JS_CFUNC_DEF("set_mesh_lod_threshold", 1, &reflection_probe_class_set_mesh_lod_threshold),
	JS_CFUNC_DEF("get_mesh_lod_threshold", 0, &reflection_probe_class_get_mesh_lod_threshold),
	JS_CFUNC_DEF("set_size", 1, &reflection_probe_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &reflection_probe_class_get_size),
	JS_CFUNC_DEF("set_origin_offset", 1, &reflection_probe_class_set_origin_offset),
	JS_CFUNC_DEF("get_origin_offset", 0, &reflection_probe_class_get_origin_offset),
	JS_CFUNC_DEF("set_as_interior", 1, &reflection_probe_class_set_as_interior),
	JS_CFUNC_DEF("is_set_as_interior", 0, &reflection_probe_class_is_set_as_interior),
	JS_CFUNC_DEF("set_enable_box_projection", 1, &reflection_probe_class_set_enable_box_projection),
	JS_CFUNC_DEF("is_box_projection_enabled", 0, &reflection_probe_class_is_box_projection_enabled),
	JS_CFUNC_DEF("set_enable_shadows", 1, &reflection_probe_class_set_enable_shadows),
	JS_CFUNC_DEF("are_shadows_enabled", 0, &reflection_probe_class_are_shadows_enabled),
	JS_CFUNC_DEF("set_cull_mask", 1, &reflection_probe_class_set_cull_mask),
	JS_CFUNC_DEF("get_cull_mask", 0, &reflection_probe_class_get_cull_mask),
	JS_CFUNC_DEF("set_reflection_mask", 1, &reflection_probe_class_set_reflection_mask),
	JS_CFUNC_DEF("get_reflection_mask", 0, &reflection_probe_class_get_reflection_mask),
	JS_CFUNC_DEF("set_update_mode", 1, &reflection_probe_class_set_update_mode),
	JS_CFUNC_DEF("get_update_mode", 0, &reflection_probe_class_get_update_mode),
};

static void define_reflection_probe_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "update_mode"),
        JS_NewCFunction(ctx, reflection_probe_class_get_update_mode, "get_update_mode", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_update_mode, "set_update_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "intensity"),
        JS_NewCFunction(ctx, reflection_probe_class_get_intensity, "get_intensity", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_intensity, "set_intensity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_distance"),
        JS_NewCFunction(ctx, reflection_probe_class_get_max_distance, "get_max_distance", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_max_distance, "set_max_distance", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, reflection_probe_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "origin_offset"),
        JS_NewCFunction(ctx, reflection_probe_class_get_origin_offset, "get_origin_offset", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_origin_offset, "set_origin_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "box_projection"),
        JS_NewCFunction(ctx, reflection_probe_class_is_box_projection_enabled, "is_box_projection_enabled", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_enable_box_projection, "set_enable_box_projection", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "interior"),
        JS_NewCFunction(ctx, reflection_probe_class_is_set_as_interior, "is_set_as_interior", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_as_interior, "set_as_interior", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enable_shadows"),
        JS_NewCFunction(ctx, reflection_probe_class_are_shadows_enabled, "are_shadows_enabled", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_enable_shadows, "set_enable_shadows", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "cull_mask"),
        JS_NewCFunction(ctx, reflection_probe_class_get_cull_mask, "get_cull_mask", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_cull_mask, "set_cull_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "reflection_mask"),
        JS_NewCFunction(ctx, reflection_probe_class_get_reflection_mask, "get_reflection_mask", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_reflection_mask, "set_reflection_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mesh_lod_threshold"),
        JS_NewCFunction(ctx, reflection_probe_class_get_mesh_lod_threshold, "get_mesh_lod_threshold", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_mesh_lod_threshold, "set_mesh_lod_threshold", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "ambient_mode"),
        JS_NewCFunction(ctx, reflection_probe_class_get_ambient_mode, "get_ambient_mode", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_ambient_mode, "set_ambient_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "ambient_color"),
        JS_NewCFunction(ctx, reflection_probe_class_get_ambient_color, "get_ambient_color", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_ambient_color, "set_ambient_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "ambient_color_energy"),
        JS_NewCFunction(ctx, reflection_probe_class_get_ambient_color_energy, "get_ambient_color_energy", 0),
        JS_NewCFunction(ctx, reflection_probe_class_set_ambient_color_energy, "set_ambient_color_energy", 1),
        JS_PROP_GETSET
    );
	
}

static void define_reflection_probe_enum(JSContext *ctx, JSValue proto) {
	JSValue UpdateMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, UpdateMode_obj, "UPDATE_ONCE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, UpdateMode_obj, "UPDATE_ALWAYS", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "UpdateMode", UpdateMode_obj);
	JSValue AmbientMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, AmbientMode_obj, "AMBIENT_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, AmbientMode_obj, "AMBIENT_ENVIRONMENT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, AmbientMode_obj, "AMBIENT_COLOR", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "AmbientMode", AmbientMode_obj);
}

static int js_reflection_probe_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ReflectionProbe"] = ReflectionProbe::__class_id;
	class_id_list.insert(ReflectionProbe::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ReflectionProbe::__class_id, &reflection_probe_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ReflectionProbe::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ReflectionProbe::__class_id, proto);

	define_reflection_probe_property(ctx, proto);
	define_reflection_probe_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, reflection_probe_class_proto_funcs, _countof(reflection_probe_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, reflection_probe_class_constructor, "ReflectionProbe", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "ReflectionProbe", ctor);
	constructors[ReflectionProbe::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_reflection_probe_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/visual_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_reflection_probe_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ReflectionProbe");
	return m;
}

JSModuleDef *js_init_reflection_probe_module(JSContext *ctx) {
	return _js_init_reflection_probe_module(ctx, "@godot/classes/reflection_probe");
}

void register_reflection_probe() {
	ReflectionProbe::__init_js_class_id();
	js_init_reflection_probe_module(ctx);
}