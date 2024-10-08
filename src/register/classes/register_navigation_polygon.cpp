
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_polygon_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationPolygon *navigation_polygon = static_cast<NavigationPolygon *>(JS_GetOpaque(val, NavigationPolygon::__class_id));
	if (navigation_polygon)
		NavigationPolygon::free(nullptr, navigation_polygon);
}

static JSClassDef navigation_polygon_class_def = {
	"NavigationPolygon",
	.finalizer = navigation_polygon_class_finalizer
};

static JSValue navigation_polygon_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationPolygon *navigation_polygon_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationPolygon::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_polygon_class = memnew(NavigationPolygon);
	if (!navigation_polygon_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_polygon_class);
	return obj;
}
static JSValue navigation_polygon_class_set_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::set_vertices, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_vertices, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_add_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::add_polygon, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_polygon_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_polygon_count, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NavigationPolygon::get_polygon, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_clear_polygons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::clear_polygons, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NavigationPolygon::get_navigation_mesh, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_add_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::add_outline, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_add_outline_at_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::add_outline_at_index, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_outline_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_outline_count, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_set_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::set_outline, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_outline, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_remove_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::remove_outline, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_clear_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::clear_outlines, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_make_polygons_from_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::make_polygons_from_outlines, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_set_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::set_cell_size, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_cell_size, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_set_border_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::set_border_size, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_border_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_border_size, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_set_parsed_geometry_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::set_parsed_geometry_type, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_parsed_geometry_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_parsed_geometry_type, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_set_parsed_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::set_parsed_collision_mask, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_parsed_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_parsed_collision_mask, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_set_parsed_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::set_parsed_collision_mask_value, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_parsed_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_parsed_collision_mask_value, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_set_source_geometry_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::set_source_geometry_mode, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_source_geometry_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_source_geometry_mode, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_set_source_geometry_group_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::set_source_geometry_group_name, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_source_geometry_group_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_source_geometry_group_name, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_set_agent_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::set_agent_radius, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_agent_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_agent_radius, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_set_baking_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::set_baking_rect, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_baking_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_baking_rect, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_set_baking_rect_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::set_baking_rect_offset, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_polygon_class_get_baking_rect_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPolygon::get_baking_rect_offset, NavigationPolygon::__class_id, ctx, this_val, argv);
};
static JSValue navigation_polygon_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPolygon::clear, NavigationPolygon::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry navigation_polygon_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_vertices", 1, &navigation_polygon_class_set_vertices),
	JS_CFUNC_DEF("get_vertices", 0, &navigation_polygon_class_get_vertices),
	JS_CFUNC_DEF("add_polygon", 1, &navigation_polygon_class_add_polygon),
	JS_CFUNC_DEF("get_polygon_count", 0, &navigation_polygon_class_get_polygon_count),
	JS_CFUNC_DEF("get_polygon", 1, &navigation_polygon_class_get_polygon),
	JS_CFUNC_DEF("clear_polygons", 0, &navigation_polygon_class_clear_polygons),
	JS_CFUNC_DEF("get_navigation_mesh", 0, &navigation_polygon_class_get_navigation_mesh),
	JS_CFUNC_DEF("add_outline", 1, &navigation_polygon_class_add_outline),
	JS_CFUNC_DEF("add_outline_at_index", 2, &navigation_polygon_class_add_outline_at_index),
	JS_CFUNC_DEF("get_outline_count", 0, &navigation_polygon_class_get_outline_count),
	JS_CFUNC_DEF("set_outline", 2, &navigation_polygon_class_set_outline),
	JS_CFUNC_DEF("get_outline", 1, &navigation_polygon_class_get_outline),
	JS_CFUNC_DEF("remove_outline", 1, &navigation_polygon_class_remove_outline),
	JS_CFUNC_DEF("clear_outlines", 0, &navigation_polygon_class_clear_outlines),
	JS_CFUNC_DEF("make_polygons_from_outlines", 0, &navigation_polygon_class_make_polygons_from_outlines),
	JS_CFUNC_DEF("set_cell_size", 1, &navigation_polygon_class_set_cell_size),
	JS_CFUNC_DEF("get_cell_size", 0, &navigation_polygon_class_get_cell_size),
	JS_CFUNC_DEF("set_border_size", 1, &navigation_polygon_class_set_border_size),
	JS_CFUNC_DEF("get_border_size", 0, &navigation_polygon_class_get_border_size),
	JS_CFUNC_DEF("set_parsed_geometry_type", 1, &navigation_polygon_class_set_parsed_geometry_type),
	JS_CFUNC_DEF("get_parsed_geometry_type", 0, &navigation_polygon_class_get_parsed_geometry_type),
	JS_CFUNC_DEF("set_parsed_collision_mask", 1, &navigation_polygon_class_set_parsed_collision_mask),
	JS_CFUNC_DEF("get_parsed_collision_mask", 0, &navigation_polygon_class_get_parsed_collision_mask),
	JS_CFUNC_DEF("set_parsed_collision_mask_value", 2, &navigation_polygon_class_set_parsed_collision_mask_value),
	JS_CFUNC_DEF("get_parsed_collision_mask_value", 1, &navigation_polygon_class_get_parsed_collision_mask_value),
	JS_CFUNC_DEF("set_source_geometry_mode", 1, &navigation_polygon_class_set_source_geometry_mode),
	JS_CFUNC_DEF("get_source_geometry_mode", 0, &navigation_polygon_class_get_source_geometry_mode),
	JS_CFUNC_DEF("set_source_geometry_group_name", 1, &navigation_polygon_class_set_source_geometry_group_name),
	JS_CFUNC_DEF("get_source_geometry_group_name", 0, &navigation_polygon_class_get_source_geometry_group_name),
	JS_CFUNC_DEF("set_agent_radius", 1, &navigation_polygon_class_set_agent_radius),
	JS_CFUNC_DEF("get_agent_radius", 0, &navigation_polygon_class_get_agent_radius),
	JS_CFUNC_DEF("set_baking_rect", 1, &navigation_polygon_class_set_baking_rect),
	JS_CFUNC_DEF("get_baking_rect", 0, &navigation_polygon_class_get_baking_rect),
	JS_CFUNC_DEF("set_baking_rect_offset", 1, &navigation_polygon_class_set_baking_rect_offset),
	JS_CFUNC_DEF("get_baking_rect_offset", 0, &navigation_polygon_class_get_baking_rect_offset),
	JS_CFUNC_DEF("clear", 0, &navigation_polygon_class_clear),
};

static int js_navigation_polygon_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationPolygon::__class_id);
	classes["NavigationPolygon"] = NavigationPolygon::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationPolygon::__class_id, &navigation_polygon_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationPolygon::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_polygon_class_proto_funcs, _countof(navigation_polygon_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_polygon_class_constructor, "NavigationPolygon", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationPolygon", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_polygon_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_polygon_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationPolygon");
	return m;
}

JSModuleDef *js_init_navigation_polygon_module(JSContext *ctx) {
	return _js_init_navigation_polygon_module(ctx, "godot/classes/navigation_polygon");
}

void register_navigation_polygon() {
	js_init_navigation_polygon_module(ctx);
}