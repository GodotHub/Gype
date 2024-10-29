
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/upnp.hpp>
#include <godot_cpp/classes/upnp_device.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void upnp_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef upnp_class_def = {
	"UPNP",
	.finalizer = upnp_class_finalizer
};

static JSValue upnp_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, UPNP::__class_id);
	if (JS_IsException(obj))
		return obj;
	UPNP *upnp_class = memnew(UPNP);
	if (!upnp_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, upnp_class);	
	return obj;
}
static JSValue upnp_class_get_device_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNP::get_device_count, ctx, this_val, argc, argv);
};
static JSValue upnp_class_get_device(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNP::get_device, ctx, this_val, argc, argv);
};
static JSValue upnp_class_add_device(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNP::add_device, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_set_device(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNP::set_device, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_remove_device(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNP::remove_device, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_clear_devices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNP::clear_devices, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_get_gateway(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNP::get_gateway, ctx, this_val, argc, argv);
};
static JSValue upnp_class_discover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&UPNP::discover, ctx, this_val, argc, argv);
};
static JSValue upnp_class_query_external_address(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNP::query_external_address, ctx, this_val, argc, argv);
};
static JSValue upnp_class_add_port_mapping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNP::add_port_mapping, ctx, this_val, argc, argv);
};
static JSValue upnp_class_delete_port_mapping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNP::delete_port_mapping, ctx, this_val, argc, argv);
};
static JSValue upnp_class_set_discover_multicast_if(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNP::set_discover_multicast_if, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_get_discover_multicast_if(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNP::get_discover_multicast_if, ctx, this_val, argc, argv);
};
static JSValue upnp_class_set_discover_local_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNP::set_discover_local_port, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_get_discover_local_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNP::get_discover_local_port, ctx, this_val, argc, argv);
};
static JSValue upnp_class_set_discover_ipv6(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNP::set_discover_ipv6, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_is_discover_ipv6(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNP::is_discover_ipv6, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry upnp_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_device_count", 0, &upnp_class_get_device_count),
	JS_CFUNC_DEF("get_device", 1, &upnp_class_get_device),
	JS_CFUNC_DEF("add_device", 1, &upnp_class_add_device),
	JS_CFUNC_DEF("set_device", 2, &upnp_class_set_device),
	JS_CFUNC_DEF("remove_device", 1, &upnp_class_remove_device),
	JS_CFUNC_DEF("clear_devices", 0, &upnp_class_clear_devices),
	JS_CFUNC_DEF("get_gateway", 0, &upnp_class_get_gateway),
	JS_CFUNC_DEF("discover", 3, &upnp_class_discover),
	JS_CFUNC_DEF("query_external_address", 0, &upnp_class_query_external_address),
	JS_CFUNC_DEF("add_port_mapping", 5, &upnp_class_add_port_mapping),
	JS_CFUNC_DEF("delete_port_mapping", 2, &upnp_class_delete_port_mapping),
	JS_CFUNC_DEF("set_discover_multicast_if", 1, &upnp_class_set_discover_multicast_if),
	JS_CFUNC_DEF("get_discover_multicast_if", 0, &upnp_class_get_discover_multicast_if),
	JS_CFUNC_DEF("set_discover_local_port", 1, &upnp_class_set_discover_local_port),
	JS_CFUNC_DEF("get_discover_local_port", 0, &upnp_class_get_discover_local_port),
	JS_CFUNC_DEF("set_discover_ipv6", 1, &upnp_class_set_discover_ipv6),
	JS_CFUNC_DEF("is_discover_ipv6", 0, &upnp_class_is_discover_ipv6),
};

void define_upnp_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "discover_multicast_if"),
        JS_NewCFunction(ctx, upnp_class_get_discover_multicast_if, "get_discover_multicast_if", 0),
        JS_NewCFunction(ctx, upnp_class_set_discover_multicast_if, "set_discover_multicast_if", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "discover_local_port"),
        JS_NewCFunction(ctx, upnp_class_get_discover_local_port, "get_discover_local_port", 0),
        JS_NewCFunction(ctx, upnp_class_set_discover_local_port, "set_discover_local_port", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "discover_ipv6"),
        JS_NewCFunction(ctx, upnp_class_is_discover_ipv6, "is_discover_ipv6", 0),
        JS_NewCFunction(ctx, upnp_class_set_discover_ipv6, "set_discover_ipv6", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue UPNPResult_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_SUCCESS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_NOT_AUTHORIZED", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_PORT_MAPPING_NOT_FOUND", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_INCONSISTENT_PARAMETERS", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_NO_SUCH_ENTRY_IN_ARRAY", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_ACTION_FAILED", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_SRC_IP_WILDCARD_NOT_PERMITTED", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_EXT_PORT_WILDCARD_NOT_PERMITTED", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_INT_PORT_WILDCARD_NOT_PERMITTED", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_REMOTE_HOST_MUST_BE_WILDCARD", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_EXT_PORT_MUST_BE_WILDCARD", JS_NewInt64(ctx, 10));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_NO_PORT_MAPS_AVAILABLE", JS_NewInt64(ctx, 11));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_CONFLICT_WITH_OTHER_MECHANISM", JS_NewInt64(ctx, 12));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_CONFLICT_WITH_OTHER_MAPPING", JS_NewInt64(ctx, 13));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_SAME_PORT_VALUES_REQUIRED", JS_NewInt64(ctx, 14));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_ONLY_PERMANENT_LEASE_SUPPORTED", JS_NewInt64(ctx, 15));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_INVALID_GATEWAY", JS_NewInt64(ctx, 16));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_INVALID_PORT", JS_NewInt64(ctx, 17));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_INVALID_PROTOCOL", JS_NewInt64(ctx, 18));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_INVALID_DURATION", JS_NewInt64(ctx, 19));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_INVALID_ARGS", JS_NewInt64(ctx, 20));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_INVALID_RESPONSE", JS_NewInt64(ctx, 21));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_INVALID_PARAM", JS_NewInt64(ctx, 22));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_HTTP_ERROR", JS_NewInt64(ctx, 23));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_SOCKET_ERROR", JS_NewInt64(ctx, 24));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_MEM_ALLOC_ERROR", JS_NewInt64(ctx, 25));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_NO_GATEWAY", JS_NewInt64(ctx, 26));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_NO_DEVICES", JS_NewInt64(ctx, 27));
	JS_SetPropertyStr(ctx, UPNPResult_obj, "UPNP_RESULT_UNKNOWN_ERROR", JS_NewInt64(ctx, 28));
	JS_SetPropertyStr(ctx, proto, "UPNPResult", UPNPResult_obj);
}

static int js_upnp_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&UPNP::__class_id);
	classes["UPNP"] = UPNP::__class_id;
	class_id_list.insert(UPNP::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), UPNP::__class_id, &upnp_class_def);

	JSValue proto = JS_NewObjectClass(ctx, UPNP::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, UPNP::__class_id, proto);

	define_upnp_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, upnp_class_proto_funcs, _countof(upnp_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, upnp_class_constructor, "UPNP", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "UPNP", ctor);

	return 0;
}

JSModuleDef *_js_init_upnp_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_upnp_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "UPNP");
	return m;
}

JSModuleDef *js_init_upnp_module(JSContext *ctx) {
	return _js_init_upnp_module(ctx, "@godot/classes/upnp");
}

void register_upnp() {
	UPNP::__init_js_class_id();
	js_init_upnp_module(ctx);
}