
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/upnp.hpp>
#include <godot_cpp/classes/upnp_device.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void upnp_class_finalizer(JSRuntime *rt, JSValue val) {
	UPNP *upnp = static_cast<UPNP *>(JS_GetOpaque(val, UPNP::__class_id));
	if (upnp)
		UPNP::free(nullptr, upnp);
}

static JSClassDef upnp_class_def = {
	"UPNP",
	.finalizer = upnp_class_finalizer
};

static JSValue upnp_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	UPNP *upnp_class;
	JSValue obj = JS_NewObjectClass(ctx, UPNP::__class_id);
	if (JS_IsException(obj))
		return obj;
	upnp_class = memnew(UPNP);
	if (!upnp_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, upnp_class);
	return obj;
}
static JSValue upnp_class_get_device_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNP::get_device_count, UPNP::__class_id, ctx, this_val, argv);
};
static JSValue upnp_class_get_device(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNP::get_device, UPNP::__class_id, ctx, this_val, argv);
};
static JSValue upnp_class_add_device(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&UPNP::add_device, UPNP::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_set_device(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&UPNP::set_device, UPNP::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_remove_device(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&UPNP::remove_device, UPNP::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_clear_devices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&UPNP::clear_devices, UPNP::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_get_gateway(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNP::get_gateway, UPNP::__class_id, ctx, this_val, argv);
};
static JSValue upnp_class_discover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&UPNP::discover, UPNP::__class_id, ctx, this_val, argv);
};
static JSValue upnp_class_query_external_address(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNP::query_external_address, UPNP::__class_id, ctx, this_val, argv);
};
static JSValue upnp_class_add_port_mapping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNP::add_port_mapping, UPNP::__class_id, ctx, this_val, argv);
};
static JSValue upnp_class_delete_port_mapping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNP::delete_port_mapping, UPNP::__class_id, ctx, this_val, argv);
};
static JSValue upnp_class_set_discover_multicast_if(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&UPNP::set_discover_multicast_if, UPNP::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_get_discover_multicast_if(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNP::get_discover_multicast_if, UPNP::__class_id, ctx, this_val, argv);
};
static JSValue upnp_class_set_discover_local_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&UPNP::set_discover_local_port, UPNP::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_get_discover_local_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNP::get_discover_local_port, UPNP::__class_id, ctx, this_val, argv);
};
static JSValue upnp_class_set_discover_ipv6(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&UPNP::set_discover_ipv6, UPNP::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue upnp_class_is_discover_ipv6(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UPNP::is_discover_ipv6, UPNP::__class_id, ctx, this_val, argv);
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

static int js_upnp_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&UPNP::__class_id);
	classes["UPNP"] = UPNP::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), UPNP::__class_id, &upnp_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, UPNP::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, upnp_class_proto_funcs, _countof(upnp_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, upnp_class_constructor, "UPNP", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "UPNP", ctor);

	return 0;
}

JSModuleDef *_js_init_upnp_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_upnp_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "UPNP");
	return m;
}

JSModuleDef *js_init_upnp_module(JSContext *ctx) {
	return _js_init_upnp_module(ctx, "godot/classes/upnp");
}

void register_upnp() {
	js_init_upnp_module(ctx);
}