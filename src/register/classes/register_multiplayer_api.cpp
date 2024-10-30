
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void multiplayer_api_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef multiplayer_api_class_def = {
	"MultiplayerAPI",
	.finalizer = multiplayer_api_class_finalizer
};

static JSValue multiplayer_api_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MultiplayerAPI::__class_id);
	if (JS_IsException(obj))
		return obj;
	MultiplayerAPI *multiplayer_api_class;
	if (argc == 1) {
		Variant vobj = *argv;
		multiplayer_api_class = static_cast<MultiplayerAPI *>(static_cast<Object *>(vobj));
	} else {
		multiplayer_api_class = memnew(MultiplayerAPI);
	}
	if (!multiplayer_api_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, multiplayer_api_class);	
	return obj;
}
static JSValue multiplayer_api_class_has_multiplayer_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MultiplayerAPI::has_multiplayer_peer, ctx, this_val, argc, argv);
};
static JSValue multiplayer_api_class_get_multiplayer_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MultiplayerAPI::get_multiplayer_peer, ctx, this_val, argc, argv);
};
static JSValue multiplayer_api_class_set_multiplayer_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MultiplayerAPI::set_multiplayer_peer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_api_class_get_unique_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MultiplayerAPI::get_unique_id, ctx, this_val, argc, argv);
};
static JSValue multiplayer_api_class_is_server(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MultiplayerAPI::is_server, ctx, this_val, argc, argv);
};
static JSValue multiplayer_api_class_get_remote_sender_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MultiplayerAPI::get_remote_sender_id, ctx, this_val, argc, argv);
};
static JSValue multiplayer_api_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MultiplayerAPI::poll, ctx, this_val, argc, argv);
};
static JSValue multiplayer_api_class_rpc(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MultiplayerAPI::rpc, ctx, this_val, argc, argv);
};
static JSValue multiplayer_api_class_object_configuration_add(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MultiplayerAPI::object_configuration_add, ctx, this_val, argc, argv);
};
static JSValue multiplayer_api_class_object_configuration_remove(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MultiplayerAPI::object_configuration_remove, ctx, this_val, argc, argv);
};
static JSValue multiplayer_api_class_get_peers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MultiplayerAPI::get_peers, ctx, this_val, argc, argv);
};
static JSValue multiplayer_api_class_set_default_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_static_method_no_ret(&MultiplayerAPI::set_default_interface, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_api_class_get_default_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&MultiplayerAPI::get_default_interface, ctx, this_val, argc, argv);
};
static JSValue multiplayer_api_class_create_default_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&MultiplayerAPI::create_default_interface, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry multiplayer_api_class_proto_funcs[] = {
	JS_CFUNC_DEF("has_multiplayer_peer", 0, &multiplayer_api_class_has_multiplayer_peer),
	JS_CFUNC_DEF("get_multiplayer_peer", 0, &multiplayer_api_class_get_multiplayer_peer),
	JS_CFUNC_DEF("set_multiplayer_peer", 1, &multiplayer_api_class_set_multiplayer_peer),
	JS_CFUNC_DEF("get_unique_id", 0, &multiplayer_api_class_get_unique_id),
	JS_CFUNC_DEF("is_server", 0, &multiplayer_api_class_is_server),
	JS_CFUNC_DEF("get_remote_sender_id", 0, &multiplayer_api_class_get_remote_sender_id),
	JS_CFUNC_DEF("poll", 0, &multiplayer_api_class_poll),
	JS_CFUNC_DEF("rpc", 4, &multiplayer_api_class_rpc),
	JS_CFUNC_DEF("object_configuration_add", 2, &multiplayer_api_class_object_configuration_add),
	JS_CFUNC_DEF("object_configuration_remove", 2, &multiplayer_api_class_object_configuration_remove),
	JS_CFUNC_DEF("get_peers", 0, &multiplayer_api_class_get_peers),
};
static const JSCFunctionListEntry multiplayer_api_class_static_funcs[] = {
	JS_CFUNC_DEF("set_default_interface", 1, &multiplayer_api_class_set_default_interface),
	JS_CFUNC_DEF("get_default_interface", 0, &multiplayer_api_class_get_default_interface),
	JS_CFUNC_DEF("create_default_interface", 0, &multiplayer_api_class_create_default_interface),
};

void define_multiplayer_api_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "multiplayer_peer"),
        JS_NewCFunction(ctx, multiplayer_api_class_get_multiplayer_peer, "get_multiplayer_peer", 0),
        JS_NewCFunction(ctx, multiplayer_api_class_set_multiplayer_peer, "set_multiplayer_peer", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue RPCMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, RPCMode_obj, "RPC_MODE_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, RPCMode_obj, "RPC_MODE_ANY_PEER", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, RPCMode_obj, "RPC_MODE_AUTHORITY", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "RPCMode", RPCMode_obj);
}

static int js_multiplayer_api_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MultiplayerAPI::__class_id);
	classes["MultiplayerAPI"] = MultiplayerAPI::__class_id;
	class_id_list.insert(MultiplayerAPI::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MultiplayerAPI::__class_id, &multiplayer_api_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MultiplayerAPI::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MultiplayerAPI::__class_id, proto);

	define_multiplayer_api_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, multiplayer_api_class_proto_funcs, _countof(multiplayer_api_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, multiplayer_api_class_constructor, "MultiplayerAPI", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, multiplayer_api_class_static_funcs, _countof(multiplayer_api_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MultiplayerAPI", ctor);

	return 0;
}

JSModuleDef *_js_init_multiplayer_api_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_multiplayer_api_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MultiplayerAPI");
	return m;
}

JSModuleDef *js_init_multiplayer_api_module(JSContext *ctx) {
	return _js_init_multiplayer_api_module(ctx, "@godot/classes/multiplayer_api");
}

void register_multiplayer_api() {
	MultiplayerAPI::__init_js_class_id();
	js_init_multiplayer_api_module(ctx);
}