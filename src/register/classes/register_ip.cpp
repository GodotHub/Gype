
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ip.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void ip_class_finalizer(JSRuntime *rt, JSValue val) {
	IP *ip = static_cast<IP *>(JS_GetOpaque(val, IP::__class_id));
	if (ip)
		IP::free(nullptr, ip);
}

static JSClassDef ip_class_def = {
	"IP",
	.finalizer = ip_class_finalizer
};

static JSValue ip_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	IP *ip_class;
	JSValue obj = JS_NewObjectClass(ctx, IP::__class_id);
	if (JS_IsException(obj))
		return obj;
	ip_class = IP::get_singleton();
	if (!ip_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, ip_class);
	return obj;
}
static JSValue ip_class_resolve_hostname(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&IP::resolve_hostname, IP::__class_id, ctx, this_val, argv);
};
static JSValue ip_class_resolve_hostname_addresses(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&IP::resolve_hostname_addresses, IP::__class_id, ctx, this_val, argv);
};
static JSValue ip_class_resolve_hostname_queue_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&IP::resolve_hostname_queue_item, IP::__class_id, ctx, this_val, argv);
};
static JSValue ip_class_get_resolve_item_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&IP::get_resolve_item_status, IP::__class_id, ctx, this_val, argv);
};
static JSValue ip_class_get_resolve_item_address(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&IP::get_resolve_item_address, IP::__class_id, ctx, this_val, argv);
};
static JSValue ip_class_get_resolve_item_addresses(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&IP::get_resolve_item_addresses, IP::__class_id, ctx, this_val, argv);
};
static JSValue ip_class_erase_resolve_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&IP::erase_resolve_item, IP::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ip_class_get_local_addresses(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&IP::get_local_addresses, IP::__class_id, ctx, this_val, argv);
};
static JSValue ip_class_get_local_interfaces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&IP::get_local_interfaces, IP::__class_id, ctx, this_val, argv);
};
static JSValue ip_class_clear_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&IP::clear_cache, IP::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry ip_class_proto_funcs[] = {
	JS_CFUNC_DEF("resolve_hostname", 2, &ip_class_resolve_hostname),
	JS_CFUNC_DEF("resolve_hostname_addresses", 2, &ip_class_resolve_hostname_addresses),
	JS_CFUNC_DEF("resolve_hostname_queue_item", 2, &ip_class_resolve_hostname_queue_item),
	JS_CFUNC_DEF("get_resolve_item_status", 1, &ip_class_get_resolve_item_status),
	JS_CFUNC_DEF("get_resolve_item_address", 1, &ip_class_get_resolve_item_address),
	JS_CFUNC_DEF("get_resolve_item_addresses", 1, &ip_class_get_resolve_item_addresses),
	JS_CFUNC_DEF("erase_resolve_item", 1, &ip_class_erase_resolve_item),
	JS_CFUNC_DEF("get_local_addresses", 0, &ip_class_get_local_addresses),
	JS_CFUNC_DEF("get_local_interfaces", 0, &ip_class_get_local_interfaces),
	JS_CFUNC_DEF("clear_cache", 1, &ip_class_clear_cache),
};

static int js_ip_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&IP::__class_id);
	classes["IP"] = IP::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), IP::__class_id, &ip_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, IP::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, ip_class_proto_funcs, _countof(ip_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, ip_class_constructor, "IP", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "IP", ctor);

	return 0;
}

JSModuleDef *_js_init_ip_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_ip_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "IP");
	return m;
}

JSModuleDef *js_init_ip_module(JSContext *ctx) {
	return _js_init_ip_module(ctx, "godot/classes/ip");
}

void register_ip() {
	js_init_ip_module(ctx);
}