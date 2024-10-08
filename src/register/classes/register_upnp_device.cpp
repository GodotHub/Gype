
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/upnp_device.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void upnp_device_class_finalizer(JSRuntime *rt, JSValue val) {
	UPNPDevice *upnp_device = static_cast<UPNPDevice *>(JS_GetOpaque(val, UPNPDevice::__class_id));
	if (upnp_device)
		UPNPDevice::free(nullptr, upnp_device);
}

static JSClassDef upnp_device_class_def = {
	"UPNPDevice",
	.finalizer = upnp_device_class_finalizer
};

static JSValue upnp_device_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	UPNPDevice *upnp_device_class;
	JSValue obj = JS_NewObjectClass(ctx, UPNPDevice::__class_id);
	if (JS_IsException(obj))
		return obj;
	upnp_device_class = memnew(UPNPDevice);
	if (!upnp_device_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, upnp_device_class);
	return obj;
}
static JSValue upnp_device_class_is_valid_gateway(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNPDevice::is_valid_gateway, UPNPDevice::__class_id, ctx, this_val, argv);
};
static JSValue upnp_device_class_query_external_address(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNPDevice::query_external_address, UPNPDevice::__class_id, ctx, this_val, argv);
};
static JSValue upnp_device_class_add_port_mapping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNPDevice::add_port_mapping, UPNPDevice::__class_id, ctx, this_val, argv);
};
static JSValue upnp_device_class_delete_port_mapping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNPDevice::delete_port_mapping, UPNPDevice::__class_id, ctx, this_val, argv);
};
static JSValue upnp_device_class_set_description_url(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UPNPDevice::set_description_url, UPNPDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_device_class_get_description_url(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNPDevice::get_description_url, UPNPDevice::__class_id, ctx, this_val, argv);
};
static JSValue upnp_device_class_set_service_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UPNPDevice::set_service_type, UPNPDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_device_class_get_service_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNPDevice::get_service_type, UPNPDevice::__class_id, ctx, this_val, argv);
};
static JSValue upnp_device_class_set_igd_control_url(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UPNPDevice::set_igd_control_url, UPNPDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_device_class_get_igd_control_url(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNPDevice::get_igd_control_url, UPNPDevice::__class_id, ctx, this_val, argv);
};
static JSValue upnp_device_class_set_igd_service_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UPNPDevice::set_igd_service_type, UPNPDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_device_class_get_igd_service_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNPDevice::get_igd_service_type, UPNPDevice::__class_id, ctx, this_val, argv);
};
static JSValue upnp_device_class_set_igd_our_addr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UPNPDevice::set_igd_our_addr, UPNPDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_device_class_get_igd_our_addr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNPDevice::get_igd_our_addr, UPNPDevice::__class_id, ctx, this_val, argv);
};
static JSValue upnp_device_class_set_igd_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&UPNPDevice::set_igd_status, UPNPDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_device_class_get_igd_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNPDevice::get_igd_status, UPNPDevice::__class_id, ctx, this_val, argv);
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

static int js_upnp_device_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&UPNPDevice::__class_id);
	classes["UPNPDevice"] = UPNPDevice::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), UPNPDevice::__class_id, &upnp_device_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, UPNPDevice::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, upnp_device_class_proto_funcs, _countof(upnp_device_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, upnp_device_class_constructor, "UPNPDevice", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "UPNPDevice", ctor);

	return 0;
}

JSModuleDef *_js_init_upnp_device_module(JSContext *ctx, const char *module_name) {
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
	js_init_upnp_device_module(ctx);
}