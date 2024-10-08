
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/scene_state.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void scene_state_class_finalizer(JSRuntime *rt, JSValue val) {
	SceneState *scene_state = static_cast<SceneState *>(JS_GetOpaque(val, SceneState::__class_id));
	if (scene_state)
		SceneState::free(nullptr, scene_state);
}

static JSClassDef scene_state_class_def = {
	"SceneState",
	.finalizer = scene_state_class_finalizer
};

static JSValue scene_state_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SceneState *scene_state_class;
	JSValue obj = JS_NewObjectClass(ctx, SceneState::__class_id);
	if (JS_IsException(obj))
		return obj;
	scene_state_class = memnew(SceneState);
	if (!scene_state_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, scene_state_class);
	return obj;
}
static JSValue scene_state_class_get_node_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_node_count, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_node_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_node_type, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_node_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_node_name, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_node_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_node_path, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_node_owner_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_node_owner_path, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_is_node_instance_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::is_node_instance_placeholder, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_node_instance_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_node_instance_placeholder, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_node_instance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_node_instance, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_node_groups(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_node_groups, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_node_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_node_index, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_node_property_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_node_property_count, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_node_property_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_node_property_name, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_node_property_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_node_property_value, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_connection_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_connection_count, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_connection_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_connection_source, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_connection_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_connection_signal, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_connection_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_connection_target, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_connection_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_connection_method, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_connection_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_connection_flags, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_connection_binds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_connection_binds, SceneState::__class_id, ctx, this_val, argv);
};
static JSValue scene_state_class_get_connection_unbinds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneState::get_connection_unbinds, SceneState::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry scene_state_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_node_count", 0, &scene_state_class_get_node_count),
	JS_CFUNC_DEF("get_node_type", 1, &scene_state_class_get_node_type),
	JS_CFUNC_DEF("get_node_name", 1, &scene_state_class_get_node_name),
	JS_CFUNC_DEF("get_node_path", 2, &scene_state_class_get_node_path),
	JS_CFUNC_DEF("get_node_owner_path", 1, &scene_state_class_get_node_owner_path),
	JS_CFUNC_DEF("is_node_instance_placeholder", 1, &scene_state_class_is_node_instance_placeholder),
	JS_CFUNC_DEF("get_node_instance_placeholder", 1, &scene_state_class_get_node_instance_placeholder),
	JS_CFUNC_DEF("get_node_instance", 1, &scene_state_class_get_node_instance),
	JS_CFUNC_DEF("get_node_groups", 1, &scene_state_class_get_node_groups),
	JS_CFUNC_DEF("get_node_index", 1, &scene_state_class_get_node_index),
	JS_CFUNC_DEF("get_node_property_count", 1, &scene_state_class_get_node_property_count),
	JS_CFUNC_DEF("get_node_property_name", 2, &scene_state_class_get_node_property_name),
	JS_CFUNC_DEF("get_node_property_value", 2, &scene_state_class_get_node_property_value),
	JS_CFUNC_DEF("get_connection_count", 0, &scene_state_class_get_connection_count),
	JS_CFUNC_DEF("get_connection_source", 1, &scene_state_class_get_connection_source),
	JS_CFUNC_DEF("get_connection_signal", 1, &scene_state_class_get_connection_signal),
	JS_CFUNC_DEF("get_connection_target", 1, &scene_state_class_get_connection_target),
	JS_CFUNC_DEF("get_connection_method", 1, &scene_state_class_get_connection_method),
	JS_CFUNC_DEF("get_connection_flags", 1, &scene_state_class_get_connection_flags),
	JS_CFUNC_DEF("get_connection_binds", 1, &scene_state_class_get_connection_binds),
	JS_CFUNC_DEF("get_connection_unbinds", 1, &scene_state_class_get_connection_unbinds),
};

static int js_scene_state_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SceneState::__class_id);
	classes["SceneState"] = SceneState::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SceneState::__class_id, &scene_state_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SceneState::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, scene_state_class_proto_funcs, _countof(scene_state_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, scene_state_class_constructor, "SceneState", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SceneState", ctor);

	return 0;
}

JSModuleDef *_js_init_scene_state_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_scene_state_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SceneState");
	return m;
}

JSModuleDef *js_init_scene_state_module(JSContext *ctx) {
	return _js_init_scene_state_module(ctx, "godot/classes/scene_state");
}

void register_scene_state() {
	js_init_scene_state_module(ctx);
}