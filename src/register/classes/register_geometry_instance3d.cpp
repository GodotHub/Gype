
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void geometry_instance3d_class_finalizer(JSRuntime *rt, JSValue val) {
	GeometryInstance3D *geometry_instance3d = static_cast<GeometryInstance3D *>(JS_GetOpaque(val, GeometryInstance3D::__class_id));
	if (geometry_instance3d)
		GeometryInstance3D::free(nullptr, geometry_instance3d);
}

static JSClassDef geometry_instance3d_class_def = {
	"GeometryInstance3D",
	.finalizer = geometry_instance3d_class_finalizer
};

static JSValue geometry_instance3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GeometryInstance3D *geometry_instance3d_class;
	JSValue obj = JS_NewObjectClass(ctx, GeometryInstance3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	geometry_instance3d_class = memnew(GeometryInstance3D);
	if (!geometry_instance3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, geometry_instance3d_class);
	return obj;
}
static JSValue geometry_instance3d_class_set_material_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_material_override, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_material_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_material_override, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_material_overlay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_material_overlay, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_material_overlay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_material_overlay, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_cast_shadows_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_cast_shadows_setting, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_cast_shadows_setting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_cast_shadows_setting, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_lod_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_lod_bias, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_lod_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_lod_bias, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_transparency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_transparency, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_transparency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_transparency, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_visibility_range_end_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_visibility_range_end_margin, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_visibility_range_end_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_visibility_range_end_margin, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_visibility_range_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_visibility_range_end, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_visibility_range_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_visibility_range_end, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_visibility_range_begin_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_visibility_range_begin_margin, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_visibility_range_begin_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_visibility_range_begin_margin, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_visibility_range_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_visibility_range_begin, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_visibility_range_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_visibility_range_begin, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_visibility_range_fade_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_visibility_range_fade_mode, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_visibility_range_fade_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_visibility_range_fade_mode, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_instance_shader_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_instance_shader_parameter, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_instance_shader_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_instance_shader_parameter, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_extra_cull_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_extra_cull_margin, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_extra_cull_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_extra_cull_margin, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_lightmap_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_lightmap_scale, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_lightmap_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_lightmap_scale, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_gi_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_gi_mode, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_gi_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_gi_mode, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_ignore_occlusion_culling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_ignore_occlusion_culling, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_is_ignoring_occlusion_culling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GeometryInstance3D::is_ignoring_occlusion_culling, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue geometry_instance3d_class_set_custom_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GeometryInstance3D::set_custom_aabb, GeometryInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue geometry_instance3d_class_get_custom_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GeometryInstance3D::get_custom_aabb, GeometryInstance3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry geometry_instance3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_material_override", 1, &geometry_instance3d_class_set_material_override),
	JS_CFUNC_DEF("get_material_override", 0, &geometry_instance3d_class_get_material_override),
	JS_CFUNC_DEF("set_material_overlay", 1, &geometry_instance3d_class_set_material_overlay),
	JS_CFUNC_DEF("get_material_overlay", 0, &geometry_instance3d_class_get_material_overlay),
	JS_CFUNC_DEF("set_cast_shadows_setting", 1, &geometry_instance3d_class_set_cast_shadows_setting),
	JS_CFUNC_DEF("get_cast_shadows_setting", 0, &geometry_instance3d_class_get_cast_shadows_setting),
	JS_CFUNC_DEF("set_lod_bias", 1, &geometry_instance3d_class_set_lod_bias),
	JS_CFUNC_DEF("get_lod_bias", 0, &geometry_instance3d_class_get_lod_bias),
	JS_CFUNC_DEF("set_transparency", 1, &geometry_instance3d_class_set_transparency),
	JS_CFUNC_DEF("get_transparency", 0, &geometry_instance3d_class_get_transparency),
	JS_CFUNC_DEF("set_visibility_range_end_margin", 1, &geometry_instance3d_class_set_visibility_range_end_margin),
	JS_CFUNC_DEF("get_visibility_range_end_margin", 0, &geometry_instance3d_class_get_visibility_range_end_margin),
	JS_CFUNC_DEF("set_visibility_range_end", 1, &geometry_instance3d_class_set_visibility_range_end),
	JS_CFUNC_DEF("get_visibility_range_end", 0, &geometry_instance3d_class_get_visibility_range_end),
	JS_CFUNC_DEF("set_visibility_range_begin_margin", 1, &geometry_instance3d_class_set_visibility_range_begin_margin),
	JS_CFUNC_DEF("get_visibility_range_begin_margin", 0, &geometry_instance3d_class_get_visibility_range_begin_margin),
	JS_CFUNC_DEF("set_visibility_range_begin", 1, &geometry_instance3d_class_set_visibility_range_begin),
	JS_CFUNC_DEF("get_visibility_range_begin", 0, &geometry_instance3d_class_get_visibility_range_begin),
	JS_CFUNC_DEF("set_visibility_range_fade_mode", 1, &geometry_instance3d_class_set_visibility_range_fade_mode),
	JS_CFUNC_DEF("get_visibility_range_fade_mode", 0, &geometry_instance3d_class_get_visibility_range_fade_mode),
	JS_CFUNC_DEF("set_instance_shader_parameter", 2, &geometry_instance3d_class_set_instance_shader_parameter),
	JS_CFUNC_DEF("get_instance_shader_parameter", 1, &geometry_instance3d_class_get_instance_shader_parameter),
	JS_CFUNC_DEF("set_extra_cull_margin", 1, &geometry_instance3d_class_set_extra_cull_margin),
	JS_CFUNC_DEF("get_extra_cull_margin", 0, &geometry_instance3d_class_get_extra_cull_margin),
	JS_CFUNC_DEF("set_lightmap_scale", 1, &geometry_instance3d_class_set_lightmap_scale),
	JS_CFUNC_DEF("get_lightmap_scale", 0, &geometry_instance3d_class_get_lightmap_scale),
	JS_CFUNC_DEF("set_gi_mode", 1, &geometry_instance3d_class_set_gi_mode),
	JS_CFUNC_DEF("get_gi_mode", 0, &geometry_instance3d_class_get_gi_mode),
	JS_CFUNC_DEF("set_ignore_occlusion_culling", 1, &geometry_instance3d_class_set_ignore_occlusion_culling),
	JS_CFUNC_DEF("is_ignoring_occlusion_culling", 0, &geometry_instance3d_class_is_ignoring_occlusion_culling),
	JS_CFUNC_DEF("set_custom_aabb", 1, &geometry_instance3d_class_set_custom_aabb),
	JS_CFUNC_DEF("get_custom_aabb", 0, &geometry_instance3d_class_get_custom_aabb),
};

static int js_geometry_instance3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GeometryInstance3D::__class_id);
	classes["GeometryInstance3D"] = GeometryInstance3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GeometryInstance3D::__class_id, &geometry_instance3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GeometryInstance3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, geometry_instance3d_class_proto_funcs, _countof(geometry_instance3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, geometry_instance3d_class_constructor, "GeometryInstance3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GeometryInstance3D", ctor);

	return 0;
}

JSModuleDef *_js_init_geometry_instance3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_geometry_instance3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GeometryInstance3D");
	return m;
}

JSModuleDef *js_init_geometry_instance3d_module(JSContext *ctx) {
	return _js_init_geometry_instance3d_module(ctx, "godot/classes/geometry_instance3d");
}

void register_geometry_instance3d() {
	js_init_geometry_instance3d_module(ctx);
}