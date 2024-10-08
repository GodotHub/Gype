
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/multiplayer_spawner.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void multiplayer_spawner_class_finalizer(JSRuntime *rt, JSValue val) {
	MultiplayerSpawner *multiplayer_spawner = static_cast<MultiplayerSpawner *>(JS_GetOpaque(val, MultiplayerSpawner::__class_id));
	if (multiplayer_spawner)
		MultiplayerSpawner::free(nullptr, multiplayer_spawner);
}

static JSClassDef multiplayer_spawner_class_def = {
	"MultiplayerSpawner",
	.finalizer = multiplayer_spawner_class_finalizer
};

static JSValue multiplayer_spawner_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MultiplayerSpawner *multiplayer_spawner_class;
	JSValue obj = JS_NewObjectClass(ctx, MultiplayerSpawner::__class_id);
	if (JS_IsException(obj))
		return obj;
	multiplayer_spawner_class = memnew(MultiplayerSpawner);
	if (!multiplayer_spawner_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, multiplayer_spawner_class);
	return obj;
}
static JSValue multiplayer_spawner_class_add_spawnable_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSpawner::add_spawnable_scene, MultiplayerSpawner::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_spawner_class_get_spawnable_scene_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerSpawner::get_spawnable_scene_count, MultiplayerSpawner::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_spawner_class_get_spawnable_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerSpawner::get_spawnable_scene, MultiplayerSpawner::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_spawner_class_clear_spawnable_scenes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSpawner::clear_spawnable_scenes, MultiplayerSpawner::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_spawner_class_spawn(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&MultiplayerSpawner::spawn, MultiplayerSpawner::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_spawner_class_get_spawn_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerSpawner::get_spawn_path, MultiplayerSpawner::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_spawner_class_set_spawn_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSpawner::set_spawn_path, MultiplayerSpawner::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_spawner_class_get_spawn_limit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerSpawner::get_spawn_limit, MultiplayerSpawner::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_spawner_class_set_spawn_limit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSpawner::set_spawn_limit, MultiplayerSpawner::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_spawner_class_get_spawn_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerSpawner::get_spawn_function, MultiplayerSpawner::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_spawner_class_set_spawn_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSpawner::set_spawn_function, MultiplayerSpawner::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry multiplayer_spawner_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_spawnable_scene", 1, &multiplayer_spawner_class_add_spawnable_scene),
	JS_CFUNC_DEF("get_spawnable_scene_count", 0, &multiplayer_spawner_class_get_spawnable_scene_count),
	JS_CFUNC_DEF("get_spawnable_scene", 1, &multiplayer_spawner_class_get_spawnable_scene),
	JS_CFUNC_DEF("clear_spawnable_scenes", 0, &multiplayer_spawner_class_clear_spawnable_scenes),
	JS_CFUNC_DEF("spawn", 1, &multiplayer_spawner_class_spawn),
	JS_CFUNC_DEF("get_spawn_path", 0, &multiplayer_spawner_class_get_spawn_path),
	JS_CFUNC_DEF("set_spawn_path", 1, &multiplayer_spawner_class_set_spawn_path),
	JS_CFUNC_DEF("get_spawn_limit", 0, &multiplayer_spawner_class_get_spawn_limit),
	JS_CFUNC_DEF("set_spawn_limit", 1, &multiplayer_spawner_class_set_spawn_limit),
	JS_CFUNC_DEF("get_spawn_function", 0, &multiplayer_spawner_class_get_spawn_function),
	JS_CFUNC_DEF("set_spawn_function", 1, &multiplayer_spawner_class_set_spawn_function),
};

static int js_multiplayer_spawner_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MultiplayerSpawner::__class_id);
	classes["MultiplayerSpawner"] = MultiplayerSpawner::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MultiplayerSpawner::__class_id, &multiplayer_spawner_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MultiplayerSpawner::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, multiplayer_spawner_class_proto_funcs, _countof(multiplayer_spawner_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, multiplayer_spawner_class_constructor, "MultiplayerSpawner", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MultiplayerSpawner", ctor);

	return 0;
}

JSModuleDef *_js_init_multiplayer_spawner_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_multiplayer_spawner_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MultiplayerSpawner");
	return m;
}

JSModuleDef *js_init_multiplayer_spawner_module(JSContext *ctx) {
	return _js_init_multiplayer_spawner_module(ctx, "godot/classes/multiplayer_spawner");
}

void register_multiplayer_spawner() {
	js_init_multiplayer_spawner_module(ctx);
}