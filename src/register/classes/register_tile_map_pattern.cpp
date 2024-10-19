
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tile_map_pattern_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef tile_map_pattern_class_def = {
	"TileMapPattern",
	.finalizer = tile_map_pattern_class_finalizer
};

static JSValue tile_map_pattern_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TileMapPattern::__class_id);
	if (JS_IsException(obj))
		return obj;
	TileMapPattern *tile_map_pattern_class = memnew(TileMapPattern);
	if (!tile_map_pattern_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, tile_map_pattern_class);	
	return obj;
}
static JSValue tile_map_pattern_class_set_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileMapPattern::set_cell, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_pattern_class_has_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::has_cell, ctx, this_val, argc, argv);
};
static JSValue tile_map_pattern_class_remove_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileMapPattern::remove_cell, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_pattern_class_get_cell_source_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::get_cell_source_id, ctx, this_val, argc, argv);
};
static JSValue tile_map_pattern_class_get_cell_atlas_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::get_cell_atlas_coords, ctx, this_val, argc, argv);
};
static JSValue tile_map_pattern_class_get_cell_alternative_tile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::get_cell_alternative_tile, ctx, this_val, argc, argv);
};
static JSValue tile_map_pattern_class_get_used_cells(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::get_used_cells, ctx, this_val, argc, argv);
};
static JSValue tile_map_pattern_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::get_size, ctx, this_val, argc, argv);
};
static JSValue tile_map_pattern_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TileMapPattern::set_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tile_map_pattern_class_is_empty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileMapPattern::is_empty, ctx, this_val, argc, argv);
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

void define_tile_map_pattern_property(JSContext *ctx, JSValue obj) {
}

static int js_tile_map_pattern_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&TileMapPattern::__class_id);
	classes["TileMapPattern"] = TileMapPattern::__class_id;
	class_id_list.insert(TileMapPattern::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TileMapPattern::__class_id, &tile_map_pattern_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TileMapPattern::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TileMapPattern::__class_id, proto);

	define_tile_map_pattern_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, tile_map_pattern_class_proto_funcs, _countof(tile_map_pattern_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, tile_map_pattern_class_constructor, "TileMapPattern", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TileMapPattern", ctor);

	return 0;
}

JSModuleDef *_js_init_tile_map_pattern_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	TileMapPattern::__init_js_class_id();
	js_init_tile_map_pattern_module(ctx);
}