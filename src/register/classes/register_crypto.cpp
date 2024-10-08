
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/crypto.hpp>
#include <godot_cpp/classes/crypto_key.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/x509_certificate.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void crypto_class_finalizer(JSRuntime *rt, JSValue val) {
	Crypto *crypto = static_cast<Crypto *>(JS_GetOpaque(val, Crypto::__class_id));
	if (crypto)
		Crypto::free(nullptr, crypto);
}

static JSClassDef crypto_class_def = {
	"Crypto",
	.finalizer = crypto_class_finalizer
};

static JSValue crypto_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Crypto *crypto_class;
	JSValue obj = JS_NewObjectClass(ctx, Crypto::__class_id);
	if (JS_IsException(obj))
		return obj;
	crypto_class = memnew(Crypto);
	if (!crypto_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, crypto_class);
	return obj;
}
static JSValue crypto_class_generate_random_bytes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Crypto::generate_random_bytes, Crypto::__class_id, ctx, this_val, argv);
};
static JSValue crypto_class_generate_rsa(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Crypto::generate_rsa, Crypto::__class_id, ctx, this_val, argv);
};
static JSValue crypto_class_generate_self_signed_certificate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Crypto::generate_self_signed_certificate, Crypto::__class_id, ctx, this_val, argv);
};
static JSValue crypto_class_sign(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Crypto::sign, Crypto::__class_id, ctx, this_val, argv);
};
static JSValue crypto_class_verify(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Crypto::verify, Crypto::__class_id, ctx, this_val, argv);
};
static JSValue crypto_class_encrypt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Crypto::encrypt, Crypto::__class_id, ctx, this_val, argv);
};
static JSValue crypto_class_decrypt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Crypto::decrypt, Crypto::__class_id, ctx, this_val, argv);
};
static JSValue crypto_class_hmac_digest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Crypto::hmac_digest, Crypto::__class_id, ctx, this_val, argv);
};
static JSValue crypto_class_constant_time_compare(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Crypto::constant_time_compare, Crypto::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry crypto_class_proto_funcs[] = {
	JS_CFUNC_DEF("generate_random_bytes", 1, &crypto_class_generate_random_bytes),
	JS_CFUNC_DEF("generate_rsa", 1, &crypto_class_generate_rsa),
	JS_CFUNC_DEF("generate_self_signed_certificate", 4, &crypto_class_generate_self_signed_certificate),
	JS_CFUNC_DEF("sign", 3, &crypto_class_sign),
	JS_CFUNC_DEF("verify", 4, &crypto_class_verify),
	JS_CFUNC_DEF("encrypt", 2, &crypto_class_encrypt),
	JS_CFUNC_DEF("decrypt", 2, &crypto_class_decrypt),
	JS_CFUNC_DEF("hmac_digest", 3, &crypto_class_hmac_digest),
	JS_CFUNC_DEF("constant_time_compare", 2, &crypto_class_constant_time_compare),
};

static int js_crypto_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Crypto::__class_id);
	classes["Crypto"] = Crypto::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Crypto::__class_id, &crypto_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Crypto::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, crypto_class_proto_funcs, _countof(crypto_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, crypto_class_constructor, "Crypto", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Crypto", ctor);

	return 0;
}

JSModuleDef *_js_init_crypto_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_crypto_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Crypto");
	return m;
}

JSModuleDef *js_init_crypto_module(JSContext *ctx) {
	return _js_init_crypto_module(ctx, "godot/classes/crypto");
}

void register_crypto() {
	js_init_crypto_module(ctx);
}