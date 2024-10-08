
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/tile_set_scenes_collection_source.hpp>
#include <godot_cpp/classes/tile_set_source.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tile_set_scenes_collection_source_class_finalizer(JSRuntime *rt, JSValue val) {
	TileSetScenesCollectionSource *tile_set_scenes_collection_source = static_cast<TileSetScenesCollectionSource *>(JS_GetOpaque(val, TileSetScenesCollectionSource::__class_id));
	if (tile_set_scenes_collection_source)
		TileSetScenesCollectionSource::free(nullptr, tile_set_scenes_collection_source);
}

static JSClassDef tile_set_scenes_collection_source_class_def = {
	"TileSetScenesCollectionSource",
	.finalizer = tile_set_scenes_collection_source_class_finalizer
};

static JSValue tile_set_scenes_collection_source_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TileSetScenesCollectionSource *tile_set_scenes_collection_source_class;
	JSValue obj = JS_NewObjectClass(ctx, TileSetScenesCollectionSource::__class_id);
	if (JS_IsException(obj))
		return obj;
	tile_set_scenes_collection_source_class = memnew(TileSetScenesCollectionSource);
	if (!tile_set_scenes_collection_source_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tile_set_scenes_collection_source_class);
	return obj;
}
static JSValue tile_set_scenes_collection_source_class_get_scene_tiles_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSetScenesCollectionSource::get_scene_tiles_count, TileSetScenesCollectionSource::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_scenes_collection_source_class_get_scene_tile_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSetScenesCollectionSource::get_scene_tile_id, TileSetScenesCollectionSource::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_scenes_collection_source_class_has_scene_tile_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSetScenesCollectionSource::has_scene_tile_id, TileSetScenesCollectionSource::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_scenes_collection_source_class_create_scene_tile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TileSetScenesCollectionSource::create_scene_tile, TileSetScenesCollectionSource::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_scenes_collection_source_class_set_scene_tile_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSetScenesCollectionSource::set_scene_tile_id, TileSetScenesCollectionSource::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_scenes_collection_source_class_set_scene_tile_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSetScenesCollectionSource::set_scene_tile_scene, TileSetScenesCollectionSource::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_scenes_collection_source_class_get_scene_tile_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSetScenesCollectionSource::get_scene_tile_scene, TileSetScenesCollectionSource::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_scenes_collection_source_class_set_scene_tile_display_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSetScenesCollectionSource::set_scene_tile_display_placeholder, TileSetScenesCollectionSource::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_scenes_collection_source_class_get_scene_tile_display_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSetScenesCollectionSource::get_scene_tile_display_placeholder, TileSetScenesCollectionSource::__class_id, ctx, this_val, argv);
};
static JSValue tile_set_scenes_collection_source_class_remove_scene_tile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TileSetScenesCollectionSource::remove_scene_tile, TileSetScenesCollectionSource::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tile_set_scenes_collection_source_class_get_next_scene_tile_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TileSetScenesCollectionSource::get_next_scene_tile_id, TileSetScenesCollectionSource::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry tile_set_scenes_collection_source_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_scene_tiles_count", 0, &tile_set_scenes_collection_source_class_get_scene_tiles_count),
	JS_CFUNC_DEF("get_scene_tile_id", 1, &tile_set_scenes_collection_source_class_get_scene_tile_id),
	JS_CFUNC_DEF("has_scene_tile_id", 1, &tile_set_scenes_collection_source_class_has_scene_tile_id),
	JS_CFUNC_DEF("create_scene_tile", 2, &tile_set_scenes_collection_source_class_create_scene_tile),
	JS_CFUNC_DEF("set_scene_tile_id", 2, &tile_set_scenes_collection_source_class_set_scene_tile_id),
	JS_CFUNC_DEF("set_scene_tile_scene", 2, &tile_set_scenes_collection_source_class_set_scene_tile_scene),
	JS_CFUNC_DEF("get_scene_tile_scene", 1, &tile_set_scenes_collection_source_class_get_scene_tile_scene),
	JS_CFUNC_DEF("set_scene_tile_display_placeholder", 2, &tile_set_scenes_collection_source_class_set_scene_tile_display_placeholder),
	JS_CFUNC_DEF("get_scene_tile_display_placeholder", 1, &tile_set_scenes_collection_source_class_get_scene_tile_display_placeholder),
	JS_CFUNC_DEF("remove_scene_tile", 1, &tile_set_scenes_collection_source_class_remove_scene_tile),
	JS_CFUNC_DEF("get_next_scene_tile_id", 0, &tile_set_scenes_collection_source_class_get_next_scene_tile_id),
};

static int js_tile_set_scenes_collection_source_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TileSetScenesCollectionSource::__class_id);
	classes["TileSetScenesCollectionSource"] = TileSetScenesCollectionSource::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TileSetScenesCollectionSource::__class_id, &tile_set_scenes_collection_source_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, TileSetSource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TileSetScenesCollectionSource::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, tile_set_scenes_collection_source_class_proto_funcs, _countof(tile_set_scenes_collection_source_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, tile_set_scenes_collection_source_class_constructor, "TileSetScenesCollectionSource", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TileSetScenesCollectionSource", ctor);

	return 0;
}

JSModuleDef *_js_init_tile_set_scenes_collection_source_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tile_set_scenes_collection_source_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TileSetScenesCollectionSource");
	return m;
}

JSModuleDef *js_init_tile_set_scenes_collection_source_module(JSContext *ctx) {
	return _js_init_tile_set_scenes_collection_source_module(ctx, "godot/classes/tile_set_scenes_collection_source");
}

void register_tile_set_scenes_collection_source() {
	js_init_tile_set_scenes_collection_source_module(ctx);
}