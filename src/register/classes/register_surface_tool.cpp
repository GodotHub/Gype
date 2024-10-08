
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/surface_tool.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void surface_tool_class_finalizer(JSRuntime *rt, JSValue val) {
	SurfaceTool *surface_tool = static_cast<SurfaceTool *>(JS_GetOpaque(val, SurfaceTool::__class_id));
	if (surface_tool)
		SurfaceTool::free(nullptr, surface_tool);
}

static JSClassDef surface_tool_class_def = {
	"SurfaceTool",
	.finalizer = surface_tool_class_finalizer
};

static JSValue surface_tool_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SurfaceTool *surface_tool_class;
	JSValue obj = JS_NewObjectClass(ctx, SurfaceTool::__class_id);
	if (JS_IsException(obj))
		return obj;
	surface_tool_class = memnew(SurfaceTool);
	if (!surface_tool_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, surface_tool_class);
	return obj;
}
static JSValue surface_tool_class_set_skin_weight_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::set_skin_weight_count, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_get_skin_weight_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SurfaceTool::get_skin_weight_count, SurfaceTool::__class_id, ctx, this_val, argv);
};
static JSValue surface_tool_class_set_custom_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::set_custom_format, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_get_custom_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SurfaceTool::get_custom_format, SurfaceTool::__class_id, ctx, this_val, argv);
};
static JSValue surface_tool_class_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::begin, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_add_vertex(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::add_vertex, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::set_color, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_set_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::set_normal, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_set_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::set_tangent, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_set_uv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::set_uv, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_set_uv2(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::set_uv2, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_set_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::set_bones, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_set_weights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::set_weights, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_set_custom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::set_custom, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_set_smooth_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::set_smooth_group, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_add_triangle_fan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::add_triangle_fan, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_add_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::add_index, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::index, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_deindex(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::deindex, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_generate_normals(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::generate_normals, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_generate_tangents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::generate_tangents, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_optimize_indices_for_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::optimize_indices_for_cache, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_get_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SurfaceTool::get_aabb, SurfaceTool::__class_id, ctx, this_val, argv);
};
static JSValue surface_tool_class_generate_lod(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SurfaceTool::generate_lod, SurfaceTool::__class_id, ctx, this_val, argv);
};
static JSValue surface_tool_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::set_material, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_get_primitive_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SurfaceTool::get_primitive_type, SurfaceTool::__class_id, ctx, this_val, argv);
};
static JSValue surface_tool_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::clear, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_create_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::create_from, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_create_from_arrays(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::create_from_arrays, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_create_from_blend_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::create_from_blend_shape, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_append_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SurfaceTool::append_from, SurfaceTool::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue surface_tool_class_commit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SurfaceTool::commit, SurfaceTool::__class_id, ctx, this_val, argv);
};
static JSValue surface_tool_class_commit_to_arrays(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SurfaceTool::commit_to_arrays, SurfaceTool::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry surface_tool_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_skin_weight_count", 1, &surface_tool_class_set_skin_weight_count),
	JS_CFUNC_DEF("get_skin_weight_count", 0, &surface_tool_class_get_skin_weight_count),
	JS_CFUNC_DEF("set_custom_format", 2, &surface_tool_class_set_custom_format),
	JS_CFUNC_DEF("get_custom_format", 1, &surface_tool_class_get_custom_format),
	JS_CFUNC_DEF("begin", 1, &surface_tool_class_begin),
	JS_CFUNC_DEF("add_vertex", 1, &surface_tool_class_add_vertex),
	JS_CFUNC_DEF("set_color", 1, &surface_tool_class_set_color),
	JS_CFUNC_DEF("set_normal", 1, &surface_tool_class_set_normal),
	JS_CFUNC_DEF("set_tangent", 1, &surface_tool_class_set_tangent),
	JS_CFUNC_DEF("set_uv", 1, &surface_tool_class_set_uv),
	JS_CFUNC_DEF("set_uv2", 1, &surface_tool_class_set_uv2),
	JS_CFUNC_DEF("set_bones", 1, &surface_tool_class_set_bones),
	JS_CFUNC_DEF("set_weights", 1, &surface_tool_class_set_weights),
	JS_CFUNC_DEF("set_custom", 2, &surface_tool_class_set_custom),
	JS_CFUNC_DEF("set_smooth_group", 1, &surface_tool_class_set_smooth_group),
	JS_CFUNC_DEF("add_triangle_fan", 6, &surface_tool_class_add_triangle_fan),
	JS_CFUNC_DEF("add_index", 1, &surface_tool_class_add_index),
	JS_CFUNC_DEF("index", 0, &surface_tool_class_index),
	JS_CFUNC_DEF("deindex", 0, &surface_tool_class_deindex),
	JS_CFUNC_DEF("generate_normals", 1, &surface_tool_class_generate_normals),
	JS_CFUNC_DEF("generate_tangents", 0, &surface_tool_class_generate_tangents),
	JS_CFUNC_DEF("optimize_indices_for_cache", 0, &surface_tool_class_optimize_indices_for_cache),
	JS_CFUNC_DEF("get_aabb", 0, &surface_tool_class_get_aabb),
	JS_CFUNC_DEF("generate_lod", 2, &surface_tool_class_generate_lod),
	JS_CFUNC_DEF("set_material", 1, &surface_tool_class_set_material),
	JS_CFUNC_DEF("get_primitive_type", 0, &surface_tool_class_get_primitive_type),
	JS_CFUNC_DEF("clear", 0, &surface_tool_class_clear),
	JS_CFUNC_DEF("create_from", 2, &surface_tool_class_create_from),
	JS_CFUNC_DEF("create_from_arrays", 2, &surface_tool_class_create_from_arrays),
	JS_CFUNC_DEF("create_from_blend_shape", 3, &surface_tool_class_create_from_blend_shape),
	JS_CFUNC_DEF("append_from", 3, &surface_tool_class_append_from),
	JS_CFUNC_DEF("commit", 2, &surface_tool_class_commit),
	JS_CFUNC_DEF("commit_to_arrays", 0, &surface_tool_class_commit_to_arrays),
};

static int js_surface_tool_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SurfaceTool::__class_id);
	classes["SurfaceTool"] = SurfaceTool::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SurfaceTool::__class_id, &surface_tool_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SurfaceTool::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, surface_tool_class_proto_funcs, _countof(surface_tool_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, surface_tool_class_constructor, "SurfaceTool", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SurfaceTool", ctor);

	return 0;
}

JSModuleDef *_js_init_surface_tool_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_surface_tool_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SurfaceTool");
	return m;
}

JSModuleDef *js_init_surface_tool_module(JSContext *ctx) {
	return _js_init_surface_tool_module(ctx, "godot/classes/surface_tool");
}

void register_surface_tool() {
	js_init_surface_tool_module(ctx);
}