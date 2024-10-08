
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/x509_certificate.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void x509_certificate_class_finalizer(JSRuntime *rt, JSValue val) {
	X509Certificate *x509_certificate = static_cast<X509Certificate *>(JS_GetOpaque(val, X509Certificate::__class_id));
	if (x509_certificate)
		X509Certificate::free(nullptr, x509_certificate);
}

static JSClassDef x509_certificate_class_def = {
	"X509Certificate",
	.finalizer = x509_certificate_class_finalizer
};

static JSValue x509_certificate_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	X509Certificate *x509_certificate_class;
	JSValue obj = JS_NewObjectClass(ctx, X509Certificate::__class_id);
	if (JS_IsException(obj))
		return obj;
	x509_certificate_class = memnew(X509Certificate);
	if (!x509_certificate_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, x509_certificate_class);
	return obj;
}
static JSValue x509_certificate_class_save(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&X509Certificate::save, X509Certificate::__class_id, ctx, this_val, argv);
};
static JSValue x509_certificate_class_load(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&X509Certificate::load, X509Certificate::__class_id, ctx, this_val, argv);
};
static JSValue x509_certificate_class_save_to_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&X509Certificate::save_to_string, X509Certificate::__class_id, ctx, this_val, argv);
};
static JSValue x509_certificate_class_load_from_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&X509Certificate::load_from_string, X509Certificate::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry x509_certificate_class_proto_funcs[] = {
	JS_CFUNC_DEF("save", 1, &x509_certificate_class_save),
	JS_CFUNC_DEF("load", 1, &x509_certificate_class_load),
	JS_CFUNC_DEF("save_to_string", 0, &x509_certificate_class_save_to_string),
	JS_CFUNC_DEF("load_from_string", 1, &x509_certificate_class_load_from_string),
};

static int js_x509_certificate_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&X509Certificate::__class_id);
	classes["X509Certificate"] = X509Certificate::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), X509Certificate::__class_id, &x509_certificate_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, X509Certificate::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, x509_certificate_class_proto_funcs, _countof(x509_certificate_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, x509_certificate_class_constructor, "X509Certificate", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "X509Certificate", ctor);

	return 0;
}

JSModuleDef *_js_init_x509_certificate_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_x509_certificate_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "X509Certificate");
	return m;
}

JSModuleDef *js_init_x509_certificate_module(JSContext *ctx) {
	return _js_init_x509_certificate_module(ctx, "godot/classes/x509_certificate");
}

void register_x509_certificate() {
	js_init_x509_certificate_module(ctx);
}