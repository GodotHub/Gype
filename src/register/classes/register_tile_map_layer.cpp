
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/classes/tile_map_layer.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tile_map_layer_class_finalizer(JSRuntime *rt, JSValue val) {
	TileMapLayer *tile_map_layer = static_cast<TileMapLayer *>(JS_GetOpaque(val, TileMapLayer::__class_id));
	if (tile_map_layer)
		TileMapLayer::free(nullptr, tile_map_layer);
}

static JSClassDef tile_map_layer_class_def = {
	"TileMapLayer",
	.finalizer = tile_map_layer_class_finalizer
};

static JSValue tile_map_layer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TileMapLayer *tile_map_layer_class;
	JSValue obj = JS_NewObjectClass(ctx, TileMapLayer::__class_id);
	if (JS_IsException(obj))
		return obj;
	tile_map_layer_class = memnew(TileMapLayer);
	if (!tile_map_layer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tile_map_layer_class);
	return obj;
}
static JSValue tile_map_layer_class_set_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_cell, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_erase_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::erase_cell, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_fix_invalid_tiles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::fix_invalid_tiles, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::clear, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_get_cell_source_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_cell_source_id, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_get_cell_atlas_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_cell_atlas_coords, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_get_cell_alternative_tile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_cell_alternative_tile, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_get_cell_tile_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_cell_tile_data, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_get_used_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_used_cells, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_get_used_cells_by_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_used_cells_by_id, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_get_used_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_used_rect, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_get_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileMapLayer::get_pattern, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_pattern, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_set_cells_terrain_connect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_cells_terrain_connect, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_set_cells_terrain_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_cells_terrain_path, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_has_body_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::has_body_rid, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_get_coords_for_body_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_coords_for_body_rid, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_update_internals(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::update_internals, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_notify_runtime_tile_data_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::notify_runtime_tile_data_update, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_map_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileMapLayer::map_pattern, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_get_surrounding_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileMapLayer::get_surrounding_cells, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_get_neighbor_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_neighbor_cell, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_map_to_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::map_to_local, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_local_to_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::local_to_map, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_tile_map_data_from_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_tile_map_data_from_array, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_get_tile_map_data_as_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_tile_map_data_as_array, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_enabled, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::is_enabled, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_tile_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_tile_set, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_get_tile_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_tile_set, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_y_sort_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_y_sort_origin, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_get_y_sort_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_y_sort_origin, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_x_draw_order_reversed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_x_draw_order_reversed, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_is_x_draw_order_reversed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::is_x_draw_order_reversed, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_rendering_quadrant_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_rendering_quadrant_size, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_get_rendering_quadrant_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_rendering_quadrant_size, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_collision_enabled, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_is_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::is_collision_enabled, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_use_kinematic_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_use_kinematic_bodies, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_is_using_kinematic_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::is_using_kinematic_bodies, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_collision_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_collision_visibility_mode, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_get_collision_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_collision_visibility_mode, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_navigation_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_navigation_enabled, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_is_navigation_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::is_navigation_enabled, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_navigation_map, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_navigation_map, TileMapLayer::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_layer_class_set_navigation_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileMapLayer::set_navigation_visibility_mode, TileMapLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_layer_class_get_navigation_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapLayer::get_navigation_visibility_mode, TileMapLayer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry tile_map_layer_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_cell", 4, &tile_map_layer_class_set_cell),
	JS_CFUNC_DEF("erase_cell", 1, &tile_map_layer_class_erase_cell),
	JS_CFUNC_DEF("fix_invalid_tiles", 0, &tile_map_layer_class_fix_invalid_tiles),
	JS_CFUNC_DEF("clear", 0, &tile_map_layer_class_clear),
	JS_CFUNC_DEF("get_cell_source_id", 1, &tile_map_layer_class_get_cell_source_id),
	JS_CFUNC_DEF("get_cell_atlas_coords", 1, &tile_map_layer_class_get_cell_atlas_coords),
	JS_CFUNC_DEF("get_cell_alternative_tile", 1, &tile_map_layer_class_get_cell_alternative_tile),
	JS_CFUNC_DEF("get_cell_tile_data", 1, &tile_map_layer_class_get_cell_tile_data),
	JS_CFUNC_DEF("get_used_cells", 0, &tile_map_layer_class_get_used_cells),
	JS_CFUNC_DEF("get_used_cells_by_id", 3, &tile_map_layer_class_get_used_cells_by_id),
	JS_CFUNC_DEF("get_used_rect", 0, &tile_map_layer_class_get_used_rect),
	JS_CFUNC_DEF("get_pattern", 1, &tile_map_layer_class_get_pattern),
	JS_CFUNC_DEF("set_pattern", 2, &tile_map_layer_class_set_pattern),
	JS_CFUNC_DEF("set_cells_terrain_connect", 4, &tile_map_layer_class_set_cells_terrain_connect),
	JS_CFUNC_DEF("set_cells_terrain_path", 4, &tile_map_layer_class_set_cells_terrain_path),
	JS_CFUNC_DEF("has_body_rid", 1, &tile_map_layer_class_has_body_rid),
	JS_CFUNC_DEF("get_coords_for_body_rid", 1, &tile_map_layer_class_get_coords_for_body_rid),
	JS_CFUNC_DEF("update_internals", 0, &tile_map_layer_class_update_internals),
	JS_CFUNC_DEF("notify_runtime_tile_data_update", 0, &tile_map_layer_class_notify_runtime_tile_data_update),
	JS_CFUNC_DEF("map_pattern", 3, &tile_map_layer_class_map_pattern),
	JS_CFUNC_DEF("get_surrounding_cells", 1, &tile_map_layer_class_get_surrounding_cells),
	JS_CFUNC_DEF("get_neighbor_cell", 2, &tile_map_layer_class_get_neighbor_cell),
	JS_CFUNC_DEF("map_to_local", 1, &tile_map_layer_class_map_to_local),
	JS_CFUNC_DEF("local_to_map", 1, &tile_map_layer_class_local_to_map),
	JS_CFUNC_DEF("set_tile_map_data_from_array", 1, &tile_map_layer_class_set_tile_map_data_from_array),
	JS_CFUNC_DEF("get_tile_map_data_as_array", 0, &tile_map_layer_class_get_tile_map_data_as_array),
	JS_CFUNC_DEF("set_enabled", 1, &tile_map_layer_class_set_enabled),
	JS_CFUNC_DEF("is_enabled", 0, &tile_map_layer_class_is_enabled),
	JS_CFUNC_DEF("set_tile_set", 1, &tile_map_layer_class_set_tile_set),
	JS_CFUNC_DEF("get_tile_set", 0, &tile_map_layer_class_get_tile_set),
	JS_CFUNC_DEF("set_y_sort_origin", 1, &tile_map_layer_class_set_y_sort_origin),
	JS_CFUNC_DEF("get_y_sort_origin", 0, &tile_map_layer_class_get_y_sort_origin),
	JS_CFUNC_DEF("set_x_draw_order_reversed", 1, &tile_map_layer_class_set_x_draw_order_reversed),
	JS_CFUNC_DEF("is_x_draw_order_reversed", 0, &tile_map_layer_class_is_x_draw_order_reversed),
	JS_CFUNC_DEF("set_rendering_quadrant_size", 1, &tile_map_layer_class_set_rendering_quadrant_size),
	JS_CFUNC_DEF("get_rendering_quadrant_size", 0, &tile_map_layer_class_get_rendering_quadrant_size),
	JS_CFUNC_DEF("set_collision_enabled", 1, &tile_map_layer_class_set_collision_enabled),
	JS_CFUNC_DEF("is_collision_enabled", 0, &tile_map_layer_class_is_collision_enabled),
	JS_CFUNC_DEF("set_use_kinematic_bodies", 1, &tile_map_layer_class_set_use_kinematic_bodies),
	JS_CFUNC_DEF("is_using_kinematic_bodies", 0, &tile_map_layer_class_is_using_kinematic_bodies),
	JS_CFUNC_DEF("set_collision_visibility_mode", 1, &tile_map_layer_class_set_collision_visibility_mode),
	JS_CFUNC_DEF("get_collision_visibility_mode", 0, &tile_map_layer_class_get_collision_visibility_mode),
	JS_CFUNC_DEF("set_navigation_enabled", 1, &tile_map_layer_class_set_navigation_enabled),
	JS_CFUNC_DEF("is_navigation_enabled", 0, &tile_map_layer_class_is_navigation_enabled),
	JS_CFUNC_DEF("set_navigation_map", 1, &tile_map_layer_class_set_navigation_map),
	JS_CFUNC_DEF("get_navigation_map", 0, &tile_map_layer_class_get_navigation_map),
	JS_CFUNC_DEF("set_navigation_visibility_mode", 1, &tile_map_layer_class_set_navigation_visibility_mode),
	JS_CFUNC_DEF("get_navigation_visibility_mode", 0, &tile_map_layer_class_get_navigation_visibility_mode),
};

static int js_tile_map_layer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TileMapLayer::__class_id);
	classes["TileMapLayer"] = TileMapLayer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TileMapLayer::__class_id, &tile_map_layer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TileMapLayer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, tile_map_layer_class_proto_funcs, _countof(tile_map_layer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, tile_map_layer_class_constructor, "TileMapLayer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TileMapLayer", ctor);

	return 0;
}

JSModuleDef *_js_init_tile_map_layer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tile_map_layer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TileMapLayer");
	return m;
}

JSModuleDef *js_init_tile_map_layer_module(JSContext *ctx) {
	return _js_init_tile_map_layer_module(ctx, "godot/classes/tile_map_layer");
}

void register_tile_map_layer() {
	js_init_tile_map_layer_module(ctx);
}