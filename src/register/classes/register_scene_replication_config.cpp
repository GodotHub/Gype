
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/scene_replication_config.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void scene_replication_config_class_finalizer(JSRuntime *rt, JSValue val) {
	SceneReplicationConfig *scene_replication_config = static_cast<SceneReplicationConfig *>(JS_GetOpaque(val, SceneReplicationConfig::__class_id));
	if (scene_replication_config)
		SceneReplicationConfig::free(nullptr, scene_replication_config);
}

static JSClassDef scene_replication_config_class_def = {
	"SceneReplicationConfig",
	.finalizer = scene_replication_config_class_finalizer
};

static JSValue scene_replication_config_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SceneReplicationConfig *scene_replication_config_class;
	JSValue obj = JS_NewObjectClass(ctx, SceneReplicationConfig::__class_id);
	if (JS_IsException(obj))
		return obj;
	scene_replication_config_class = memnew(SceneReplicationConfig);
	if (!scene_replication_config_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, scene_replication_config_class);
	return obj;
}
static JSValue scene_replication_config_class_get_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneReplicationConfig::get_properties, SceneReplicationConfig::__class_id, ctx, this_val, argv);
};
static JSValue scene_replication_config_class_add_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneReplicationConfig::add_property, SceneReplicationConfig::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_replication_config_class_has_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneReplicationConfig::has_property, SceneReplicationConfig::__class_id, ctx, this_val, argv);
};
static JSValue scene_replication_config_class_remove_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneReplicationConfig::remove_property, SceneReplicationConfig::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_replication_config_class_property_get_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneReplicationConfig::property_get_index, SceneReplicationConfig::__class_id, ctx, this_val, argv);
};
static JSValue scene_replication_config_class_property_get_spawn(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneReplicationConfig::property_get_spawn, SceneReplicationConfig::__class_id, ctx, this_val, argv);
};
static JSValue scene_replication_config_class_property_set_spawn(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneReplicationConfig::property_set_spawn, SceneReplicationConfig::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_replication_config_class_property_get_replication_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneReplicationConfig::property_get_replication_mode, SceneReplicationConfig::__class_id, ctx, this_val, argv);
};
static JSValue scene_replication_config_class_property_set_replication_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneReplicationConfig::property_set_replication_mode, SceneReplicationConfig::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_replication_config_class_property_get_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneReplicationConfig::property_get_sync, SceneReplicationConfig::__class_id, ctx, this_val, argv);
};
static JSValue scene_replication_config_class_property_set_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneReplicationConfig::property_set_sync, SceneReplicationConfig::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_replication_config_class_property_get_watch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneReplicationConfig::property_get_watch, SceneReplicationConfig::__class_id, ctx, this_val, argv);
};
static JSValue scene_replication_config_class_property_set_watch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneReplicationConfig::property_set_watch, SceneReplicationConfig::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry scene_replication_config_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_properties", 0, &scene_replication_config_class_get_properties),
	JS_CFUNC_DEF("add_property", 2, &scene_replication_config_class_add_property),
	JS_CFUNC_DEF("has_property", 1, &scene_replication_config_class_has_property),
	JS_CFUNC_DEF("remove_property", 1, &scene_replication_config_class_remove_property),
	JS_CFUNC_DEF("property_get_index", 1, &scene_replication_config_class_property_get_index),
	JS_CFUNC_DEF("property_get_spawn", 1, &scene_replication_config_class_property_get_spawn),
	JS_CFUNC_DEF("property_set_spawn", 2, &scene_replication_config_class_property_set_spawn),
	JS_CFUNC_DEF("property_get_replication_mode", 1, &scene_replication_config_class_property_get_replication_mode),
	JS_CFUNC_DEF("property_set_replication_mode", 2, &scene_replication_config_class_property_set_replication_mode),
	JS_CFUNC_DEF("property_get_sync", 1, &scene_replication_config_class_property_get_sync),
	JS_CFUNC_DEF("property_set_sync", 2, &scene_replication_config_class_property_set_sync),
	JS_CFUNC_DEF("property_get_watch", 1, &scene_replication_config_class_property_get_watch),
	JS_CFUNC_DEF("property_set_watch", 2, &scene_replication_config_class_property_set_watch),
};

static int js_scene_replication_config_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SceneReplicationConfig::__class_id);
	classes["SceneReplicationConfig"] = SceneReplicationConfig::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SceneReplicationConfig::__class_id, &scene_replication_config_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SceneReplicationConfig::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, scene_replication_config_class_proto_funcs, _countof(scene_replication_config_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, scene_replication_config_class_constructor, "SceneReplicationConfig", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SceneReplicationConfig", ctor);

	return 0;
}

JSModuleDef *_js_init_scene_replication_config_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_scene_replication_config_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SceneReplicationConfig");
	return m;
}

JSModuleDef *js_init_scene_replication_config_module(JSContext *ctx) {
	return _js_init_scene_replication_config_module(ctx, "godot/classes/scene_replication_config");
}

void register_scene_replication_config() {
	js_init_scene_replication_config_module(ctx);
}