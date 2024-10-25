
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/upnp_device.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void upnp_device_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef upnp_device_class_def = {
	"UPNPDevice",
	.finalizer = upnp_device_class_finalizer
};

static JSValue upnp_device_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, UPNPDevice::__class_id);
	if (JS_IsException(obj))
		return obj;
	UPNPDevice *upnp_device_class = memnew(UPNPDevice);
	if (!upnp_device_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, upnp_device_class);	
	return obj;
}
static JSValue upnp_device_class_is_valid_gateway(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNPDevice::is_valid_gateway, ctx, this_val, argc, argv);
};
static JSValue upnp_device_class_query_external_address(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNPDevice::query_external_address, ctx, this_val, argc, argv);
};
static JSValue upnp_device_class_add_port_mapping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNPDevice::add_port_mapping, ctx, this_val, argc, argv);
};
static JSValue upnp_device_class_delete_port_mapping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNPDevice::delete_port_mapping, ctx, this_val, argc, argv);
};
static JSValue upnp_device_class_set_description_url(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNPDevice::set_description_url, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_device_class_get_description_url(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNPDevice::get_description_url, ctx, this_val, argc, argv);
};
static JSValue upnp_device_class_set_service_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNPDevice::set_service_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_device_class_get_service_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNPDevice::get_service_type, ctx, this_val, argc, argv);
};
static JSValue upnp_device_class_set_igd_control_url(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNPDevice::set_igd_control_url, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_device_class_get_igd_control_url(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNPDevice::get_igd_control_url, ctx, this_val, argc, argv);
};
static JSValue upnp_device_class_set_igd_service_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNPDevice::set_igd_service_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_device_class_get_igd_service_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNPDevice::get_igd_service_type, ctx, this_val, argc, argv);
};
static JSValue upnp_device_class_set_igd_our_addr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNPDevice::set_igd_our_addr, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_device_class_get_igd_our_addr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNPDevice::get_igd_our_addr, ctx, this_val, argc, argv);
};
static JSValue upnp_device_class_set_igd_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&UPNPDevice::set_igd_status, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_device_class_get_igd_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UPNPDevice::get_igd_status, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry upnp_device_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_valid_gateway", 0, &upnp_device_class_is_valid_gateway),
	JS_CFUNC_DEF("query_external_address", 0, &upnp_device_class_query_external_address),
	JS_CFUNC_DEF("add_port_mapping", 5, &upnp_device_class_add_port_mapping),
	JS_CFUNC_DEF("delete_port_mapping", 2, &upnp_device_class_delete_port_mapping),
	JS_CFUNC_DEF("set_description_url", 1, &upnp_device_class_set_description_url),
	JS_CFUNC_DEF("get_description_url", 0, &upnp_device_class_get_description_url),
	JS_CFUNC_DEF("set_service_type", 1, &upnp_device_class_set_service_type),
	JS_CFUNC_DEF("get_service_type", 0, &upnp_device_class_get_service_type),
	JS_CFUNC_DEF("set_igd_control_url", 1, &upnp_device_class_set_igd_control_url),
	JS_CFUNC_DEF("get_igd_control_url", 0, &upnp_device_class_get_igd_control_url),
	JS_CFUNC_DEF("set_igd_service_type", 1, &upnp_device_class_set_igd_service_type),
	JS_CFUNC_DEF("get_igd_service_type", 0, &upnp_device_class_get_igd_service_type),
	JS_CFUNC_DEF("set_igd_our_addr", 1, &upnp_device_class_set_igd_our_addr),
	JS_CFUNC_DEF("get_igd_our_addr", 0, &upnp_device_class_get_igd_our_addr),
	JS_CFUNC_DEF("set_igd_status", 1, &upnp_device_class_set_igd_status),
	JS_CFUNC_DEF("get_igd_status", 0, &upnp_device_class_get_igd_status),
};

void define_upnp_device_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "description_url"),
        JS_NewCFunction(ctx, upnp_device_class_get_description_url, "get_description_url", 0),
        JS_NewCFunction(ctx, upnp_device_class_set_description_url, "set_description_url", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "service_type"),
        JS_NewCFunction(ctx, upnp_device_class_get_service_type, "get_service_type", 0),
        JS_NewCFunction(ctx, upnp_device_class_set_service_type, "set_service_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "igd_control_url"),
        JS_NewCFunction(ctx, upnp_device_class_get_igd_control_url, "get_igd_control_url", 0),
        JS_NewCFunction(ctx, upnp_device_class_set_igd_control_url, "set_igd_control_url", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "igd_service_type"),
        JS_NewCFunction(ctx, upnp_device_class_get_igd_service_type, "get_igd_service_type", 0),
        JS_NewCFunction(ctx, upnp_device_class_set_igd_service_type, "set_igd_service_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "igd_our_addr"),
        JS_NewCFunction(ctx, upnp_device_class_get_igd_our_addr, "get_igd_our_addr", 0),
        JS_NewCFunction(ctx, upnp_device_class_set_igd_our_addr, "set_igd_our_addr", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "igd_status"),
        JS_NewCFunction(ctx, upnp_device_class_get_igd_status, "get_igd_status", 0),
        JS_NewCFunction(ctx, upnp_device_class_set_igd_status, "set_igd_status", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue IGDStatus_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, IGDStatus_obj, "IGD_STATUS_OK", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, IGDStatus_obj, "IGD_STATUS_HTTP_ERROR", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, IGDStatus_obj, "IGD_STATUS_HTTP_EMPTY", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, IGDStatus_obj, "IGD_STATUS_NO_URLS", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, IGDStatus_obj, "IGD_STATUS_NO_IGD", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, IGDStatus_obj, "IGD_STATUS_DISCONNECTED", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, IGDStatus_obj, "IGD_STATUS_UNKNOWN_DEVICE", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, IGDStatus_obj, "IGD_STATUS_INVALID_CONTROL", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, IGDStatus_obj, "IGD_STATUS_MALLOC_ERROR", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, IGDStatus_obj, "IGD_STATUS_UNKNOWN_ERROR", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, proto, "IGDStatus", IGDStatus_obj);
}

static int js_upnp_device_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&UPNPDevice::__class_id);
	classes["UPNPDevice"] = UPNPDevice::__class_id;
	class_id_list.insert(UPNPDevice::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), UPNPDevice::__class_id, &upnp_device_class_def);

	JSValue proto = JS_NewObjectClass(ctx, UPNPDevice::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, UPNPDevice::__class_id, proto);

	define_upnp_device_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, upnp_device_class_proto_funcs, _countof(upnp_device_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, upnp_device_class_constructor, "UPNPDevice", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "UPNPDevice", ctor);

	return 0;
}

JSModuleDef *_js_init_upnp_device_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_upnp_device_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "UPNPDevice");
	return m;
}

JSModuleDef *js_init_upnp_device_module(JSContext *ctx) {
	return _js_init_upnp_device_module(ctx, "godot/classes/upnp_device");
}

void register_upnp_device() {
	UPNPDevice::__init_js_class_id();
	js_init_upnp_device_module(ctx);
}