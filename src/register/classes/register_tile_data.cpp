
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/classes/occluder_polygon2d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void tile_data_class_finalizer(JSRuntime *rt, JSValue val) {
	TileData *tile_data = static_cast<TileData *>(JS_GetOpaque(val, TileData::__class_id));
	if (tile_data)
		TileData::free(nullptr, tile_data);
}

static JSClassDef tile_data_class_def = {
	"TileData",
	.finalizer = tile_data_class_finalizer
};

static JSValue tile_data_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TileData *tile_data_class;
	JSValue obj = JS_NewObjectClass(ctx, TileData::__class_id);
	if (JS_IsException(obj))
		return obj;
	tile_data_class = memnew(TileData);
	if (!tile_data_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tile_data_class);
	return obj;
}
static JSValue tile_data_class_set_flip_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_flip_h, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_flip_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_flip_h, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_flip_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_flip_v, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_flip_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_flip_v, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_transpose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_transpose, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_transpose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_transpose, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_material, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_material, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_texture_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_texture_origin, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_texture_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_texture_origin, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_modulate, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_modulate, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_z_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_z_index, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_z_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_z_index, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_y_sort_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_y_sort_origin, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_y_sort_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_y_sort_origin, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_occluder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_occluder, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_occluder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_occluder, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_constant_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_constant_linear_velocity, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_constant_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_constant_linear_velocity, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_constant_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_constant_angular_velocity, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_constant_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_constant_angular_velocity, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_collision_polygons_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_collision_polygons_count, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_collision_polygons_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_collision_polygons_count, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_add_collision_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::add_collision_polygon, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_remove_collision_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::remove_collision_polygon, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_set_collision_polygon_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_collision_polygon_points, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_collision_polygon_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_collision_polygon_points, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_collision_polygon_one_way(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_collision_polygon_one_way, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_is_collision_polygon_one_way(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::is_collision_polygon_one_way, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_collision_polygon_one_way_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_collision_polygon_one_way_margin, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_collision_polygon_one_way_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_collision_polygon_one_way_margin, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_terrain_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_terrain_set, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_terrain_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_terrain_set, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_terrain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_terrain, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_terrain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_terrain, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_terrain_peering_bit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_terrain_peering_bit, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_terrain_peering_bit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_terrain_peering_bit, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_is_valid_terrain_peering_bit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::is_valid_terrain_peering_bit, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_navigation_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_navigation_polygon, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_navigation_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_navigation_polygon, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_probability(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_probability, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_probability(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_probability, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_custom_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_custom_data, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_custom_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_custom_data, TileData::__class_id, ctx, this_val, argv);
};
static JSValue tile_data_class_set_custom_data_by_layer_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileData::set_custom_data_by_layer_id, TileData::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_data_class_get_custom_data_by_layer_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileData::get_custom_data_by_layer_id, TileData::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry tile_data_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_flip_h", 1, &tile_data_class_set_flip_h),
	JS_CFUNC_DEF("get_flip_h", 0, &tile_data_class_get_flip_h),
	JS_CFUNC_DEF("set_flip_v", 1, &tile_data_class_set_flip_v),
	JS_CFUNC_DEF("get_flip_v", 0, &tile_data_class_get_flip_v),
	JS_CFUNC_DEF("set_transpose", 1, &tile_data_class_set_transpose),
	JS_CFUNC_DEF("get_transpose", 0, &tile_data_class_get_transpose),
	JS_CFUNC_DEF("set_material", 1, &tile_data_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &tile_data_class_get_material),
	JS_CFUNC_DEF("set_texture_origin", 1, &tile_data_class_set_texture_origin),
	JS_CFUNC_DEF("get_texture_origin", 0, &tile_data_class_get_texture_origin),
	JS_CFUNC_DEF("set_modulate", 1, &tile_data_class_set_modulate),
	JS_CFUNC_DEF("get_modulate", 0, &tile_data_class_get_modulate),
	JS_CFUNC_DEF("set_z_index", 1, &tile_data_class_set_z_index),
	JS_CFUNC_DEF("get_z_index", 0, &tile_data_class_get_z_index),
	JS_CFUNC_DEF("set_y_sort_origin", 1, &tile_data_class_set_y_sort_origin),
	JS_CFUNC_DEF("get_y_sort_origin", 0, &tile_data_class_get_y_sort_origin),
	JS_CFUNC_DEF("set_occluder", 2, &tile_data_class_set_occluder),
	JS_CFUNC_DEF("get_occluder", 4, &tile_data_class_get_occluder),
	JS_CFUNC_DEF("set_constant_linear_velocity", 2, &tile_data_class_set_constant_linear_velocity),
	JS_CFUNC_DEF("get_constant_linear_velocity", 1, &tile_data_class_get_constant_linear_velocity),
	JS_CFUNC_DEF("set_constant_angular_velocity", 2, &tile_data_class_set_constant_angular_velocity),
	JS_CFUNC_DEF("get_constant_angular_velocity", 1, &tile_data_class_get_constant_angular_velocity),
	JS_CFUNC_DEF("set_collision_polygons_count", 2, &tile_data_class_set_collision_polygons_count),
	JS_CFUNC_DEF("get_collision_polygons_count", 1, &tile_data_class_get_collision_polygons_count),
	JS_CFUNC_DEF("add_collision_polygon", 1, &tile_data_class_add_collision_polygon),
	JS_CFUNC_DEF("remove_collision_polygon", 2, &tile_data_class_remove_collision_polygon),
	JS_CFUNC_DEF("set_collision_polygon_points", 3, &tile_data_class_set_collision_polygon_points),
	JS_CFUNC_DEF("get_collision_polygon_points", 2, &tile_data_class_get_collision_polygon_points),
	JS_CFUNC_DEF("set_collision_polygon_one_way", 3, &tile_data_class_set_collision_polygon_one_way),
	JS_CFUNC_DEF("is_collision_polygon_one_way", 2, &tile_data_class_is_collision_polygon_one_way),
	JS_CFUNC_DEF("set_collision_polygon_one_way_margin", 3, &tile_data_class_set_collision_polygon_one_way_margin),
	JS_CFUNC_DEF("get_collision_polygon_one_way_margin", 2, &tile_data_class_get_collision_polygon_one_way_margin),
	JS_CFUNC_DEF("set_terrain_set", 1, &tile_data_class_set_terrain_set),
	JS_CFUNC_DEF("get_terrain_set", 0, &tile_data_class_get_terrain_set),
	JS_CFUNC_DEF("set_terrain", 1, &tile_data_class_set_terrain),
	JS_CFUNC_DEF("get_terrain", 0, &tile_data_class_get_terrain),
	JS_CFUNC_DEF("set_terrain_peering_bit", 2, &tile_data_class_set_terrain_peering_bit),
	JS_CFUNC_DEF("get_terrain_peering_bit", 1, &tile_data_class_get_terrain_peering_bit),
	JS_CFUNC_DEF("is_valid_terrain_peering_bit", 1, &tile_data_class_is_valid_terrain_peering_bit),
	JS_CFUNC_DEF("set_navigation_polygon", 2, &tile_data_class_set_navigation_polygon),
	JS_CFUNC_DEF("get_navigation_polygon", 4, &tile_data_class_get_navigation_polygon),
	JS_CFUNC_DEF("set_probability", 1, &tile_data_class_set_probability),
	JS_CFUNC_DEF("get_probability", 0, &tile_data_class_get_probability),
	JS_CFUNC_DEF("set_custom_data", 2, &tile_data_class_set_custom_data),
	JS_CFUNC_DEF("get_custom_data", 1, &tile_data_class_get_custom_data),
	JS_CFUNC_DEF("set_custom_data_by_layer_id", 2, &tile_data_class_set_custom_data_by_layer_id),
	JS_CFUNC_DEF("get_custom_data_by_layer_id", 1, &tile_data_class_get_custom_data_by_layer_id),
};

static int js_tile_data_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TileData::__class_id);
	classes["TileData"] = TileData::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TileData::__class_id, &tile_data_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TileData::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, tile_data_class_proto_funcs, _countof(tile_data_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, tile_data_class_constructor, "TileData", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TileData", ctor);

	return 0;
}

JSModuleDef *_js_init_tile_data_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tile_data_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TileData");
	return m;
}

JSModuleDef *js_init_tile_data_module(JSContext *ctx) {
	return _js_init_tile_data_module(ctx, "godot/classes/tile_data");
}

void register_tile_data() {
	js_init_tile_data_module(ctx);
}