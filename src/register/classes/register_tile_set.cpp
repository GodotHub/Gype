
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/classes/tile_set_source.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tile_set_class_finalizer(JSRuntime *rt, JSValue val) {
	TileSet *tile_set = static_cast<TileSet *>(JS_GetOpaque(val, TileSet::__class_id));
	if (tile_set)
		TileSet::free(nullptr, tile_set);
}

static JSClassDef tile_set_class_def = {
	"TileSet",
	.finalizer = tile_set_class_finalizer
};

static JSValue tile_set_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TileSet *tile_set_class;
	JSValue obj = JS_NewObjectClass(ctx, TileSet::__class_id);
	if (JS_IsException(obj))
		return obj;
	tile_set_class = memnew(TileSet);
	if (!tile_set_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tile_set_class);
	return obj;
}
static JSValue tile_set_class_get_next_source_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_next_source_id, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_add_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSet::add_source, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_remove_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::remove_source, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_set_source_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_source_id, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_source_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_source_count, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_get_source_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_source_id, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_has_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::has_source, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_get_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_source, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_tile_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_tile_shape, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_tile_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_tile_shape, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_tile_layout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_tile_layout, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_tile_layout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_tile_layout, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_tile_offset_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_tile_offset_axis, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_tile_offset_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_tile_offset_axis, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_tile_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_tile_size, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_tile_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_tile_size, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_uv_clipping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_uv_clipping, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_is_uv_clipping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::is_uv_clipping, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_get_occlusion_layers_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_occlusion_layers_count, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_add_occlusion_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::add_occlusion_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_move_occlusion_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::move_occlusion_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_remove_occlusion_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::remove_occlusion_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_set_occlusion_layer_light_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_occlusion_layer_light_mask, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_occlusion_layer_light_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_occlusion_layer_light_mask, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_occlusion_layer_sdf_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_occlusion_layer_sdf_collision, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_occlusion_layer_sdf_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_occlusion_layer_sdf_collision, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_get_physics_layers_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_physics_layers_count, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_add_physics_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::add_physics_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_move_physics_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::move_physics_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_remove_physics_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::remove_physics_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_set_physics_layer_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_physics_layer_collision_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_physics_layer_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_physics_layer_collision_layer, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_physics_layer_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_physics_layer_collision_mask, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_physics_layer_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_physics_layer_collision_mask, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_physics_layer_physics_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_physics_layer_physics_material, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_physics_layer_physics_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_physics_layer_physics_material, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_get_terrain_sets_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_terrain_sets_count, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_add_terrain_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::add_terrain_set, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_move_terrain_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::move_terrain_set, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_remove_terrain_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::remove_terrain_set, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_set_terrain_set_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_terrain_set_mode, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_terrain_set_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_terrain_set_mode, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_get_terrains_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_terrains_count, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_add_terrain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::add_terrain, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_move_terrain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::move_terrain, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_remove_terrain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::remove_terrain, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_set_terrain_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_terrain_name, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_terrain_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_terrain_name, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_terrain_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_terrain_color, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_terrain_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_terrain_color, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_get_navigation_layers_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_navigation_layers_count, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_add_navigation_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::add_navigation_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_move_navigation_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::move_navigation_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_remove_navigation_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::remove_navigation_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_set_navigation_layer_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_navigation_layer_layers, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_navigation_layer_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_navigation_layer_layers, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_navigation_layer_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_navigation_layer_layer_value, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_navigation_layer_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_navigation_layer_layer_value, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_get_custom_data_layers_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_custom_data_layers_count, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_add_custom_data_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::add_custom_data_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_move_custom_data_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::move_custom_data_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_remove_custom_data_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::remove_custom_data_layer, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_custom_data_layer_by_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_custom_data_layer_by_name, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_custom_data_layer_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_custom_data_layer_name, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_custom_data_layer_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_custom_data_layer_name, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_custom_data_layer_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_custom_data_layer_type, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_custom_data_layer_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::get_custom_data_layer_type, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_set_source_level_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_source_level_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_source_level_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSet::get_source_level_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_has_source_level_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSet::has_source_level_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_remove_source_level_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::remove_source_level_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_set_coords_level_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_coords_level_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_coords_level_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSet::get_coords_level_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_has_coords_level_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSet::has_coords_level_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_remove_coords_level_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::remove_coords_level_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_set_alternative_level_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::set_alternative_level_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_alternative_level_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSet::get_alternative_level_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_has_alternative_level_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSet::has_alternative_level_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_remove_alternative_level_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::remove_alternative_level_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_map_tile_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSet::map_tile_proxy, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_cleanup_invalid_tile_proxies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::cleanup_invalid_tile_proxies, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_clear_tile_proxies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::clear_tile_proxies, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_add_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSet::add_pattern, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_get_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSet::get_pattern, TileSet::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_class_remove_pattern(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSet::remove_pattern, TileSet::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_class_get_patterns_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSet::get_patterns_count, TileSet::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry tile_set_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_next_source_id", 0, &tile_set_class_get_next_source_id),
	JS_CFUNC_DEF("add_source", 2, &tile_set_class_add_source),
	JS_CFUNC_DEF("remove_source", 1, &tile_set_class_remove_source),
	JS_CFUNC_DEF("set_source_id", 2, &tile_set_class_set_source_id),
	JS_CFUNC_DEF("get_source_count", 0, &tile_set_class_get_source_count),
	JS_CFUNC_DEF("get_source_id", 1, &tile_set_class_get_source_id),
	JS_CFUNC_DEF("has_source", 1, &tile_set_class_has_source),
	JS_CFUNC_DEF("get_source", 1, &tile_set_class_get_source),
	JS_CFUNC_DEF("set_tile_shape", 1, &tile_set_class_set_tile_shape),
	JS_CFUNC_DEF("get_tile_shape", 0, &tile_set_class_get_tile_shape),
	JS_CFUNC_DEF("set_tile_layout", 1, &tile_set_class_set_tile_layout),
	JS_CFUNC_DEF("get_tile_layout", 0, &tile_set_class_get_tile_layout),
	JS_CFUNC_DEF("set_tile_offset_axis", 1, &tile_set_class_set_tile_offset_axis),
	JS_CFUNC_DEF("get_tile_offset_axis", 0, &tile_set_class_get_tile_offset_axis),
	JS_CFUNC_DEF("set_tile_size", 1, &tile_set_class_set_tile_size),
	JS_CFUNC_DEF("get_tile_size", 0, &tile_set_class_get_tile_size),
	JS_CFUNC_DEF("set_uv_clipping", 1, &tile_set_class_set_uv_clipping),
	JS_CFUNC_DEF("is_uv_clipping", 0, &tile_set_class_is_uv_clipping),
	JS_CFUNC_DEF("get_occlusion_layers_count", 0, &tile_set_class_get_occlusion_layers_count),
	JS_CFUNC_DEF("add_occlusion_layer", 1, &tile_set_class_add_occlusion_layer),
	JS_CFUNC_DEF("move_occlusion_layer", 2, &tile_set_class_move_occlusion_layer),
	JS_CFUNC_DEF("remove_occlusion_layer", 1, &tile_set_class_remove_occlusion_layer),
	JS_CFUNC_DEF("set_occlusion_layer_light_mask", 2, &tile_set_class_set_occlusion_layer_light_mask),
	JS_CFUNC_DEF("get_occlusion_layer_light_mask", 1, &tile_set_class_get_occlusion_layer_light_mask),
	JS_CFUNC_DEF("set_occlusion_layer_sdf_collision", 2, &tile_set_class_set_occlusion_layer_sdf_collision),
	JS_CFUNC_DEF("get_occlusion_layer_sdf_collision", 1, &tile_set_class_get_occlusion_layer_sdf_collision),
	JS_CFUNC_DEF("get_physics_layers_count", 0, &tile_set_class_get_physics_layers_count),
	JS_CFUNC_DEF("add_physics_layer", 1, &tile_set_class_add_physics_layer),
	JS_CFUNC_DEF("move_physics_layer", 2, &tile_set_class_move_physics_layer),
	JS_CFUNC_DEF("remove_physics_layer", 1, &tile_set_class_remove_physics_layer),
	JS_CFUNC_DEF("set_physics_layer_collision_layer", 2, &tile_set_class_set_physics_layer_collision_layer),
	JS_CFUNC_DEF("get_physics_layer_collision_layer", 1, &tile_set_class_get_physics_layer_collision_layer),
	JS_CFUNC_DEF("set_physics_layer_collision_mask", 2, &tile_set_class_set_physics_layer_collision_mask),
	JS_CFUNC_DEF("get_physics_layer_collision_mask", 1, &tile_set_class_get_physics_layer_collision_mask),
	JS_CFUNC_DEF("set_physics_layer_physics_material", 2, &tile_set_class_set_physics_layer_physics_material),
	JS_CFUNC_DEF("get_physics_layer_physics_material", 1, &tile_set_class_get_physics_layer_physics_material),
	JS_CFUNC_DEF("get_terrain_sets_count", 0, &tile_set_class_get_terrain_sets_count),
	JS_CFUNC_DEF("add_terrain_set", 1, &tile_set_class_add_terrain_set),
	JS_CFUNC_DEF("move_terrain_set", 2, &tile_set_class_move_terrain_set),
	JS_CFUNC_DEF("remove_terrain_set", 1, &tile_set_class_remove_terrain_set),
	JS_CFUNC_DEF("set_terrain_set_mode", 2, &tile_set_class_set_terrain_set_mode),
	JS_CFUNC_DEF("get_terrain_set_mode", 1, &tile_set_class_get_terrain_set_mode),
	JS_CFUNC_DEF("get_terrains_count", 1, &tile_set_class_get_terrains_count),
	JS_CFUNC_DEF("add_terrain", 2, &tile_set_class_add_terrain),
	JS_CFUNC_DEF("move_terrain", 3, &tile_set_class_move_terrain),
	JS_CFUNC_DEF("remove_terrain", 2, &tile_set_class_remove_terrain),
	JS_CFUNC_DEF("set_terrain_name", 3, &tile_set_class_set_terrain_name),
	JS_CFUNC_DEF("get_terrain_name", 2, &tile_set_class_get_terrain_name),
	JS_CFUNC_DEF("set_terrain_color", 3, &tile_set_class_set_terrain_color),
	JS_CFUNC_DEF("get_terrain_color", 2, &tile_set_class_get_terrain_color),
	JS_CFUNC_DEF("get_navigation_layers_count", 0, &tile_set_class_get_navigation_layers_count),
	JS_CFUNC_DEF("add_navigation_layer", 1, &tile_set_class_add_navigation_layer),
	JS_CFUNC_DEF("move_navigation_layer", 2, &tile_set_class_move_navigation_layer),
	JS_CFUNC_DEF("remove_navigation_layer", 1, &tile_set_class_remove_navigation_layer),
	JS_CFUNC_DEF("set_navigation_layer_layers", 2, &tile_set_class_set_navigation_layer_layers),
	JS_CFUNC_DEF("get_navigation_layer_layers", 1, &tile_set_class_get_navigation_layer_layers),
	JS_CFUNC_DEF("set_navigation_layer_layer_value", 3, &tile_set_class_set_navigation_layer_layer_value),
	JS_CFUNC_DEF("get_navigation_layer_layer_value", 2, &tile_set_class_get_navigation_layer_layer_value),
	JS_CFUNC_DEF("get_custom_data_layers_count", 0, &tile_set_class_get_custom_data_layers_count),
	JS_CFUNC_DEF("add_custom_data_layer", 1, &tile_set_class_add_custom_data_layer),
	JS_CFUNC_DEF("move_custom_data_layer", 2, &tile_set_class_move_custom_data_layer),
	JS_CFUNC_DEF("remove_custom_data_layer", 1, &tile_set_class_remove_custom_data_layer),
	JS_CFUNC_DEF("get_custom_data_layer_by_name", 1, &tile_set_class_get_custom_data_layer_by_name),
	JS_CFUNC_DEF("set_custom_data_layer_name", 2, &tile_set_class_set_custom_data_layer_name),
	JS_CFUNC_DEF("get_custom_data_layer_name", 1, &tile_set_class_get_custom_data_layer_name),
	JS_CFUNC_DEF("set_custom_data_layer_type", 2, &tile_set_class_set_custom_data_layer_type),
	JS_CFUNC_DEF("get_custom_data_layer_type", 1, &tile_set_class_get_custom_data_layer_type),
	JS_CFUNC_DEF("set_source_level_tile_proxy", 2, &tile_set_class_set_source_level_tile_proxy),
	JS_CFUNC_DEF("get_source_level_tile_proxy", 1, &tile_set_class_get_source_level_tile_proxy),
	JS_CFUNC_DEF("has_source_level_tile_proxy", 1, &tile_set_class_has_source_level_tile_proxy),
	JS_CFUNC_DEF("remove_source_level_tile_proxy", 1, &tile_set_class_remove_source_level_tile_proxy),
	JS_CFUNC_DEF("set_coords_level_tile_proxy", 4, &tile_set_class_set_coords_level_tile_proxy),
	JS_CFUNC_DEF("get_coords_level_tile_proxy", 2, &tile_set_class_get_coords_level_tile_proxy),
	JS_CFUNC_DEF("has_coords_level_tile_proxy", 2, &tile_set_class_has_coords_level_tile_proxy),
	JS_CFUNC_DEF("remove_coords_level_tile_proxy", 2, &tile_set_class_remove_coords_level_tile_proxy),
	JS_CFUNC_DEF("set_alternative_level_tile_proxy", 6, &tile_set_class_set_alternative_level_tile_proxy),
	JS_CFUNC_DEF("get_alternative_level_tile_proxy", 3, &tile_set_class_get_alternative_level_tile_proxy),
	JS_CFUNC_DEF("has_alternative_level_tile_proxy", 3, &tile_set_class_has_alternative_level_tile_proxy),
	JS_CFUNC_DEF("remove_alternative_level_tile_proxy", 3, &tile_set_class_remove_alternative_level_tile_proxy),
	JS_CFUNC_DEF("map_tile_proxy", 3, &tile_set_class_map_tile_proxy),
	JS_CFUNC_DEF("cleanup_invalid_tile_proxies", 0, &tile_set_class_cleanup_invalid_tile_proxies),
	JS_CFUNC_DEF("clear_tile_proxies", 0, &tile_set_class_clear_tile_proxies),
	JS_CFUNC_DEF("add_pattern", 2, &tile_set_class_add_pattern),
	JS_CFUNC_DEF("get_pattern", 1, &tile_set_class_get_pattern),
	JS_CFUNC_DEF("remove_pattern", 1, &tile_set_class_remove_pattern),
	JS_CFUNC_DEF("get_patterns_count", 0, &tile_set_class_get_patterns_count),
};

static int js_tile_set_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TileSet::__class_id);
	classes["TileSet"] = TileSet::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TileSet::__class_id, &tile_set_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TileSet::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, tile_set_class_proto_funcs, _countof(tile_set_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, tile_set_class_constructor, "TileSet", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TileSet", ctor);

	return 0;
}

JSModuleDef *_js_init_tile_set_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tile_set_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TileSet");
	return m;
}

JSModuleDef *js_init_tile_set_module(JSContext *ctx) {
	return _js_init_tile_set_module(ctx, "godot/classes/tile_set");
}

void register_tile_set() {
	js_init_tile_set_module(ctx);
}