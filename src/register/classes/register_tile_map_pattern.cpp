
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void tile_map_pattern_class_finalizer(JSRuntime *rt, JSValue val) {
	TileMapPattern *tile_map_pattern = static_cast<TileMapPattern *>(JS_GetOpaque(val, TileMapPattern::__class_id));
	if (tile_map_pattern)
		TileMapPattern::free(nullptr, tile_map_pattern);
}

static JSClassDef tile_map_pattern_class_def = {
	"TileMapPattern",
	.finalizer = tile_map_pattern_class_finalizer
};

static JSValue tile_map_pattern_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TileMapPattern *tile_map_pattern_class;
	JSValue obj = JS_NewObjectClass(ctx, TileMapPattern::__class_id);
	if (JS_IsException(obj))
		return obj;
	tile_map_pattern_class = memnew(TileMapPattern);
	if (!tile_map_pattern_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tile_map_pattern_class);
	return obj;
}
static JSValue tile_map_pattern_class_set_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileMapPattern::set_cell, TileMapPattern::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_pattern_class_has_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::has_cell, TileMapPattern::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_pattern_class_remove_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileMapPattern::remove_cell, TileMapPattern::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_pattern_class_get_cell_source_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::get_cell_source_id, TileMapPattern::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_pattern_class_get_cell_atlas_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::get_cell_atlas_coords, TileMapPattern::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_pattern_class_get_cell_alternative_tile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::get_cell_alternative_tile, TileMapPattern::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_pattern_class_get_used_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::get_used_cells, TileMapPattern::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_pattern_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::get_size, TileMapPattern::__class_id, ctx, this_val, argv);
};
static JSValue tile_map_pattern_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileMapPattern::set_size, TileMapPattern::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_pattern_class_is_empty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::is_empty, TileMapPattern::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry tile_map_pattern_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_cell", 4, &tile_map_pattern_class_set_cell),
	JS_CFUNC_DEF("has_cell", 1, &tile_map_pattern_class_has_cell),
	JS_CFUNC_DEF("remove_cell", 2, &tile_map_pattern_class_remove_cell),
	JS_CFUNC_DEF("get_cell_source_id", 1, &tile_map_pattern_class_get_cell_source_id),
	JS_CFUNC_DEF("get_cell_atlas_coords", 1, &tile_map_pattern_class_get_cell_atlas_coords),
	JS_CFUNC_DEF("get_cell_alternative_tile", 1, &tile_map_pattern_class_get_cell_alternative_tile),
	JS_CFUNC_DEF("get_used_cells", 0, &tile_map_pattern_class_get_used_cells),
	JS_CFUNC_DEF("get_size", 0, &tile_map_pattern_class_get_size),
	JS_CFUNC_DEF("set_size", 1, &tile_map_pattern_class_set_size),
	JS_CFUNC_DEF("is_empty", 0, &tile_map_pattern_class_is_empty),
};

static int js_tile_map_pattern_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TileMapPattern::__class_id);
	classes["TileMapPattern"] = TileMapPattern::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TileMapPattern::__class_id, &tile_map_pattern_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TileMapPattern::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, tile_map_pattern_class_proto_funcs, _countof(tile_map_pattern_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, tile_map_pattern_class_constructor, "TileMapPattern", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TileMapPattern", ctor);

	return 0;
}

JSModuleDef *_js_init_tile_map_pattern_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tile_map_pattern_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TileMapPattern");
	return m;
}

JSModuleDef *js_init_tile_map_pattern_module(JSContext *ctx) {
	return _js_init_tile_map_pattern_module(ctx, "godot/classes/tile_map_pattern");
}

void register_tile_map_pattern() {
	js_init_tile_map_pattern_module(ctx);
}