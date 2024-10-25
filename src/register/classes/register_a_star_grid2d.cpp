
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/a_star_grid2d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void a_star_grid2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef a_star_grid2d_class_def = {
	"AStarGrid2D",
	.finalizer = a_star_grid2d_class_finalizer
};

static JSValue a_star_grid2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AStarGrid2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	AStarGrid2D *a_star_grid2d_class = memnew(AStarGrid2D);
	if (!a_star_grid2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, a_star_grid2d_class);	
	return obj;
}
static JSValue a_star_grid2d_class_set_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::set_region, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_get_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::get_region, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::set_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::get_size, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::set_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::get_offset, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_set_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::set_cell_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_get_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::get_cell_size, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_set_cell_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::set_cell_shape, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_get_cell_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::get_cell_shape, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_is_in_bounds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::is_in_bounds, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_is_in_boundsv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::is_in_boundsv, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_is_dirty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::is_dirty, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::update, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_set_jumping_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::set_jumping_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_is_jumping_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::is_jumping_enabled, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_set_diagonal_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::set_diagonal_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_get_diagonal_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::get_diagonal_mode, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_set_default_compute_heuristic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::set_default_compute_heuristic, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_get_default_compute_heuristic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::get_default_compute_heuristic, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_set_default_estimate_heuristic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::set_default_estimate_heuristic, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_get_default_estimate_heuristic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::get_default_estimate_heuristic, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_set_point_solid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::set_point_solid, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_is_point_solid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::is_point_solid, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_set_point_weight_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::set_point_weight_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_get_point_weight_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::get_point_weight_scale, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_fill_solid_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::fill_solid_region, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_fill_weight_scale_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::fill_weight_scale_region, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AStarGrid2D::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue a_star_grid2d_class_get_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AStarGrid2D::get_point_position, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_get_point_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AStarGrid2D::get_point_path, ctx, this_val, argc, argv);
};
static JSValue a_star_grid2d_class_get_id_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AStarGrid2D::get_id_path, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry a_star_grid2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_region", 1, &a_star_grid2d_class_set_region),
	JS_CFUNC_DEF("get_region", 0, &a_star_grid2d_class_get_region),
	JS_CFUNC_DEF("set_size", 1, &a_star_grid2d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &a_star_grid2d_class_get_size),
	JS_CFUNC_DEF("set_offset", 1, &a_star_grid2d_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &a_star_grid2d_class_get_offset),
	JS_CFUNC_DEF("set_cell_size", 1, &a_star_grid2d_class_set_cell_size),
	JS_CFUNC_DEF("get_cell_size", 0, &a_star_grid2d_class_get_cell_size),
	JS_CFUNC_DEF("set_cell_shape", 1, &a_star_grid2d_class_set_cell_shape),
	JS_CFUNC_DEF("get_cell_shape", 0, &a_star_grid2d_class_get_cell_shape),
	JS_CFUNC_DEF("is_in_bounds", 2, &a_star_grid2d_class_is_in_bounds),
	JS_CFUNC_DEF("is_in_boundsv", 1, &a_star_grid2d_class_is_in_boundsv),
	JS_CFUNC_DEF("is_dirty", 0, &a_star_grid2d_class_is_dirty),
	JS_CFUNC_DEF("update", 0, &a_star_grid2d_class_update),
	JS_CFUNC_DEF("set_jumping_enabled", 1, &a_star_grid2d_class_set_jumping_enabled),
	JS_CFUNC_DEF("is_jumping_enabled", 0, &a_star_grid2d_class_is_jumping_enabled),
	JS_CFUNC_DEF("set_diagonal_mode", 1, &a_star_grid2d_class_set_diagonal_mode),
	JS_CFUNC_DEF("get_diagonal_mode", 0, &a_star_grid2d_class_get_diagonal_mode),
	JS_CFUNC_DEF("set_default_compute_heuristic", 1, &a_star_grid2d_class_set_default_compute_heuristic),
	JS_CFUNC_DEF("get_default_compute_heuristic", 0, &a_star_grid2d_class_get_default_compute_heuristic),
	JS_CFUNC_DEF("set_default_estimate_heuristic", 1, &a_star_grid2d_class_set_default_estimate_heuristic),
	JS_CFUNC_DEF("get_default_estimate_heuristic", 0, &a_star_grid2d_class_get_default_estimate_heuristic),
	JS_CFUNC_DEF("set_point_solid", 2, &a_star_grid2d_class_set_point_solid),
	JS_CFUNC_DEF("is_point_solid", 1, &a_star_grid2d_class_is_point_solid),
	JS_CFUNC_DEF("set_point_weight_scale", 2, &a_star_grid2d_class_set_point_weight_scale),
	JS_CFUNC_DEF("get_point_weight_scale", 1, &a_star_grid2d_class_get_point_weight_scale),
	JS_CFUNC_DEF("fill_solid_region", 2, &a_star_grid2d_class_fill_solid_region),
	JS_CFUNC_DEF("fill_weight_scale_region", 2, &a_star_grid2d_class_fill_weight_scale_region),
	JS_CFUNC_DEF("clear", 0, &a_star_grid2d_class_clear),
	JS_CFUNC_DEF("get_point_position", 1, &a_star_grid2d_class_get_point_position),
	JS_CFUNC_DEF("get_point_path", 3, &a_star_grid2d_class_get_point_path),
	JS_CFUNC_DEF("get_id_path", 3, &a_star_grid2d_class_get_id_path),
};

void define_a_star_grid2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "region"),
        JS_NewCFunction(ctx, a_star_grid2d_class_get_region, "get_region", 0),
        JS_NewCFunction(ctx, a_star_grid2d_class_set_region, "set_region", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, a_star_grid2d_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, a_star_grid2d_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "offset"),
        JS_NewCFunction(ctx, a_star_grid2d_class_get_offset, "get_offset", 0),
        JS_NewCFunction(ctx, a_star_grid2d_class_set_offset, "set_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "cell_size"),
        JS_NewCFunction(ctx, a_star_grid2d_class_get_cell_size, "get_cell_size", 0),
        JS_NewCFunction(ctx, a_star_grid2d_class_set_cell_size, "set_cell_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "cell_shape"),
        JS_NewCFunction(ctx, a_star_grid2d_class_get_cell_shape, "get_cell_shape", 0),
        JS_NewCFunction(ctx, a_star_grid2d_class_set_cell_shape, "set_cell_shape", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "jumping_enabled"),
        JS_NewCFunction(ctx, a_star_grid2d_class_is_jumping_enabled, "is_jumping_enabled", 0),
        JS_NewCFunction(ctx, a_star_grid2d_class_set_jumping_enabled, "set_jumping_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "default_compute_heuristic"),
        JS_NewCFunction(ctx, a_star_grid2d_class_get_default_compute_heuristic, "get_default_compute_heuristic", 0),
        JS_NewCFunction(ctx, a_star_grid2d_class_set_default_compute_heuristic, "set_default_compute_heuristic", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "default_estimate_heuristic"),
        JS_NewCFunction(ctx, a_star_grid2d_class_get_default_estimate_heuristic, "get_default_estimate_heuristic", 0),
        JS_NewCFunction(ctx, a_star_grid2d_class_set_default_estimate_heuristic, "set_default_estimate_heuristic", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "diagonal_mode"),
        JS_NewCFunction(ctx, a_star_grid2d_class_get_diagonal_mode, "get_diagonal_mode", 0),
        JS_NewCFunction(ctx, a_star_grid2d_class_set_diagonal_mode, "set_diagonal_mode", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Heuristic_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Heuristic_obj, "HEURISTIC_EUCLIDEAN", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Heuristic_obj, "HEURISTIC_MANHATTAN", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Heuristic_obj, "HEURISTIC_OCTILE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Heuristic_obj, "HEURISTIC_CHEBYSHEV", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Heuristic_obj, "HEURISTIC_MAX", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "Heuristic", Heuristic_obj);
	JSValue DiagonalMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, DiagonalMode_obj, "DIAGONAL_MODE_ALWAYS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, DiagonalMode_obj, "DIAGONAL_MODE_NEVER", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, DiagonalMode_obj, "DIAGONAL_MODE_AT_LEAST_ONE_WALKABLE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, DiagonalMode_obj, "DIAGONAL_MODE_ONLY_IF_NO_OBSTACLES", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, DiagonalMode_obj, "DIAGONAL_MODE_MAX", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "DiagonalMode", DiagonalMode_obj);
	JSValue CellShape_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, CellShape_obj, "CELL_SHAPE_SQUARE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, CellShape_obj, "CELL_SHAPE_ISOMETRIC_RIGHT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, CellShape_obj, "CELL_SHAPE_ISOMETRIC_DOWN", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, CellShape_obj, "CELL_SHAPE_MAX", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "CellShape", CellShape_obj);
}

static int js_a_star_grid2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AStarGrid2D::__class_id);
	classes["AStarGrid2D"] = AStarGrid2D::__class_id;
	class_id_list.insert(AStarGrid2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AStarGrid2D::__class_id, &a_star_grid2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AStarGrid2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AStarGrid2D::__class_id, proto);

	define_a_star_grid2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, a_star_grid2d_class_proto_funcs, _countof(a_star_grid2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, a_star_grid2d_class_constructor, "AStarGrid2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AStarGrid2D", ctor);

	return 0;
}

JSModuleDef *_js_init_a_star_grid2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_a_star_grid2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AStarGrid2D");
	return m;
}

JSModuleDef *js_init_a_star_grid2d_module(JSContext *ctx) {
	return _js_init_a_star_grid2d_module(ctx, "godot/classes/a_star_grid2d");
}

void register_a_star_grid2d() {
	AStarGrid2D::__init_js_class_id();
	js_init_a_star_grid2d_module(ctx);
}