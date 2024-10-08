
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/scene_replication_config.hpp>
#include <godot_cpp/classes/multiplayer_synchronizer.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void multiplayer_synchronizer_class_finalizer(JSRuntime *rt, JSValue val) {
	MultiplayerSynchronizer *multiplayer_synchronizer = static_cast<MultiplayerSynchronizer *>(JS_GetOpaque(val, MultiplayerSynchronizer::__class_id));
	if (multiplayer_synchronizer)
		MultiplayerSynchronizer::free(nullptr, multiplayer_synchronizer);
}

static JSClassDef multiplayer_synchronizer_class_def = {
	"MultiplayerSynchronizer",
	.finalizer = multiplayer_synchronizer_class_finalizer
};

static JSValue multiplayer_synchronizer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MultiplayerSynchronizer *multiplayer_synchronizer_class;
	JSValue obj = JS_NewObjectClass(ctx, MultiplayerSynchronizer::__class_id);
	if (JS_IsException(obj))
		return obj;
	multiplayer_synchronizer_class = memnew(MultiplayerSynchronizer);
	if (!multiplayer_synchronizer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, multiplayer_synchronizer_class);
	return obj;
}
static JSValue multiplayer_synchronizer_class_set_root_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSynchronizer::set_root_path, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_get_root_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerSynchronizer::get_root_path, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_synchronizer_class_set_replication_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSynchronizer::set_replication_interval, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_get_replication_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerSynchronizer::get_replication_interval, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_synchronizer_class_set_delta_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSynchronizer::set_delta_interval, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_get_delta_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerSynchronizer::get_delta_interval, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_synchronizer_class_set_replication_config(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSynchronizer::set_replication_config, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_get_replication_config(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&MultiplayerSynchronizer::get_replication_config, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_synchronizer_class_set_visibility_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSynchronizer::set_visibility_update_mode, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_get_visibility_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerSynchronizer::get_visibility_update_mode, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_synchronizer_class_update_visibility(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSynchronizer::update_visibility, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_set_visibility_public(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSynchronizer::set_visibility_public, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_is_visibility_public(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerSynchronizer::is_visibility_public, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_synchronizer_class_add_visibility_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSynchronizer::add_visibility_filter, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_remove_visibility_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSynchronizer::remove_visibility_filter, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_set_visibility_for(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerSynchronizer::set_visibility_for, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_synchronizer_class_get_visibility_for(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerSynchronizer::get_visibility_for, MultiplayerSynchronizer::__class_id, ctx, this_val, argv);
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

static int js_multiplayer_synchronizer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MultiplayerSynchronizer::__class_id);
	classes["MultiplayerSynchronizer"] = MultiplayerSynchronizer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MultiplayerSynchronizer::__class_id, &multiplayer_synchronizer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MultiplayerSynchronizer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, multiplayer_synchronizer_class_proto_funcs, _countof(multiplayer_synchronizer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, multiplayer_synchronizer_class_constructor, "MultiplayerSynchronizer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MultiplayerSynchronizer", ctor);

	return 0;
}

JSModuleDef *_js_init_multiplayer_synchronizer_module(JSContext *ctx, const char *module_name) {
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
	js_init_multiplayer_synchronizer_module(ctx);
}