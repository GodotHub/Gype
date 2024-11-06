
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/scene_state.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void scene_state_class_finalizer(JSRuntime *rt, JSValue val) {
	SceneState *scene_state = static_cast<SceneState *>(JS_GetOpaque(val, SceneState::__class_id));
	if (scene_state)
		memdelete(scene_state);
}

static JSClassDef scene_state_class_def = {
	"SceneState",
	.finalizer = scene_state_class_finalizer
};

static JSValue scene_state_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SceneState::__class_id);
	if (JS_IsException(obj))
		return obj;

	SceneState *scene_state_class;
	if (argc == 1) 
		scene_state_class = static_cast<SceneState *>(Variant(*argv).operator Object *());
	else 
		scene_state_class = memnew(SceneState);
	if (!scene_state_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, scene_state_class);
	return obj;
}
static JSValue scene_state_class_get_node_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_node_count, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_node_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_node_type, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_node_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_node_name, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_node_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_node_path, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_node_owner_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_node_owner_path, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_is_node_instance_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::is_node_instance_placeholder, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_node_instance_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_node_instance_placeholder, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_node_instance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_node_instance, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_node_groups(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_node_groups, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_node_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_node_index, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_node_property_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_node_property_count, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_node_property_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_node_property_name, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_node_property_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_node_property_value, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_connection_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_connection_count, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_connection_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_connection_source, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_connection_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_connection_signal, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_connection_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_connection_target, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_connection_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_connection_method, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_connection_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_connection_flags, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_connection_binds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_connection_binds, ctx, this_val, argc, argv);
};
static JSValue scene_state_class_get_connection_unbinds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SceneState::get_connection_unbinds, ctx, this_val, argc, argv);
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

static void define_scene_state_property(JSContext *ctx, JSValue proto) {
	
}

static void define_scene_state_enum(JSContext *ctx, JSValue proto) {
	JSValue GenEditState_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, GenEditState_obj, "GEN_EDIT_STATE_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, GenEditState_obj, "GEN_EDIT_STATE_INSTANCE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, GenEditState_obj, "GEN_EDIT_STATE_MAIN", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, GenEditState_obj, "GEN_EDIT_STATE_MAIN_INHERITED", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "GenEditState", GenEditState_obj);
}

static int js_scene_state_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["SceneState"] = SceneState::__class_id;
	class_id_list.insert(SceneState::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SceneState::__class_id, &scene_state_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SceneState::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SceneState::__class_id, proto);

	define_scene_state_property(ctx, proto);
	define_scene_state_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, scene_state_class_proto_funcs, _countof(scene_state_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, scene_state_class_constructor, "SceneState", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "SceneState", ctor);
	constructors[SceneState::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_scene_state_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_scene_state_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SceneState");
	return m;
}

JSModuleDef *js_init_scene_state_module(JSContext *ctx) {
	return _js_init_scene_state_module(ctx, "@godot/classes/scene_state");
}

void register_scene_state() {
	SceneState::__init_js_class_id();
	js_init_scene_state_module(ctx);
}