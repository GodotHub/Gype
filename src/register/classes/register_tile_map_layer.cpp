
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/tile_map_layer.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tile_map_layer_class_finalizer(JSRuntime *rt, JSValue val) {
	TileMapLayer *tile_map_layer = static_cast<TileMapLayer *>(JS_GetOpaque(val, TileMapLayer::__class_id));
	if (tile_map_layer)
		memdelete(tile_map_layer);
}

static JSClassDef tile_map_layer_class_def = {
	"TileMapLayer",
	.finalizer = tile_map_layer_class_finalizer
};

static JSValue tile_map_layer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TileMapLayer::__class_id);
	if (JS_IsException(obj))
		return obj;

	TileMapLayer *tile_map_layer_class;
	if (argc == 1) 
		tile_map_layer_class = static_cast<TileMapLayer *>(Variant(*argv).operator Object *());
	else 
		tile_map_layer_class = memnew(TileMapLayer);
	if (!tile_map_layer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, tile_map_layer_class);
	return obj;
}
static JSValue tile_map_layer_class_set_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_cell, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_erase_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::erase_cell, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_fix_invalid_tiles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::fix_invalid_tiles, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::clear, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_cell_source_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_cell_source_id, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_cell_atlas_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_cell_atlas_coords, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_cell_alternative_tile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_cell_alternative_tile, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_cell_tile_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_cell_tile_data, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_used_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_used_cells, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_used_cells_by_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_used_cells_by_id, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_used_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_used_rect, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TileMapLayer::get_pattern, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_pattern, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_cells_terrain_connect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_cells_terrain_connect, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_cells_terrain_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_cells_terrain_path, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_has_body_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::has_body_rid, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_coords_for_body_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_coords_for_body_rid, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_update_internals(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::update_internals, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_notify_runtime_tile_data_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::notify_runtime_tile_data_update, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_map_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TileMapLayer::map_pattern, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_surrounding_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TileMapLayer::get_surrounding_cells, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_neighbor_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_neighbor_cell, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_map_to_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::map_to_local, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_local_to_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::local_to_map, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_tile_map_data_from_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_tile_map_data_from_array, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_tile_map_data_as_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_tile_map_data_as_array, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_enabled, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::is_enabled, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_tile_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_tile_set, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_tile_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_tile_set, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_y_sort_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_y_sort_origin, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_y_sort_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_y_sort_origin, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_x_draw_order_reversed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_x_draw_order_reversed, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_is_x_draw_order_reversed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::is_x_draw_order_reversed, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_rendering_quadrant_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_rendering_quadrant_size, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_rendering_quadrant_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_rendering_quadrant_size, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_collision_enabled, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_is_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::is_collision_enabled, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_use_kinematic_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_use_kinematic_bodies, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_is_using_kinematic_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::is_using_kinematic_bodies, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_collision_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_collision_visibility_mode, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_collision_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_collision_visibility_mode, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_navigation_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_navigation_enabled, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_is_navigation_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::is_navigation_enabled, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_navigation_map, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_navigation_map, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_set_navigation_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TileMapLayer::set_navigation_visibility_mode, ctx, this_val, argc, argv);
};
static JSValue tile_map_layer_class_get_navigation_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileMapLayer::get_navigation_visibility_mode, ctx, this_val, argc, argv);
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
static JSValue tile_map_layer_class_get_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	TileMapLayer *opaque = reinterpret_cast<TileMapLayer *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_tile_map_layer_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "tile_map_data"),
        JS_NewCFunction(ctx, tile_map_layer_class_get_tile_map_data_as_array, "get_tile_map_data_as_array", 0),
        JS_NewCFunction(ctx, tile_map_layer_class_set_tile_map_data_from_array, "set_tile_map_data_from_array", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enabled"),
        JS_NewCFunction(ctx, tile_map_layer_class_is_enabled, "is_enabled", 0),
        JS_NewCFunction(ctx, tile_map_layer_class_set_enabled, "set_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "tile_set"),
        JS_NewCFunction(ctx, tile_map_layer_class_get_tile_set, "get_tile_set", 0),
        JS_NewCFunction(ctx, tile_map_layer_class_set_tile_set, "set_tile_set", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "y_sort_origin"),
        JS_NewCFunction(ctx, tile_map_layer_class_get_y_sort_origin, "get_y_sort_origin", 0),
        JS_NewCFunction(ctx, tile_map_layer_class_set_y_sort_origin, "set_y_sort_origin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "x_draw_order_reversed"),
        JS_NewCFunction(ctx, tile_map_layer_class_is_x_draw_order_reversed, "is_x_draw_order_reversed", 0),
        JS_NewCFunction(ctx, tile_map_layer_class_set_x_draw_order_reversed, "set_x_draw_order_reversed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "rendering_quadrant_size"),
        JS_NewCFunction(ctx, tile_map_layer_class_get_rendering_quadrant_size, "get_rendering_quadrant_size", 0),
        JS_NewCFunction(ctx, tile_map_layer_class_set_rendering_quadrant_size, "set_rendering_quadrant_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collision_enabled"),
        JS_NewCFunction(ctx, tile_map_layer_class_is_collision_enabled, "is_collision_enabled", 0),
        JS_NewCFunction(ctx, tile_map_layer_class_set_collision_enabled, "set_collision_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "use_kinematic_bodies"),
        JS_NewCFunction(ctx, tile_map_layer_class_is_using_kinematic_bodies, "is_using_kinematic_bodies", 0),
        JS_NewCFunction(ctx, tile_map_layer_class_set_use_kinematic_bodies, "set_use_kinematic_bodies", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collision_visibility_mode"),
        JS_NewCFunction(ctx, tile_map_layer_class_get_collision_visibility_mode, "get_collision_visibility_mode", 0),
        JS_NewCFunction(ctx, tile_map_layer_class_set_collision_visibility_mode, "set_collision_visibility_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "navigation_enabled"),
        JS_NewCFunction(ctx, tile_map_layer_class_is_navigation_enabled, "is_navigation_enabled", 0),
        JS_NewCFunction(ctx, tile_map_layer_class_set_navigation_enabled, "set_navigation_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "navigation_visibility_mode"),
        JS_NewCFunction(ctx, tile_map_layer_class_get_navigation_visibility_mode, "get_navigation_visibility_mode", 0),
        JS_NewCFunction(ctx, tile_map_layer_class_set_navigation_visibility_mode, "set_navigation_visibility_mode", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "changed"),
		JS_NewCFunction(ctx, tile_map_layer_class_get_changed_signal, "get_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_tile_map_layer_enum(JSContext *ctx, JSValue proto) {
	JSValue DebugVisibilityMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, DebugVisibilityMode_obj, "DEBUG_VISIBILITY_MODE_DEFAULT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, DebugVisibilityMode_obj, "DEBUG_VISIBILITY_MODE_FORCE_HIDE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, DebugVisibilityMode_obj, "DEBUG_VISIBILITY_MODE_FORCE_SHOW", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "DebugVisibilityMode", DebugVisibilityMode_obj);
}

static int js_tile_map_layer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["TileMapLayer"] = TileMapLayer::__class_id;
	class_id_list.insert(TileMapLayer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TileMapLayer::__class_id, &tile_map_layer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TileMapLayer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TileMapLayer::__class_id, proto);

	define_tile_map_layer_property(ctx, proto);
	define_tile_map_layer_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, tile_map_layer_class_proto_funcs, _countof(tile_map_layer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, tile_map_layer_class_constructor, "TileMapLayer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "TileMapLayer", ctor);
	constructors[TileMapLayer::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_tile_map_layer_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tile_map_layer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TileMapLayer");
	return m;
}

JSModuleDef *js_init_tile_map_layer_module(JSContext *ctx) {
	return _js_init_tile_map_layer_module(ctx, "@godot/classes/tile_map_layer");
}

void register_tile_map_layer() {
	TileMapLayer::__init_js_class_id();
	js_init_tile_map_layer_module(ctx);
}