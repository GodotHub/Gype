
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/x509_certificate.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void x509_certificate_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef x509_certificate_class_def = {
	"X509Certificate",
	.finalizer = x509_certificate_class_finalizer
};

static JSValue x509_certificate_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, X509Certificate::__class_id);
	if (JS_IsException(obj))
		return obj;
	X509Certificate *x509_certificate_class = memnew(X509Certificate);
	if (!x509_certificate_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, x509_certificate_class);	
	return obj;
}
static JSValue x509_certificate_class_save(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&X509Certificate::save, ctx, this_val, argc, argv);
};
static JSValue x509_certificate_class_load(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&X509Certificate::load, ctx, this_val, argc, argv);
};
static JSValue x509_certificate_class_save_to_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&X509Certificate::save_to_string, ctx, this_val, argc, argv);
};
static JSValue x509_certificate_class_load_from_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&X509Certificate::load_from_string, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry x509_certificate_class_proto_funcs[] = {
	JS_CFUNC_DEF("save", 1, &x509_certificate_class_save),
	JS_CFUNC_DEF("load", 1, &x509_certificate_class_load),
	JS_CFUNC_DEF("save_to_string", 0, &x509_certificate_class_save_to_string),
	JS_CFUNC_DEF("load_from_string", 1, &x509_certificate_class_load_from_string),
};

void define_x509_certificate_property(JSContext *ctx, JSValue obj) {
}

static int js_x509_certificate_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&X509Certificate::__class_id);
	classes["X509Certificate"] = X509Certificate::__class_id;
	class_id_list.insert(X509Certificate::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), X509Certificate::__class_id, &x509_certificate_class_def);

	JSValue proto = JS_NewObjectClass(ctx, X509Certificate::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, X509Certificate::__class_id, proto);

	define_x509_certificate_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, x509_certificate_class_proto_funcs, _countof(x509_certificate_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, x509_certificate_class_constructor, "X509Certificate", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "X509Certificate", ctor);

	return 0;
}

JSModuleDef *_js_init_x509_certificate_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	X509Certificate::__init_js_class_id();
	js_init_x509_certificate_module(ctx);
}