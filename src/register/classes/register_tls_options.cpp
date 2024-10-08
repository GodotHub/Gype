
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/crypto_key.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/classes/x509_certificate.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tls_options_class_finalizer(JSRuntime *rt, JSValue val) {
	TLSOptions *tls_options = static_cast<TLSOptions *>(JS_GetOpaque(val, TLSOptions::__class_id));
	if (tls_options)
		TLSOptions::free(nullptr, tls_options);
}

static JSClassDef tls_options_class_def = {
	"TLSOptions",
	.finalizer = tls_options_class_finalizer
};

static JSValue tls_options_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TLSOptions *tls_options_class;
	JSValue obj = JS_NewObjectClass(ctx, TLSOptions::__class_id);
	if (JS_IsException(obj))
		return obj;
	tls_options_class = memnew(TLSOptions);
	if (!tls_options_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tls_options_class);
	return obj;
}
static JSValue tls_options_class_is_server(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TLSOptions::is_server, TLSOptions::__class_id, ctx, this_val, argv);
};
static JSValue tls_options_class_is_unsafe_client(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TLSOptions::is_unsafe_client, TLSOptions::__class_id, ctx, this_val, argv);
};
static JSValue tls_options_class_get_common_name_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TLSOptions::get_common_name_override, TLSOptions::__class_id, ctx, this_val, argv);
};
static JSValue tls_options_class_get_trusted_ca_chain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TLSOptions::get_trusted_ca_chain, TLSOptions::__class_id, ctx, this_val, argv);
};
static JSValue tls_options_class_get_private_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TLSOptions::get_private_key, TLSOptions::__class_id, ctx, this_val, argv);
};
static JSValue tls_options_class_get_own_certificate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TLSOptions::get_own_certificate, TLSOptions::__class_id, ctx, this_val, argv);
};
static JSValue tls_options_class_client(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&TLSOptions::client, TLSOptions::__class_id, ctx, this_val, argv);
};
static JSValue tls_options_class_client_unsafe(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&TLSOptions::client_unsafe, TLSOptions::__class_id, ctx, this_val, argv);
};
static JSValue tls_options_class_server(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&TLSOptions::server, TLSOptions::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry tls_options_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_server", 0, &tls_options_class_is_server),
	JS_CFUNC_DEF("is_unsafe_client", 0, &tls_options_class_is_unsafe_client),
	JS_CFUNC_DEF("get_common_name_override", 0, &tls_options_class_get_common_name_override),
	JS_CFUNC_DEF("get_trusted_ca_chain", 0, &tls_options_class_get_trusted_ca_chain),
	JS_CFUNC_DEF("get_private_key", 0, &tls_options_class_get_private_key),
	JS_CFUNC_DEF("get_own_certificate", 0, &tls_options_class_get_own_certificate),
};
static const JSCFunctionListEntry tls_options_class_static_funcs[] = {
	JS_CFUNC_DEF("client", 2, &tls_options_class_client),
	JS_CFUNC_DEF("client_unsafe", 1, &tls_options_class_client_unsafe),
	JS_CFUNC_DEF("server", 2, &tls_options_class_server),
};

static int js_tls_options_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TLSOptions::__class_id);
	classes["TLSOptions"] = TLSOptions::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TLSOptions::__class_id, &tls_options_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TLSOptions::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, tls_options_class_proto_funcs, _countof(tls_options_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, tls_options_class_constructor, "TLSOptions", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, tls_options_class_static_funcs, _countof(tls_options_class_static_funcs));

	JS_SetModuleExport(ctx, m, "TLSOptions", ctor);

	return 0;
}

JSModuleDef *_js_init_tls_options_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tls_options_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TLSOptions");
	return m;
}

JSModuleDef *js_init_tls_options_module(JSContext *ctx) {
	return _js_init_tls_options_module(ctx, "godot/classes/tls_options");
}

void register_tls_options() {
	js_init_tls_options_module(ctx);
}