
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/classes/tile_map.hpp>
#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tile_map_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef tile_map_class_def = {
	"TileMap",
	.finalizer = tile_map_class_finalizer
};

static JSValue tile_map_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TileMap::__class_id);
	if (JS_IsException(obj))
		return obj;
	TileMap *tile_map_class = memnew(TileMap);
	if (!tile_map_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, tile_map_class);	
	return obj;
}
static JSValue tile_map_class_set_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_navigation_map, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_navigation_map, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_force_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::force_update, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_set_tileset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_tileset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_get_tileset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_tileset, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_rendering_quadrant_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_rendering_quadrant_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_get_rendering_quadrant_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_rendering_quadrant_size, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_get_layers_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_layers_count, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_add_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::add_layer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_move_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::move_layer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_remove_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::remove_layer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_set_layer_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_layer_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_get_layer_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_layer_name, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_layer_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_layer_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_is_layer_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::is_layer_enabled, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_layer_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_layer_modulate, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_get_layer_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_layer_modulate, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_layer_y_sort_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_layer_y_sort_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_is_layer_y_sort_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::is_layer_y_sort_enabled, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_layer_y_sort_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_layer_y_sort_origin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_get_layer_y_sort_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_layer_y_sort_origin, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_layer_z_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_layer_z_index, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_get_layer_z_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_layer_z_index, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_layer_navigation_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_layer_navigation_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_is_layer_navigation_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::is_layer_navigation_enabled, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_layer_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_layer_navigation_map, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_get_layer_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_layer_navigation_map, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_collision_animatable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_collision_animatable, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_is_collision_animatable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::is_collision_animatable, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_collision_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_collision_visibility_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_get_collision_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_collision_visibility_mode, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_navigation_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_navigation_visibility_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_get_navigation_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_navigation_visibility_mode, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_cell, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_erase_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::erase_cell, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_get_cell_source_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_cell_source_id, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_get_cell_atlas_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_cell_atlas_coords, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_get_cell_alternative_tile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_cell_alternative_tile, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_get_cell_tile_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_cell_tile_data, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_get_coords_for_body_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TileMap::get_coords_for_body_rid, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_get_layer_for_body_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TileMap::get_layer_for_body_rid, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_get_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TileMap::get_pattern, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_map_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TileMap::map_pattern, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_set_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_pattern, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_set_cells_terrain_connect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_cells_terrain_connect, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_set_cells_terrain_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::set_cells_terrain_path, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_fix_invalid_tiles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::fix_invalid_tiles, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_clear_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::clear_layer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_update_internals(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::update_internals, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_notify_runtime_tile_data_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TileMap::notify_runtime_tile_data_update, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_class_get_surrounding_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TileMap::get_surrounding_cells, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_get_used_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_used_cells, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_get_used_cells_by_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_used_cells_by_id, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_get_used_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_used_rect, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_map_to_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::map_to_local, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_local_to_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::local_to_map, ctx, this_val, argc, argv);
};
static JSValue tile_map_class_get_neighbor_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMap::get_neighbor_cell, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry tile_map_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_navigation_map", 2, &tile_map_class_set_navigation_map),
	JS_CFUNC_DEF("get_navigation_map", 1, &tile_map_class_get_navigation_map),
	JS_CFUNC_DEF("force_update", 1, &tile_map_class_force_update),
	JS_CFUNC_DEF("set_tileset", 1, &tile_map_class_set_tileset),
	JS_CFUNC_DEF("get_tileset", 0, &tile_map_class_get_tileset),
	JS_CFUNC_DEF("set_rendering_quadrant_size", 1, &tile_map_class_set_rendering_quadrant_size),
	JS_CFUNC_DEF("get_rendering_quadrant_size", 0, &tile_map_class_get_rendering_quadrant_size),
	JS_CFUNC_DEF("get_layers_count", 0, &tile_map_class_get_layers_count),
	JS_CFUNC_DEF("add_layer", 1, &tile_map_class_add_layer),
	JS_CFUNC_DEF("move_layer", 2, &tile_map_class_move_layer),
	JS_CFUNC_DEF("remove_layer", 1, &tile_map_class_remove_layer),
	JS_CFUNC_DEF("set_layer_name", 2, &tile_map_class_set_layer_name),
	JS_CFUNC_DEF("get_layer_name", 1, &tile_map_class_get_layer_name),
	JS_CFUNC_DEF("set_layer_enabled", 2, &tile_map_class_set_layer_enabled),
	JS_CFUNC_DEF("is_layer_enabled", 1, &tile_map_class_is_layer_enabled),
	JS_CFUNC_DEF("set_layer_modulate", 2, &tile_map_class_set_layer_modulate),
	JS_CFUNC_DEF("get_layer_modulate", 1, &tile_map_class_get_layer_modulate),
	JS_CFUNC_DEF("set_layer_y_sort_enabled", 2, &tile_map_class_set_layer_y_sort_enabled),
	JS_CFUNC_DEF("is_layer_y_sort_enabled", 1, &tile_map_class_is_layer_y_sort_enabled),
	JS_CFUNC_DEF("set_layer_y_sort_origin", 2, &tile_map_class_set_layer_y_sort_origin),
	JS_CFUNC_DEF("get_layer_y_sort_origin", 1, &tile_map_class_get_layer_y_sort_origin),
	JS_CFUNC_DEF("set_layer_z_index", 2, &tile_map_class_set_layer_z_index),
	JS_CFUNC_DEF("get_layer_z_index", 1, &tile_map_class_get_layer_z_index),
	JS_CFUNC_DEF("set_layer_navigation_enabled", 2, &tile_map_class_set_layer_navigation_enabled),
	JS_CFUNC_DEF("is_layer_navigation_enabled", 1, &tile_map_class_is_layer_navigation_enabled),
	JS_CFUNC_DEF("set_layer_navigation_map", 2, &tile_map_class_set_layer_navigation_map),
	JS_CFUNC_DEF("get_layer_navigation_map", 1, &tile_map_class_get_layer_navigation_map),
	JS_CFUNC_DEF("set_collision_animatable", 1, &tile_map_class_set_collision_animatable),
	JS_CFUNC_DEF("is_collision_animatable", 0, &tile_map_class_is_collision_animatable),
	JS_CFUNC_DEF("set_collision_visibility_mode", 1, &tile_map_class_set_collision_visibility_mode),
	JS_CFUNC_DEF("get_collision_visibility_mode", 0, &tile_map_class_get_collision_visibility_mode),
	JS_CFUNC_DEF("set_navigation_visibility_mode", 1, &tile_map_class_set_navigation_visibility_mode),
	JS_CFUNC_DEF("get_navigation_visibility_mode", 0, &tile_map_class_get_navigation_visibility_mode),
	JS_CFUNC_DEF("set_cell", 5, &tile_map_class_set_cell),
	JS_CFUNC_DEF("erase_cell", 2, &tile_map_class_erase_cell),
	JS_CFUNC_DEF("get_cell_source_id", 3, &tile_map_class_get_cell_source_id),
	JS_CFUNC_DEF("get_cell_atlas_coords", 3, &tile_map_class_get_cell_atlas_coords),
	JS_CFUNC_DEF("get_cell_alternative_tile", 3, &tile_map_class_get_cell_alternative_tile),
	JS_CFUNC_DEF("get_cell_tile_data", 3, &tile_map_class_get_cell_tile_data),
	JS_CFUNC_DEF("get_coords_for_body_rid", 1, &tile_map_class_get_coords_for_body_rid),
	JS_CFUNC_DEF("get_layer_for_body_rid", 1, &tile_map_class_get_layer_for_body_rid),
	JS_CFUNC_DEF("get_pattern", 2, &tile_map_class_get_pattern),
	JS_CFUNC_DEF("map_pattern", 3, &tile_map_class_map_pattern),
	JS_CFUNC_DEF("set_pattern", 3, &tile_map_class_set_pattern),
	JS_CFUNC_DEF("set_cells_terrain_connect", 5, &tile_map_class_set_cells_terrain_connect),
	JS_CFUNC_DEF("set_cells_terrain_path", 5, &tile_map_class_set_cells_terrain_path),
	JS_CFUNC_DEF("fix_invalid_tiles", 0, &tile_map_class_fix_invalid_tiles),
	JS_CFUNC_DEF("clear_layer", 1, &tile_map_class_clear_layer),
	JS_CFUNC_DEF("clear", 0, &tile_map_class_clear),
	JS_CFUNC_DEF("update_internals", 0, &tile_map_class_update_internals),
	JS_CFUNC_DEF("notify_runtime_tile_data_update", 1, &tile_map_class_notify_runtime_tile_data_update),
	JS_CFUNC_DEF("get_surrounding_cells", 1, &tile_map_class_get_surrounding_cells),
	JS_CFUNC_DEF("get_used_cells", 1, &tile_map_class_get_used_cells),
	JS_CFUNC_DEF("get_used_cells_by_id", 4, &tile_map_class_get_used_cells_by_id),
	JS_CFUNC_DEF("get_used_rect", 0, &tile_map_class_get_used_rect),
	JS_CFUNC_DEF("map_to_local", 1, &tile_map_class_map_to_local),
	JS_CFUNC_DEF("local_to_map", 1, &tile_map_class_local_to_map),
	JS_CFUNC_DEF("get_neighbor_cell", 2, &tile_map_class_get_neighbor_cell),
};

void define_tile_map_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tile_set"),
        JS_NewCFunction(ctx, tile_map_class_get_tileset, "get_tileset", 0),
        JS_NewCFunction(ctx, tile_map_class_set_tileset, "set_tileset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rendering_quadrant_size"),
        JS_NewCFunction(ctx, tile_map_class_get_rendering_quadrant_size, "get_rendering_quadrant_size", 0),
        JS_NewCFunction(ctx, tile_map_class_set_rendering_quadrant_size, "set_rendering_quadrant_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collision_animatable"),
        JS_NewCFunction(ctx, tile_map_class_is_collision_animatable, "is_collision_animatable", 0),
        JS_NewCFunction(ctx, tile_map_class_set_collision_animatable, "set_collision_animatable", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collision_visibility_mode"),
        JS_NewCFunction(ctx, tile_map_class_get_collision_visibility_mode, "get_collision_visibility_mode", 0),
        JS_NewCFunction(ctx, tile_map_class_set_collision_visibility_mode, "set_collision_visibility_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "navigation_visibility_mode"),
        JS_NewCFunction(ctx, tile_map_class_get_navigation_visibility_mode, "get_navigation_visibility_mode", 0),
        JS_NewCFunction(ctx, tile_map_class_set_navigation_visibility_mode, "set_navigation_visibility_mode", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue VisibilityMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, VisibilityMode_obj, "VISIBILITY_MODE_DEFAULT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, VisibilityMode_obj, "VISIBILITY_MODE_FORCE_HIDE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, VisibilityMode_obj, "VISIBILITY_MODE_FORCE_SHOW", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "VisibilityMode", VisibilityMode_obj);
}

static int js_tile_map_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&TileMap::__class_id);
	classes["TileMap"] = TileMap::__class_id;
	class_id_list.insert(TileMap::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TileMap::__class_id, &tile_map_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TileMap::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TileMap::__class_id, proto);

	define_tile_map_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, tile_map_class_proto_funcs, _countof(tile_map_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, tile_map_class_constructor, "TileMap", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TileMap", ctor);

	return 0;
}

JSModuleDef *_js_init_tile_map_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tile_map_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TileMap");
	return m;
}

JSModuleDef *js_init_tile_map_module(JSContext *ctx) {
	return _js_init_tile_map_module(ctx, "godot/classes/tile_map");
}

void register_tile_map() {
	TileMap::__init_js_class_id();
	js_init_tile_map_module(ctx);
}