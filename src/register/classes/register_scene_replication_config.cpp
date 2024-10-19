
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/scene_replication_config.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void scene_replication_config_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef scene_replication_config_class_def = {
	"SceneReplicationConfig",
	.finalizer = scene_replication_config_class_finalizer
};

static JSValue scene_replication_config_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SceneReplicationConfig::__class_id);
	if (JS_IsException(obj))
		return obj;
	SceneReplicationConfig *scene_replication_config_class = memnew(SceneReplicationConfig);
	if (!scene_replication_config_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, scene_replication_config_class);	
	return obj;
}
static JSValue scene_replication_config_class_get_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneReplicationConfig::get_properties, ctx, this_val, argc, argv);
};
static JSValue scene_replication_config_class_add_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneReplicationConfig::add_property, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scene_replication_config_class_has_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneReplicationConfig::has_property, ctx, this_val, argc, argv);
};
static JSValue scene_replication_config_class_remove_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneReplicationConfig::remove_property, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scene_replication_config_class_property_get_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneReplicationConfig::property_get_index, ctx, this_val, argc, argv);
};
static JSValue scene_replication_config_class_property_get_spawn(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneReplicationConfig::property_get_spawn, ctx, this_val, argc, argv);
};
static JSValue scene_replication_config_class_property_set_spawn(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneReplicationConfig::property_set_spawn, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scene_replication_config_class_property_get_replication_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneReplicationConfig::property_get_replication_mode, ctx, this_val, argc, argv);
};
static JSValue scene_replication_config_class_property_set_replication_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneReplicationConfig::property_set_replication_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scene_replication_config_class_property_get_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneReplicationConfig::property_get_sync, ctx, this_val, argc, argv);
};
static JSValue scene_replication_config_class_property_set_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneReplicationConfig::property_set_sync, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue scene_replication_config_class_property_get_watch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneReplicationConfig::property_get_watch, ctx, this_val, argc, argv);
};
static JSValue scene_replication_config_class_property_set_watch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SceneReplicationConfig::property_set_watch, ctx, this_val, argc, argv);
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

void define_scene_replication_config_property(JSContext *ctx, JSValue obj) {
}

static int js_scene_replication_config_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&SceneReplicationConfig::__class_id);
	classes["SceneReplicationConfig"] = SceneReplicationConfig::__class_id;
	class_id_list.insert(SceneReplicationConfig::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SceneReplicationConfig::__class_id, &scene_replication_config_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SceneReplicationConfig::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SceneReplicationConfig::__class_id, proto);

	define_scene_replication_config_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, scene_replication_config_class_proto_funcs, _countof(scene_replication_config_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, scene_replication_config_class_constructor, "SceneReplicationConfig", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SceneReplicationConfig", ctor);

	return 0;
}

JSModuleDef *_js_init_scene_replication_config_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	SceneReplicationConfig::__init_js_class_id();
	js_init_scene_replication_config_module(ctx);
}