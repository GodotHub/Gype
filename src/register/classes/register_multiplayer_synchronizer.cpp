
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/multiplayer_synchronizer.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/scene_replication_config.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void multiplayer_synchronizer_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef multiplayer_synchronizer_class_def = {
	"MultiplayerSynchronizer",
	.finalizer = multiplayer_synchronizer_class_finalizer
};

static JSValue multiplayer_synchronizer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MultiplayerSynchronizer::__class_id);
	if (JS_IsException(obj))
		return obj;
	MultiplayerSynchronizer *multiplayer_synchronizer_class = memnew(MultiplayerSynchronizer);
	if (!multiplayer_synchronizer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, multiplayer_synchronizer_class);
	return obj;
}
static JSValue multiplayer_synchronizer_class_set_root_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&MultiplayerSynchronizer::set_root_path, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_get_root_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerSynchronizer::get_root_path, ctx, this_val, argc, argv);
};
static JSValue multiplayer_synchronizer_class_set_replication_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&MultiplayerSynchronizer::set_replication_interval, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_get_replication_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerSynchronizer::get_replication_interval, ctx, this_val, argc, argv);
};
static JSValue multiplayer_synchronizer_class_set_delta_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&MultiplayerSynchronizer::set_delta_interval, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_get_delta_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerSynchronizer::get_delta_interval, ctx, this_val, argc, argv);
};
static JSValue multiplayer_synchronizer_class_set_replication_config(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&MultiplayerSynchronizer::set_replication_config, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_get_replication_config(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MultiplayerSynchronizer::get_replication_config, ctx, this_val, argc, argv);
};
static JSValue multiplayer_synchronizer_class_set_visibility_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&MultiplayerSynchronizer::set_visibility_update_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_get_visibility_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerSynchronizer::get_visibility_update_mode, ctx, this_val, argc, argv);
};
static JSValue multiplayer_synchronizer_class_update_visibility(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&MultiplayerSynchronizer::update_visibility, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_set_visibility_public(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&MultiplayerSynchronizer::set_visibility_public, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_is_visibility_public(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerSynchronizer::is_visibility_public, ctx, this_val, argc, argv);
};
static JSValue multiplayer_synchronizer_class_add_visibility_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&MultiplayerSynchronizer::add_visibility_filter, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_remove_visibility_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&MultiplayerSynchronizer::remove_visibility_filter, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_set_visibility_for(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&MultiplayerSynchronizer::set_visibility_for, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_get_visibility_for(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerSynchronizer::get_visibility_for, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry multiplayer_synchronizer_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_root_path", 1, &multiplayer_synchronizer_class_set_root_path),
	JS_CFUNC_DEF("get_root_path", 0, &multiplayer_synchronizer_class_get_root_path),
	JS_CFUNC_DEF("set_replication_interval", 1, &multiplayer_synchronizer_class_set_replication_interval),
	JS_CFUNC_DEF("get_replication_interval", 0, &multiplayer_synchronizer_class_get_replication_interval),
	JS_CFUNC_DEF("set_delta_interval", 1, &multiplayer_synchronizer_class_set_delta_interval),
	JS_CFUNC_DEF("get_delta_interval", 0, &multiplayer_synchronizer_class_get_delta_interval),
	JS_CFUNC_DEF("set_replication_config", 1, &multiplayer_synchronizer_class_set_replication_config),
	JS_CFUNC_DEF("get_replication_config", 0, &multiplayer_synchronizer_class_get_replication_config),
	JS_CFUNC_DEF("set_visibility_update_mode", 1, &multiplayer_synchronizer_class_set_visibility_update_mode),
	JS_CFUNC_DEF("get_visibility_update_mode", 0, &multiplayer_synchronizer_class_get_visibility_update_mode),
	JS_CFUNC_DEF("update_visibility", 1, &multiplayer_synchronizer_class_update_visibility),
	JS_CFUNC_DEF("set_visibility_public", 1, &multiplayer_synchronizer_class_set_visibility_public),
	JS_CFUNC_DEF("is_visibility_public", 0, &multiplayer_synchronizer_class_is_visibility_public),
	JS_CFUNC_DEF("add_visibility_filter", 1, &multiplayer_synchronizer_class_add_visibility_filter),
	JS_CFUNC_DEF("remove_visibility_filter", 1, &multiplayer_synchronizer_class_remove_visibility_filter),
	JS_CFUNC_DEF("set_visibility_for", 2, &multiplayer_synchronizer_class_set_visibility_for),
	JS_CFUNC_DEF("get_visibility_for", 1, &multiplayer_synchronizer_class_get_visibility_for),
};

void define_multiplayer_synchronizer_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "root_path"),
			JS_NewCFunction(ctx, multiplayer_synchronizer_class_get_root_path, "get_root_path", 0),
			JS_NewCFunction(ctx, multiplayer_synchronizer_class_set_root_path, "set_root_path", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "replication_interval"),
			JS_NewCFunction(ctx, multiplayer_synchronizer_class_get_replication_interval, "get_replication_interval", 0),
			JS_NewCFunction(ctx, multiplayer_synchronizer_class_set_replication_interval, "set_replication_interval", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "delta_interval"),
			JS_NewCFunction(ctx, multiplayer_synchronizer_class_get_delta_interval, "get_delta_interval", 0),
			JS_NewCFunction(ctx, multiplayer_synchronizer_class_set_delta_interval, "set_delta_interval", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "replication_config"),
			JS_NewCFunction(ctx, multiplayer_synchronizer_class_get_replication_config, "get_replication_config", 0),
			JS_NewCFunction(ctx, multiplayer_synchronizer_class_set_replication_config, "set_replication_config", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "visibility_update_mode"),
			JS_NewCFunction(ctx, multiplayer_synchronizer_class_get_visibility_update_mode, "get_visibility_update_mode", 0),
			JS_NewCFunction(ctx, multiplayer_synchronizer_class_set_visibility_update_mode, "set_visibility_update_mode", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "public_visibility"),
			JS_NewCFunction(ctx, multiplayer_synchronizer_class_is_visibility_public, "is_visibility_public", 0),
			JS_NewCFunction(ctx, multiplayer_synchronizer_class_set_visibility_public, "set_visibility_public", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue VisibilityUpdateMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, VisibilityUpdateMode_obj, "VISIBILITY_PROCESS_IDLE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, VisibilityUpdateMode_obj, "VISIBILITY_PROCESS_PHYSICS", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, VisibilityUpdateMode_obj, "VISIBILITY_PROCESS_NONE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "VisibilityUpdateMode", VisibilityUpdateMode_obj);
}

static int js_multiplayer_synchronizer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MultiplayerSynchronizer::__class_id);
	classes["MultiplayerSynchronizer"] = MultiplayerSynchronizer::__class_id;
	class_id_list.insert(MultiplayerSynchronizer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MultiplayerSynchronizer::__class_id, &multiplayer_synchronizer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MultiplayerSynchronizer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MultiplayerSynchronizer::__class_id, proto);

	define_multiplayer_synchronizer_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, multiplayer_synchronizer_class_proto_funcs, _countof(multiplayer_synchronizer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, multiplayer_synchronizer_class_constructor, "MultiplayerSynchronizer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MultiplayerSynchronizer", ctor);

	return 0;
}

JSModuleDef *_js_init_multiplayer_synchronizer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_multiplayer_synchronizer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MultiplayerSynchronizer");
	return m;
}

JSModuleDef *js_init_multiplayer_synchronizer_module(JSContext *ctx) {
	return _js_init_multiplayer_synchronizer_module(ctx, "godot/classes/multiplayer_synchronizer");
}

void register_multiplayer_synchronizer() {
	MultiplayerSynchronizer::__init_js_class_id();
	js_init_multiplayer_synchronizer_module(ctx);
}