
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/tile_set_source.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tile_set_source_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef tile_set_source_class_def = {
	"TileSetSource",
	.finalizer = tile_set_source_class_finalizer
};

static JSValue tile_set_source_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TileSetSource::__class_id);
	if (JS_IsException(obj))
		return obj;
	TileSetSource *tile_set_source_class = memnew(TileSetSource);
	if (!tile_set_source_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, tile_set_source_class);	
	return obj;
}
static JSValue tile_set_source_class_get_tiles_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileSetSource::get_tiles_count, ctx, this_val, argc, argv);
};
static JSValue tile_set_source_class_get_tile_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileSetSource::get_tile_id, ctx, this_val, argc, argv);
};
static JSValue tile_set_source_class_has_tile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileSetSource::has_tile, ctx, this_val, argc, argv);
};
static JSValue tile_set_source_class_get_alternative_tiles_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileSetSource::get_alternative_tiles_count, ctx, this_val, argc, argv);
};
static JSValue tile_set_source_class_get_alternative_tile_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileSetSource::get_alternative_tile_id, ctx, this_val, argc, argv);
};
static JSValue tile_set_source_class_has_alternative_tile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TileSetSource::has_alternative_tile, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry tile_set_source_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_tiles_count", 0, &tile_set_source_class_get_tiles_count),
	JS_CFUNC_DEF("get_tile_id", 1, &tile_set_source_class_get_tile_id),
	JS_CFUNC_DEF("has_tile", 1, &tile_set_source_class_has_tile),
	JS_CFUNC_DEF("get_alternative_tiles_count", 1, &tile_set_source_class_get_alternative_tiles_count),
	JS_CFUNC_DEF("get_alternative_tile_id", 2, &tile_set_source_class_get_alternative_tile_id),
	JS_CFUNC_DEF("has_alternative_tile", 2, &tile_set_source_class_has_alternative_tile),
};

void define_tile_set_source_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_tile_set_source_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&TileSetSource::__class_id);
	classes["TileSetSource"] = TileSetSource::__class_id;
	class_id_list.insert(TileSetSource::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TileSetSource::__class_id, &tile_set_source_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TileSetSource::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TileSetSource::__class_id, proto);

	define_tile_set_source_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, tile_set_source_class_proto_funcs, _countof(tile_set_source_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, tile_set_source_class_constructor, "TileSetSource", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TileSetSource", ctor);

	return 0;
}

JSModuleDef *_js_init_tile_set_source_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tile_set_source_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TileSetSource");
	return m;
}

JSModuleDef *js_init_tile_set_source_module(JSContext *ctx) {
	return _js_init_tile_set_source_module(ctx, "godot/classes/tile_set_source");
}

void register_tile_set_source() {
	TileSetSource::__init_js_class_id();
	js_init_tile_set_source_module(ctx);
}