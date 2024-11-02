
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/grid_map.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/mesh_library.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void grid_map_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef grid_map_class_def = {
	"GridMap",
	.finalizer = grid_map_class_finalizer
};

static JSValue grid_map_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GridMap::__class_id);
	if (JS_IsException(obj))
		return obj;

	GridMap *grid_map_class;
	if (argc == 1) 
		grid_map_class = static_cast<GridMap *>(Variant(*argv).operator Object *());
	else 
		grid_map_class = memnew(GridMap);
	if (!grid_map_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, grid_map_class);
	return obj;
}
static JSValue grid_map_class_set_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_collision_layer, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_collision_layer, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_collision_mask, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_collision_mask, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_collision_mask_value, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_collision_mask_value, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_collision_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_collision_layer_value, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_collision_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_collision_layer_value, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_collision_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_collision_priority, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_collision_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_collision_priority, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_physics_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_physics_material, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_physics_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_physics_material, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_bake_navigation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_bake_navigation, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_is_baking_navigation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GridMap::is_baking_navigation, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_navigation_map, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_navigation_map, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_mesh_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_mesh_library, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_mesh_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_mesh_library, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_cell_size, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_cell_size, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_cell_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_cell_scale, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_cell_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_cell_scale, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_octant_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_octant_size, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_octant_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_octant_size, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_cell_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_cell_item, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_cell_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_cell_item, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_cell_item_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_cell_item_orientation, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_cell_item_basis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_cell_item_basis, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_basis_with_orthogonal_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_basis_with_orthogonal_index, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_orthogonal_index_from_basis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_orthogonal_index_from_basis, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_local_to_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::local_to_map, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_map_to_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::map_to_local, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_resource_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::resource_changed, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_center_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_center_x, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_center_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_center_x, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_center_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_center_y, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_center_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_center_y, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_set_center_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::set_center_z, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_center_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_center_z, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::clear, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_used_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_used_cells, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_used_cells_by_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_used_cells_by_item, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_meshes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GridMap::get_meshes, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_bake_meshes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GridMap::get_bake_meshes, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_get_bake_mesh_instance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GridMap::get_bake_mesh_instance, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_clear_baked_meshes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::clear_baked_meshes, ctx, this_val, argc, argv);
};
static JSValue grid_map_class_make_baked_meshes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GridMap::make_baked_meshes, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry grid_map_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_collision_layer", 1, &grid_map_class_set_collision_layer),
	JS_CFUNC_DEF("get_collision_layer", 0, &grid_map_class_get_collision_layer),
	JS_CFUNC_DEF("set_collision_mask", 1, &grid_map_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &grid_map_class_get_collision_mask),
	JS_CFUNC_DEF("set_collision_mask_value", 2, &grid_map_class_set_collision_mask_value),
	JS_CFUNC_DEF("get_collision_mask_value", 1, &grid_map_class_get_collision_mask_value),
	JS_CFUNC_DEF("set_collision_layer_value", 2, &grid_map_class_set_collision_layer_value),
	JS_CFUNC_DEF("get_collision_layer_value", 1, &grid_map_class_get_collision_layer_value),
	JS_CFUNC_DEF("set_collision_priority", 1, &grid_map_class_set_collision_priority),
	JS_CFUNC_DEF("get_collision_priority", 0, &grid_map_class_get_collision_priority),
	JS_CFUNC_DEF("set_physics_material", 1, &grid_map_class_set_physics_material),
	JS_CFUNC_DEF("get_physics_material", 0, &grid_map_class_get_physics_material),
	JS_CFUNC_DEF("set_bake_navigation", 1, &grid_map_class_set_bake_navigation),
	JS_CFUNC_DEF("is_baking_navigation", 0, &grid_map_class_is_baking_navigation),
	JS_CFUNC_DEF("set_navigation_map", 1, &grid_map_class_set_navigation_map),
	JS_CFUNC_DEF("get_navigation_map", 0, &grid_map_class_get_navigation_map),
	JS_CFUNC_DEF("set_mesh_library", 1, &grid_map_class_set_mesh_library),
	JS_CFUNC_DEF("get_mesh_library", 0, &grid_map_class_get_mesh_library),
	JS_CFUNC_DEF("set_cell_size", 1, &grid_map_class_set_cell_size),
	JS_CFUNC_DEF("get_cell_size", 0, &grid_map_class_get_cell_size),
	JS_CFUNC_DEF("set_cell_scale", 1, &grid_map_class_set_cell_scale),
	JS_CFUNC_DEF("get_cell_scale", 0, &grid_map_class_get_cell_scale),
	JS_CFUNC_DEF("set_octant_size", 1, &grid_map_class_set_octant_size),
	JS_CFUNC_DEF("get_octant_size", 0, &grid_map_class_get_octant_size),
	JS_CFUNC_DEF("set_cell_item", 3, &grid_map_class_set_cell_item),
	JS_CFUNC_DEF("get_cell_item", 1, &grid_map_class_get_cell_item),
	JS_CFUNC_DEF("get_cell_item_orientation", 1, &grid_map_class_get_cell_item_orientation),
	JS_CFUNC_DEF("get_cell_item_basis", 1, &grid_map_class_get_cell_item_basis),
	JS_CFUNC_DEF("get_basis_with_orthogonal_index", 1, &grid_map_class_get_basis_with_orthogonal_index),
	JS_CFUNC_DEF("get_orthogonal_index_from_basis", 1, &grid_map_class_get_orthogonal_index_from_basis),
	JS_CFUNC_DEF("local_to_map", 1, &grid_map_class_local_to_map),
	JS_CFUNC_DEF("map_to_local", 1, &grid_map_class_map_to_local),
	JS_CFUNC_DEF("resource_changed", 1, &grid_map_class_resource_changed),
	JS_CFUNC_DEF("set_center_x", 1, &grid_map_class_set_center_x),
	JS_CFUNC_DEF("get_center_x", 0, &grid_map_class_get_center_x),
	JS_CFUNC_DEF("set_center_y", 1, &grid_map_class_set_center_y),
	JS_CFUNC_DEF("get_center_y", 0, &grid_map_class_get_center_y),
	JS_CFUNC_DEF("set_center_z", 1, &grid_map_class_set_center_z),
	JS_CFUNC_DEF("get_center_z", 0, &grid_map_class_get_center_z),
	JS_CFUNC_DEF("clear", 0, &grid_map_class_clear),
	JS_CFUNC_DEF("get_used_cells", 0, &grid_map_class_get_used_cells),
	JS_CFUNC_DEF("get_used_cells_by_item", 1, &grid_map_class_get_used_cells_by_item),
	JS_CFUNC_DEF("get_meshes", 0, &grid_map_class_get_meshes),
	JS_CFUNC_DEF("get_bake_meshes", 0, &grid_map_class_get_bake_meshes),
	JS_CFUNC_DEF("get_bake_mesh_instance", 1, &grid_map_class_get_bake_mesh_instance),
	JS_CFUNC_DEF("clear_baked_meshes", 0, &grid_map_class_clear_baked_meshes),
	JS_CFUNC_DEF("make_baked_meshes", 2, &grid_map_class_make_baked_meshes),
};
static JSValue grid_map_class_get_cell_size_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	GridMap *opaque = reinterpret_cast<GridMap *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "cell_size_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "cell_size_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "cell_size_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue grid_map_class_get_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	GridMap *opaque = reinterpret_cast<GridMap *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_grid_map_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mesh_library"),
        JS_NewCFunction(ctx, grid_map_class_get_mesh_library, "get_mesh_library", 0),
        JS_NewCFunction(ctx, grid_map_class_set_mesh_library, "set_mesh_library", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "physics_material"),
        JS_NewCFunction(ctx, grid_map_class_get_physics_material, "get_physics_material", 0),
        JS_NewCFunction(ctx, grid_map_class_set_physics_material, "set_physics_material", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "cell_size"),
        JS_NewCFunction(ctx, grid_map_class_get_cell_size, "get_cell_size", 0),
        JS_NewCFunction(ctx, grid_map_class_set_cell_size, "set_cell_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "cell_octant_size"),
        JS_NewCFunction(ctx, grid_map_class_get_octant_size, "get_octant_size", 0),
        JS_NewCFunction(ctx, grid_map_class_set_octant_size, "set_octant_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "cell_center_x"),
        JS_NewCFunction(ctx, grid_map_class_get_center_x, "get_center_x", 0),
        JS_NewCFunction(ctx, grid_map_class_set_center_x, "set_center_x", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "cell_center_y"),
        JS_NewCFunction(ctx, grid_map_class_get_center_y, "get_center_y", 0),
        JS_NewCFunction(ctx, grid_map_class_set_center_y, "set_center_y", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "cell_center_z"),
        JS_NewCFunction(ctx, grid_map_class_get_center_z, "get_center_z", 0),
        JS_NewCFunction(ctx, grid_map_class_set_center_z, "set_center_z", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "cell_scale"),
        JS_NewCFunction(ctx, grid_map_class_get_cell_scale, "get_cell_scale", 0),
        JS_NewCFunction(ctx, grid_map_class_set_cell_scale, "set_cell_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collision_layer"),
        JS_NewCFunction(ctx, grid_map_class_get_collision_layer, "get_collision_layer", 0),
        JS_NewCFunction(ctx, grid_map_class_set_collision_layer, "set_collision_layer", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collision_mask"),
        JS_NewCFunction(ctx, grid_map_class_get_collision_mask, "get_collision_mask", 0),
        JS_NewCFunction(ctx, grid_map_class_set_collision_mask, "set_collision_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collision_priority"),
        JS_NewCFunction(ctx, grid_map_class_get_collision_priority, "get_collision_priority", 0),
        JS_NewCFunction(ctx, grid_map_class_set_collision_priority, "set_collision_priority", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bake_navigation"),
        JS_NewCFunction(ctx, grid_map_class_is_baking_navigation, "is_baking_navigation", 0),
        JS_NewCFunction(ctx, grid_map_class_set_bake_navigation, "set_bake_navigation", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "cell_size_changed"),
		JS_NewCFunction(ctx, grid_map_class_get_cell_size_changed_signal, "get_cell_size_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "changed"),
		JS_NewCFunction(ctx, grid_map_class_get_changed_signal, "get_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_grid_map_enum(JSContext *ctx, JSValue proto) {
}

static int js_grid_map_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["GridMap"] = GridMap::__class_id;
	class_id_list.insert(GridMap::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GridMap::__class_id, &grid_map_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GridMap::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GridMap::__class_id, proto);

	define_grid_map_property(ctx, proto);
	define_grid_map_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, grid_map_class_proto_funcs, _countof(grid_map_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, grid_map_class_constructor, "GridMap", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GridMap", ctor);

	return 0;
}

JSModuleDef *_js_init_grid_map_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_grid_map_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GridMap");
	return m;
}

JSModuleDef *js_init_grid_map_module(JSContext *ctx) {
	return _js_init_grid_map_module(ctx, "@godot/classes/grid_map");
}

void register_grid_map() {
	GridMap::__init_js_class_id();
	js_init_grid_map_module(ctx);
}